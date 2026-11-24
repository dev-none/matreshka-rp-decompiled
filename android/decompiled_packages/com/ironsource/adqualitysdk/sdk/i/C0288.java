package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.core.ad.AdInteractor;
import com.smaato.sdk.core.util.StateMachine;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʸ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0288 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f1081;

    public C0288(C0798 c0798) {
        this.f1081 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f1081;
        AdInteractor adInteractor = (AdInteractor) arrayList.get(0);
        StateMachine.Listener listener = (StateMachine.Listener) arrayList.get(1);
        c0798.getClass();
        adInteractor.addStateListener(listener);
        return null;
    }
}
