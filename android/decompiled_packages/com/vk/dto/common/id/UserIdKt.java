package com.vk.dto.common.id;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.ReplaceWith;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UserId.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\u001a\n\u0010\u0005\u001a\u00020\u0006*\u00020\u0006\u001a\n\u0010\u0007\u001a\u00020\b*\u00020\u0006\u001a\n\u0010\t\u001a\u00020\b*\u00020\u0006\u001a\n\u0010\n\u001a\u00020\b*\u00020\u0006\u001a\f\u0010\u000b\u001a\u00020\f*\u00020\u0006H\u0007\u001a\u0018\u0010\r\u001a\b\u0012\u0004\u0012\u00020\f0\u000e*\b\u0012\u0004\u0012\u00020\u00060\u000eH\u0007\u001a\n\u0010\u000f\u001a\u00020\u0006*\u00020\u0006\u001a\f\u0010\u0010\u001a\u00020\u0006*\u00020\fH\u0007\u001a\n\u0010\u0011\u001a\u00020\u0006*\u00020\u0012\u001a\r\u0010\u0013\u001a\u00020\u0006*\u00020\u0006H\u0086\u0002\"\u001e\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00018\u0002@\u0002X\u0083\u000e¢\u0006\b\n\u0000\u0012\u0004\b\u0003\u0010\u0004¨\u0006\u0014"}, d2 = {"legacyObserver", "Lkotlin/Function0;", "", "getLegacyObserver$annotations", "()V", "abs", "Lcom/vk/dto/common/id/UserId;", "isGroupId", "", "isReal", "isUserId", "legacyValue", "", "mapLegacyValues", "", "negative", "toLegacyUserId", "toUserId", "", "unaryMinus", "id_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class UserIdKt {
    private static volatile Function0<Unit> legacyObserver = new Function0<Unit>() { // from class: com.vk.dto.common.id.UserIdKt$legacyObserver$1
        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final void invoke2() {
        }

        @Override // kotlin.jvm.functions.Function0
        public /* bridge */ /* synthetic */ Unit invoke() {
            invoke2();
            return Unit.INSTANCE;
        }
    };

    @Deprecated(message = "Only for debug usage")
    private static /* synthetic */ void getLegacyObserver$annotations() {
    }

    public static final boolean isReal(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return userId.getValue() != 0;
    }

    public static final UserId abs(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return userId.copy(Math.abs(userId.getValue()));
    }

    public static final UserId negative(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return userId.copy(-userId.getValue());
    }

    public static final UserId unaryMinus(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return negative(userId);
    }

    public static final boolean isGroupId(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return userId.getValue() < 0;
    }

    public static final boolean isUserId(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        return userId.getValue() > 0;
    }

    public static final UserId toUserId(long j) {
        return new UserId(j);
    }

    @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
    public static final int legacyValue(UserId userId) {
        Intrinsics.checkNotNullParameter(userId, "<this>");
        legacyObserver.invoke();
        return (int) userId.getValue();
    }

    @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
    public static final List<Integer> mapLegacyValues(List<UserId> list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        legacyObserver.invoke();
        List<UserId> list2 = list;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list2, 10));
        Iterator<T> it = list2.iterator();
        while (it.hasNext()) {
            arrayList.add(Integer.valueOf(legacyValue((UserId) it.next())));
        }
        return arrayList;
    }

    @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "toUserId()", imports = {"com.vk.dto.common.id"}))
    public static final UserId toLegacyUserId(int i) {
        legacyObserver.invoke();
        return new UserId(i);
    }
}
