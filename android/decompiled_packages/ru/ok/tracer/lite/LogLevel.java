package ru.ok.tracer.lite;

import kotlin.Deprecated;
import kotlin.Metadata;

/* JADX INFO: compiled from: LogLevel.kt */
/* JADX INFO: loaded from: classes8.dex */
@Deprecated(message = "Replace with Severity")
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0007\u0018\u0000 \n2\u00020\u0001:\u0001\nB\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u0007\u001a\u00020\u0003H\u0007J\b\u0010\b\u001a\u00020\tH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lru/ok/tracer/lite/LogLevel;", "", "severity", "Lru/ok/tracer/lite/Severity;", "(Lru/ok/tracer/lite/Severity;)V", "hashCode", "", "toSeverity", "toString", "", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class LogLevel {
    private final Severity severity;
    public static final LogLevel FATAL = new LogLevel(Severity.FATAL);
    public static final LogLevel ERROR = new LogLevel(Severity.ERROR);
    public static final LogLevel WARNING = new LogLevel(Severity.WARNING);
    public static final LogLevel NOTICE = new LogLevel(Severity.NOTICE);
    public static final LogLevel INFO = new LogLevel(Severity.INFO);
    public static final LogLevel DEBUG = new LogLevel(Severity.DEBUG);

    private LogLevel(Severity severity) {
        this.severity = severity;
    }

    public int hashCode() {
        return this.severity.hashCode();
    }

    public String toString() {
        return this.severity.getName();
    }

    @Deprecated(message = "Will be removed")
    /* JADX INFO: renamed from: toSeverity, reason: from getter */
    public final Severity getSeverity() {
        return this.severity;
    }
}
