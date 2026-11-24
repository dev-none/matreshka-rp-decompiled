package ru.ok.tracer.lite.crash.report;

import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import kotlin.Metadata;

/* JADX INFO: compiled from: LogEntryLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\u001a\u0018\u0010\u0002\u001a\u00020\u0003*\u00060\u0004j\u0002`\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"BASE_FMT", "Ljava/text/SimpleDateFormat;", "appendRFC3339", "", "Ljava/lang/Appendable;", "Lkotlin/text/Appendable;", "ts", "", "tracer-lite-crash-report_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class LogEntryLiteKt {
    private static final SimpleDateFormat BASE_FMT = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ", Locale.US);

    /* JADX INFO: Access modifiers changed from: private */
    public static final void appendRFC3339(Appendable appendable, long j) throws IOException {
        String str = BASE_FMT.format(new Date(j));
        int length = str.length();
        String str2 = str;
        int i = length - 2;
        appendable.append(str2, 0, i);
        appendable.append(':');
        appendable.append(str2, i, length);
    }
}
