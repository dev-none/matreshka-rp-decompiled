package ru.ok.tracer.base.datetime;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: DateTimeUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u000e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003¨\u0006\u0004"}, d2 = {"formatISO8601", "", "date", "Ljava/util/Date;", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class DateTimeUtils {
    public static final String formatISO8601(Date date) {
        Intrinsics.checkNotNullParameter(date, "date");
        String str = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ssXXX", Locale.US).format(date);
        Intrinsics.checkNotNullExpressionValue(str, "{\n        SimpleDateForm…      .format(date)\n    }");
        return str;
    }
}
