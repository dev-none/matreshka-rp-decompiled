package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ἷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0906 implements InterfaceC0408 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0905 f3219;

    public C0906(C0905 c0905) {
        this.f3219 = c0905;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0408
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8513(C0686 c0686) {
        C0689 c0689 = c0686.f2403;
        int i = c0689.f2408;
        String str = c0689.f2407;
        if (i >= 200 && i <= 299) {
            String strDecrypt = StringFog.decrypt("hXMW3csMUVy3\n", "xB13sbJ4OD8=\n");
            AbstractC0323.m8478(strDecrypt, strDecrypt, StringFog.decrypt("c9nvwvUtpRhX1f6R5y2kCEfG9IznaPYLW8S7kfFjsihC0/WWtQ==\n", "NLab4pQN1m0=\n"), this.f3219.f3218, true);
            for (C0760 c0760 : this.f3219.f3217) {
                C1072 c1072 = this.f3219.f3215.f2614;
                C1141 c1141 = c0760.f2593;
                c1072.getClass();
                C0783.m8721().post(new C1076(c1072, c1141));
            }
            AbstractC1766n.m8384(new C0942(this, c0686));
            return;
        }
        if (i == 403) {
            synchronized (this.f3219.f3215) {
                Iterator it = this.f3219.f3215.f2608.iterator();
                while (it.hasNext()) {
                    AbstractC1766n.m8384(new C0948((C0378) it.next()));
                }
            }
        } else {
            AbstractC0323.m8477(StringFog.decrypt("VkTjr2CHlCpk\n", "FyqCwxnz/Uk=\n"), StringFog.decrypt("EvQfT393LzsmuwVPZWtmIjP0HE0raC8hKbsBT2V7AyMk9QYEK1gpIWHpF1l7cCgmJKFS\n", "QZtyKgsfRlU=\n") + i + " " + str);
        }
        AbstractC1766n.m8384(new C0937(this, c0686, i, str));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0408
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8514(C0686 c0686, String str) {
        AbstractC1766n.m8384(new C0934(this, c0686, str));
    }
}
