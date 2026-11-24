package com.v_chat_sdk.v_video_compressor;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: VVideoCropGeometry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoEffectStep;", "", "<init>", "(Ljava/lang/String;I)V", "EXPLICIT_ROTATION", "CROP", "PRESENTATION", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum VVideoEffectStep {
    EXPLICIT_ROTATION,
    CROP,
    PRESENTATION;

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    public static EnumEntries<VVideoEffectStep> getEntries() {
        return $ENTRIES;
    }
}
