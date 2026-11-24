package com.my.target;

import android.view.View;
import com.my.target.nativeads.IAd;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes6.dex */
public abstract class k7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final WeakHashMap f4679a = new WeakHashMap();

    public static void a(View view, IAd iAd) {
        IAd iAd2;
        a(iAd);
        WeakHashMap weakHashMap = f4679a;
        WeakReference weakReference = (WeakReference) weakHashMap.get(view);
        if (weakReference != null && (iAd2 = (IAd) weakReference.get()) != null) {
            iAd2.unregisterView();
        }
        weakHashMap.put(view, new WeakReference(iAd));
    }

    public static void a(IAd iAd) {
        IAd iAd2;
        for (Map.Entry entry : f4679a.entrySet()) {
            View view = (View) entry.getKey();
            WeakReference weakReference = (WeakReference) entry.getValue();
            if (weakReference != null && ((iAd2 = (IAd) weakReference.get()) == null || iAd2 == iAd)) {
                f4679a.remove(view);
                return;
            }
        }
    }
}
