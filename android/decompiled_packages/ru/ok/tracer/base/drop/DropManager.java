package ru.ok.tracer.base.drop;

import android.util.Log;
import androidx.core.app.NotificationCompat;
import io.sentry.protocol.SentryStackFrame;
import java.io.File;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Random;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.io.FilesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.PlatformRandomKt;
import org.json.JSONArray;
import org.json.JSONException;
import ru.ok.tracer.base.io.FileUtils;

/* JADX INFO: compiled from: DropManager.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u001e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0006\u0018\u0000 \u001a2\u00020\u0001:\u0003\u001a\u001b\u001cB\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\"\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000f2\b\b\u0002\u0010\u0011\u001a\u00020\u0012H\u0007J\u0016\u0010\f\u001a\u00020\r2\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00150\u0014H\u0007J\u000e\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00150\u0017H\u0002J\u0016\u0010\u0018\u001a\u00020\r2\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00150\u0017H\u0002J\u000e\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00150\u0014H\u0007R\u000e\u0010\u0005\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lru/ok/tracer/base/drop/DropManager;", "", "file", "Ljava/io/File;", "(Ljava/io/File;)V", "dir", SentryStackFrame.JsonKeys.LOCK, "Ljava/lang/Object;", "state", "Lru/ok/tracer/base/drop/DropManager$State;", "takenFile", "tmpFile", "drop", "", NotificationCompat.CATEGORY_EVENT, "", "reason", "count", "", "records", "", "Lru/ok/tracer/base/drop/DropRecord;", "load", "", "save", "take", "Companion", "DropRecordComparator", "State", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class DropManager {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final int DEFAULT_MAX_RECORDS_SIZE = 15;
    private static final String EVENT_UNKNOWN = "unknown";
    private static final String REASON_MAX_SIZE_EXCEEDED = "max_size_exceeded";
    private final File dir;
    private final File file;
    private final Object lock;
    private volatile State state;
    private final File takenFile;
    private final File tmpFile;

    public final void drop(String event, String reason) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(reason, "reason");
        drop$default(this, event, reason, 0, 4, null);
    }

    public DropManager(File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        this.file = file;
        File parentFile = file.getParentFile();
        if (parentFile == null) {
            throw new IllegalStateException(("File " + file + " not in directory").toString());
        }
        this.dir = parentFile;
        this.tmpFile = FilesKt.resolve(parentFile, file.getName() + ".tmp");
        this.takenFile = FilesKt.resolve(parentFile, file.getName() + ".taken");
        this.state = State.None.INSTANCE;
        this.lock = new Object();
    }

    public static /* synthetic */ void drop$default(DropManager dropManager, String str, String str2, int i, int i2, Object obj) {
        if ((i2 & 4) != 0) {
            i = 1;
        }
        dropManager.drop(str, str2, i);
    }

    public final void drop(String event, String reason, int count) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(reason, "reason");
        drop(CollectionsKt.listOf(new DropRecord(event, reason, count)));
    }

    public final void drop(Collection<DropRecord> records) {
        List<DropRecord> listEmptyList;
        Intrinsics.checkNotNullParameter(records, "records");
        if (records.isEmpty()) {
            return;
        }
        synchronized (this.lock) {
            State state = this.state;
            if ((state instanceof State.Taken) && records == ((State.Taken) state).getRecords()) {
                this.dir.mkdirs();
                this.takenFile.renameTo(this.file);
                this.state = new State.Loaded((List) records);
                return;
            }
            State state2 = this.state;
            if (state2 instanceof State.None) {
                listEmptyList = load();
            } else if (state2 instanceof State.Loaded) {
                listEmptyList = ((State.Loaded) state2).getRecords();
            } else {
                if (!(state2 instanceof State.Taken)) {
                    throw new NoWhenBranchMatchedException();
                }
                listEmptyList = CollectionsKt.emptyList();
            }
            List<DropRecord> listMerge$tracer_base_release$default = Companion.merge$tracer_base_release$default(INSTANCE, listEmptyList, records, 0, 4, null);
            save(listMerge$tracer_base_release$default);
            this.state = new State.Loaded(listMerge$tracer_base_release$default);
            Unit unit = Unit.INSTANCE;
        }
    }

    public final Collection<DropRecord> take() {
        List<DropRecord> records;
        State state = this.state;
        if ((state instanceof State.Loaded) && ((State.Loaded) state).getRecords().isEmpty()) {
            return CollectionsKt.emptyList();
        }
        if (state instanceof State.Taken) {
            return CollectionsKt.emptyList();
        }
        synchronized (this.lock) {
            State state2 = this.state;
            if (state2 instanceof State.None) {
                records = load();
            } else {
                if (!(state2 instanceof State.Loaded)) {
                    if (!(state2 instanceof State.Taken)) {
                        throw new NoWhenBranchMatchedException();
                    }
                    return CollectionsKt.emptyList();
                }
                records = ((State.Loaded) state2).getRecords();
            }
            if (!records.isEmpty()) {
                this.file.renameTo(this.takenFile);
                this.state = new State.Taken(records);
            } else {
                this.state = new State.Loaded(CollectionsKt.emptyList());
            }
            return records;
        }
    }

    private final List<DropRecord> load() {
        if (!this.file.exists()) {
            return CollectionsKt.emptyList();
        }
        try {
            return DropRecordSerializer.INSTANCE.fromJsonArray$tracer_base_release(new JSONArray(FilesKt.readText$default(this.file, null, 1, null)));
        } catch (IOException e) {
            Log.e("Tracer", "Couldn't read " + this.file, e);
            return CollectionsKt.emptyList();
        } catch (JSONException e2) {
            Log.e("Tracer", "Couldn't read " + this.file, e2);
            try {
                FileUtils.deleteChecked(this.file);
            } catch (IOException unused) {
                Log.e("Tracer", "Couldn't delete " + this.file);
            }
            return CollectionsKt.emptyList();
        }
    }

    private final void save(List<DropRecord> records) {
        String string = DropRecordSerializer.INSTANCE.toJsonArray(records).toString();
        Intrinsics.checkNotNullExpressionValue(string, "json.toString()");
        try {
            FileUtils.mkdirsChecked(this.dir);
            FilesKt.writeText$default(this.tmpFile, string, null, 2, null);
            FileUtils.renameToChecked(this.tmpFile, this.file);
        } catch (IOException e) {
            Log.e("Tracer", "Couldn't write " + this.file, e);
            try {
                FileUtils.deleteChecked(this.file);
            } catch (IOException unused) {
                Log.e("Tracer", "Couldn't delete " + this.file);
            }
        }
    }

    /* JADX INFO: compiled from: DropManager.kt */
    @Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0010\u001e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0010!\n\u0000\b\u0080\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J \u0010\b\u001a\u00020\u00042\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006H\u0002J9\u0010\r\u001a\b\u0012\u0004\u0012\u00020\n0\u000e2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\n0\u000e2\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\n0\u00112\b\b\u0002\u0010\u0012\u001a\u00020\u0004H\u0000¢\u0006\u0002\b\u0013J\u001e\u0010\u0014\u001a\u00020\u00152\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\n0\u00162\u0006\u0010\t\u001a\u00020\nH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$Companion;", "", "()V", "DEFAULT_MAX_RECORDS_SIZE", "", "EVENT_UNKNOWN", "", "REASON_MAX_SIZE_EXCEEDED", "compareRecord", "record", "Lru/ok/tracer/base/drop/DropRecord;", "withEvent", "withReason", "merge", "", "sortedRecords", "withRecords", "", "maxRecordsCount", "merge$tracer_base_release", "mergeInto", "", "", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public static /* synthetic */ List merge$tracer_base_release$default(Companion companion, List list, Collection collection, int i, int i2, Object obj) {
            if ((i2 & 4) != 0) {
                i = 15;
            }
            return companion.merge$tracer_base_release(list, collection, i);
        }

        public final List<DropRecord> merge$tracer_base_release(List<DropRecord> sortedRecords, Collection<DropRecord> withRecords, int maxRecordsCount) {
            Intrinsics.checkNotNullParameter(sortedRecords, "sortedRecords");
            Intrinsics.checkNotNullParameter(withRecords, "withRecords");
            if (maxRecordsCount <= 0) {
                throw new IllegalStateException("maxRecordsCount <= 0".toString());
            }
            if (sortedRecords.isEmpty()) {
                return CollectionsKt.sortedWith(withRecords, DropRecordComparator.INSTANCE);
            }
            if (withRecords.isEmpty()) {
                return sortedRecords;
            }
            List<DropRecord> listCreateListBuilder = CollectionsKt.createListBuilder();
            listCreateListBuilder.addAll(sortedRecords);
            Iterator<DropRecord> it = withRecords.iterator();
            while (it.hasNext()) {
                DropManager.INSTANCE.mergeInto(listCreateListBuilder, it.next());
            }
            if (listCreateListBuilder.size() > maxRecordsCount) {
                Random randomAsJavaRandom = PlatformRandomKt.asJavaRandom(kotlin.random.Random.INSTANCE);
                int count = 0;
                while (listCreateListBuilder.size() > maxRecordsCount - 1) {
                    count += listCreateListBuilder.remove(randomAsJavaRandom.nextInt(listCreateListBuilder.size())).getCount();
                }
                DropManager.INSTANCE.mergeInto(listCreateListBuilder, new DropRecord("unknown", DropManager.REASON_MAX_SIZE_EXCEEDED, count));
            }
            return CollectionsKt.build(listCreateListBuilder);
        }

        private final void mergeInto(List<DropRecord> sortedRecords, DropRecord record) {
            int iBinarySearch$default = CollectionsKt.binarySearch$default(sortedRecords, record, DropRecordComparator.INSTANCE, 0, 0, 12, null);
            if (iBinarySearch$default >= 0) {
                sortedRecords.set(iBinarySearch$default, sortedRecords.get(iBinarySearch$default).copyIncrementCount$tracer_base_release(record.getCount()));
            } else {
                sortedRecords.add((-iBinarySearch$default) - 1, record);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final int compareRecord(DropRecord record, String withEvent, String withReason) {
            int iCompareTo = record.getEvent().compareTo(withEvent);
            if (iCompareTo != 0) {
                return iCompareTo;
            }
            int iCompareTo2 = record.getReason().compareTo(withReason);
            if (iCompareTo2 != 0) {
                return iCompareTo2;
            }
            return 0;
        }
    }

    /* JADX INFO: compiled from: DropManager.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\bÂ\u0002\u0018\u00002\u0012\u0012\u0004\u0012\u00020\u00020\u0001j\b\u0012\u0004\u0012\u00020\u0002`\u0003B\u0007\b\u0002¢\u0006\u0002\u0010\u0004J\u0018\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00022\u0006\u0010\b\u001a\u00020\u0002H\u0016¨\u0006\t"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$DropRecordComparator;", "Ljava/util/Comparator;", "Lru/ok/tracer/base/drop/DropRecord;", "Lkotlin/Comparator;", "()V", "compare", "", "record", "withRecord", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private static final class DropRecordComparator implements Comparator<DropRecord> {
        public static final DropRecordComparator INSTANCE = new DropRecordComparator();

        private DropRecordComparator() {
        }

        @Override // java.util.Comparator
        public int compare(DropRecord record, DropRecord withRecord) {
            Intrinsics.checkNotNullParameter(record, "record");
            Intrinsics.checkNotNullParameter(withRecord, "withRecord");
            return DropManager.INSTANCE.compareRecord(record, withRecord.getEvent(), withRecord.getReason());
        }
    }

    /* JADX INFO: compiled from: DropManager.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b2\u0018\u00002\u00020\u0001:\u0003\u0003\u0004\u0005B\u0007\b\u0004¢\u0006\u0002\u0010\u0002\u0082\u0001\u0003\u0006\u0007\b¨\u0006\t"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$State;", "", "()V", "Loaded", "None", "Taken", "Lru/ok/tracer/base/drop/DropManager$State$Loaded;", "Lru/ok/tracer/base/drop/DropManager$State$None;", "Lru/ok/tracer/base/drop/DropManager$State$Taken;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private static abstract class State {
        public /* synthetic */ State(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: compiled from: DropManager.kt */
        @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$State$None;", "Lru/ok/tracer/base/drop/DropManager$State;", "()V", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class None extends State {
            public static final None INSTANCE = new None();

            private None() {
                super(null);
            }
        }

        private State() {
        }

        /* JADX INFO: compiled from: DropManager.kt */
        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u0013\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$State$Loaded;", "Lru/ok/tracer/base/drop/DropManager$State;", "records", "", "Lru/ok/tracer/base/drop/DropRecord;", "(Ljava/util/List;)V", "getRecords", "()Ljava/util/List;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Loaded extends State {
            private final List<DropRecord> records;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public Loaded(List<DropRecord> records) {
                super(null);
                Intrinsics.checkNotNullParameter(records, "records");
                this.records = records;
            }

            public final List<DropRecord> getRecords() {
                return this.records;
            }
        }

        /* JADX INFO: compiled from: DropManager.kt */
        @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0013\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005R\u0019\u0010\u0002\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u00038F¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007R(\u0010\b\u001a\u001c\u0012\u0018\u0012\u0016\u0012\u0004\u0012\u00020\u0004 \n*\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u00030\u00030\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lru/ok/tracer/base/drop/DropManager$State$Taken;", "Lru/ok/tracer/base/drop/DropManager$State;", "records", "", "Lru/ok/tracer/base/drop/DropRecord;", "(Ljava/util/List;)V", "getRecords", "()Ljava/util/List;", "weakRecords", "Ljava/lang/ref/WeakReference;", "kotlin.jvm.PlatformType", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Taken extends State {
            private final WeakReference<List<DropRecord>> weakRecords;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public Taken(List<DropRecord> records) {
                super(null);
                Intrinsics.checkNotNullParameter(records, "records");
                this.weakRecords = new WeakReference<>(records);
            }

            public final List<DropRecord> getRecords() {
                return this.weakRecords.get();
            }
        }
    }
}
