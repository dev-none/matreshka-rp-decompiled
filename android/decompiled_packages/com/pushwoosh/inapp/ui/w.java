package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class w extends x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5174a;

    public w(String url) {
        Intrinsics.checkNotNullParameter(url, "url");
        this.f5174a = url;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof w) && Intrinsics.areEqual(this.f5174a, ((w) obj).f5174a);
    }

    public final int hashCode() {
        return this.f5174a.hashCode();
    }

    public final String toString() {
        return "Url(url=" + this.f5174a + ')';
    }
}
