package com.ironsource.adqualitysdk.sdk.i;

import android.content.IntentFilter;
import com.applovin.impl.sdk.AppLovinBroadcastManager;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0646 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f2254;

    public C0646(C0539 c0539) {
        this.f2254 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f2254;
        AppLovinBroadcastManager appLovinBroadcastManager = (AppLovinBroadcastManager) arrayList.get(0);
        AppLovinBroadcastManager.Receiver receiver = (AppLovinBroadcastManager.Receiver) arrayList.get(1);
        IntentFilter intentFilter = (IntentFilter) arrayList.get(2);
        c0539.getClass();
        appLovinBroadcastManager.registerReceiver(receiver, intentFilter);
        return null;
    }
}
