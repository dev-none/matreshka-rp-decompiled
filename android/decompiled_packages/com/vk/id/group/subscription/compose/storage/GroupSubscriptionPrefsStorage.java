package com.vk.id.group.subscription.compose.storage;

import com.vk.id.storage.InternalVKIDPreferencesStorage;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: GroupSubscriptionPrefsStorage.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0001\u0018\u0000 \u00102\u00020\u0001:\u0001\u0010B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001c\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000bJ\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\f0\u000b2\u0006\u0010\b\u001a\u00020\tJ\u0010\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\b\u001a\u00020\tH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/vk/id/group/subscription/compose/storage/GroupSubscriptionPrefsStorage;", "", "prefs", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "<init>", "(Lcom/vk/id/storage/InternalVKIDPreferencesStorage;)V", "saveDisplays", "", Constants.USER_ID, "", "displays", "", "Ljava/util/Date;", "getDisplays", "getKey", "", "Companion", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionPrefsStorage {
    private static final String KEY_DISPLAYS_PREFIX = "GROUP_SUBSCRIPTION_DISPLAYS";
    private final InternalVKIDPreferencesStorage prefs;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;

    public GroupSubscriptionPrefsStorage(InternalVKIDPreferencesStorage prefs) {
        Intrinsics.checkNotNullParameter(prefs, "prefs");
        this.prefs = prefs;
    }

    public final void saveDisplays(long userId, Set<? extends Date> displays) {
        Intrinsics.checkNotNullParameter(displays, "displays");
        InternalVKIDPreferencesStorage internalVKIDPreferencesStorage = this.prefs;
        String key = getKey(userId);
        Set<? extends Date> set = displays;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(set, 10));
        Iterator<T> it = set.iterator();
        while (it.hasNext()) {
            arrayList.add(Long.valueOf(((Date) it.next()).getTime()));
        }
        internalVKIDPreferencesStorage.set(key, CollectionsKt.joinToString$default(arrayList, StringUtils.COMMA, null, null, 0, null, null, 62, null));
    }

    public final Set<Date> getDisplays(long userId) {
        List listSplit$default;
        String string = this.prefs.getString(getKey(userId));
        if (string != null && (listSplit$default = StringsKt.split$default((CharSequence) string, new String[]{StringUtils.COMMA}, false, 0, 6, (Object) null)) != null) {
            ArrayList arrayList = new ArrayList();
            for (Object obj : listSplit$default) {
                if (!StringsKt.isBlank((String) obj)) {
                    arrayList.add(obj);
                }
            }
            ArrayList arrayList2 = arrayList;
            ArrayList arrayList3 = new ArrayList(CollectionsKt.collectionSizeOrDefault(arrayList2, 10));
            Iterator it = arrayList2.iterator();
            while (it.hasNext()) {
                arrayList3.add(new Date(Long.parseLong((String) it.next())));
            }
            Set<Date> set = CollectionsKt.toSet(arrayList3);
            if (set != null) {
                return set;
            }
        }
        return SetsKt.emptySet();
    }

    private final String getKey(long userId) {
        return "GROUP_SUBSCRIPTION_DISPLAYS_" + userId;
    }

    /* JADX INFO: compiled from: GroupSubscriptionPrefsStorage.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/group/subscription/compose/storage/GroupSubscriptionPrefsStorage$Companion;", "", "<init>", "()V", "KEY_DISPLAYS_PREFIX", "", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
