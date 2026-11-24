package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵂ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0811 extends WeakHashMap implements InterfaceC0486 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f2886;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0566 f2887;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C0811(C0785 c0785, WeakHashMap weakHashMap, C0566 c0566) {
        super(weakHashMap);
        this.f2886 = c0785;
        this.f2887 = c0566;
    }

    @Override // java.util.WeakHashMap, java.util.AbstractMap, java.util.Map
    public final Object put(Object obj, Object obj2) {
        View view = (View) obj;
        WeakReference weakReference = (WeakReference) obj2;
        this.f2886.m8501(this, this.f2887, StringFog.decrypt("iRUP5mGvaHCQERrkX6tafIoVC6Fnv10=\n", "x3R7jxfKKRQ=\n"), view, weakReference);
        return (WeakReference) super.put(view, weakReference);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this;
    }
}
