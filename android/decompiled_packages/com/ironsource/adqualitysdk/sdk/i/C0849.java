package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0849 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0840 f3062;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f3063;

    public C0849(C0840 c0840, String str) {
        this.f3062 = c0840;
        this.f3063 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0262 c0262 = this.f3062.f3049;
        boolean zIsEmpty = TextUtils.isEmpty(this.f3063);
        if (zIsEmpty) {
            C0783 c0783 = c0262.f952.f949.f756.f748.f4001;
            String strDecrypt = StringFog.decrypt("swQJ8Q9bEY6mHDvzRFM=\n", "1WholiE9ePw=\n");
            String strDecrypt2 = StringFog.decrypt("3k3F6mQ=\n", "uCypmQFr/OQ=\n");
            c0783.getClass();
            C0783.m8721().post(new C0804(c0783, strDecrypt, strDecrypt2));
        }
        AbstractC1766n.m8385(new C0268(c0262, zIsEmpty));
    }
}
