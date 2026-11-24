package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.applovin.impl.sdk.AppLovinBroadcastManager;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒱ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0647 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f2255;

    public C0647(C0539 c0539) {
        this.f2255 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f2255;
        Context context = (Context) arrayList.get(0);
        c0539.getClass();
        return AppLovinBroadcastManager.getInstance(context);
    }
}
