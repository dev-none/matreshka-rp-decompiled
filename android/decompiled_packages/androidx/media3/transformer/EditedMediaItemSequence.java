package androidx.media3.transformer;

import androidx.media3.common.MediaItem;
import androidx.media3.common.util.Assertions;
import com.google.common.collect.ImmutableList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class EditedMediaItemSequence {
    public final ImmutableList<EditedMediaItem> editedMediaItems;
    public final boolean forceAudioTrack;
    public final boolean forceVideoTrack;
    public final boolean isLooping;

    public static final class Builder {
        private boolean forceAudioTrack;
        private boolean forceVideoTrack;
        private boolean isLooping;
        private final ImmutableList.Builder<EditedMediaItem> items;

        public Builder(EditedMediaItem... editedMediaItemArr) {
            this.items = new ImmutableList.Builder().add((Object[]) editedMediaItemArr);
        }

        public Builder(List<EditedMediaItem> list) {
            this.items = new ImmutableList.Builder().addAll((Iterable) list);
        }

        private Builder(EditedMediaItemSequence editedMediaItemSequence) {
            this.items = new ImmutableList.Builder().addAll((Iterable) editedMediaItemSequence.editedMediaItems);
            this.isLooping = editedMediaItemSequence.isLooping;
            this.forceAudioTrack = editedMediaItemSequence.forceAudioTrack;
            this.forceVideoTrack = editedMediaItemSequence.forceVideoTrack;
        }

        public Builder addItem(EditedMediaItem editedMediaItem) {
            this.items.add(editedMediaItem);
            return this;
        }

        public Builder addItems(EditedMediaItem... editedMediaItemArr) {
            this.items.add(editedMediaItemArr);
            return this;
        }

        public Builder addItems(List<EditedMediaItem> list) {
            this.items.addAll((Iterable<? extends EditedMediaItem>) list);
            return this;
        }

        public Builder addGap(long j) {
            this.items.add(new EditedMediaItem.Builder(new MediaItem.Builder().setMediaId("androidx-media3-GapMediaItem").build()).setDurationUs(j).build());
            return this;
        }

        public Builder setIsLooping(boolean z) {
            this.isLooping = z;
            return this;
        }

        public Builder experimentalSetForceAudioTrack(boolean z) {
            this.forceAudioTrack = z;
            return this;
        }

        public Builder experimentalSetForceVideoTrack(boolean z) {
            this.forceVideoTrack = z;
            return this;
        }

        public EditedMediaItemSequence build() {
            return new EditedMediaItemSequence(this);
        }
    }

    @Deprecated
    public EditedMediaItemSequence(EditedMediaItem editedMediaItem, EditedMediaItem... editedMediaItemArr) {
        this(new Builder(new EditedMediaItem[0]).addItem(editedMediaItem).addItems(editedMediaItemArr));
    }

    @Deprecated
    public EditedMediaItemSequence(List<EditedMediaItem> list) {
        this(new Builder(new EditedMediaItem[0]).addItems(list));
    }

    @Deprecated
    public EditedMediaItemSequence(List<EditedMediaItem> list, boolean z) {
        this(new Builder(new EditedMediaItem[0]).addItems(list).setIsLooping(z));
    }

    public Builder buildUpon() {
        return new Builder();
    }

    static int getEditedMediaItemIndex(EditedMediaItemSequence editedMediaItemSequence, int i) {
        return editedMediaItemSequence.isLooping ? i % editedMediaItemSequence.editedMediaItems.size() : i;
    }

    static EditedMediaItem getEditedMediaItem(EditedMediaItemSequence editedMediaItemSequence, int i) {
        return editedMediaItemSequence.editedMediaItems.get(getEditedMediaItemIndex(editedMediaItemSequence, i));
    }

    private EditedMediaItemSequence(Builder builder) {
        ImmutableList<EditedMediaItem> immutableListBuild = builder.items.build();
        this.editedMediaItems = immutableListBuild;
        boolean z = true;
        Assertions.checkArgument(!immutableListBuild.isEmpty(), "The sequence must contain at least one EditedMediaItem.");
        if (immutableListBuild.get(0).isGap() && !builder.forceAudioTrack && !builder.forceVideoTrack) {
            z = false;
        }
        Assertions.checkArgument(z, "If the first item in the sequence is a Gap, then forceAudioTrack or forceVideoTrack flag must be set");
        this.isLooping = builder.isLooping;
        this.forceAudioTrack = builder.forceAudioTrack;
        this.forceVideoTrack = builder.forceVideoTrack;
    }

    boolean hasGaps() {
        for (int i = 0; i < this.editedMediaItems.size(); i++) {
            if (this.editedMediaItems.get(i).isGap()) {
                return true;
            }
        }
        return false;
    }
}
