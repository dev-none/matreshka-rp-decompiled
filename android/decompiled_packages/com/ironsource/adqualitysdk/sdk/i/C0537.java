package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ঽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0537 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1860;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0349 f1861;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ String f1862;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0613 f1863;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1864;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f1865;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0265 f1866;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0929 f1867;

    public C0537(C0418 c0418, C0929 c0929, AbstractC0265 abstractC0265, String str, boolean z, C0613 c0613, String str2, AbstractC0349 abstractC0349, Context context) {
        this.f1860 = c0418;
        this.f1867 = c0929;
        this.f1866 = abstractC0265;
        this.f1865 = str;
        this.f1864 = z;
        this.f1863 = c0613;
        this.f1862 = str2;
        this.f1861 = abstractC0349;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0331 c0331;
        boolean zMo8441;
        String str;
        String str2;
        C0613 c0613;
        C0613 c0614;
        if (this.f1860.f1535.get() || this.f1867 == null || C0418.m8516(this.f1860).contains(this.f1866) || (c0331 = this.f1860.f1526) == null) {
            return;
        }
        AbstractC1766n.m8384(new C0367(c0331, this.f1865, this.f1867, this.f1864));
        C0929 c0929 = this.f1867;
        synchronized (c0929) {
            zMo8441 = c0929.f3281.mo8441();
        }
        if (!zMo8441 && (c0614 = this.f1863) != null) {
            AbstractC1766n.m8388(c0614);
        }
        C0418 c0418 = this.f1860;
        C0929 c09210 = this.f1867;
        c0418.getClass();
        String strM8805 = c09210.m8805();
        if (strM8805 != null && AbstractC0607.m8591(IronSourceAdQuality.getSDKVersion(), strM8805) < 0) {
            AbstractC1766n.m8384(new C0543(this));
            return;
        }
        String strDecrypt = StringFog.decrypt("hyGQXQMOhDO2A59dBwqVLg==\n", "xE7+M2Zt8Fw=\n");
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("AE4KdgumJT0zSQ1lQg==\n", "SSBjAmLHSVQ=\n"));
        sb.append(this.f1862);
        sb.append(StringFog.decrypt("WhHcNKaDXokZDNc3rJRPxghD\n", "emO5Wcn3O6k=\n"));
        if (this.f1864) {
            str = "tiRv/AaW8gI=\n";
            str2 = "nkcOn27zlis=\n";
        } else {
            str = "9FMWDfOTlzb1\n";
            str2 = "3DVzeZD78lI=\n";
        }
        sb.append(StringFog.decrypt(str, str2));
        String string = sb.toString();
        int i = AbstractC0728.f2467;
        String strM8497 = AbstractC0343.m8497("lAk+RA==\n", "x1tyZFkOAlM=\n", new StringBuilder(), strDecrypt);
        AbstractC0323.m8480(strM8497, strM8497, string, false);
        AbstractC0349 abstractC0349 = this.f1861;
        HashMap mapMo8320 = abstractC0349.mo8320();
        abstractC0349.f1346 = mapMo8320;
        mapMo8320.put(AbstractC0349.f1342, new C0360(abstractC0349));
        abstractC0349.f1346.put(AbstractC0349.f1341, new C0354(abstractC0349));
        abstractC0349.f1346.put(AbstractC0349.f1340, new C0353(abstractC0349));
        if (this.f1867.m8804() && (c0613 = this.f1863) != null) {
            AbstractC1766n.m8388(c0613);
        }
        if (C1142.m8930().m8938()) {
            return;
        }
        C0418 c0419 = this.f1860;
        C0929 c09211 = this.f1867;
        String str3 = this.f1862;
        if (!c0419.f1535.get()) {
            String str4 = c09211.f3284.f2309;
            C0331 c0332 = c0419.f1526;
            if (c0332 != null) {
                AbstractC1766n.m8384(new C0376(c0332, str4, EnumC0398.f1491));
                AbstractC1766n.m8384(new C0616(c0419, c09211, str4, str3));
            }
        }
        if (this.f1860.m8534(this.f1867.f3284.f2309)) {
            return;
        }
        C0418.m8516(this.f1860).add(this.f1866);
    }
}
