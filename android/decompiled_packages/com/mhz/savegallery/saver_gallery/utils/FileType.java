package com.mhz.savegallery.saver_gallery.utils;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: FileResource.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\r\b\u0086\u0081\u0002\u0018\u0000 \u000f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000fB\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000e¨\u0006\u0010"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/utils/FileType;", "", "value", "", "<init>", "(Ljava/lang/String;II)V", "getValue", "()I", "NONE", "IMAGE", "AUDIO", "VIDEO", "PLAYLIST", "SUBTITLE", "DOCUMENT", "Companion", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum FileType {
    NONE(0),
    IMAGE(1),
    AUDIO(2),
    VIDEO(3),
    PLAYLIST(4),
    SUBTITLE(5),
    DOCUMENT(6);

    private final int value;
    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    public static EnumEntries<FileType> getEntries() {
        return $ENTRIES;
    }

    FileType(int i) {
        this.value = i;
    }

    public final int getValue() {
        return this.value;
    }

    /* JADX INFO: compiled from: FileResource.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/utils/FileType$Companion;", "", "<init>", "()V", "getEnum", "Lcom/mhz/savegallery/saver_gallery/utils/FileType;", "value", "", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Code duplicated, block: B:10:0x0017 A[RETURN] */
        /* JADX WARN: Code duplicated, block: B:11:0x0018  */
        public final FileType getEnum(int value) {
            for (FileType fileType : FileType.values()) {
                if (fileType.getValue() == value) {
                    if (fileType != null) {
                        return fileType;
                    }
                    throw new IllegalArgumentException("Unknown MediaStoreType value");
                }
            }
            fileType = null;
            if (fileType != null) {
                return fileType;
            }
            throw new IllegalArgumentException("Unknown MediaStoreType value");
        }
    }
}
