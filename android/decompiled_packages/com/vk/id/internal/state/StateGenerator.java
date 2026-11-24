package com.vk.id.internal.state;

import com.vk.id.internal.store.InternalVKIDPrefsStore;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IntIterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.Random;
import kotlin.ranges.CharRange;
import kotlin.ranges.IntRange;

/* JADX INFO: compiled from: StateGenerator.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0001\u0018\u0000 \b2\u00020\u0001:\u0001\bB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\u0006\u001a\u00020\u0007R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lcom/vk/id/internal/state/StateGenerator;", "", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "<init>", "(Lcom/vk/id/internal/store/InternalVKIDPrefsStore;)V", "regenerateState", "", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class StateGenerator {
    private static final int STATE_LENGTH = 32;
    private final InternalVKIDPrefsStore prefsStore;
    public static final int $stable = 8;

    public StateGenerator(InternalVKIDPrefsStore prefsStore) {
        Intrinsics.checkNotNullParameter(prefsStore, "prefsStore");
        this.prefsStore = prefsStore;
    }

    public final String regenerateState() {
        List listPlus = CollectionsKt.plus((Collection) CollectionsKt.plus((Iterable) new CharRange('A', 'Z'), (Iterable) new CharRange('a', 'z')), (Iterable) new CharRange('0', '9'));
        IntRange intRange = new IntRange(1, 32);
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(intRange, 10));
        Iterator<Integer> it = intRange.iterator();
        while (it.hasNext()) {
            ((IntIterator) it).nextInt();
            Character ch2 = (Character) CollectionsKt.random(listPlus, Random.INSTANCE);
            ch2.charValue();
            arrayList.add(ch2);
        }
        String strJoinToString$default = CollectionsKt.joinToString$default(arrayList, "", null, null, 0, null, null, 62, null);
        this.prefsStore.setState(strJoinToString$default);
        return strJoinToString$default;
    }
}
