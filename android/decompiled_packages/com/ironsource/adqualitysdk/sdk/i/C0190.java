package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.rewarded.EventListener;
import com.smaato.sdk.rewarded.viewmodel.RewardedAdEventListenerNotifications;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ı, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0190 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f781;

    public C0190(C0798 c0798) {
        this.f781 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f781;
        RewardedAdEventListenerNotifications rewardedAdEventListenerNotifications = (RewardedAdEventListenerNotifications) arrayList.get(0);
        EventListener eventListener = (EventListener) arrayList.get(1);
        c0798.getClass();
        rewardedAdEventListenerNotifications.setEventListener(eventListener);
        return null;
    }
}
