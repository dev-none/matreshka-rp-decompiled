package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class MemoryMapping {
    public final long beginAddress;
    public final String buildId;
    public final long endAddress;
    public final boolean execute;
    public final long loadBias;
    public final String mappingName;
    public final long offset;
    public final boolean read;
    public final boolean write;

    public MemoryMapping(final long beginAddress, final long endAddress, final long offset, final boolean read, final boolean write, final boolean execute, final String mappingName, final String buildId, final long loadBias) {
        this.beginAddress = beginAddress;
        this.endAddress = endAddress;
        this.offset = offset;
        this.read = read;
        this.write = write;
        this.execute = execute;
        this.mappingName = mappingName;
        this.buildId = buildId;
        this.loadBias = loadBias;
    }
}
