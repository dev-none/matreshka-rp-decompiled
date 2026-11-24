package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class BacktraceFrame {
    public final String buildId;
    public final long fileMapOffset;
    public final String fileName;
    public final String functionName;
    public final long functionOffset;
    public final long pc;
    public final long relPc;
    public final long sp;

    public BacktraceFrame(final long relPc, final long pc, final long sp, final String functionName, final long functionOffset, final String fileName, final long fileMapOffset, final String buildId) {
        this.relPc = relPc;
        this.pc = pc;
        this.sp = sp;
        this.functionName = functionName;
        this.functionOffset = functionOffset;
        this.fileName = fileName;
        this.fileMapOffset = fileMapOffset;
        this.buildId = buildId;
    }
}
