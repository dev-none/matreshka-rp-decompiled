package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.Application;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashSet;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮞ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1041 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static AbstractC1041 f3777;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f3779 = false;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final HashSet f3778 = new HashSet();

    static {
        StringFog.decrypt("lDXeWvEWoEy1PNJB8xaJaboqxV3+H552tivHUfMf\n", "01mxOJB67CU=\n");
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static synchronized AbstractC1041 m8867() {
        if (f3777 == null) {
            f3777 = new C1093();
        }
        return f3777;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public abstract boolean mo8868();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized ArrayList m8869() {
        return new ArrayList(this.f3778);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public abstract Activity mo8870();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public abstract void mo8871(Application application, Activity activity);

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8872(C0780 c0780) {
        this.f3778.add(c0780);
    }
}
