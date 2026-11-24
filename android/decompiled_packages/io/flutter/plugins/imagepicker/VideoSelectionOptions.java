package io.flutter.plugins.imagepicker;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Messages.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0006\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\b\u0086\b\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u0013\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\nJ\u0013\u0010\u000b\u001a\u00020\f2\b\u0010\r\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0007J\u001a\u0010\u0013\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u0010\u0014R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0016"}, d2 = {"Lio/flutter/plugins/imagepicker/VideoSelectionOptions;", "", "maxDurationSeconds", "", "<init>", "(Ljava/lang/Long;)V", "getMaxDurationSeconds", "()Ljava/lang/Long;", "Ljava/lang/Long;", "toList", "", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "component1", MenuActionType.COPY, "(Ljava/lang/Long;)Lio/flutter/plugins/imagepicker/VideoSelectionOptions;", "Companion", "image_picker_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VideoSelectionOptions {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Long maxDurationSeconds;

    /* JADX WARN: Multi-variable type inference failed */
    public VideoSelectionOptions() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public static /* synthetic */ VideoSelectionOptions copy$default(VideoSelectionOptions videoSelectionOptions, Long l, int i, Object obj) {
        if ((i & 1) != 0) {
            l = videoSelectionOptions.maxDurationSeconds;
        }
        return videoSelectionOptions.copy(l);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Long getMaxDurationSeconds() {
        return this.maxDurationSeconds;
    }

    public final VideoSelectionOptions copy(Long maxDurationSeconds) {
        return new VideoSelectionOptions(maxDurationSeconds);
    }

    public VideoSelectionOptions(Long l) {
        this.maxDurationSeconds = l;
    }

    public /* synthetic */ VideoSelectionOptions(Long l, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : l);
    }

    public final Long getMaxDurationSeconds() {
        return this.maxDurationSeconds;
    }

    /* JADX INFO: compiled from: Messages.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/imagepicker/VideoSelectionOptions$Companion;", "", "<init>", "()V", "fromList", "Lio/flutter/plugins/imagepicker/VideoSelectionOptions;", "pigeonVar_list", "", "image_picker_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VideoSelectionOptions fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            return new VideoSelectionOptions((Long) pigeonVar_list.get(0));
        }
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf(this.maxDurationSeconds);
    }

    public boolean equals(Object other) {
        if (other == null || !Intrinsics.areEqual(other.getClass(), getClass())) {
            return false;
        }
        if (this == other) {
            return true;
        }
        return MessagesPigeonUtils.INSTANCE.deepEquals(this.maxDurationSeconds, ((VideoSelectionOptions) other).maxDurationSeconds);
    }

    public int hashCode() {
        return (getClass().hashCode() * 31) + MessagesPigeonUtils.INSTANCE.deepHash(this.maxDurationSeconds);
    }

    public String toString() {
        return "VideoSelectionOptions(maxDurationSeconds=" + this.maxDurationSeconds + ")";
    }
}
