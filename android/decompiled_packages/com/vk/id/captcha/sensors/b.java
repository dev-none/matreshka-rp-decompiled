package com.vk.id.captcha.sensors;

import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;

/* JADX INFO: compiled from: AndroidSensorListener.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Lazy f5342a = LazyKt.lazy(new Function0<d>() { // from class: com.vk.id.captcha.c.b.1
        @Override // kotlin.jvm.functions.Function0
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final d invoke() {
            return new d("vk-sensor-thread");
        }
    });

    public static final d a() {
        return (d) f5342a.getValue();
    }
}
