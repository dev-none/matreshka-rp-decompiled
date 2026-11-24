package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.Application;
import android.content.Context;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1043 extends AbstractC1041 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public Context f3781;

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﻛ */
    public final boolean mo8868() {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) this.f3781.getSystemService(StringFog.decrypt("P7qZXeA8Utk=\n", "XtntNJZVJqA=\n"))).getRunningAppProcesses();
        if (runningAppProcesses == null) {
            return false;
        }
        String packageName = this.f3781.getPackageName();
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
            if (runningAppProcessInfo.importance == 100 && runningAppProcessInfo.processName.equals(packageName)) {
                return true;
            }
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﾒ */
    public final Activity mo8870() {
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﾒ */
    public final synchronized void mo8871(Application application, Activity activity) {
        try {
            if (application != null) {
                this.f3781 = application.getApplicationContext();
            } else if (activity != null) {
                this.f3781 = activity.getApplicationContext();
            }
        } catch (Throwable th) {
            throw th;
        }
    }
}
