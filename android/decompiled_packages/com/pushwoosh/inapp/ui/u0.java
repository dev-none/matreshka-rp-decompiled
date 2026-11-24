package com.pushwoosh.inapp.ui;

import java.lang.ref.WeakReference;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class u0 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final u0 f5169a = new u0();

    public u0() {
        super(0);
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        WeakReference weakReference = v0.d;
        if (weakReference != null) {
            return (InAppMessageDelegate) weakReference.get();
        }
        return null;
    }
}
