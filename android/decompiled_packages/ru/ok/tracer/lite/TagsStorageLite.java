package ru.ok.tracer.lite;

import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: TagsStorageLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\u0018\u0000 \u00112\u00020\u0001:\u0001\u0011B\u0007\b\u0017¢\u0006\u0002\u0010\u0002B\u000f\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0018\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\b2\b\u0010\u0010\u001a\u0004\u0018\u00010\bR\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\t\u001a\b\u0012\u0004\u0012\u00020\b0\n8F¢\u0006\u0006\u001a\u0004\b\u000b\u0010\f¨\u0006\u0012"}, d2 = {"Lru/ok/tracer/lite/TagsStorageLite;", "", "()V", "maxKeysCount", "", "(I)V", "mutableTags", "Ljava/util/concurrent/ConcurrentHashMap;", "", "tags", "", "getTags", "()Ljava/util/List;", "setKey", "", "rawKey", "rawValue", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TagsStorageLite {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final int maxKeysCount;
    private final ConcurrentHashMap<String, String> mutableTags;

    public TagsStorageLite(int i) {
        this.maxKeysCount = i;
        this.mutableTags = new ConcurrentHashMap<>();
    }

    @Deprecated(message = "Will be removed")
    public TagsStorageLite() {
        this(30);
    }

    public final List<String> getTags() {
        List listCreateListBuilder = CollectionsKt.createListBuilder();
        synchronized (this.mutableTags) {
            for (Map.Entry<String, String> entry : this.mutableTags.entrySet()) {
                listCreateListBuilder.add(entry.getKey() + '=' + entry.getValue());
            }
            Unit unit = Unit.INSTANCE;
        }
        return CollectionsKt.build(listCreateListBuilder);
    }

    public final void setKey(String rawKey, String rawValue) {
        Intrinsics.checkNotNullParameter(rawKey, "rawKey");
        String strTake = StringsKt.take(rawKey, 31);
        String strTake2 = rawValue != null ? StringsKt.take(rawValue, 31) : null;
        synchronized (this.mutableTags) {
            String strRemove = this.mutableTags.remove(strTake);
            if (strTake2 != null) {
                this.mutableTags.put(strTake, strTake2);
                if (strRemove == null && this.mutableTags.size() > this.maxKeysCount) {
                    this.mutableTags.entrySet().iterator().remove();
                }
            }
            Unit unit = Unit.INSTANCE;
        }
    }

    /* JADX INFO: compiled from: TagsStorageLite.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/TagsStorageLite$Companion;", "", "()V", "get", "Lru/ok/tracer/lite/TagsStorageLite;", "tracer", "Lru/ok/tracer/lite/TracerLite;", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final TagsStorageLite get(TracerLite tracer) {
            Intrinsics.checkNotNullParameter(tracer, "tracer");
            return tracer.getTagsStorage();
        }
    }
}
