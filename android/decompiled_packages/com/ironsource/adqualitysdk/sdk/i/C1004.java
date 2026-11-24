package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.נּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1004 implements InterfaceC0969 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0968 f3634;

    public C1004(C0968 c0968) {
        this.f3634 = c0968;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0969
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8849(List list) {
        AbstractC0904 abstractC0904M8838 = this.f3634.m8838(list);
        if ((abstractC0904M8838 instanceof C1748e0) || (abstractC0904M8838 instanceof C0527)) {
            return abstractC0904M8838;
        }
        this.f3634.m8847(StringFog.decrypt("bfRqLg2r17UI+ns5B77QvU2seD4a/8C0S+lzPQu7kg==\n", "KIwaS27fstE=\n") + abstractC0904M8838);
        throw null;
    }
}
