package ru.ok.tracer.lite.crash.report;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.Random;

/* JADX INFO: compiled from: ObfuscationUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\u001a\b\u0010\u0000\u001a\u00020\u0001H\u0000\u001a\b\u0010\u0002\u001a\u00020\u0001H\u0000¨\u0006\u0003"}, d2 = {"hasTracer", "", "isObfuscated", "tracer-lite-crash-report_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class ObfuscationUtils {
    public static final boolean isObfuscated() {
        try {
            String str = BuildConfig.LIBRARY_PACKAGE_NAME + ((char) ((Random.INSTANCE.nextInt() * Integer.parseInt("0")) + 46)) + "SeemsUnused";
            return !Intrinsics.areEqual(Class.forName(str).getName(), str);
        } catch (Throwable unused) {
            return true;
        }
    }

    public static final boolean hasTracer() {
        try {
            Class.forName("ru.ok.tracer.Tracer");
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }
}
