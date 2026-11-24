package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class Signal {
    public final int code;
    public final String codeName;
    public final long faultAddress;
    public final MemoryDump faultAdjacentMetadata;
    public final boolean hasFaultAddress;
    public final boolean hasSender;
    public final String name;
    public final int number;
    public final int senderPid;
    public final int senderUid;

    public Signal(final int number, final String name, final int code, final String codeName, final boolean hasSender, final int senderUid, final int senderPid, final boolean hasFaultAddress, final long faultAddress, final MemoryDump faultAdjacentMetadata) {
        this.number = number;
        this.name = name;
        this.code = code;
        this.codeName = codeName;
        this.hasSender = hasSender;
        this.senderUid = senderUid;
        this.senderPid = senderPid;
        this.hasFaultAddress = hasFaultAddress;
        this.faultAddress = faultAddress;
        this.faultAdjacentMetadata = faultAdjacentMetadata;
    }
}
