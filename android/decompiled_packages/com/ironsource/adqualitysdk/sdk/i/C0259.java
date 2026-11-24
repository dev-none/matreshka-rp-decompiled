package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0259 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0182 f949;

    public C0259(C0182 c0182) {
        this.f949 = c0182;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0783 c0783 = this.f949.f756.f748.f4001;
        String strDecrypt = StringFog.decrypt("P71Mk+Z7KSUqpX6RrXM=\n", "WdEt9MgdQFc=\n");
        C0262 c0262 = new C0262(this);
        c0783.getClass();
        C0783.m8721().post(new C0840(c0783, strDecrypt, c0262));
    }
}
