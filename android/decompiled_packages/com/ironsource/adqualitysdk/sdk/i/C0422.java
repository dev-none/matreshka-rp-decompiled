package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Bundle;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ג, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0422 extends AbstractC0635 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f1539;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f1540;

    public C0422(C1013 c1013, ArrayList arrayList) {
        this.f1539 = c1013;
        this.f1540 = arrayList;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("8+9z35rg+c7o+HHOi+j7wvg=\n", "nIEyvO6Jj6c=\n"), Arrays.asList(activity, bundle));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("xfVbidgfv07e4l6P3wK7SNP+fg==\n", "qpsa6qx2ySc=\n"), Collections.singletonList(activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("O3hgOrKZb74gb3E4s4N8sw==\n", "VBYhWcbwGdc=\n"), Collections.singletonList(activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("vgAh2RycvMelFzLfG4Cny7U=\n", "0W5gumj1yq4=\n"), Collections.singletonList(activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("/imJyqKEu3/lPpvIoIiEeOIzqce1iJ5i8DOt\n", "kUfIqdbtzRY=\n"), Arrays.asList(activity, bundle));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("x9Butg7Qs9zcx3yhG8ux0Mw=\n", "qL4v1Xq5xbU=\n"), Collections.singletonList(activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        if (C1013.m8857(this.f1539, activity, this.f1540)) {
            m8535(StringFog.decrypt("UlDY7QqaKqpJR8r6EYMsplk=\n", "PT6Zjn7zXMM=\n"), Collections.singletonList(activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, com.ironsource.adqualitysdk.sdk.i.InterfaceC0463
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8453(Activity activity) {
        m8535(StringFog.decrypt("/qO3R3bEi8vkv5hSYsKB+f6/k1B0+ZvR9Q==\n", "kc32NwaW7r8=\n"), Collections.singletonList(activity));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, com.ironsource.adqualitysdk.sdk.i.InterfaceC0463
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8454(Activity activity) {
        m8535(StringFog.decrypt("l2lUV6CvhZqMU3plsZ+Lk4poYEm0\n", "+AcVJ9D84PQ=\n"), Collections.singletonList(activity));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8535(String str, List list) {
        C1013.m8856(this.f1539, AbstractC0343.m8497("/AMgj4VNZqXxCTKDkF1xsNhO\n", "vWBU5vMkEtw=\n", new StringBuilder(), str), true, false, list);
        AbstractC1766n.m8385(new C0426(this, str, list));
    }
}
