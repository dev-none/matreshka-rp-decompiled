package com.v_chat_sdk.v_video_compressor;

import androidx.media3.common.C;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;

/* JADX INFO: compiled from: VVideoH264Level.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0006\n\u0002\b\u0006\bÀ\u0002\u0018\u00002\u00020\u0001:\u0001\u0012B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J%\u0010\t\u001a\u0004\u0018\u00010\u00052\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\r¢\u0006\u0002\u0010\u000eJ\u0018\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u0010\u001a\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoH264Level;", "", "<init>", "()V", "MACROBLOCK_SIZE", "", "LIMITS", "", "Lcom/v_chat_sdk/v_video_compressor/VVideoH264Level$Limit;", "minimumLevel", "width", "height", RRWebVideoEvent.JsonKeys.FRAME_RATE, "", "(IID)Ljava/lang/Integer;", "ceilDiv", "value", "divisor", "Limit", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoH264Level {
    public static final VVideoH264Level INSTANCE = new VVideoH264Level();
    private static final List<Limit> LIMITS = CollectionsKt.listOf((Object[]) new Limit[]{new Limit(1, 99, 1485), new Limit(4, 396, C.DEFAULT_MAX_SEEK_TO_PREVIOUS_POSITION_MS), new Limit(8, 396, 6000), new Limit(16, 396, 11880), new Limit(64, 792, 19800), new Limit(128, 1620, 20250), new Limit(256, 1620, 40500), new Limit(512, 3600, 108000), new Limit(1024, 5120, 216000), new Limit(2048, 8192, 245760), new Limit(8192, 8704, 522240), new Limit(16384, 22080, 589824), new Limit(32768, 36864, 983040), new Limit(65536, 36864, 2073600), new Limit(131072, 139264, 4177920), new Limit(262144, 139264, 8355840), new Limit(524288, 139264, 16711680)});
    private static final int MACROBLOCK_SIZE = 16;

    private VVideoH264Level() {
    }

    /* JADX INFO: compiled from: VVideoH264Level.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0006HÆ\u0003J'\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0016\u001a\u00020\u0017HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0018"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoH264Level$Limit;", "", "level", "", "maxFrameSize", "maxMacroblockRate", "", "<init>", "(IIJ)V", "getLevel", "()I", "getMaxFrameSize", "getMaxMacroblockRate", "()J", "component1", "component2", "component3", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    private static final /* data */ class Limit {
        private final int level;
        private final int maxFrameSize;
        private final long maxMacroblockRate;

        public static /* synthetic */ Limit copy$default(Limit limit, int i, int i2, long j, int i3, Object obj) {
            if ((i3 & 1) != 0) {
                i = limit.level;
            }
            if ((i3 & 2) != 0) {
                i2 = limit.maxFrameSize;
            }
            if ((i3 & 4) != 0) {
                j = limit.maxMacroblockRate;
            }
            return limit.copy(i, i2, j);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final int getLevel() {
            return this.level;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final int getMaxFrameSize() {
            return this.maxFrameSize;
        }

        /* JADX INFO: renamed from: component3, reason: from getter */
        public final long getMaxMacroblockRate() {
            return this.maxMacroblockRate;
        }

        public final Limit copy(int level, int maxFrameSize, long maxMacroblockRate) {
            return new Limit(level, maxFrameSize, maxMacroblockRate);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Limit)) {
                return false;
            }
            Limit limit = (Limit) other;
            return this.level == limit.level && this.maxFrameSize == limit.maxFrameSize && this.maxMacroblockRate == limit.maxMacroblockRate;
        }

        public int hashCode() {
            return (((Integer.hashCode(this.level) * 31) + Integer.hashCode(this.maxFrameSize)) * 31) + Long.hashCode(this.maxMacroblockRate);
        }

        public String toString() {
            return "Limit(level=" + this.level + ", maxFrameSize=" + this.maxFrameSize + ", maxMacroblockRate=" + this.maxMacroblockRate + ")";
        }

        public Limit(int i, int i2, long j) {
            this.level = i;
            this.maxFrameSize = i2;
            this.maxMacroblockRate = j;
        }

        public final int getLevel() {
            return this.level;
        }

        public final int getMaxFrameSize() {
            return this.maxFrameSize;
        }

        public final long getMaxMacroblockRate() {
            return this.maxMacroblockRate;
        }
    }

    public final Integer minimumLevel(int width, int height, double frameRate) {
        Object next;
        if (width > 0 && height > 0 && !Double.isNaN(frameRate) && frameRate > 0.0d) {
            int iCeilDiv = ceilDiv(width, 16);
            int iCeilDiv2 = ceilDiv(height, 16);
            int i = iCeilDiv * iCeilDiv2;
            long jCeil = (long) Math.ceil(((double) i) * frameRate);
            Iterator<T> it = LIMITS.iterator();
            while (true) {
                if (!it.hasNext()) {
                    next = null;
                    break;
                }
                next = it.next();
                Limit limit = (Limit) next;
                int iSqrt = (int) Math.sqrt(((double) limit.getMaxFrameSize()) * 8.0d);
                if (i <= limit.getMaxFrameSize() && jCeil <= limit.getMaxMacroblockRate() && iCeilDiv <= iSqrt && iCeilDiv2 <= iSqrt) {
                    break;
                }
            }
            Limit limit2 = (Limit) next;
            if (limit2 != null) {
                return Integer.valueOf(limit2.getLevel());
            }
        }
        return null;
    }

    private final int ceilDiv(int value, int divisor) {
        return ((value + divisor) - 1) / divisor;
    }
}
