package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.device.ads.DTBFetchManager;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﬥ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0990 extends HashMap implements InterfaceC0486 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f3521;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0566 f3522;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C0990(C0982 c0982, HashMap map, C0566 c0566) {
        super(map);
        this.f3521 = c0982;
        this.f3522 = c0566;
    }

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final Object put(Object obj, Object obj2) {
        String str = (String) obj;
        DTBFetchManager dTBFetchManager = (DTBFetchManager) obj2;
        this.f3521.m8501(this, this.f3522, StringFog.decrypt("QtwLyZUgRhFL6SfulzFXEk7pOue9NVVXdv09\n", "BohJj/BUJXk=\n"), str, dTBFetchManager);
        return (DTBFetchManager) super.put(str, dTBFetchManager);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this;
    }
}
