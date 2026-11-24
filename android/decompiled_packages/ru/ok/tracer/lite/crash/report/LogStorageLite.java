package ru.ok.tracer.lite.crash.report;

import android.util.Log;
import androidx.core.app.NotificationCompat;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: LogStorageLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u000e\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010R\u001a\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u00068@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\b\u0010\tR\u0014\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00070\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lru/ok/tracer/lite/crash/report/LogStorageLite;", "", "maxLogsLength", "", "(I)V", "logs", "", "Lru/ok/tracer/lite/crash/report/LogEntryLite;", "getLogs$tracer_lite_crash_report_release", "()Ljava/util/List;", "logsDeque", "Lkotlin/collections/ArrayDeque;", "logsLength", "log", "", NotificationCompat.CATEGORY_MESSAGE, "", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class LogStorageLite {
    private final ArrayDeque<LogEntryLite> logsDeque;
    private int logsLength;
    private final int maxLogsLength;

    public LogStorageLite() {
        this(0, 1, null);
    }

    public LogStorageLite(int i) {
        this.maxLogsLength = i;
        this.logsDeque = new ArrayDeque<>();
    }

    public /* synthetic */ LogStorageLite(int i, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this((i2 & 1) != 0 ? 65536 : i);
    }

    public final List<LogEntryLite> getLogs$tracer_lite_crash_report_release() {
        List<LogEntryLite> list;
        synchronized (this.logsDeque) {
            list = CollectionsKt.toList(this.logsDeque);
        }
        return list;
    }

    public final void log(String msg) {
        Intrinsics.checkNotNullParameter(msg, "msg");
        int i = this.maxLogsLength - 36;
        if (i <= 0) {
            Log.e("Tracer", "Logs length too limited");
            return;
        }
        String strTake = StringsKt.take(msg, i);
        LogEntryLite logEntryLite = new LogEntryLite(System.currentTimeMillis(), strTake);
        synchronized (this.logsDeque) {
            this.logsDeque.addLast(logEntryLite);
            this.logsLength += strTake.length() + 36;
            while (this.logsLength > 65536) {
                this.logsLength -= this.logsDeque.removeFirst().getMessageString().length() + 36;
            }
            Unit unit = Unit.INSTANCE;
        }
    }
}
