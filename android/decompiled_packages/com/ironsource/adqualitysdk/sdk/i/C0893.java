package com.ironsource.adqualitysdk.sdk.i;

import android.R;
import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ἲ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0893 implements k1 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3156;

    public C0893(C0806 c0806) {
        this.f3156 = c0806;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8364(View view) {
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8365(View view) {
        boolean z;
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            z = c1142M8930.f4011;
        }
        if (z) {
            this.f3156.m8728();
            return;
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            if (viewGroup.getContext() instanceof Activity) {
                ViewGroup viewGroup2 = (ViewGroup) ((Activity) viewGroup.getContext()).findViewById(R.id.content);
                this.f3156.getClass();
                if (viewGroup2 != null) {
                    ViewGroup viewGroup3 = viewGroup2;
                    while (viewGroup2 != null) {
                        ViewParent parent = viewGroup2.getParent();
                        if (parent != viewGroup) {
                            if (!(parent instanceof ViewGroup)) {
                                break;
                            }
                            viewGroup3 = viewGroup2;
                            viewGroup2 = (ViewGroup) parent;
                        } else if (viewGroup3 == viewGroup2) {
                            break;
                        } else {
                            viewGroup = viewGroup3;
                        }
                    }
                    viewGroup = viewGroup2;
                }
            }
            C0806 c0806 = this.f3156;
            c0806.getClass();
            C0806.m8727(c0806, viewGroup, new ViewOnLayoutChangeListenerC0875(c0806, viewGroup));
        }
    }
}
