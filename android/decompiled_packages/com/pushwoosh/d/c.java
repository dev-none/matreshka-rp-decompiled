package com.pushwoosh.d;

import java.util.HashSet;

/* JADX INFO: loaded from: classes6.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashSet f5052a = new HashSet();
    public final HashSet b = new HashSet();
    public int c;

    public final synchronized void a() {
        this.f5052a.clear();
        this.b.clear();
        this.c++;
    }
}
