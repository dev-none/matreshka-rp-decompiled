package io.appmetrica.analytics.impl;

import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.text.Charsets;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2371pa implements U9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final O8 f6255a = new O8();

    public final C2218j9[] a(byte[] bArr) {
        int i = 0;
        if (bArr == null) {
            return new C2218j9[0];
        }
        Map<String, byte[]> model = this.f6255a.toModel(bArr);
        C2218j9[] c2218j9Arr = new C2218j9[model.size()];
        for (Object obj : model.entrySet()) {
            int i2 = i + 1;
            if (i < 0) {
                CollectionsKt.throwIndexOverflow();
            }
            Map.Entry entry = (Map.Entry) obj;
            C2218j9 c2218j9 = new C2218j9();
            c2218j9.f6149a = ((String) entry.getKey()).getBytes(Charsets.UTF_8);
            c2218j9.b = (byte[]) entry.getValue();
            c2218j9Arr[i] = c2218j9;
            i = i2;
        }
        return c2218j9Arr;
    }
}
