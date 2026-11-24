package com.abovevacant.epitaph.core;

import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class TombstoneThread {
    public final List<BacktraceFrame> backtrace;
    public final List<String> backtraceNote;
    public final int id;
    public final List<MemoryDump> memoryDump;
    public final String name;
    public final long pacEnabledKeys;
    public final List<Register> registers;
    public final long taggedAddrCtrl;
    public final List<String> unreadableElfFiles;

    public TombstoneThread(final int id, final String name, final List<Register> registers, final List<String> backtraceNote, final List<String> unreadableElfFiles, final List<BacktraceFrame> backtrace, final List<MemoryDump> memoryDump, final long taggedAddrCtrl, final long pacEnabledKeys) {
        this.id = id;
        this.name = name;
        this.registers = Collections.unmodifiableList(registers);
        this.backtraceNote = Collections.unmodifiableList(backtraceNote);
        this.unreadableElfFiles = Collections.unmodifiableList(unreadableElfFiles);
        this.backtrace = Collections.unmodifiableList(backtrace);
        this.memoryDump = Collections.unmodifiableList(memoryDump);
        this.taggedAddrCtrl = taggedAddrCtrl;
        this.pacEnabledKeys = pacEnabledKeys;
    }
}
