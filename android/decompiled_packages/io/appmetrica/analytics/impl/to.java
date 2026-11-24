package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class to implements uo {
    @Override // io.appmetrica.analytics.impl.uo
    public final so a(List<so> list) {
        LinkedList linkedList = new LinkedList();
        boolean z = true;
        for (so soVar : list) {
            if (!soVar.f6320a) {
                linkedList.add(soVar.b);
                z = false;
            }
        }
        return z ? new so(this, true, "") : new so(this, false, TextUtils.join(", ", linkedList));
    }
}
