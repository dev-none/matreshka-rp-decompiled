package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class n0 extends Lambda implements Function0<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ List<o0> f6652a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(List list) {
        super(0);
        this.f6652a = list;
    }

    @Override // kotlin.jvm.functions.Function0
    public final String invoke() {
        List<o0> list = this.f6652a;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new a0(((o0) it.next()).f6657a));
        }
        return "Getting first 10 from storage: " + arrayList;
    }
}
