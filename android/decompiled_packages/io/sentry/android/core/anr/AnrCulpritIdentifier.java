package io.sentry.android.core.anr;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class AnrCulpritIdentifier {
    private static final List<String> systemAndFrameworkPackages;

    static {
        ArrayList arrayList = new ArrayList(11);
        systemAndFrameworkPackages = arrayList;
        arrayList.add("java.lang");
        arrayList.add("java.util");
        arrayList.add("android.app");
        arrayList.add("android.os.Handler");
        arrayList.add("android.os.Looper");
        arrayList.add("android.view");
        arrayList.add("android.widget");
        arrayList.add("com.android.internal");
        arrayList.add("com.google.android");
        arrayList.add("kotlin");
        arrayList.add("kotlinx.coroutines");
    }

    private static final class StackTraceKey {
        private final int endIdx;
        private final int hashCode = computeHashCode();
        private final StackTraceElement[] stack;
        private final int startIdx;

        StackTraceKey(StackTraceElement[] stackTraceElementArr, int i, int i2) {
            this.stack = stackTraceElementArr;
            this.startIdx = i;
            this.endIdx = i2;
        }

        private int computeHashCode() {
            int iHashCode = 1;
            for (int i = this.startIdx; i <= this.endIdx; i++) {
                iHashCode = (iHashCode * 31) + this.stack[i].hashCode();
            }
            return iHashCode;
        }

        public int hashCode() {
            return this.hashCode;
        }

        public boolean equals(Object obj) {
            int i;
            if (this == obj) {
                return true;
            }
            if (!(obj instanceof StackTraceKey)) {
                return false;
            }
            StackTraceKey stackTraceKey = (StackTraceKey) obj;
            if (this.hashCode != stackTraceKey.hashCode || (i = (this.endIdx - this.startIdx) + 1) != (stackTraceKey.endIdx - stackTraceKey.startIdx) + 1) {
                return false;
            }
            for (int i2 = 0; i2 < i; i2++) {
                if (!this.stack[this.startIdx + i2].equals(stackTraceKey.stack[stackTraceKey.startIdx + i2])) {
                    return false;
                }
            }
            return true;
        }
    }

    public static AggregatedStackTrace identify(List<AnrStackTrace> list) {
        if (list.isEmpty()) {
            return null;
        }
        HashMap map = new HashMap();
        for (AnrStackTrace anrStackTrace : list) {
            if (anrStackTrace.stack.length >= 2) {
                int i = 0;
                for (int length = anrStackTrace.stack.length - 1; length >= 0; length--) {
                    if (!isSystemFrame(anrStackTrace.stack[length].getClassName())) {
                        i++;
                    }
                    float length2 = i / (anrStackTrace.stack.length - length);
                    StackTraceKey stackTraceKey = new StackTraceKey(anrStackTrace.stack, length, anrStackTrace.stack.length - 1);
                    AggregatedStackTrace aggregatedStackTrace = (AggregatedStackTrace) map.get(stackTraceKey);
                    if (aggregatedStackTrace == null) {
                        map.put(stackTraceKey, new AggregatedStackTrace(anrStackTrace.stack, length, anrStackTrace.stack.length - 1, anrStackTrace.timestampMs, length2));
                    } else {
                        aggregatedStackTrace.addOccurrence(anrStackTrace.timestampMs);
                    }
                }
            }
        }
        if (map.isEmpty()) {
            return null;
        }
        return (AggregatedStackTrace) Collections.max(map.values(), new Comparator() { // from class: io.sentry.android.core.anr.AnrCulpritIdentifier$$ExternalSyntheticLambda0
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                AggregatedStackTrace aggregatedStackTrace2 = (AggregatedStackTrace) obj;
                AggregatedStackTrace aggregatedStackTrace3 = (AggregatedStackTrace) obj2;
                return Float.compare(aggregatedStackTrace2.count * (aggregatedStackTrace2.quality + 1.0f) * aggregatedStackTrace2.depth, aggregatedStackTrace3.count * (aggregatedStackTrace3.quality + 1.0f) * aggregatedStackTrace3.depth);
            }
        });
    }

    public static boolean isSystemFrame(String str) {
        Iterator<String> it = systemAndFrameworkPackages.iterator();
        while (it.hasNext()) {
            if (str.startsWith(it.next())) {
                return true;
            }
        }
        return false;
    }
}
