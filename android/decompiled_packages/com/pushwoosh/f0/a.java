package com.pushwoosh.f0;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Set f5073a;

    public a(String... strArr) {
        this.f5073a = Collections.unmodifiableSet(new HashSet(Arrays.asList(strArr)));
    }
}
