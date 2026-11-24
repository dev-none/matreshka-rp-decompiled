package com.pushwoosh.b;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;

/* JADX INFO: loaded from: classes6.dex */
public final class f extends FragmentManager.FragmentLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ j f5040a;

    public f(j jVar) {
        this.f5040a = jVar;
    }

    @Override // androidx.fragment.app.FragmentManager.FragmentLifecycleCallbacks
    public final void onFragmentStarted(FragmentManager fragmentManager, Fragment fragment) {
        super.onFragmentStarted(fragmentManager, fragment);
        String name = fragment.getClass().getName();
        if (!name.startsWith("androidx.") && !name.startsWith("android.") && !name.startsWith("com.google.") && !name.startsWith("com.pushwoosh.")) {
            this.f5040a.d = fragment.getClass().getSimpleName();
        }
        j jVar = this.f5040a;
        if (jVar.i) {
            return;
        }
        i iVar = jVar.h;
        iVar.f5041a.removeCallbacks(iVar.d);
        iVar.e = true;
        iVar.f5041a.postDelayed(iVar.d, iVar.b);
    }
}
