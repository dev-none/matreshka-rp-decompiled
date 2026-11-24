package com.iab.omid.library.corpmailru.walking.a;

import java.util.HashSet;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class a extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final HashSet<String> f4479a;
    protected final JSONObject b;
    protected final long c;

    public a(b.InterfaceC0172b interfaceC0172b, HashSet<String> hashSet, JSONObject jSONObject, long j) {
        super(interfaceC0172b);
        this.f4479a = new HashSet<>(hashSet);
        this.b = jSONObject;
        this.c = j;
    }
}
