package com.vk.id.network.http.captcha;

import com.google.common.net.HttpHeaders;
import com.vk.id.captcha.api.VKCaptcha;
import com.vk.id.captcha.api.data.VKCaptchaResult;
import com.vk.id.network.http.HttpRequest;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.Interceptor;
import com.vk.id.network.http.ResponseBody;
import io.sentry.SentryBaseEvent;
import java.net.URL;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: Error14HandlingInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0000\u0018\u0000 \u001a2\u00020\u0001:\u0001\u001aB\u0017\u0012\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0016\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0096@¢\u0006\u0002\u0010\rJ\u0016\u0010\u000e\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\u0004H\u0082@¢\u0006\u0002\u0010\u0010J\u0014\u0010\u0011\u001a\u00020\u0012*\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0004H\u0002J\u000e\u0010\u0014\u001a\u0004\u0018\u00010\u0004*\u00020\nH\u0002J\f\u0010\u0015\u001a\u00020\u0016*\u00020\u0012H\u0002J\f\u0010\u0017\u001a\u00020\u0018*\u00020\nH\u0002J\f\u0010\u0019\u001a\u00020\u0012*\u00020\u0012H\u0002R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001b"}, d2 = {"Lcom/vk/id/network/http/captcha/Error14HandlingInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "domains", "", "", "<init>", "(Ljava/util/Set;)V", "cookie", "Ljava/util/concurrent/atomic/AtomicReference;", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "passCaptchaAndGetToken", "redirectUri", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "withSuccessToken", "Lcom/vk/id/network/http/HttpRequest;", "token", "getRedirectUri", "shouldSkipCaptcha", "", "parseCookie", "", "withCookie", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class Error14HandlingInterceptor implements Interceptor {
    private static final int CAPTCHA_ERROR_CODE = 14;
    private static final Companion Companion = new Companion(null);
    private final AtomicReference<String> cookie;
    private final Set<String> domains;

    /* JADX INFO: renamed from: com.vk.id.network.http.captcha.Error14HandlingInterceptor$intercept$1, reason: invalid class name */
    /* JADX INFO: compiled from: Error14HandlingInterceptor.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.http.captcha.Error14HandlingInterceptor", f = "Error14HandlingInterceptor.kt", i = {0, 0, 0, 1, 1}, l = {36, 40, 41}, m = "intercept", n = {"this", "chain", SentryBaseEvent.JsonKeys.REQUEST, "this", "chain"}, s = {"L$0", "L$1", "L$2", "L$0", "L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
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
            return Error14HandlingInterceptor.this.intercept(null, this);
        }
    }

    /* JADX INFO: renamed from: com.vk.id.network.http.captcha.Error14HandlingInterceptor$passCaptchaAndGetToken$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: Error14HandlingInterceptor.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.http.captcha.Error14HandlingInterceptor", f = "Error14HandlingInterceptor.kt", i = {}, l = {47}, m = "passCaptchaAndGetToken", n = {}, s = {})
    static final class C19621 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C19621(Continuation<? super C19621> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return Error14HandlingInterceptor.this.passCaptchaAndGetToken(null, this);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Error14HandlingInterceptor() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public Error14HandlingInterceptor(Set<String> domains) {
        Intrinsics.checkNotNullParameter(domains, "domains");
        this.domains = domains;
        this.cookie = new AtomicReference<>(null);
    }

    public /* synthetic */ Error14HandlingInterceptor(Set set, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? SetsKt.emptySet() : set);
    }

    /* JADX INFO: compiled from: Error14HandlingInterceptor.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/network/http/captcha/Error14HandlingInterceptor$Companion;", "", "<init>", "()V", "CAPTCHA_ERROR_CODE", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX WARN: Code duplicated, block: B:36:0x00b3 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        AnonymousClass1 anonymousClass1;
        Interceptor.Chain chain2;
        HttpRequest httpRequest;
        Error14HandlingInterceptor error14HandlingInterceptor;
        String redirectUri;
        Interceptor.Chain chain3;
        Error14HandlingInterceptor error14HandlingInterceptor2;
        Object objProceed;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object objPassCaptchaAndGetToken = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i != 0) {
            if (i == 1) {
                httpRequest = (HttpRequest) anonymousClass1.L$2;
                chain2 = (Interceptor.Chain) anonymousClass1.L$1;
                error14HandlingInterceptor = (Error14HandlingInterceptor) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
            } else {
                if (i != 2) {
                    if (i != 3) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
                    return objPassCaptchaAndGetToken;
                }
                chain3 = (Interceptor.Chain) anonymousClass1.L$1;
                error14HandlingInterceptor2 = (Error14HandlingInterceptor) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
            }
            HttpRequest httpRequestWithSuccessToken = error14HandlingInterceptor2.withSuccessToken(error14HandlingInterceptor2.withCookie(chain3.getRequest()), (String) objPassCaptchaAndGetToken);
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 3;
            objProceed = chain3.proceed(httpRequestWithSuccessToken, anonymousClass1);
            if (objProceed != coroutine_suspended) {
                return coroutine_suspended;
            }
            return objProceed;
        }
        ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
        HttpRequest httpRequestWithCookie = withCookie(chain.getRequest());
        anonymousClass1.L$0 = this;
        anonymousClass1.L$1 = chain;
        anonymousClass1.L$2 = httpRequestWithCookie;
        anonymousClass1.label = 1;
        Object objProceed2 = chain.proceed(httpRequestWithCookie, anonymousClass1);
        if (objProceed2 != coroutine_suspended) {
            chain2 = chain;
            httpRequest = httpRequestWithCookie;
            objPassCaptchaAndGetToken = objProceed2;
            error14HandlingInterceptor = this;
        }
        return coroutine_suspended;
        HttpResponse httpResponse = (HttpResponse) objPassCaptchaAndGetToken;
        error14HandlingInterceptor.parseCookie(httpResponse);
        if (error14HandlingInterceptor.shouldSkipCaptcha(httpRequest) || (redirectUri = error14HandlingInterceptor.getRedirectUri(httpResponse)) == null) {
            return httpResponse;
        }
        anonymousClass1.L$0 = error14HandlingInterceptor;
        anonymousClass1.L$1 = chain2;
        anonymousClass1.L$2 = null;
        anonymousClass1.label = 2;
        objPassCaptchaAndGetToken = error14HandlingInterceptor.passCaptchaAndGetToken(redirectUri, anonymousClass1);
        if (objPassCaptchaAndGetToken != coroutine_suspended) {
            chain3 = chain2;
            error14HandlingInterceptor2 = error14HandlingInterceptor;
            HttpRequest httpRequestWithSuccessToken2 = error14HandlingInterceptor2.withSuccessToken(error14HandlingInterceptor2.withCookie(chain3.getRequest()), (String) objPassCaptchaAndGetToken);
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 3;
            objProceed = chain3.proceed(httpRequestWithSuccessToken2, anonymousClass1);
            if (objProceed != coroutine_suspended) {
                return objProceed;
            }
        }
        return coroutine_suspended;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object passCaptchaAndGetToken(String str, Continuation<? super String> continuation) {
        C19621 c19621;
        if (continuation instanceof C19621) {
            c19621 = (C19621) continuation;
            if ((c19621.label & Integer.MIN_VALUE) != 0) {
                c19621.label -= Integer.MIN_VALUE;
            } else {
                c19621 = new C19621(continuation);
            }
        } else {
            c19621 = new C19621(continuation);
        }
        Object objOpenCaptchaSuspended = c19621.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c19621.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objOpenCaptchaSuspended);
            URL url = new URL(str);
            String str2 = url.getProtocol() + "://" + url.getHost();
            VKCaptcha vKCaptcha = VKCaptcha.INSTANCE;
            c19621.label = 1;
            objOpenCaptchaSuspended = VKCaptchaExtensionsKt.openCaptchaSuspended(vKCaptcha, str2, str, c19621);
            if (objOpenCaptchaSuspended == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objOpenCaptchaSuspended);
        }
        Object result = VKCaptchaExtensionsKt.toResult((VKCaptchaResult) objOpenCaptchaSuspended);
        ResultKt.throwOnFailure(result);
        return result;
    }

    private final HttpRequest withSuccessToken(HttpRequest httpRequest, String str) {
        return httpRequest.newBuilder().url(httpRequest.urlBuilder().addQueryParameter("success_token", str).build()).build();
    }

    private final String getRedirectUri(HttpResponse httpResponse) throws JSONException {
        String string;
        try {
            ResponseBody responseBodyPeekBody = httpResponse.peekBody(Long.MAX_VALUE);
            if (responseBodyPeekBody != null && (string = responseBodyPeekBody.getString()) != null) {
                JSONObject jSONObject = new JSONObject(string);
                if (!jSONObject.has("error")) {
                    return null;
                }
                JSONObject jSONObject2 = jSONObject.getJSONObject("error");
                if (jSONObject2.getInt("error_code") == 14) {
                    return jSONObject2.getString("redirect_uri");
                }
            }
        } catch (JSONException unused) {
        }
        return null;
    }

    private final boolean shouldSkipCaptcha(HttpRequest httpRequest) {
        return (this.domains.contains(new URL(httpRequest.getUrl()).getHost()) || this.domains.isEmpty()) ? false : true;
    }

    private final void parseCookie(HttpResponse httpResponse) {
        Object obj;
        Iterator<T> it = httpResponse.headerValues(HttpHeaders.SET_COOKIE).iterator();
        while (true) {
            obj = null;
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            if (StringsKt.contains$default((CharSequence) next, (CharSequence) "remixstlid", false, 2, (Object) null)) {
                obj = next;
                break;
            }
        }
        String str = (String) obj;
        if (str != null) {
            this.cookie.set(str);
        }
    }

    private final HttpRequest withCookie(HttpRequest httpRequest) {
        HttpRequest.Builder builderNewBuilder = httpRequest.newBuilder();
        String str = this.cookie.get();
        if (str != null) {
            builderNewBuilder.header("Cookie", str);
        }
        return builderNewBuilder.build();
    }
}
