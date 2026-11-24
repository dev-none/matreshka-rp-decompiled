package ru.ok.tracer.lite;

import kotlin.Metadata;

/* JADX INFO: compiled from: Severity.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\u0018\u0000 \b2\u00020\u0001:\u0001\bB\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u0007\u001a\u00020\u0003H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lru/ok/tracer/lite/Severity;", "", "name", "", "(Ljava/lang/String;)V", "hashCode", "", "toString", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class Severity {
    private final String name;
    public static final Severity FATAL = new Severity("FATAL");
    public static final Severity ERROR = new Severity("ERROR");
    public static final Severity WARNING = new Severity("WARNING");
    public static final Severity NOTICE = new Severity("NOTICE");
    public static final Severity INFO = new Severity("INFO");
    public static final Severity DEBUG = new Severity("DEBUG");

    private Severity(String str) {
        this.name = str;
    }

    public int hashCode() {
        return this.name.hashCode();
    }

    /* JADX INFO: renamed from: toString, reason: from getter */
    public String getName() {
        return this.name;
    }
}
