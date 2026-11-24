package androidx.media3.transformer;

import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.HandlerWrapper;
import androidx.media3.common.util.ListenerSet;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes4.dex */
final class FallbackListener {
    private final Composition composition;
    private TransformationRequest fallbackTransformationRequest;
    private final TransformationRequest originalTransformationRequest;
    private final AtomicInteger trackCount = new AtomicInteger();
    private final HandlerWrapper transformerListenerHandler;
    private final ListenerSet<Transformer.Listener> transformerListeners;

    public FallbackListener(Composition composition, ListenerSet<Transformer.Listener> listenerSet, HandlerWrapper handlerWrapper, TransformationRequest transformationRequest) {
        this.composition = composition;
        this.transformerListeners = listenerSet;
        this.transformerListenerHandler = handlerWrapper;
        this.originalTransformationRequest = transformationRequest;
        this.fallbackTransformationRequest = transformationRequest;
    }

    public void setTrackCount(int i) {
        this.trackCount.set(i);
    }

    public synchronized void onTransformationRequestFinalized(TransformationRequest transformationRequest) {
        Assertions.checkState(this.trackCount.getAndDecrement() > 0);
        TransformationRequest.Builder builderBuildUpon = this.fallbackTransformationRequest.buildUpon();
        if (!Objects.equals(transformationRequest.audioMimeType, this.originalTransformationRequest.audioMimeType)) {
            builderBuildUpon.setAudioMimeType(transformationRequest.audioMimeType);
        }
        if (!Objects.equals(transformationRequest.videoMimeType, this.originalTransformationRequest.videoMimeType)) {
            builderBuildUpon.setVideoMimeType(transformationRequest.videoMimeType);
        }
        if (transformationRequest.outputHeight != this.originalTransformationRequest.outputHeight) {
            builderBuildUpon.setResolution(transformationRequest.outputHeight);
        }
        if (transformationRequest.hdrMode != this.originalTransformationRequest.hdrMode) {
            builderBuildUpon.setHdrMode(transformationRequest.hdrMode);
        }
        final TransformationRequest transformationRequestBuild = builderBuildUpon.build();
        this.fallbackTransformationRequest = transformationRequestBuild;
        if (this.trackCount.get() == 0 && !this.originalTransformationRequest.equals(this.fallbackTransformationRequest)) {
            this.transformerListenerHandler.post(new Runnable() { // from class: androidx.media3.transformer.FallbackListener$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7643x1c71813f(transformationRequestBuild);
                }
            });
        }
    }

    /* JADX INFO: renamed from: lambda$onTransformationRequestFinalized$1$androidx-media3-transformer-FallbackListener, reason: not valid java name */
    /* synthetic */ void m7643x1c71813f(final TransformationRequest transformationRequest) {
        this.transformerListeners.sendEvent(-1, new ListenerSet.Event() { // from class: androidx.media3.transformer.FallbackListener$$ExternalSyntheticLambda0
            @Override // androidx.media3.common.util.ListenerSet.Event
            public final void invoke(Object obj) {
                this.f$0.m7642x62f9f3a0(transformationRequest, (Transformer.Listener) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$onTransformationRequestFinalized$0$androidx-media3-transformer-FallbackListener, reason: not valid java name */
    /* synthetic */ void m7642x62f9f3a0(TransformationRequest transformationRequest, Transformer.Listener listener) {
        listener.onFallbackApplied(this.composition, this.originalTransformationRequest, transformationRequest);
    }
}
