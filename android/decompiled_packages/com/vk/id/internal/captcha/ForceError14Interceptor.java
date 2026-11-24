package com.vk.id.internal.captcha;

import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.Interceptor;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: ForceError14Interceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B\u0011\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0096@¢\u0006\u0002\u0010\fR\u0010\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/vk/id/internal/captcha/ForceError14Interceptor;", "Lcom/vk/id/network/http/Interceptor;", "redirectUri", "", "<init>", "(Ljava/lang/String;)V", "once", "Ljava/util/concurrent/atomic/AtomicBoolean;", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class ForceError14Interceptor implements Interceptor {
    public static final int $stable = 8;
    private final AtomicBoolean once = new AtomicBoolean(true);
    private final String redirectUri;

    public ForceError14Interceptor(String str) {
        this.redirectUri = str;
    }

    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        if (!this.once.getAndSet(false)) {
            return chain.proceed(chain.getRequest(), continuation);
        }
        return new HttpResponse(chain.getRequest(), 200, "OK", StringsKt.trimIndent("\n                            {\n                                \"error\": {\n                                    \"error_code\": 14,\n                                    \"error_msg\": \"Captcha needed\",\n                                    \"request_params\": [\n                                    ],\n                                    \"redirect_uri\": \"" + this.redirectUri + "\",\n                                    \"captcha_sid\": \"679747455055\",\n                                    \"is_refresh_enabled\": true,\n                                    \"captcha_img\": \"https:\\/\\/vk.ru\\/captcha.php?sid=679747455055&source=check_user_action_validate%2Bmail_send&app_id=6287487&device_id=&s=1&resized=1\",\n                                    \"captcha_ts\": 1741099026.324000,\n                                    \"captcha_attempt\": 1,\n                                    \"captcha_ratio\": 2.600000,\n                                    \"is_sound_captcha_available\": true,\n                                    \"captcha_track\": \"https:\\/\\/vk.ru\\/sound_captcha.php?captcha_sid=679747455055&act=get&source=check_user_action_validate%2Bmail_send&app_id=6287487&device_id=\",\n                                    \"uiux_changes\": true\n                                }\n                            }\n        "), MapsKt.mapOf(TuplesKt.to("Content-Type", "application/json; charset=utf-8")), true);
    }
}
