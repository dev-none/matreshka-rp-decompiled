package com.google.android.play.core.assetpacks;

import android.os.Handler;
import android.os.Looper;
import com.google.android.play.core.listener.StateUpdatedListener;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class bh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final com.google.android.play.core.assetpacks.internal.o f4242a = new com.google.android.play.core.assetpacks.internal.o("AssetPackStateListenerRegistryV2");
    private final Set b = new HashSet();
    private final Handler c = new Handler(Looper.getMainLooper());

    bh() {
    }

    final synchronized void a() {
        f4242a.d("clearListeners", new Object[0]);
        this.b.clear();
    }

    final synchronized void b(StateUpdatedListener stateUpdatedListener) {
        f4242a.d("registerListener", new Object[0]);
        com.google.android.play.core.assetpacks.internal.aj.a(stateUpdatedListener, "Registered Asset Pack listener should not be null.");
        this.b.add(stateUpdatedListener);
    }

    final synchronized void c(StateUpdatedListener stateUpdatedListener) {
        f4242a.d("unregisterListener", new Object[0]);
        com.google.android.play.core.assetpacks.internal.aj.a(stateUpdatedListener, "Unregistered Asset Pack listener should not be null.");
        this.b.remove(stateUpdatedListener);
    }

    final synchronized void d(AssetPackState assetPackState) {
        Iterator it = new HashSet(this.b).iterator();
        while (it.hasNext()) {
            ((StateUpdatedListener) it.next()).onStateUpdate(assetPackState);
        }
    }

    final void e(final AssetPackState assetPackState) {
        this.c.post(new Runnable() { // from class: com.google.android.play.core.assetpacks.bg
            @Override // java.lang.Runnable
            public final void run() {
                this.f4241a.d(assetPackState);
            }
        });
    }
}
