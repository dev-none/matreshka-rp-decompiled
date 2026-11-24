package com.pushwoosh.inapp.ui;

import com.pushwoosh.internal.platform.AndroidPlatformModule;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class t0 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final t0 f5166a = new t0();

    public t0() {
        super(0);
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        return Boolean.valueOf(AndroidPlatformModule.isApplicationInForeground());
    }
}
