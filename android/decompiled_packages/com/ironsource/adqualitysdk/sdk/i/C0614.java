package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.applovin.communicator.AppLovinCommunicator;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0614 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f2148;

    public C0614(C0539 c0539) {
        this.f2148 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f2148;
        Context context = (Context) arrayList.get(0);
        String str = (String) arrayList.get(1);
        String str2 = (String) arrayList.get(2);
        c0539.getClass();
        AppLovinCommunicator.getInstance(context).subscribe(new C0562(str), str2);
        return null;
    }
}
