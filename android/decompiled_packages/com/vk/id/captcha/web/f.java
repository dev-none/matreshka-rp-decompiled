package com.vk.id.captcha.web;

import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;

/* JADX INFO: compiled from: VKCaptchaWebViewActivity.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Lazy f5371a = LazyKt.lazy(new Function0<com.vk.id.captcha.sensors.d>() { // from class: com.vk.id.captcha.web.f.1
        @Override // kotlin.jvm.functions.Function0
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final com.vk.id.captcha.sensors.d invoke() {
            return new com.vk.id.captcha.sensors.d("vk-webview-thread");
        }
    });

    public static final com.vk.id.captcha.sensors.d a() {
        return (com.vk.id.captcha.sensors.d) f5371a.getValue();
    }
}
