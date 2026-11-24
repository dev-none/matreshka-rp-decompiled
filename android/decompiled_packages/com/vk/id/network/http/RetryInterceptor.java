package com.vk.id.network.http;

import com.google.firebase.perf.FirebasePerformance;
import com.unity3d.ads.gatewayclient.CommonGatewayClient;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import java.io.IOException;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.Random;
import kotlin.ranges.RangesKt;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: RetryInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\"\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\b\u0000\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB!\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0016\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0096@¢\u0006\u0002\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0003H\u0002J\u0010\u0010\u0014\u001a\u00020\u00122\u0006\u0010\u0015\u001a\u00020\u0016H\u0002J\u0010\u0010\u0017\u001a\u00020\u00122\u0006\u0010\u0018\u001a\u00020\u0019H\u0002J\u000e\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u0003R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"Lcom/vk/id/network/http/RetryInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "maxRetries", "", "retryableStatusCodes", "", "<init>", "(ILjava/util/Set;)V", "getMaxRetries", "()I", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "shouldRetryByStatusCode", "", "statusCode", "isRetryableError", "error", "", "isIdempotent", "method", "", "getRetryDelay", "", "attempt", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class RetryInterceptor implements Interceptor {

    @Deprecated
    public static final long BASE_RETRY_DELAY_MS = 1000;

    @Deprecated
    public static final int DEFAULT_MAX_RETRIES = 3;

    @Deprecated
    public static final long MAX_RETRY_DELAY_MS = 5000;
    private final InternalVKIDLogger logger;
    private final int maxRetries;
    private final Set<Integer> retryableStatusCodes;
    private static final Companion Companion = new Companion(null);
    private static final Set<String> IDEMPOTENT_METHODS = SetsKt.setOf((Object[]) new String[]{"GET", FirebasePerformance.HttpMethod.HEAD, FirebasePerformance.HttpMethod.OPTIONS, FirebasePerformance.HttpMethod.PUT, FirebasePerformance.HttpMethod.DELETE});
    private static final Set<Integer> DEFAULT_RETRYABLE_STATUSES = SetsKt.setOf((Object[]) new Integer[]{408, Integer.valueOf(CommonGatewayClient.CODE_TOO_MANY_REQUESTS), 500, 502, 503, 504});

    /* JADX INFO: renamed from: com.vk.id.network.http.RetryInterceptor$intercept$1, reason: invalid class name */
    /* JADX INFO: compiled from: RetryInterceptor.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.http.RetryInterceptor", f = "RetryInterceptor.kt", i = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2}, l = {44, 50, 72}, m = "intercept", n = {"this", "chain", "lastException", "attempt", "this", "chain", "lastException", "attempt", "this", "chain", "lastException", "attempt"}, s = {"L$0", "L$1", "L$2", "I$0", "L$0", "L$1", "L$2", "I$0", "L$0", "L$1", "L$2", "I$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        int I$0;
        int I$1;
        Object L$0;
        Object L$1;
        Object L$2;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return RetryInterceptor.this.intercept(null, this);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public RetryInterceptor() {
        this(0, null, 3, 0 == true ? 1 : 0);
    }

    public RetryInterceptor(int i, Set<Integer> retryableStatusCodes) {
        Intrinsics.checkNotNullParameter(retryableStatusCodes, "retryableStatusCodes");
        this.maxRetries = i;
        this.retryableStatusCodes = retryableStatusCodes;
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("RetryInterceptor");
    }

    public final int getMaxRetries() {
        return this.maxRetries;
    }

    public /* synthetic */ RetryInterceptor(int i, Set set, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this((i2 & 1) != 0 ? 3 : i, (i2 & 2) != 0 ? DEFAULT_RETRYABLE_STATUSES : set);
    }

    /* JADX WARN: Can't wrap try/catch for region: R(4:39|40|80|41) */
    /* JADX WARN: Can't wrap try/catch for region: R(5:67|82|28|(1:31)|63) */
    /* JADX WARN: Can't wrap try/catch for region: R(6:36|76|37|(4:39|40|80|41)(1:47)|44|(5:67|82|28|(4:31|32|(1:34)|50)|63)(1:68)) */
    /* JADX WARN: Code duplicated, block: B:31:0x00b7  */
    /* JADX WARN: Code duplicated, block: B:34:0x00c6 A[Catch: IOException -> 0x0085, TryCatch #1 {IOException -> 0x0085, blocks: (B:32:0x00c0, B:34:0x00c6, B:36:0x00d0, B:17:0x0069, B:20:0x0081), top: B:78:0x002e }] */
    /* JADX WARN: Code duplicated, block: B:55:0x0139  */
    /* JADX WARN: Code duplicated, block: B:67:0x019f  */
    /* JADX WARN: Code duplicated, block: B:68:0x01a9  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x0117, code lost:
    
        if (kotlinx.coroutines.DelayKt.delay(r11, r2) == r3) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0122, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0127, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0128, code lost:
    
        r10 = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x012c, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x012d, code lost:
    
        r10 = r11;
        r15 = r2;
        r2 = r5;
        r5 = r13;
        r13 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0191, code lost:
    
        if (kotlinx.coroutines.DelayKt.delay(r11, r2) == r3) goto L63;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:44:0x011b -> B:66:0x019d). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:62:0x0191 -> B:64:0x0194). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:65:0x019b -> B:64:0x0194). Please report as a decompilation issue!!! */
    @Override // com.vk.id.network.http.Interceptor
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.Object intercept(com.vk.id.network.http.Interceptor.Chain r21, kotlin.coroutines.Continuation<? super com.vk.id.network.http.HttpResponse> r22) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 486
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.network.http.RetryInterceptor.intercept(com.vk.id.network.http.Interceptor$Chain, kotlin.coroutines.Continuation):java.lang.Object");
    }

    private final boolean shouldRetryByStatusCode(int statusCode) {
        return this.retryableStatusCodes.contains(Integer.valueOf(statusCode));
    }

    private final boolean isRetryableError(Throwable error) {
        String message;
        if ((error instanceof SocketTimeoutException) || (error instanceof UnknownHostException)) {
            return true;
        }
        if ((error instanceof IOException) && (message = error.getMessage()) != null) {
            String lowerCase = message.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            if (lowerCase != null) {
                String str = lowerCase;
                return StringsKt.contains$default((CharSequence) str, (CharSequence) "connection reset", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "connection refused", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "network is unreachable", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "broken pipe", false, 2, (Object) null);
            }
        }
        return false;
    }

    private final boolean isIdempotent(String method) {
        Set<String> set = IDEMPOTENT_METHODS;
        String upperCase = method.toUpperCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
        return set.contains(upperCase);
    }

    public final long getRetryDelay(int attempt) {
        return RangesKt.coerceAtMost((((long) Random.INSTANCE.nextInt(1, 500)) + 1000) * ((long) (1 << attempt)), 5000L);
    }

    /* JADX INFO: compiled from: RetryInterceptor.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0002\b\u0005\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u0017\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\n¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0017\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00050\n¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006\u0010"}, d2 = {"Lcom/vk/id/network/http/RetryInterceptor$Companion;", "", "<init>", "()V", "DEFAULT_MAX_RETRIES", "", "BASE_RETRY_DELAY_MS", "", "MAX_RETRY_DELAY_MS", "IDEMPOTENT_METHODS", "", "", "getIDEMPOTENT_METHODS", "()Ljava/util/Set;", "DEFAULT_RETRYABLE_STATUSES", "getDEFAULT_RETRYABLE_STATUSES", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final Set<String> getIDEMPOTENT_METHODS() {
            return RetryInterceptor.IDEMPOTENT_METHODS;
        }

        public final Set<Integer> getDEFAULT_RETRYABLE_STATUSES() {
            return RetryInterceptor.DEFAULT_RETRYABLE_STATUSES;
        }
    }
}
