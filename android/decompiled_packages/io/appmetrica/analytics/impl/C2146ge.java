package io.appmetrica.analytics.impl;

import android.text.TextUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ge, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2146ge implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6095a;

    public C2146ge(String str) {
        this.f6095a = str;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(String str) {
        if (!TextUtils.isEmpty(str)) {
            return new so(this, true, "");
        }
        return new so(this, false, this.f6095a + " is empty.");
    }
}
