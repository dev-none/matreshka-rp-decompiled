package ru.rustore.sdk.metrics.internal;

import android.content.Context;
import android.content.SharedPreferences;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class e1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6627a;
    public final Lazy b;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<SharedPreferences> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final SharedPreferences invoke() {
            return e1.this.f6627a.getSharedPreferences("metrics_sdk_sp", 0);
        }
    }

    public e1(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f6627a = context;
        this.b = LazyKt.lazy(new a());
    }
}
