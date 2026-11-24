package ru.ok.tracer.lite.crash.report;

import io.sentry.Session;
import java.io.IOException;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: LogEntryLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u001c\u0010\u000b\u001a\u00020\f2\n\u0010\r\u001a\u00060\u000ej\u0002`\u000f2\b\b\u0002\u0010\u0010\u001a\u00020\u0011R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0012"}, d2 = {"Lru/ok/tracer/lite/crash/report/LogEntryLite;", "", "ts", "", "messageString", "", "(JLjava/lang/String;)V", "getMessageString", "()Ljava/lang/String;", "getTs", "()J", "appendToApi", "", "out", "Ljava/lang/Appendable;", "Lkotlin/text/Appendable;", Session.JsonKeys.SEQ, "", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class LogEntryLite {
    private final String messageString;
    private final long ts;

    public LogEntryLite(long j, String messageString) {
        Intrinsics.checkNotNullParameter(messageString, "messageString");
        this.ts = j;
        this.messageString = messageString;
    }

    public final long getTs() {
        return this.ts;
    }

    public final String getMessageString() {
        return this.messageString;
    }

    public static /* synthetic */ void appendToApi$default(LogEntryLite logEntryLite, Appendable appendable, int i, int i2, Object obj) throws IOException {
        if ((i2 & 2) != 0) {
            i = 0;
        }
        logEntryLite.appendToApi(appendable, i);
    }

    public final void appendToApi(Appendable out, int seq) throws IOException {
        Intrinsics.checkNotNullParameter(out, "out");
        out.append("#");
        out.append(String.valueOf(seq));
        out.append(" ");
        LogEntryLiteKt.appendRFC3339(out, this.ts);
        out.append(" | ");
        out.append(this.messageString);
        out.append("\n");
    }
}
