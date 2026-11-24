package com.pravera.flutter_foreground_task.models;

import androidx.media3.exoplayer.hls.playlist.HlsMediaPlaylist;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: ForegroundTaskEventType.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\t\b\u0086\u0081\u0002\u0018\u0000 \u000b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000bB\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\f"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType;", "", "value", "", "<init>", "(Ljava/lang/String;II)V", "getValue", "()I", "NOTHING", HlsMediaPlaylist.Interstitial.CUE_TRIGGER_ONCE, "REPEAT", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum ForegroundTaskEventType {
    NOTHING(1),
    ONCE(2),
    REPEAT(3);

    private final int value;
    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    public static EnumEntries<ForegroundTaskEventType> getEntries() {
        return $ENTRIES;
    }

    ForegroundTaskEventType(int i) {
        this.value = i;
    }

    public final int getValue() {
        return this.value;
    }

    /* JADX INFO: compiled from: ForegroundTaskEventType.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType$Companion;", "", "<init>", "()V", "fromValue", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType;", "value", "", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Code duplicated, block: B:10:0x0017  */
        /* JADX WARN: Code duplicated, block: B:12:0x001a A[RETURN] */
        public final ForegroundTaskEventType fromValue(int value) {
            for (ForegroundTaskEventType foregroundTaskEventType : ForegroundTaskEventType.values()) {
                if (foregroundTaskEventType.getValue() == value) {
                    if (foregroundTaskEventType == null) {
                        return ForegroundTaskEventType.NOTHING;
                    }
                    return foregroundTaskEventType;
                }
            }
            foregroundTaskEventType = null;
            if (foregroundTaskEventType == null) {
                return ForegroundTaskEventType.NOTHING;
            }
            return foregroundTaskEventType;
        }
    }
}
