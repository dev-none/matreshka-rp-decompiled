package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.interstitial.EventListener;
import com.smaato.sdk.interstitial.viewmodel.EventListenerNotificationsInterface;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1174 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f4106;

    public C1174(C0798 c0798) {
        this.f4106 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f4106;
        EventListenerNotificationsInterface eventListenerNotificationsInterface = (EventListenerNotificationsInterface) arrayList.get(0);
        EventListener eventListener = (EventListener) arrayList.get(1);
        c0798.getClass();
        eventListenerNotificationsInterface.setEventListener(eventListener);
        return null;
    }
}
