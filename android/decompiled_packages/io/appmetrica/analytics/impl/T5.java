package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;

/* JADX INFO: loaded from: classes7.dex */
public abstract class T5 extends BaseRequestConfig.ComponentLoader {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SafePackageManager f5898a;

    public T5(Context context, String str) {
        this(context, str, new SafePackageManager());
    }

    @Override // io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.ComponentLoader, io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.RequestConfigLoader
    /* JADX INFO: renamed from: a */
    public U5 load(S5 s5) {
        U5 u5 = (U5) super.load(s5);
        String packageName = getContext().getPackageName();
        ApplicationInfo applicationInfo = this.f5898a.getApplicationInfo(getContext(), getPackageName(), 0);
        if (applicationInfo != null) {
            int i = applicationInfo.flags;
            u5.f5917a = (i & 2) != 0 ? "1" : "0";
            u5.b = (i & 1) == 0 ? "0" : "1";
        } else if (TextUtils.equals(packageName, getPackageName())) {
            u5.f5917a = (getContext().getApplicationInfo().flags & 2) != 0 ? "1" : "0";
            u5.b = (getContext().getApplicationInfo().flags & 1) == 0 ? "0" : "1";
        } else {
            u5.f5917a = "0";
            u5.b = "0";
        }
        C2231jm c2231jm = s5.f5877a;
        u5.c = c2231jm;
        u5.setRetryPolicyConfig(c2231jm.t);
        return u5;
    }

    public T5(Context context, String str, SafePackageManager safePackageManager) {
        super(context, str);
        this.f5898a = safePackageManager;
    }
}
