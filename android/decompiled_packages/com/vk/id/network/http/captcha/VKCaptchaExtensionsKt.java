package com.vk.id.network.http.captcha;

import com.vk.id.captcha.api.VKCaptcha;
import com.vk.id.captcha.api.data.VKCaptchaResult;
import com.vk.id.captcha.api.listener.VKCaptchaResultListener;
import java.io.IOException;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CancellableContinuationImpl;

/* JADX INFO: compiled from: VKCaptchaExtensions.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\"\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0004H\u0080@¢\u0006\u0002\u0010\u0006\u001a\u0017\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00040\b*\u00020\u0001H\u0000¢\u0006\u0002\u0010\t¨\u0006\n"}, d2 = {"openCaptchaSuspended", "Lcom/vk/id/captcha/api/data/VKCaptchaResult;", "Lcom/vk/id/captcha/api/VKCaptcha;", "domain", "", "redirectUri", "(Lcom/vk/id/captcha/api/VKCaptcha;Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "toResult", "Lkotlin/Result;", "(Lcom/vk/id/captcha/api/data/VKCaptchaResult;)Ljava/lang/Object;", "network_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKCaptchaExtensionsKt {
    public static final Object toResult(VKCaptchaResult vKCaptchaResult) {
        Intrinsics.checkNotNullParameter(vKCaptchaResult, "<this>");
        if (vKCaptchaResult instanceof VKCaptchaResult.Success) {
            Result.Companion companion = Result.INSTANCE;
            return Result.m9861constructorimpl(((VKCaptchaResult.Success) vKCaptchaResult).getToken());
        }
        if (!(vKCaptchaResult instanceof VKCaptchaResult.Error)) {
            throw new NoWhenBranchMatchedException();
        }
        Result.Companion companion2 = Result.INSTANCE;
        VKCaptchaResult.Error error = (VKCaptchaResult.Error) vKCaptchaResult;
        return Result.m9861constructorimpl(ResultKt.createFailure(new IOException(error.getError().getMessage(), error.getError().getError())));
    }

    public static final Object openCaptchaSuspended(final VKCaptcha vKCaptcha, String str, String str2, Continuation<? super VKCaptchaResult> continuation) {
        CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(continuation), 1);
        cancellableContinuationImpl.initCancellability();
        final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
        try {
            vKCaptcha.openCaptcha(str, str2, new VKCaptchaResultListener() { // from class: com.vk.id.network.http.captcha.VKCaptchaExtensionsKt$openCaptchaSuspended$2$1
                @Override // com.vk.id.captcha.api.listener.VKCaptchaResultListener
                public void onResult(VKCaptchaResult result) {
                    Intrinsics.checkNotNullParameter(result, "result");
                    if (cancellableContinuationImpl2.isActive()) {
                        CancellableContinuation<VKCaptchaResult> cancellableContinuation = cancellableContinuationImpl2;
                        Result.Companion companion = Result.INSTANCE;
                        cancellableContinuation.resumeWith(Result.m9861constructorimpl(result));
                    }
                }
            });
            cancellableContinuationImpl2.invokeOnCancellation(new Function1<Throwable, Unit>() { // from class: com.vk.id.network.http.captcha.VKCaptchaExtensionsKt$openCaptchaSuspended$2$2
                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Unit invoke(Throwable th) {
                    invoke2(th);
                    return Unit.INSTANCE;
                }

                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final void invoke2(Throwable th) {
                    vKCaptcha.closeCaptcha();
                }
            });
        } catch (Exception e) {
            if (cancellableContinuationImpl2.isActive()) {
                Result.Companion companion = Result.INSTANCE;
                cancellableContinuationImpl2.resumeWith(Result.m9861constructorimpl(ResultKt.createFailure(e)));
            }
        }
        Object result = cancellableContinuationImpl.getResult();
        if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
            DebugProbesKt.probeCoroutineSuspended(continuation);
        }
        return result;
    }
}
