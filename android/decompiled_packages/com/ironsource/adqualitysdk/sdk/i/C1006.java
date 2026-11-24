package com.ironsource.adqualitysdk.sdk.i;

import android.R;
import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ףּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1006 extends AbstractC0325 implements InterfaceC0463 {

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public C1015 f3637;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public boolean f3638;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public boolean f3639;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public boolean f3640;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public boolean f3641;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public Class f3642;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public C0730 f3643;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f3636 = StringFog.decrypt("/zTcEtDVjO7/M+AayNiU8sw=\n", "vleoe6a8+Jc=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f3635 = StringFog.decrypt("5utXolC5YFL260/+Wq4hXeH1T+1VontF9uBRokqvZBLE4GnkVrxh\n", "hYQ6jDnLDzw=\n");

    public C1006(JSONObject jSONObject, C0434 c0434) {
        super(c0434);
        this.f3641 = false;
        this.f3640 = false;
        this.f3639 = false;
        this.f3638 = false;
        C1015 c1015 = new C1015(jSONObject);
        this.f1196 = c1015;
        this.f3637 = c1015;
        AbstractC1766n.m8385(new C1098(this));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static boolean m8854(C1006 c1006, Activity activity) {
        c1006.getClass();
        Class<?> cls = activity.getClass();
        Class cls2 = c1006.f3642;
        if (cls2 != null) {
            return c1006.f3637.f3680 ? cls2.equals(cls) : cls2.isAssignableFrom(cls);
        }
        return false;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        C1080 c1080 = new C1080(this, activity, bundle);
        if (this.f3637.f3679) {
            AbstractC1766n.m8384(c1080);
        } else {
            AbstractC1766n.m8386(c1080);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        C1121 c1121 = new C1121(this, activity);
        if (this.f3637.f3679) {
            AbstractC1766n.m8384(c1121);
        } else {
            AbstractC1766n.m8386(c1121);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        AbstractC1766n.m8388(new C1036(this, activity));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        C1040 c1040 = new C1040(this, activity);
        if (this.f3637.f3679) {
            AbstractC1766n.m8384(c1040);
        } else {
            AbstractC1766n.m8386(c1040);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        C1039 c1039 = new C1039(this, activity, bundle);
        if (this.f3637.f3679) {
            AbstractC1766n.m8384(c1039);
        } else {
            AbstractC1766n.m8386(c1039);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        AbstractC1766n.m8388(new C1052(this, activity));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        C1027 c1027 = new C1027(this, activity);
        if (this.f3637.f3679) {
            AbstractC1766n.m8384(c1027);
        } else {
            AbstractC1766n.m8386(c1027);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8381(Object obj, ArrayList arrayList) {
        Activity activity = (Activity) obj;
        C1015 c1015 = this.f3637;
        AbstractC1769o0.m8405(activity, WebView.class, c1015.f3681, c1015.f3682, false, false, null, c1015.f1306, arrayList);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾒ */
    public final InterfaceC0510 mo8382() {
        return this;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ */
    public final View mo8379(Object obj) {
        return ((Activity) obj).findViewById(R.id.content);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0463
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8453(Activity activity) {
        AbstractC1766n.m8388(new C1096(this, activity));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0325
    /* JADX INFO: renamed from: ﾇ */
    public final M0 mo8380() {
        return new N0();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0463
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8454(Activity activity) {
        AbstractC1766n.m8388(new C1097(this, activity));
    }
}
