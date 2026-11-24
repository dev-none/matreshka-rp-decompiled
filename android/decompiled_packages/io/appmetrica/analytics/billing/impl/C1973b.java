package io.appmetrica.analytics.billing.impl;

import io.appmetrica.analytics.billinginterface.internal.BillingInfo;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.billing.impl.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1973b implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final i f5408a;

    /* JADX WARN: Multi-variable type inference failed */
    public C1973b() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final d fromModel(C1972a c1972a) {
        d dVar = new d();
        List list = c1972a.f5407a;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(this.f5408a.fromModel((BillingInfo) it.next()));
        }
        Object[] array = arrayList.toArray(new c[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        dVar.f5410a = (c[]) array;
        dVar.b = c1972a.b;
        return dVar;
    }

    public C1973b(i iVar) {
        this.f5408a = iVar;
    }

    public /* synthetic */ C1973b(i iVar, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new i() : iVar);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C1972a toModel(d dVar) {
        c[] cVarArr = dVar.f5410a;
        ArrayList arrayList = new ArrayList(cVarArr.length);
        for (c cVar : cVarArr) {
            arrayList.add(this.f5408a.toModel(cVar));
        }
        return new C1972a(arrayList, dVar.b);
    }
}
