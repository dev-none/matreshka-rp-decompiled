package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.צ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0440 implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0427 f1580;

    public C0440(C0427 c0427) {
        this.f1580 = c0427;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8401() {
        HashMap map;
        C1775s.f495 = AbstractC0895.m8747().mo8756();
        AbstractC0637.f2230 = AbstractC0895.m8747().mo8757();
        this.f1580.f1547.f1527 = AbstractC0895.m8747().mo8763();
        AbstractC0323.m8477(StringFog.decrypt("6grmiotqmVzbKOmKj26IQQ==\n", "qWWI5O4J7TM=\n"), StringFog.decrypt("LNRz7xMZC1APnWngGAELXwTUeusVVQFRBtNl7QUaEE0=\n", "aL0AjnF1Yj4=\n"));
        C0418 c0418 = this.f1580.f1547;
        c0418.getClass();
        ArrayList<C0929> arrayList = new ArrayList();
        for (C0929 c0929 : c0418.f1533 != null ? new ArrayList(c0418.f1533) : new ArrayList()) {
            if (c0418.m8534(c0929.f3284.f2309)) {
                arrayList.add(c0929);
            }
        }
        for (C0929 c09210 : arrayList) {
            String str = C0418.f1521;
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("i6sz+2PsXmuo4g==\n", "z8JAmgGANwU=\n"));
            sb.append(c09210.f3284.f2308);
            AbstractC0323.m8480(str, str, AbstractC0970.m8850("1ocNipbVZjmZlg==\n", "9uRi5PiwBU0=\n", sb), true);
            String str2 = c09210.f3284.f2309;
            synchronized (c0418) {
                map = c0418.f1531;
            }
            c0418.m8533(str2, (JSONObject) map.get(str2));
            AbstractC1766n.m8388(new C0534(c09210));
            ((ArrayList) c0418.m8525()).remove(c09210);
        }
    }
}
