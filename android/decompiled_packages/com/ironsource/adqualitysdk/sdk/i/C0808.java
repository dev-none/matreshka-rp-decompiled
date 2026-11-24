package com.ironsource.adqualitysdk.sdk.i;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0808 extends BroadcastReceiver {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f2880 = StringFog.decrypt("Qk6BRJqtBo54SoFWp7oOuGVdkEE=\n", "DCv1M/Xfbd0=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f2883;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public boolean f2882 = false;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final HashSet f2881 = new HashSet();

    public C0808(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f2883 = applicationContext;
        AbstractC0323.m8471(f2880, StringFog.decrypt("GhlD+BVo7D48DBfuDmnqeiodRPhcdO59LBVB6Q4o\n", "SXw3jHwGix4=\n"));
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(StringFog.decrypt("ptSuXrUycnip374CuTR4OOn5hWKUHlUCjuyDeIMEVR6G9I1p\n", "x7rKLNpbFlY=\n"));
        applicationContext.registerReceiver(this, intentFilter);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8732(C0808 c0808, boolean z) {
        synchronized (c0808) {
            c0808.f2882 = z;
        }
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        AbstractC1766n.m8388(new C0816(this, intent, context));
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8734() {
        HashSet hashSet;
        synchronized (this) {
            hashSet = new HashSet(this.f2881);
        }
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            ((InterfaceC0424) it.next()).getClass();
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static boolean m8733(C0808 c0808, Context context) {
        c0808.getClass();
        NetworkInfo activeNetworkInfo = context != null ? ((ConnectivityManager) context.getSystemService(StringFog.decrypt("fDi1LfEWI1ZpPq86\n", "H1fbQ5R1Vz8=\n"))).getActiveNetworkInfo() : null;
        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
            return false;
        }
        AbstractC0323.m8477(f2880, StringFog.decrypt("jXGH1PXImYk=\n", "wxTzo5q68qk=\n") + activeNetworkInfo.getTypeName() + StringFog.decrypt("L05PdWQeqwNqSQ4=\n", "Dy0gGwp7yHc=\n"));
        return true;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized boolean m8735() {
        return this.f2882;
    }
}
