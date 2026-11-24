package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.toggle.SimpleThreadSafeToggle;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Eo extends SimpleThreadSafeToggle {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakHashMap f5666a;

    public Eo() {
        super(false, "[WakelocksToggle]");
        this.f5666a = new WeakHashMap();
    }

    public final synchronized void a(Object obj) {
        this.f5666a.put(obj, null);
        if (this.f5666a.size() == 1) {
            updateState(true);
        }
    }

    public final synchronized void b(Object obj) {
        this.f5666a.remove(obj);
        if (this.f5666a.isEmpty()) {
            updateState(false);
        }
    }
}
