package io.appmetrica.analytics.impl;

import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qi, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2404qi implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f6277a;

    public C2404qi(Map<String, ?> map) {
        this.f6277a = map;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(String str) {
        return this.f6277a.containsKey(str) ? new so(this, false, String.format("Failed to activate AppMetrica with provided apiKey ApiKey %s has already been used by another reporter.", str)) : new so(this, true, "");
    }
}
