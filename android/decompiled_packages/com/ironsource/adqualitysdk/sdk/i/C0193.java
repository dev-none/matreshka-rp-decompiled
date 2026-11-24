package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.ads.AdContainer;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ĸ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0193 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f794;

    public C0193(C1100 c1100) {
        this.f794 = c1100;
    }

    /* JADX WARN: Code duplicated, block: B:13:0x003b  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f794;
        byte b = 0;
        String str = (String) arrayList.get(0);
        c1100.getClass();
        int iHashCode = str.hashCode();
        if (iHashCode != -1097819034) {
            if (iHashCode != 1554700484 || !str.equals(StringFog.decrypt("JGnuILNDGLMgevs6pksCtDpp5i2z\n", "dCWvY/YOXf0=\n"))) {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("cbkWBLGnaG91qgMepK9yZ3S5GxS3uGhkbw==\n", "IfVXR/TqLSE=\n"))) {
            b = 1;
        } else {
            b = -1;
        }
        if (b == 0) {
            return AdContainer.RenderingProperties.PlacementType.PLACEMENT_TYPE_INLINE;
        }
        if (b != 1) {
            return null;
        }
        return AdContainer.RenderingProperties.PlacementType.PLACEMENT_TYPE_FULLSCREEN;
    }
}
