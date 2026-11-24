package ru.ok.tracer.base.stacktrace;

import androidx.exifinterface.media.ExifInterface;
import androidx.media3.exoplayer.upstream.CmcdData;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.io.IOException;
import java.util.IdentityHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ThrowableUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000>\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0003\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010%\n\u0002\b\u0007\u001a-\u0010\u0000\u001a\u00020\u00012\u000e\u0010\u0002\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00040\u00032\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00040\u0003H\u0002¢\u0006\u0002\u0010\u0006\u001a#\u0010\u0007\u001a\u00020\u00012\u0006\u0010\b\u001a\u00020\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003H\u0002¢\u0006\u0002\u0010\u000b\u001a\u001c\u0010\f\u001a\u00060\rj\u0002`\u000e*\u00060\rj\u0002`\u000e2\u0006\u0010\u000f\u001a\u00020\u0001H\u0002\u001a\u0016\u0010\u0010\u001a\u00020\u0011*\u00020\t2\n\u0010\u0012\u001a\u00060\rj\u0002`\u000e\u001a]\u0010\u0010\u001a\u00020\u0011*\u00020\t2\n\u0010\u0012\u001a\u00060\rj\u0002`\u000e2\b\b\u0002\u0010\u000f\u001a\u00020\u00012\b\b\u0002\u0010\u0013\u001a\u00020\u00142\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\b\b\u0002\u0010\u0000\u001a\u00020\u00012\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00110\u0016H\u0002¢\u0006\u0002\u0010\u0017\u001a*\u0010\u0018\u001a\u00020\u0011*\u00020\u00042\n\u0010\u0012\u001a\u00060\rj\u0002`\u000e2\b\b\u0002\u0010\u000f\u001a\u00020\u00012\b\b\u0002\u0010\u0013\u001a\u00020\u0014\u001a,\u0010\u0019\u001a\u00020\u0011\"\u0004\b\u0000\u0010\u001a*\u000e\u0012\u0004\u0012\u0002H\u001a\u0012\u0004\u0012\u00020\u00110\u00162\u0006\u0010\u001b\u001a\u0002H\u001aH\u0082\u0002¢\u0006\u0002\u0010\u001c¨\u0006\u001d"}, d2 = {"framesInCommon", "", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "", "Ljava/lang/StackTraceElement;", "b", "([Ljava/lang/StackTraceElement;[Ljava/lang/StackTraceElement;)I", "framesRepeat", "ex", "", "trace", "(Ljava/lang/Throwable;[Ljava/lang/StackTraceElement;)I", "appendIndent", "Ljava/lang/Appendable;", "Lkotlin/text/Appendable;", "indent", "appendStackTraceTo", "", "out", "prefix", "", "visited", "", "(Ljava/lang/Throwable;Ljava/lang/Appendable;ILjava/lang/String;[Ljava/lang/StackTraceElement;ILjava/util/Map;)V", "appendTo", "plusAssign", ExifInterface.GPS_DIRECTION_TRUE, "key", "(Ljava/util/Map;Ljava/lang/Object;)V", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class ThrowableUtils {
    public static final void appendStackTraceTo(Throwable th, Appendable out) throws IOException {
        Intrinsics.checkNotNullParameter(th, "<this>");
        Intrinsics.checkNotNullParameter(out, "out");
        StackTraceElement[] stackTrace = th.getStackTrace();
        Intrinsics.checkNotNullExpressionValue(stackTrace, "stackTrace");
        appendStackTraceTo$default(th, out, 0, null, stackTrace, 0, new IdentityHashMap(), 22, null);
    }

    static /* synthetic */ void appendStackTraceTo$default(Throwable th, Appendable appendable, int i, String str, StackTraceElement[] stackTraceElementArr, int i2, Map map, int i3, Object obj) throws IOException {
        if ((i3 & 2) != 0) {
            i = 0;
        }
        if ((i3 & 4) != 0) {
            str = "";
        }
        if ((i3 & 16) != 0) {
            i2 = 0;
        }
        appendStackTraceTo(th, appendable, i, str, stackTraceElementArr, i2, map);
    }

    private static final void appendStackTraceTo(Throwable th, Appendable appendable, int i, String str, StackTraceElement[] stackTraceElementArr, int i2, Map<Throwable, Unit> map) throws IOException {
        Map<Throwable, Unit> map2 = map;
        if (map2.containsKey(th)) {
            Appendable appendableAppend = appendIndent(appendable, 1).append("[CIRCULAR REFERENCE: ").append(th.toString()).append("]");
            Intrinsics.checkNotNullExpressionValue(appendableAppend, "out.appendIndent(1)\n    …s.toString()).append(\"]\")");
            Intrinsics.checkNotNullExpressionValue(appendableAppend.append('\n'), "append('\\n')");
            return;
        }
        plusAssign(map2, th);
        Appendable appendableAppend2 = appendIndent(appendable, i).append(str).append(th.toString());
        Intrinsics.checkNotNullExpressionValue(appendableAppend2, "out.appendIndent(indent)…).append(this.toString())");
        Intrinsics.checkNotNullExpressionValue(appendableAppend2.append('\n'), "append('\\n')");
        int iFramesRepeat = framesRepeat(th, stackTraceElementArr);
        int length = iFramesRepeat > 0 ? iFramesRepeat : stackTraceElementArr.length - i2;
        int i3 = 0;
        for (int i4 = 0; i4 < length; i4++) {
            appendTo$default(stackTraceElementArr[i4], appendable, i + 1, null, 4, null);
        }
        if (iFramesRepeat > 0) {
            Appendable appendableAppend3 = appendIndent(appendable, i + 1).append("... ").append(String.valueOf(iFramesRepeat)).append(" calls repeat");
            Intrinsics.checkNotNullExpressionValue(appendableAppend3, "out.appendIndent(indent …).append(\" calls repeat\")");
            Intrinsics.checkNotNullExpressionValue(appendableAppend3.append('\n'), "append('\\n')");
        } else if (i2 != 0) {
            Appendable appendableAppend4 = appendIndent(appendable, i + 1).append("... ").append(String.valueOf(i2)).append(" more");
            Intrinsics.checkNotNullExpressionValue(appendableAppend4, "out.appendIndent(indent …String()).append(\" more\")");
            Intrinsics.checkNotNullExpressionValue(appendableAppend4.append('\n'), "append('\\n')");
        }
        Throwable[] suppressed = th.getSuppressed();
        Intrinsics.checkNotNullExpressionValue(suppressed, "suppressed");
        int length2 = suppressed.length;
        while (i3 < length2) {
            Throwable supp = suppressed[i3];
            StackTraceElement[] suppTrace = supp.getStackTrace();
            Intrinsics.checkNotNullExpressionValue(supp, "supp");
            Intrinsics.checkNotNullExpressionValue(suppTrace, "suppTrace");
            appendStackTraceTo(supp, appendable, i + 1, "Suppressed: ", suppTrace, framesInCommon(stackTraceElementArr, suppTrace), map2);
            i3++;
            map2 = map;
        }
        Throwable cause = th.getCause();
        if (cause != null) {
            StackTraceElement[] causeTrace = cause.getStackTrace();
            Intrinsics.checkNotNullExpressionValue(causeTrace, "causeTrace");
            appendStackTraceTo(cause, appendable, i, "Caused by: ", causeTrace, framesInCommon(stackTraceElementArr, causeTrace), map);
        }
    }

    private static final int framesRepeat(Throwable th, StackTraceElement[] stackTraceElementArr) {
        if (th instanceof StackOverflowError) {
            StackTraceElement stackTraceElement = stackTraceElementArr[0];
            int length = stackTraceElementArr.length;
            for (int i = 1; i < length; i++) {
                if (Intrinsics.areEqual(stackTraceElement, stackTraceElementArr[i])) {
                    return i;
                }
            }
        }
        return 0;
    }

    public static /* synthetic */ void appendTo$default(StackTraceElement stackTraceElement, Appendable appendable, int i, String str, int i2, Object obj) throws IOException {
        if ((i2 & 2) != 0) {
            i = 1;
        }
        if ((i2 & 4) != 0) {
            str = "at ";
        }
        appendTo(stackTraceElement, appendable, i, str);
    }

    public static final void appendTo(StackTraceElement stackTraceElement, Appendable out, int i, String prefix) throws IOException {
        String fileName;
        Intrinsics.checkNotNullParameter(stackTraceElement, "<this>");
        Intrinsics.checkNotNullParameter(out, "out");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        appendIndent(out, i).append(prefix);
        if (stackTraceElement.isNativeMethod()) {
            fileName = "Native Method";
        } else {
            fileName = stackTraceElement.getFileName();
            if (fileName == null) {
                fileName = "Unknown Source";
            }
        }
        out.append(stackTraceElement.getClassName()).append(".").append(stackTraceElement.getMethodName()).append("(").append(fileName);
        if (stackTraceElement.getLineNumber() >= 0) {
            out.append(StringUtils.PROCESS_POSTFIX_DELIMITER).append(String.valueOf(stackTraceElement.getLineNumber()));
        }
        Appendable appendableAppend = out.append(")");
        Intrinsics.checkNotNullExpressionValue(appendableAppend, "out.append(\")\")");
        Intrinsics.checkNotNullExpressionValue(appendableAppend.append('\n'), "append('\\n')");
    }

    private static final Appendable appendIndent(Appendable appendable, int i) throws IOException {
        for (int i2 = 0; i2 < i; i2++) {
            appendable.append("\t");
        }
        return appendable;
    }

    private static final int framesInCommon(StackTraceElement[] stackTraceElementArr, StackTraceElement[] stackTraceElementArr2) {
        int lastIndex = ArraysKt.getLastIndex(stackTraceElementArr);
        for (int lastIndex2 = ArraysKt.getLastIndex(stackTraceElementArr2); lastIndex >= 0 && lastIndex2 >= 0 && Intrinsics.areEqual(stackTraceElementArr[lastIndex], stackTraceElementArr2[lastIndex2]); lastIndex2--) {
            lastIndex--;
        }
        return ArraysKt.getLastIndex(stackTraceElementArr) - lastIndex;
    }

    private static final <T> void plusAssign(Map<T, Unit> map, T t) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        map.put(t, Unit.INSTANCE);
    }
}
