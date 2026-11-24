package com.pushwoosh.c0;

import android.content.Context;
import android.content.res.Configuration;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import com.pushwoosh.internal.platform.resource.ResourceProvider;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements ResourceProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakReference f5050a;

    public a(Context context) {
        this.f5050a = new WeakReference(context);
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final Configuration getConfiguration() {
        if (((Context) this.f5050a.get()) == null) {
            return null;
        }
        return ((Context) this.f5050a.get()).getResources().getConfiguration();
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final float getDimension(int i) {
        if (((Context) this.f5050a.get()) == null) {
            return -1.0f;
        }
        return ((Context) this.f5050a.get()).getResources().getDimension(i);
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final DisplayMetrics getDisplayMetrics() {
        if (((Context) this.f5050a.get()) == null) {
            return null;
        }
        return ((Context) this.f5050a.get()).getResources().getDisplayMetrics();
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final int getIdentifier(String str, String str2) {
        if (((Context) this.f5050a.get()) == null) {
            return -1;
        }
        return ((Context) this.f5050a.get()).getResources().getIdentifier(str, str2, ((Context) this.f5050a.get()).getPackageName());
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final String getString(int i, Object... objArr) {
        return ((Context) this.f5050a.get()) == null ? "" : ((Context) this.f5050a.get()).getString(i, objArr);
    }

    @Override // com.pushwoosh.internal.platform.resource.ResourceProvider
    public final void getValue(int i, TypedValue typedValue, boolean z) {
        if (((Context) this.f5050a.get()) == null) {
            return;
        }
        ((Context) this.f5050a.get()).getResources().getValue(i, typedValue, z);
    }
}
