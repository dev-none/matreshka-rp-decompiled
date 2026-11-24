package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class O2 implements uo {
    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Object obj) {
        C2182ho[] c2182hoArr = ((C2259ko) obj).f6179a;
        return (c2182hoArr == null || c2182hoArr.length == 0) ? new so(this, false, "attributes list is empty") : new so(this, true, "");
    }
}
