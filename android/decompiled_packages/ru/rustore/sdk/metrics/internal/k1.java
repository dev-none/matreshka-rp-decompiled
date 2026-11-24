package ru.rustore.sdk.metrics.internal;

import android.content.Context;
import android.content.pm.PackageManager;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class k1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6646a;
    public final Lazy b;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<j1> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final j1 invoke() {
            Object objM9861constructorimpl;
            k1 k1Var = k1.this;
            try {
                Result.Companion companion = Result.INSTANCE;
                PackageManager packageManager = k1Var.f6646a.getPackageManager();
                Intrinsics.checkNotNullExpressionValue(packageManager, "context.packageManager");
                String packageName = k1Var.f6646a.getPackageName();
                Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
                String value = l1.a(packageManager, packageName).versionName;
                if (value == null) {
                    throw new IllegalArgumentException("Required value was null.");
                }
                Intrinsics.checkNotNullExpressionValue(value, "requireNotNull(context.p…packageName).versionName)");
                Intrinsics.checkNotNullParameter(value, "value");
                objM9861constructorimpl = Result.m9861constructorimpl(new j1(value));
                if (Result.m9867isFailureimpl(objM9861constructorimpl)) {
                    objM9861constructorimpl = null;
                }
                j1 j1Var = (j1) objM9861constructorimpl;
                String str = j1Var != null ? j1Var.f6641a : null;
                if (str != null) {
                    return new j1(str);
                }
                return null;
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
            }
        }
    }

    public k1(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f6646a = context;
        this.b = LazyKt.lazy(new a());
    }
}
