package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class MemoryDump {
    public final ArmMTEMetadata armMteMetadata;
    public final long beginAddress;
    public final String mappingName;
    public final byte[] memory;
    public final String registerName;

    public MemoryDump(final String registerName, final String mappingName, final long beginAddress, final byte[] memory, final ArmMTEMetadata armMteMetadata) {
        this.registerName = registerName;
        this.mappingName = mappingName;
        this.beginAddress = beginAddress;
        this.memory = memory;
        this.armMteMetadata = armMteMetadata;
    }
}
