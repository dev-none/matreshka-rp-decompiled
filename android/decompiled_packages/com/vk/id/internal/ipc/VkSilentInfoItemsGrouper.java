package com.vk.id.internal.ipc;

import com.vk.silentauth.SilentAuthInfo;
import com.vk.silentauth.SilentAuthInfoWithProviderWeight;
import com.vk.silentauth.SilentTokenProviderInfo;
import io.sentry.metrics.MetricsUnit;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VkSilentInfoItemsGrouper.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\bÁ\u0002\u0018\u00002\u00020\u0001:\u0001\bB\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005*\b\u0012\u0004\u0012\u00020\u00060\u0005J\u0018\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005*\b\u0012\u0004\u0012\u00020\u00060\u0005H\u0002¨\u0006\t"}, d2 = {"Lcom/vk/id/internal/ipc/VkSilentInfoItemsGrouper;", "", "<init>", "()V", "groupByWeightAndUserHash", "", "Lcom/vk/silentauth/SilentAuthInfoWithProviderWeight;", "groupByUserHash", "SilentAuthInfoPriorityComparator", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VkSilentInfoItemsGrouper {
    public static final int $stable = 0;
    public static final VkSilentInfoItemsGrouper INSTANCE = new VkSilentInfoItemsGrouper();

    private VkSilentInfoItemsGrouper() {
    }

    public final List<SilentAuthInfoWithProviderWeight> groupByWeightAndUserHash(List<SilentAuthInfoWithProviderWeight> list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        List listReversed = CollectionsKt.reversed(CollectionsKt.sortedWith(groupByUserHash(list), new SilentAuthInfoPriorityComparator()));
        HashSet hashSet = new HashSet();
        ArrayList arrayList = new ArrayList();
        for (Object obj : listReversed) {
            if (hashSet.add(Long.valueOf(((SilentAuthInfoWithProviderWeight) obj).getInfo().getDistinctId()))) {
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    private final List<SilentAuthInfoWithProviderWeight> groupByUserHash(List<SilentAuthInfoWithProviderWeight> list) {
        Object next;
        Object next2;
        SilentAuthInfoWithProviderWeight silentAuthInfoWithProviderWeightCopy$default;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Object obj : list) {
            String userHash = ((SilentAuthInfoWithProviderWeight) obj).getInfo().getUserHash();
            Object obj2 = linkedHashMap.get(userHash);
            if (obj2 == null) {
                obj2 = (List) new ArrayList();
                linkedHashMap.put(userHash, obj2);
            }
            ((List) obj2).add(obj);
        }
        Map mutableMap = MapsKt.toMutableMap(linkedHashMap);
        ArrayList arrayList = new ArrayList();
        List list2 = (List) mutableMap.remove("");
        if (list2 != null) {
            arrayList.addAll(list2);
        }
        Iterator it = mutableMap.entrySet().iterator();
        while (it.hasNext()) {
            List list3 = (List) ((Map.Entry) it.next()).getValue();
            Iterator it2 = list3.iterator();
            if (it2.hasNext()) {
                next = it2.next();
                if (it2.hasNext()) {
                    int providerWeight = ((SilentAuthInfoWithProviderWeight) next).getProviderWeight();
                    do {
                        Object next3 = it2.next();
                        int providerWeight2 = ((SilentAuthInfoWithProviderWeight) next3).getProviderWeight();
                        if (providerWeight < providerWeight2) {
                            next = next3;
                            providerWeight = providerWeight2;
                        }
                    } while (it2.hasNext());
                }
            } else {
                next = null;
            }
            SilentAuthInfoWithProviderWeight silentAuthInfoWithProviderWeight = (SilentAuthInfoWithProviderWeight) next;
            Integer numValueOf = silentAuthInfoWithProviderWeight != null ? Integer.valueOf(silentAuthInfoWithProviderWeight.getProviderWeight()) : null;
            ArrayList arrayList2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(list3, 10));
            Iterator it3 = list3.iterator();
            while (it3.hasNext()) {
                arrayList2.add(SilentTokenProviderInfo.INSTANCE.fromSilentAuthInfo(((SilentAuthInfoWithProviderWeight) it3.next()).getInfo()));
            }
            ArrayList arrayList3 = arrayList2;
            ArrayList arrayList4 = new ArrayList();
            for (Object obj3 : list3) {
                int providerWeight3 = ((SilentAuthInfoWithProviderWeight) obj3).getProviderWeight();
                if (numValueOf != null && providerWeight3 == numValueOf.intValue()) {
                    arrayList4.add(obj3);
                }
            }
            Iterator it4 = arrayList4.iterator();
            if (it4.hasNext()) {
                next2 = it4.next();
                if (it4.hasNext()) {
                    int weight = ((SilentAuthInfoWithProviderWeight) next2).getInfo().getWeight();
                    do {
                        Object next4 = it4.next();
                        int weight2 = ((SilentAuthInfoWithProviderWeight) next4).getInfo().getWeight();
                        if (weight < weight2) {
                            next2 = next4;
                            weight = weight2;
                        }
                    } while (it4.hasNext());
                }
            } else {
                next2 = null;
            }
            SilentAuthInfoWithProviderWeight silentAuthInfoWithProviderWeight2 = (SilentAuthInfoWithProviderWeight) next2;
            if (silentAuthInfoWithProviderWeight2 != null && (silentAuthInfoWithProviderWeightCopy$default = SilentAuthInfoWithProviderWeight.copy$default(silentAuthInfoWithProviderWeight2, SilentAuthInfo.copy$default(silentAuthInfoWithProviderWeight2.getInfo(), null, null, null, 0L, null, null, null, null, null, null, null, null, 0, null, null, arrayList3, 0, 98303, null), 0, 2, null)) != null) {
                arrayList.add(silentAuthInfoWithProviderWeightCopy$default);
            }
        }
        return arrayList;
    }

    /* JADX INFO: compiled from: VkSilentInfoItemsGrouper.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\b\u0002\u0018\u00002\u0012\u0012\u0004\u0012\u00020\u00020\u0001j\b\u0012\u0004\u0012\u00020\u0002`\u0003B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0018\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00022\u0006\u0010\t\u001a\u00020\u0002H\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/internal/ipc/VkSilentInfoItemsGrouper$SilentAuthInfoPriorityComparator;", "Ljava/util/Comparator;", "Lcom/vk/silentauth/SilentAuthInfoWithProviderWeight;", "Lkotlin/Comparator;", "<init>", "()V", "compare", "", "first", MetricsUnit.Duration.SECOND, "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class SilentAuthInfoPriorityComparator implements Comparator<SilentAuthInfoWithProviderWeight> {
        @Override // java.util.Comparator
        public int compare(SilentAuthInfoWithProviderWeight first, SilentAuthInfoWithProviderWeight second) {
            Intrinsics.checkNotNullParameter(first, "first");
            Intrinsics.checkNotNullParameter(second, "second");
            int iCompare = Intrinsics.compare(first.getProviderWeight(), second.getProviderWeight());
            if (iCompare != 0) {
                return iCompare;
            }
            int iCompare2 = Intrinsics.compare(first.getInfo().getWeight(), second.getInfo().getWeight());
            return iCompare2 != 0 ? iCompare2 : Boolean.compare(!Intrinsics.areEqual(first.getInfo().getUserHash(), ""), !Intrinsics.areEqual(second.getInfo().getUserHash(), ""));
        }
    }
}
