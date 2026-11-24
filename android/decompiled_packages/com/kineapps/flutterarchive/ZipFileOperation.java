package com.kineapps.flutterarchive;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: FlutterArchivePlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, d2 = {"Lcom/kineapps/flutterarchive/ZipFileOperation;", "", "<init>", "(Ljava/lang/String;I)V", "INCLUDE_ITEM", "SKIP_ITEM", "CANCEL", "flutter_archive_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum ZipFileOperation {
    INCLUDE_ITEM,
    SKIP_ITEM,
    CANCEL;

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    public static EnumEntries<ZipFileOperation> getEntries() {
        return $ENTRIES;
    }
}
