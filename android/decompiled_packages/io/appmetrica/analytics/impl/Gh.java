package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.ICrashTransformer;

/* JADX INFO: loaded from: classes7.dex */
public final class Gh extends AbstractC2392q6 {
    public final Yn d;

    public Gh(Context context, Yn yn, InterfaceC2367p6 interfaceC2367p6, ICrashTransformer iCrashTransformer) {
        this(yn, interfaceC2367p6, iCrashTransformer, new T9(context));
    }

    public Gh(Yn yn, InterfaceC2367p6 interfaceC2367p6, ICrashTransformer iCrashTransformer, T9 t9) {
        super(interfaceC2367p6, iCrashTransformer, t9);
        this.d = yn;
    }
}
