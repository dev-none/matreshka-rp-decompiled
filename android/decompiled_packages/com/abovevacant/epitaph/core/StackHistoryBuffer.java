package com.abovevacant.epitaph.core;

import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class StackHistoryBuffer {
    public final List<StackHistoryBufferEntry> entries;
    public final long tid;

    public StackHistoryBuffer(final long tid, final List<StackHistoryBufferEntry> entries) {
        this.tid = tid;
        this.entries = Collections.unmodifiableList(entries);
    }
}
