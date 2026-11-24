package com.pushwoosh.v;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5322a;
    public final Map b;

    public h(String str, Map map) {
        this.f5322a = str;
        this.b = map != null ? Collections.unmodifiableMap(new HashMap(map)) : Collections.EMPTY_MAP;
    }
}
