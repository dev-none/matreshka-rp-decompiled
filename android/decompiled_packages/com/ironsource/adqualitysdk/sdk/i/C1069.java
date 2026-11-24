package com.ironsource.adqualitysdk.sdk.i;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺀ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1069 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static C1069 f3846;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final Context f3852;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f3848 = StringFog.decrypt("Wm1CLCOeeGl3ZkIsPKhHZ3hjRig9\n", "FgIhTU/cCgY=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final Object f3847 = new Object();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f3853 = true;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final HashMap f3851 = new HashMap();

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final HashMap f3850 = new HashMap();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final ArrayList f3849 = new ArrayList();

    public C1069(Context context) {
        this.f3852 = context;
        new HandlerC1090(this, context.getMainLooper());
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C1069 m8875(Context context) {
        C1069 c1069;
        synchronized (f3847) {
            if (f3846 == null) {
                f3846 = new C1069(context.getApplicationContext());
            }
            c1069 = f3846;
        }
        return c1069;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final void m8876() {
        synchronized (this.f3851) {
            Iterator it = new HashMap(this.f3851).keySet().iterator();
            while (it.hasNext()) {
                m8879((BroadcastReceiver) it.next());
            }
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized void m8877() {
        this.f3853 = false;
        m8876();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8878() {
        this.f3853 = true;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8879(BroadcastReceiver broadcastReceiver) {
        synchronized (this.f3851) {
            ArrayList arrayList = (ArrayList) this.f3851.remove(broadcastReceiver);
            if (arrayList == null) {
                return;
            }
            for (int i = 0; i < arrayList.size(); i++) {
                IntentFilter intentFilter = (IntentFilter) arrayList.get(i);
                for (int i2 = 0; i2 < intentFilter.countActions(); i2++) {
                    String action = intentFilter.getAction(i2);
                    ArrayList arrayList2 = (ArrayList) this.f3850.get(action);
                    if (arrayList2 != null) {
                        if (arrayList2.size() <= 0) {
                            if (arrayList2.size() <= 0) {
                                this.f3850.remove(action);
                            }
                        } else {
                            if (arrayList2.get(0) != null) {
                                throw new ClassCastException();
                            }
                            throw null;
                        }
                    }
                }
            }
        }
    }
}
