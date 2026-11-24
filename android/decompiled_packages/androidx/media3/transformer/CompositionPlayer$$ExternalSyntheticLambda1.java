package androidx.media3.transformer;

import androidx.media3.common.SimpleBasePlayer;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes4.dex */
public final /* synthetic */ class CompositionPlayer$$ExternalSyntheticLambda1 implements SimpleBasePlayer.PositionSupplier {
    public final /* synthetic */ CompositionPlayer f$0;

    public /* synthetic */ CompositionPlayer$$ExternalSyntheticLambda1(CompositionPlayer compositionPlayer) {
        this.f$0 = compositionPlayer;
    }

    @Override // androidx.media3.common.SimpleBasePlayer.PositionSupplier
    public final long get() {
        return this.f$0.getContentPositionMs();
    }
}
