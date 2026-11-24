package io.sentry.android.core.anr;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class AnrProfile {
    public final long endTimeMs;
    public final List<AnrStackTrace> stacks;
    public final long startTimeMs;

    public AnrProfile(List<AnrStackTrace> list) {
        this.stacks = new ArrayList(list.size());
        for (AnrStackTrace anrStackTrace : list) {
            if (anrStackTrace != null) {
                this.stacks.add(anrStackTrace);
            }
        }
        Collections.sort(this.stacks);
        if (!this.stacks.isEmpty()) {
            this.startTimeMs = this.stacks.get(0).timestampMs;
            List<AnrStackTrace> list2 = this.stacks;
            this.endTimeMs = list2.get(list2.size() - 1).timestampMs + 10000;
        } else {
            this.startTimeMs = 0L;
            this.endTimeMs = 0L;
        }
    }
}
