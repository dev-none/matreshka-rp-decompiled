package ru.ok.tracer.lite.crash.report.upload;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.lite.Severity;

/* JADX INFO: compiled from: CrashUploaderLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\u001a\f\u0010\u0004\u001a\u00020\u0001*\u00020\u0005H\u0000\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"API_TYPE_NON_FATAL", "", "FORMAT_JVM_STACKTRACE", "SEVERITY_NON_FATAL", "toApiString", "Lru/ok/tracer/lite/Severity;", "tracer-lite-crash-report_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class CrashUploaderLiteKt {
    private static final String API_TYPE_NON_FATAL = "NON_FATAL";
    private static final String FORMAT_JVM_STACKTRACE = "JVM_STACKTRACE";
    public static final String SEVERITY_NON_FATAL = "NON_FATAL";

    public static final String toApiString(Severity severity) {
        Intrinsics.checkNotNullParameter(severity, "<this>");
        if (Intrinsics.areEqual(severity, Severity.FATAL)) {
            return "FATAL";
        }
        if (Intrinsics.areEqual(severity, Severity.ERROR)) {
            return "ERROR";
        }
        if (Intrinsics.areEqual(severity, Severity.WARNING)) {
            return "WARNING";
        }
        if (Intrinsics.areEqual(severity, Severity.NOTICE)) {
            return "NOTICE";
        }
        if (Intrinsics.areEqual(severity, Severity.INFO)) {
            return "INFO";
        }
        Intrinsics.areEqual(severity, Severity.DEBUG);
        return "DEBUG";
    }
}
