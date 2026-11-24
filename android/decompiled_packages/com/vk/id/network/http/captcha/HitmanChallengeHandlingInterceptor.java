package com.vk.id.network.http.captcha;

import com.vk.id.captcha.api.VKCaptcha;
import com.vk.id.captcha.api.data.VKCaptchaResult;
import com.vk.id.network.http.HttpRequest;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.Interceptor;
import io.sentry.protocol.Response;
import java.net.URL;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HitmanChallengeHandlingInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0000\u0018\u0000 \u00182\u00020\u0001:\u0001\u0018B\u0017\u0012\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0016\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0096@¢\u0006\u0002\u0010\u000bJ\u001e\u0010\f\u001a\u00020\u00042\u0006\u0010\r\u001a\u00020\u00042\u0006\u0010\u000e\u001a\u00020\u0004H\u0082@¢\u0006\u0002\u0010\u000fJ\u0014\u0010\u0010\u001a\u00020\u0011*\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0004H\u0002J\f\u0010\u0013\u001a\u00020\u0011*\u00020\u0011H\u0002J\u0018\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u0004H\u0002J\f\u0010\u0017\u001a\u00020\u0004*\u00020\u0011H\u0002R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lcom/vk/id/network/http/captcha/HitmanChallengeHandlingInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "domains", "", "", "<init>", "(Ljava/util/Set;)V", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "passCaptchaAndGetToken", "domain", "challengeUrl", "(Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "withChallengeSolution", "Lcom/vk/id/network/http/HttpRequest;", "token", "withSavedChallengeSolution", "shouldSkipCaptcha", "", Response.TYPE, "getDomain", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HitmanChallengeHandlingInterceptor implements Interceptor {
    private static final Companion Companion = new Companion(null);
    private static final String HEADER_CHALLENGE = "X-Challenge";
    private static final String HEADER_CHALLENGE_SOLUTION = "X-Challenge-Solution";
    private static final String HEADER_CHALLENGE_URL = "X-Challenge-Url";
    private final Set<String> domains;

    /* JADX INFO: renamed from: com.vk.id.network.http.captcha.HitmanChallengeHandlingInterceptor$intercept$1, reason: invalid class name */
    /* JADX INFO: compiled from: HitmanChallengeHandlingInterceptor.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.http.captcha.HitmanChallengeHandlingInterceptor", f = "HitmanChallengeHandlingInterceptor.kt", i = {0, 0, 0, 1, 1}, l = {33, 36, 37}, m = "intercept", n = {"this", "chain", "domain", "this", "chain"}, s = {"L$0", "L$1", "L$2", "L$0", "L$1"})
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
            return HitmanChallengeHandlingInterceptor.this.intercept(null, this);
        }
    }

    /* JADX INFO: renamed from: com.vk.id.network.http.captcha.HitmanChallengeHandlingInterceptor$passCaptchaAndGetToken$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: HitmanChallengeHandlingInterceptor.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.http.captcha.HitmanChallengeHandlingInterceptor", f = "HitmanChallengeHandlingInterceptor.kt", i = {}, l = {44}, m = "passCaptchaAndGetToken", n = {}, s = {})
    static final class C19631 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C19631(Continuation<? super C19631> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return HitmanChallengeHandlingInterceptor.this.passCaptchaAndGetToken(null, null, this);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public HitmanChallengeHandlingInterceptor() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public HitmanChallengeHandlingInterceptor(Set<String> domains) {
        Intrinsics.checkNotNullParameter(domains, "domains");
        this.domains = domains;
    }

    public /* synthetic */ HitmanChallengeHandlingInterceptor(Set set, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? SetsKt.emptySet() : set);
    }

    /* JADX INFO: compiled from: HitmanChallengeHandlingInterceptor.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lcom/vk/id/network/http/captcha/HitmanChallengeHandlingInterceptor$Companion;", "", "<init>", "()V", "HEADER_CHALLENGE_SOLUTION", "", "HEADER_CHALLENGE_URL", "HEADER_CHALLENGE", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX WARN: Code duplicated, block: B:36:0x00bc A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        AnonymousClass1 anonymousClass1;
        Interceptor.Chain chain2;
        String str;
        HitmanChallengeHandlingInterceptor hitmanChallengeHandlingInterceptor;
        String str2;
        Interceptor.Chain chain3;
        HitmanChallengeHandlingInterceptor hitmanChallengeHandlingInterceptor2;
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
                str = (String) anonymousClass1.L$2;
                chain2 = (Interceptor.Chain) anonymousClass1.L$1;
                hitmanChallengeHandlingInterceptor = (HitmanChallengeHandlingInterceptor) anonymousClass1.L$0;
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
                hitmanChallengeHandlingInterceptor2 = (HitmanChallengeHandlingInterceptor) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
            }
            HttpRequest httpRequestWithChallengeSolution = hitmanChallengeHandlingInterceptor2.withChallengeSolution(chain3.getRequest(), (String) objPassCaptchaAndGetToken);
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 3;
            objProceed = chain3.proceed(httpRequestWithChallengeSolution, anonymousClass1);
            if (objProceed != coroutine_suspended) {
                return coroutine_suspended;
            }
            return objProceed;
        }
        ResultKt.throwOnFailure(objPassCaptchaAndGetToken);
        String domain = getDomain(chain.getRequest());
        HttpRequest httpRequestWithSavedChallengeSolution = withSavedChallengeSolution(chain.getRequest());
        anonymousClass1.L$0 = this;
        anonymousClass1.L$1 = chain;
        anonymousClass1.L$2 = domain;
        anonymousClass1.label = 1;
        Object objProceed2 = chain.proceed(httpRequestWithSavedChallengeSolution, anonymousClass1);
        if (objProceed2 != coroutine_suspended) {
            chain2 = chain;
            str = domain;
            objPassCaptchaAndGetToken = objProceed2;
            hitmanChallengeHandlingInterceptor = this;
        }
        return coroutine_suspended;
        HttpResponse httpResponse = (HttpResponse) objPassCaptchaAndGetToken;
        if (hitmanChallengeHandlingInterceptor.shouldSkipCaptcha(httpResponse, str) || (str2 = (String) CollectionsKt.firstOrNull((List) httpResponse.headerValues(HEADER_CHALLENGE_URL))) == null) {
            return httpResponse;
        }
        anonymousClass1.L$0 = hitmanChallengeHandlingInterceptor;
        anonymousClass1.L$1 = chain2;
        anonymousClass1.L$2 = null;
        anonymousClass1.label = 2;
        objPassCaptchaAndGetToken = hitmanChallengeHandlingInterceptor.passCaptchaAndGetToken(str, str2, anonymousClass1);
        if (objPassCaptchaAndGetToken != coroutine_suspended) {
            chain3 = chain2;
            hitmanChallengeHandlingInterceptor2 = hitmanChallengeHandlingInterceptor;
            HttpRequest httpRequestWithChallengeSolution2 = hitmanChallengeHandlingInterceptor2.withChallengeSolution(chain3.getRequest(), (String) objPassCaptchaAndGetToken);
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 3;
            objProceed = chain3.proceed(httpRequestWithChallengeSolution2, anonymousClass1);
            if (objProceed != coroutine_suspended) {
                return objProceed;
            }
        }
        return coroutine_suspended;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object passCaptchaAndGetToken(String str, String str2, Continuation<? super String> continuation) {
        C19631 c19631;
        if (continuation instanceof C19631) {
            c19631 = (C19631) continuation;
            if ((c19631.label & Integer.MIN_VALUE) != 0) {
                c19631.label -= Integer.MIN_VALUE;
            } else {
                c19631 = new C19631(continuation);
            }
        } else {
            c19631 = new C19631(continuation);
        }
        Object objOpenCaptchaSuspended = c19631.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c19631.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objOpenCaptchaSuspended);
            c19631.label = 1;
            objOpenCaptchaSuspended = VKCaptchaExtensionsKt.openCaptchaSuspended(VKCaptcha.INSTANCE, str, str + str2, c19631);
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

    private final HttpRequest withChallengeSolution(HttpRequest httpRequest, String str) {
        return httpRequest.newBuilder().header(HEADER_CHALLENGE_SOLUTION, str).build();
    }

    private final HttpRequest withSavedChallengeSolution(HttpRequest httpRequest) {
        URL url = new URL(httpRequest.getUrl());
        String token = VKCaptcha.INSTANCE.getToken(url.getProtocol() + "://" + url.getHost());
        return (httpRequest.header(HEADER_CHALLENGE_SOLUTION) != null || token == null) ? httpRequest : httpRequest.newBuilder().header(HEADER_CHALLENGE_SOLUTION, token).build();
    }

    private final boolean shouldSkipCaptcha(HttpResponse response, String domain) {
        if (!this.domains.contains(domain) && !this.domains.isEmpty()) {
            return true;
        }
        List<String> listHeaderValues = response.headerValues(HEADER_CHALLENGE);
        if ((listHeaderValues instanceof Collection) && listHeaderValues.isEmpty()) {
            return true;
        }
        Iterator<T> it = listHeaderValues.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual((String) it.next(), "required")) {
                return false;
            }
        }
        return true;
    }

    private final String getDomain(HttpRequest httpRequest) {
        URL url = new URL(httpRequest.getUrl());
        String string = new URL(url.getProtocol(), url.getHost(), url.getPort(), "").toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return string;
    }
}
