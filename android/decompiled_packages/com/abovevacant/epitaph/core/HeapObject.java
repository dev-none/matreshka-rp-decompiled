package com.abovevacant.epitaph.core;

import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class HeapObject {
    public final long address;
    public final List<BacktraceFrame> allocationBacktrace;
    public final long allocationTid;
    public final List<BacktraceFrame> deallocationBacktrace;
    public final long deallocationTid;
    public final long size;

    public HeapObject(final long address, final long size, final long allocationTid, final List<BacktraceFrame> allocationBacktrace, final long deallocationTid, final List<BacktraceFrame> deallocationBacktrace) {
        this.address = address;
        this.size = size;
        this.allocationTid = allocationTid;
        this.allocationBacktrace = Collections.unmodifiableList(allocationBacktrace);
        this.deallocationTid = deallocationTid;
        this.deallocationBacktrace = Collections.unmodifiableList(deallocationBacktrace);
    }
}
