package com.vk.id.captcha.api;

import android.util.Log;
import com.vk.id.captcha.a;
import com.vk.id.captcha.api.data.VKCaptchaError;
import com.vk.id.captcha.api.data.VKCaptchaResult;
import com.vk.id.captcha.api.listener.VKCaptchaResultListener;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKCaptcha.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\"\u0014\u0010\u0001\u001a\u00020\u00008\u0000X\u0081T¢\u0006\u0006\n\u0004\b\u0001\u0010\u0002\"\u0014\u0010\u0003\u001a\u00020\u00008\u0000X\u0081T¢\u0006\u0006\n\u0004\b\u0003\u0010\u0002\".\u0010\u0006\u001a\u0004\u0018\u00010\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00048\u0001@AX\u0081\u000e¢\u0006\u0012\n\u0004\b\u0006\u0010\u0007\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000b"}, d2 = {"", VKCaptchaKt.VK_CAPTCHA_CHALLENGE_DOMAIN_URL_KEY, "Ljava/lang/String;", VKCaptchaKt.VK_CAPTCHA_URL_KEY, "Lcom/vk/id/captcha/a;", "value", "result", "Lcom/vk/id/captcha/a;", "getResult", "()Lcom/vk/id/captcha/a;", "setResult", "(Lcom/vk/id/captcha/a;)V"}, k = 2, mv = {1, 9, 0}, xi = 48)
public final class VKCaptchaKt {
    public static final String VK_CAPTCHA_CHALLENGE_DOMAIN_URL_KEY = "VK_CAPTCHA_CHALLENGE_DOMAIN_URL_KEY";
    public static final String VK_CAPTCHA_URL_KEY = "VK_CAPTCHA_URL_KEY";
    private static a result;

    public static final a getResult() {
        return result;
    }

    public static final void setResult(a aVar) {
        String lastDomain$captcha_release;
        String lastRedirectUri$captcha_release;
        VKCaptchaResultListener captchaListener$captcha_release;
        if (aVar instanceof a.d) {
            a.d dVar = (a.d) aVar;
            VKCaptchaResult.Success success = new VKCaptchaResult.Success(dVar.a(), dVar.b());
            VKCaptchaResultListener captchaListener$captcha_release2 = VKCaptcha.INSTANCE.getCaptchaListener$captcha_release();
            if (captchaListener$captcha_release2 != null) {
                captchaListener$captcha_release2.onResult(success);
            }
            if (dVar.b() != null) {
                VKCaptcha.INSTANCE.getCaptchaStorage$captcha_release().a(dVar.b(), dVar.a());
            }
        } else if (aVar instanceof a.b) {
            a.b bVar = (a.b) aVar;
            VKCaptchaResult.Error error = new VKCaptchaResult.Error(bVar.a(), bVar.b());
            VKCaptchaResultListener captchaListener$captcha_release3 = VKCaptcha.INSTANCE.getCaptchaListener$captcha_release();
            if (captchaListener$captcha_release3 != null) {
                captchaListener$captcha_release3.onResult(error);
            }
        } else if (aVar instanceof a.C1191a) {
            VKCaptchaResult.Error error2 = new VKCaptchaResult.Error(new VKCaptchaError.Cancelled(), null);
            VKCaptchaResultListener captchaListener$captcha_release4 = VKCaptcha.INSTANCE.getCaptchaListener$captcha_release();
            if (captchaListener$captcha_release4 != null) {
                captchaListener$captcha_release4.onResult(error2);
            }
        } else if (Intrinsics.areEqual(aVar, a.c.INSTANCE)) {
            synchronized (VKCaptcha.INSTANCE) {
                lastDomain$captcha_release = VKCaptcha.INSTANCE.getLastDomain$captcha_release();
                lastRedirectUri$captcha_release = VKCaptcha.INSTANCE.getLastRedirectUri$captcha_release();
                captchaListener$captcha_release = VKCaptcha.INSTANCE.getCaptchaListener$captcha_release();
                Unit unit = Unit.INSTANCE;
            }
            if (lastDomain$captcha_release == null || lastRedirectUri$captcha_release == null || captchaListener$captcha_release == null) {
                StringBuilder sb = new StringBuilder("Can not retry to open captcha because illegal state. domain is null:");
                sb.append(lastDomain$captcha_release == null);
                sb.append(", redirectUri is null:");
                sb.append(lastRedirectUri$captcha_release == null);
                sb.append(", captchaListener is null: ");
                sb.append(captchaListener$captcha_release == null);
                Log.e("VKCaptchaState", sb.toString());
                return;
            }
            VKCaptcha.INSTANCE.openCaptcha(lastDomain$captcha_release, lastRedirectUri$captcha_release, captchaListener$captcha_release);
        }
        result = aVar;
    }
}
