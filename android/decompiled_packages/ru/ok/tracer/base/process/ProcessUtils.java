package ru.ok.tracer.base.process;

import android.app.Application;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import kotlin.Metadata;
import kotlin.io.CloseableKt;
import kotlin.io.TextStreamsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: ProcessUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a\u000e\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u00012\b\u0010\u0000\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0007\u001a\u00020\u0001H\u0001\"\u0010\u0010\u0000\u001a\u0004\u0018\u00010\u0001X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"processName", "", "getProcessName", "context", "Landroid/content/Context;", "getSimpleProcessName", "simplifyProcessName", "packageName", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class ProcessUtils {
    private static volatile String processName;

    private static final String getProcessName$readProcessName() {
        if (Build.VERSION.SDK_INT < 28) {
            try {
                InputStreamReader inputStreamReader = new InputStreamReader(new FileInputStream(new File("/proc/" + Process.myPid() + "/cmdline")), Charsets.ISO_8859_1);
                try {
                    String text = TextStreamsKt.readText(inputStreamReader);
                    int length = text.length();
                    for (int i = 0; i < length; i++) {
                        if (Intrinsics.compare((int) text.charAt(i), 0) <= 0) {
                            text = text.substring(0, i);
                            Intrinsics.checkNotNullExpressionValue(text, "this as java.lang.String…ing(startIndex, endIndex)");
                            break;
                        }
                        return "unknown";
                    }
                    CloseableKt.closeFinally(inputStreamReader, null);
                    return text;
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(inputStreamReader, th);
                        throw th2;
                    }
                }
            } catch (Throwable unused) {
                return "unknown";
            }
        }
        String processName2 = Application.getProcessName();
        Intrinsics.checkNotNullExpressionValue(processName2, "{\n            Applicatio…etProcessName()\n        }");
        return processName2;
    }

    public static final String getProcessName(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String str = processName;
        if (str != null) {
            return str;
        }
        String processName$readProcessName = getProcessName$readProcessName();
        processName = processName$readProcessName;
        return processName$readProcessName;
    }

    public static final String getSimpleProcessName(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String processName2 = getProcessName(context);
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        return simplifyProcessName(processName2, packageName);
    }

    public static final String simplifyProcessName(String str, String packageName) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        if (str == null || Intrinsics.areEqual(str, packageName)) {
            return null;
        }
        int iIndexOf$default = StringsKt.indexOf$default((CharSequence) str, ':', 0, false, 6, (Object) null);
        if (iIndexOf$default != packageName.length() || !StringsKt.startsWith$default(str, packageName, false, 2, (Object) null)) {
            return str;
        }
        String strSubstring = str.substring(iIndexOf$default);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "this as java.lang.String).substring(startIndex)");
        return strSubstring;
    }
}
