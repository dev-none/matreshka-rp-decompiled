package androidx.media3.transformer;

import androidx.media3.common.VideoCompositorSettings;
import androidx.media3.common.util.Assertions;
import com.google.common.collect.ImmutableList;
import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class Composition {
    public static final int HDR_MODE_EXPERIMENTAL_FORCE_INTERPRET_HDR_AS_SDR = 3;
    public static final int HDR_MODE_KEEP_HDR = 0;
    public static final int HDR_MODE_TONE_MAP_HDR_TO_SDR_USING_MEDIACODEC = 1;
    public static final int HDR_MODE_TONE_MAP_HDR_TO_SDR_USING_OPEN_GL = 2;
    public final Effects effects;

    @Deprecated
    public final boolean forceAudioTrack;
    public final int hdrMode;
    public final boolean retainHdrFromUltraHdrImage;
    public final ImmutableList<EditedMediaItemSequence> sequences;
    public final boolean transmuxAudio;
    public final boolean transmuxVideo;
    public final VideoCompositorSettings videoCompositorSettings;

    @Target({ElementType.TYPE_USE})
    @Documented
    @Retention(RetentionPolicy.SOURCE)
    public @interface HdrMode {
    }

    public static final class Builder {
        private Effects effects;
        private boolean forceAudioTrack;
        private int hdrMode;
        private boolean retainHdrFromUltraHdrImage;
        private ImmutableList<EditedMediaItemSequence> sequences;
        private boolean transmuxAudio;
        private boolean transmuxVideo;
        private VideoCompositorSettings videoCompositorSettings;

        public Builder(EditedMediaItemSequence editedMediaItemSequence, EditedMediaItemSequence... editedMediaItemSequenceArr) {
            this(new ImmutableList.Builder().add(editedMediaItemSequence).add((Object[]) editedMediaItemSequenceArr).build());
        }

        public Builder(List<EditedMediaItemSequence> list) {
            Assertions.checkArgument(!list.isEmpty(), "The composition must contain at least one EditedMediaItemSequence.");
            this.sequences = ImmutableList.copyOf((Collection) list);
            this.videoCompositorSettings = VideoCompositorSettings.DEFAULT;
            this.effects = Effects.EMPTY;
        }

        private Builder(Composition composition) {
            this.sequences = composition.sequences;
            this.videoCompositorSettings = composition.videoCompositorSettings;
            this.effects = composition.effects;
            this.forceAudioTrack = composition.forceAudioTrack;
            this.transmuxAudio = composition.transmuxAudio;
            this.transmuxVideo = composition.transmuxVideo;
            this.hdrMode = composition.hdrMode;
            this.retainHdrFromUltraHdrImage = composition.retainHdrFromUltraHdrImage;
        }

        public Builder setVideoCompositorSettings(VideoCompositorSettings videoCompositorSettings) {
            this.videoCompositorSettings = videoCompositorSettings;
            return this;
        }

        public Builder setEffects(Effects effects) {
            this.effects = effects;
            return this;
        }

        @Deprecated
        public Builder experimentalSetForceAudioTrack(boolean z) {
            this.forceAudioTrack = z;
            return this;
        }

        public Builder setTransmuxAudio(boolean z) {
            this.transmuxAudio = z;
            return this;
        }

        public Builder setTransmuxVideo(boolean z) {
            this.transmuxVideo = z;
            return this;
        }

        public Builder setHdrMode(int i) {
            this.hdrMode = i;
            return this;
        }

        public Builder experimentalSetRetainHdrFromUltraHdrImage(boolean z) {
            this.retainHdrFromUltraHdrImage = z;
            return this;
        }

        public Composition build() {
            ImmutableList<EditedMediaItemSequence> immutableListBuild;
            boolean z = false;
            if (this.forceAudioTrack) {
                ImmutableList.Builder builder = new ImmutableList.Builder();
                for (int i = 0; i < this.sequences.size(); i++) {
                    builder.add(this.sequences.get(i).buildUpon().experimentalSetForceAudioTrack(this.forceAudioTrack).build());
                }
                immutableListBuild = builder.build();
            } else {
                immutableListBuild = this.sequences;
            }
            ImmutableList<EditedMediaItemSequence> immutableList = immutableListBuild;
            VideoCompositorSettings videoCompositorSettings = this.videoCompositorSettings;
            Effects effects = this.effects;
            boolean z2 = this.forceAudioTrack;
            boolean z3 = this.transmuxAudio;
            boolean z4 = this.transmuxVideo;
            int i2 = this.hdrMode;
            if (this.retainHdrFromUltraHdrImage && i2 == 0) {
                z = true;
            }
            return new Composition(immutableList, videoCompositorSettings, effects, z2, z3, z4, i2, z);
        }

        Builder setSequences(List<EditedMediaItemSequence> list) {
            Assertions.checkArgument(!list.isEmpty(), "The composition must contain at least one EditedMediaItemSequence.");
            this.sequences = ImmutableList.copyOf((Collection) list);
            return this;
        }
    }

    Builder buildUpon() {
        return new Builder();
    }

    private Composition(List<EditedMediaItemSequence> list, VideoCompositorSettings videoCompositorSettings, Effects effects, boolean z, boolean z2, boolean z3, int i, boolean z4) {
        Assertions.checkArgument((z2 && z) ? false : true, "Audio transmuxing and audio track forcing are not allowed together.");
        Assertions.checkArgument(hasNonLoopingSequence(list), "Composition must have at least one non-looping sequence.");
        this.sequences = ImmutableList.copyOf((Collection) list);
        this.videoCompositorSettings = videoCompositorSettings;
        this.effects = effects;
        this.transmuxAudio = z2;
        this.transmuxVideo = z3;
        this.forceAudioTrack = z;
        this.hdrMode = i;
        this.retainHdrFromUltraHdrImage = z4;
    }

    boolean hasGaps() {
        for (int i = 0; i < this.sequences.size(); i++) {
            if (this.sequences.get(i).hasGaps()) {
                return true;
            }
        }
        return false;
    }

    private static boolean hasNonLoopingSequence(List<EditedMediaItemSequence> list) {
        Iterator<EditedMediaItemSequence> it = list.iterator();
        while (it.hasNext()) {
            if (!it.next().isLooping) {
                return true;
            }
        }
        return false;
    }
}
