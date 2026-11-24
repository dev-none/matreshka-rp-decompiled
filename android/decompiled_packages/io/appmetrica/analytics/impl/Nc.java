package io.appmetrica.analytics.impl;

import android.util.SparseArray;
import io.sentry.protocol.DebugImage;

/* JADX INFO: loaded from: classes7.dex */
public final class Nc {
    public static final SparseArray c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5805a;
    public final String b;

    static {
        SparseArray sparseArray = new SparseArray();
        c = sparseArray;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        sparseArray.put(5891, new Nc(DebugImage.JVM, "binder"));
        EnumC2195ib enumC2195ib2 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        sparseArray.put(5890, new Nc(DebugImage.JVM, "file"));
        EnumC2195ib enumC2195ib3 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        sparseArray.put(5889, new Nc(DebugImage.JVM, "file"));
        EnumC2195ib enumC2195ib4 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        sparseArray.put(5897, new Nc("jni_native", "file"));
        EnumC2195ib enumC2195ib5 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        sparseArray.put(5898, new Nc("jni_native", "file"));
    }

    public Nc(String str, String str2) {
        this.f5805a = str;
        this.b = str2;
    }
}
