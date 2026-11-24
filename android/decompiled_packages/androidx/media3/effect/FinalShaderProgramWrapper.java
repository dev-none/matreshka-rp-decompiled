package androidx.media3.effect;

import android.content.Context;
import android.opengl.EGL14;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLExt;
import android.opengl.EGLSurface;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.GlObjectsProvider;
import androidx.media3.common.GlTextureInfo;
import androidx.media3.common.SurfaceInfo;
import androidx.media3.common.VideoFrameProcessingException;
import androidx.media3.common.VideoFrameProcessor;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.GlUtil;
import androidx.media3.common.util.Log;
import androidx.media3.common.util.LongArrayQueue;
import androidx.media3.common.util.Size;
import androidx.media3.common.util.SystemClock;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes3.dex */
final class FinalShaderProgramWrapper implements GlShaderProgram, GlTextureProducer {
    private static final int SURFACE_INPUT_CAPACITY = 1;
    private static final String TAG = "FinalShaderWrapper";
    private final Context context;
    private DefaultShaderProgram defaultShaderProgram;
    private final EGLContext eglContext;
    private final EGLDisplay eglDisplay;
    private int inputHeight;
    private int inputWidth;
    private boolean isInputStreamEndedWithPendingAvailableFrames;
    private Listener listener;
    private boolean matrixTransformationsChanged;
    private final ColorInfo outputColorInfo;
    private EGLSurface outputEglSurface;
    private Size outputSizeBeforeSurfaceTransformation;
    private SurfaceInfo outputSurfaceInfo;
    private boolean outputSurfaceInfoChanged;
    private final TexturePool outputTexturePool;
    private final LongArrayQueue outputTextureTimestamps;
    private final EGLSurface placeholderSurface;
    private final boolean renderFramesAutomatically;
    private final int sdrWorkingColorSpace;
    private final LongArrayQueue syncObjects;
    private final GlTextureProducer.Listener textureOutputListener;
    private final VideoFrameProcessingTaskExecutor videoFrameProcessingTaskExecutor;
    private final VideoFrameProcessor.Listener videoFrameProcessorListener;
    private final Executor videoFrameProcessorListenerExecutor;
    private final List<GlMatrixTransformation> matrixTransformations = new ArrayList();
    private final List<RgbMatrix> rgbMatrices = new ArrayList();
    private GlShaderProgram.InputListener inputListener = new GlShaderProgram.InputListener() { // from class: androidx.media3.effect.FinalShaderProgramWrapper.1
    };
    private final Queue<TimedGlTextureInfo> availableFrames = new ConcurrentLinkedQueue();
    private long redrawFramePresentationTimeUs = C.TIME_UNSET;

    public interface Listener {
        void onFrameRendered(long j);

        void onInputStreamProcessed();
    }

    public FinalShaderProgramWrapper(Context context, EGLDisplay eGLDisplay, EGLContext eGLContext, EGLSurface eGLSurface, ColorInfo colorInfo, VideoFrameProcessingTaskExecutor videoFrameProcessingTaskExecutor, Executor executor, VideoFrameProcessor.Listener listener, GlTextureProducer.Listener listener2, int i, int i2, boolean z) {
        this.context = context;
        this.eglDisplay = eGLDisplay;
        this.eglContext = eGLContext;
        this.placeholderSurface = eGLSurface;
        this.outputColorInfo = colorInfo;
        this.videoFrameProcessingTaskExecutor = videoFrameProcessingTaskExecutor;
        this.videoFrameProcessorListenerExecutor = executor;
        this.videoFrameProcessorListener = listener;
        this.textureOutputListener = listener2;
        this.sdrWorkingColorSpace = i2;
        this.renderFramesAutomatically = z;
        this.outputTexturePool = new TexturePool(ColorInfo.isTransferHdr(colorInfo), i);
        this.outputTextureTimestamps = new LongArrayQueue(i);
        this.syncObjects = new LongArrayQueue(i);
    }

    @Override // androidx.media3.effect.GlTextureProducer
    public void releaseOutputTexture(final long j) {
        this.videoFrameProcessingTaskExecutor.submit(new VideoFrameProcessingTaskExecutor.Task() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda7
            @Override // androidx.media3.effect.VideoFrameProcessingTaskExecutor.Task
            public final void run() throws VideoFrameProcessingException, GlUtil.GlException {
                this.f$0.m7395x579c0390(j);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: releaseOutputTextureInternal, reason: merged with bridge method [inline-methods] */
    public void m7395x579c0390(long j) throws GlUtil.GlException {
        Assertions.checkState(this.textureOutputListener != null);
        while (this.outputTexturePool.freeTextureCount() < this.outputTexturePool.capacity() && this.outputTextureTimestamps.element() <= j) {
            this.outputTexturePool.freeTexture();
            this.outputTextureTimestamps.remove();
            GlUtil.deleteSyncObject(this.syncObjects.remove());
            this.inputListener.onReadyToAcceptInputFrame();
        }
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void setInputListener(GlShaderProgram.InputListener inputListener) {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        this.inputListener = inputListener;
        for (int i = 0; i < getInputCapacity(); i++) {
            inputListener.onReadyToAcceptInputFrame();
        }
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void setOutputListener(GlShaderProgram.OutputListener outputListener) {
        throw new UnsupportedOperationException();
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void setErrorListener(Executor executor, GlShaderProgram.ErrorListener errorListener) {
        throw new UnsupportedOperationException();
    }

    public void setListener(Listener listener) {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        this.listener = listener;
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void signalEndOfCurrentInputStream() {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        if (this.availableFrames.isEmpty()) {
            ((Listener) Assertions.checkNotNull(this.listener)).onInputStreamProcessed();
            this.isInputStreamEndedWithPendingAvailableFrames = false;
        } else {
            Assertions.checkState(!this.renderFramesAutomatically);
            this.isInputStreamEndedWithPendingAvailableFrames = true;
        }
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void queueInputFrame(GlObjectsProvider glObjectsProvider, GlTextureInfo glTextureInfo, final long j) {
        FinalShaderProgramWrapper finalShaderProgramWrapper;
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        if (!isWaitingForRedrawFrame()) {
            this.videoFrameProcessorListenerExecutor.execute(new Runnable() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7393xb5581648(j);
                }
            });
        }
        if (this.textureOutputListener == null) {
            if (this.renderFramesAutomatically) {
                renderFrame(glObjectsProvider, glTextureInfo, j, j * 1000);
                finalShaderProgramWrapper = this;
            } else {
                finalShaderProgramWrapper = this;
                finalShaderProgramWrapper.availableFrames.add(new TimedGlTextureInfo(glTextureInfo, j));
                if (isWaitingForRedrawFrame()) {
                    if (j == finalShaderProgramWrapper.redrawFramePresentationTimeUs) {
                        finalShaderProgramWrapper.redrawFramePresentationTimeUs = C.TIME_UNSET;
                        finalShaderProgramWrapper.videoFrameProcessorListenerExecutor.execute(new Runnable() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda5
                            @Override // java.lang.Runnable
                            public final void run() {
                                this.f$0.m7394xa701bc67(j);
                            }
                        });
                        finalShaderProgramWrapper.renderFrame(glObjectsProvider, glTextureInfo, j, SystemClock.DEFAULT.nanoTime());
                        finalShaderProgramWrapper.availableFrames.clear();
                    } else {
                        finalShaderProgramWrapper.inputListener.onInputFrameProcessed(glTextureInfo);
                    }
                }
            }
            finalShaderProgramWrapper.inputListener.onReadyToAcceptInputFrame();
            return;
        }
        Assertions.checkState(this.outputTexturePool.freeTextureCount() > 0);
        renderFrame(glObjectsProvider, glTextureInfo, j, j * 1000);
    }

    /* JADX INFO: renamed from: lambda$queueInputFrame$1$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7393xb5581648(long j) {
        this.videoFrameProcessorListener.onOutputFrameAvailableForRendering(j, false);
    }

    /* JADX INFO: renamed from: lambda$queueInputFrame$2$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7394xa701bc67(long j) {
        this.videoFrameProcessorListener.onOutputFrameAvailableForRendering(j, true);
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void releaseOutputFrame(GlTextureInfo glTextureInfo) {
        throw new UnsupportedOperationException();
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void flush() {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        if (this.textureOutputListener != null) {
            this.outputTexturePool.freeAllTextures();
            this.outputTextureTimestamps.clear();
            this.syncObjects.clear();
        }
        this.availableFrames.clear();
        this.isInputStreamEndedWithPendingAvailableFrames = false;
        DefaultShaderProgram defaultShaderProgram = this.defaultShaderProgram;
        if (defaultShaderProgram != null) {
            defaultShaderProgram.flush();
        }
        this.inputListener.onFlush();
        for (int i = 0; i < getInputCapacity(); i++) {
            this.inputListener.onReadyToAcceptInputFrame();
        }
    }

    @Override // androidx.media3.effect.GlShaderProgram
    public void release() throws VideoFrameProcessingException {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        DefaultShaderProgram defaultShaderProgram = this.defaultShaderProgram;
        if (defaultShaderProgram != null) {
            defaultShaderProgram.release();
        }
        try {
            this.outputTexturePool.deleteAllTextures();
            GlUtil.destroyEglSurface(this.eglDisplay, this.outputEglSurface);
            GlUtil.checkGlError();
        } catch (GlUtil.GlException e) {
            throw new VideoFrameProcessingException(e);
        }
    }

    public void setMatrixTransformations(List<GlMatrixTransformation> list, List<RgbMatrix> list2) {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        this.matrixTransformations.clear();
        this.matrixTransformations.addAll(list);
        this.rgbMatrices.clear();
        this.rgbMatrices.addAll(list2);
        this.matrixTransformationsChanged = true;
    }

    public void renderOutputFrame(GlObjectsProvider glObjectsProvider, long j) {
        this.videoFrameProcessingTaskExecutor.verifyVideoFrameProcessingThread();
        if (this.textureOutputListener == null) {
            Assertions.checkState(!this.renderFramesAutomatically);
            if (!this.availableFrames.isEmpty()) {
                TimedGlTextureInfo timedGlTextureInfoRemove = this.availableFrames.remove();
                renderFrame(glObjectsProvider, timedGlTextureInfoRemove.glTextureInfo, timedGlTextureInfoRemove.presentationTimeUs, j);
                if (this.availableFrames.isEmpty() && this.isInputStreamEndedWithPendingAvailableFrames) {
                    ((Listener) Assertions.checkNotNull(this.listener)).onInputStreamProcessed();
                    this.isInputStreamEndedWithPendingAvailableFrames = false;
                }
            }
        }
    }

    public void setOutputSurfaceInfo(final SurfaceInfo surfaceInfo) {
        try {
            this.videoFrameProcessingTaskExecutor.invoke(new VideoFrameProcessingTaskExecutor.Task() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda2
                @Override // androidx.media3.effect.VideoFrameProcessingTaskExecutor.Task
                public final void run() throws VideoFrameProcessingException, GlUtil.GlException {
                    this.f$0.m7397xba23eae8(surfaceInfo);
                }
            });
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            this.videoFrameProcessorListenerExecutor.execute(new Runnable() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7398xabcd9107(e);
                }
            });
        }
    }

    /* JADX INFO: renamed from: lambda$setOutputSurfaceInfo$4$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7398xabcd9107(InterruptedException interruptedException) {
        this.videoFrameProcessorListener.onError(VideoFrameProcessingException.from(interruptedException));
    }

    void prepareToRedraw(long j) {
        this.redrawFramePresentationTimeUs = j;
        for (int i = 0; i < this.availableFrames.size(); i++) {
            this.inputListener.onInputFrameProcessed(this.availableFrames.remove().glTextureInfo);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: setOutputSurfaceInfoInternal, reason: merged with bridge method [inline-methods] */
    public void m7397xba23eae8(SurfaceInfo surfaceInfo) {
        if (this.textureOutputListener == null && !Objects.equals(this.outputSurfaceInfo, surfaceInfo)) {
            SurfaceInfo surfaceInfo2 = this.outputSurfaceInfo;
            if (surfaceInfo2 != null && (surfaceInfo == null || !surfaceInfo2.surface.equals(surfaceInfo.surface))) {
                destroyOutputEglSurface();
            }
            SurfaceInfo surfaceInfo3 = this.outputSurfaceInfo;
            this.outputSurfaceInfoChanged = (surfaceInfo3 != null && surfaceInfo != null && surfaceInfo3.width == surfaceInfo.width && this.outputSurfaceInfo.height == surfaceInfo.height && this.outputSurfaceInfo.orientationDegrees == surfaceInfo.orientationDegrees) ? false : true;
            this.outputSurfaceInfo = surfaceInfo;
        }
    }

    private int getInputCapacity() {
        if (this.textureOutputListener == null) {
            return 1;
        }
        return this.outputTexturePool.freeTextureCount();
    }

    private void destroyOutputEglSurface() {
        if (this.outputEglSurface == null) {
            return;
        }
        try {
            GlUtil.focusEglSurface(this.eglDisplay, this.eglContext, this.placeholderSurface, 1, 1);
            GlUtil.destroyEglSurface(this.eglDisplay, this.outputEglSurface);
        } catch (GlUtil.GlException e) {
            this.videoFrameProcessorListenerExecutor.execute(new Runnable() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda6
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7391x9b1167fa(e);
                }
            });
        } finally {
            this.outputEglSurface = null;
        }
    }

    /* JADX INFO: renamed from: lambda$destroyOutputEglSurface$5$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7391x9b1167fa(GlUtil.GlException glException) {
        this.videoFrameProcessorListener.onError(VideoFrameProcessingException.from(glException));
    }

    private boolean isWaitingForRedrawFrame() {
        return this.redrawFramePresentationTimeUs != C.TIME_UNSET;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x001a, code lost:
    
        if (r10 != r7.redrawFramePresentationTimeUs) goto L27;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void renderFrame(androidx.media3.common.GlObjectsProvider r8, androidx.media3.common.GlTextureInfo r9, final long r10, long r12) {
        /*
            r7 = this;
            r0 = -2
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 == 0) goto L43
            int r1 = r9.width     // Catch: androidx.media3.common.util.GlUtil.GlException -> L3c androidx.media3.common.VideoFrameProcessingException -> L3e
            int r2 = r9.height     // Catch: androidx.media3.common.util.GlUtil.GlException -> L3c androidx.media3.common.VideoFrameProcessingException -> L3e
            boolean r8 = r7.ensureConfigured(r8, r1, r2)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L3c androidx.media3.common.VideoFrameProcessingException -> L3e
            if (r8 == 0) goto L43
            boolean r8 = r7.isWaitingForRedrawFrame()     // Catch: androidx.media3.common.util.GlUtil.GlException -> L3c androidx.media3.common.VideoFrameProcessingException -> L3e
            if (r8 == 0) goto L25
            long r1 = r7.redrawFramePresentationTimeUs     // Catch: androidx.media3.common.util.GlUtil.GlException -> L1d androidx.media3.common.VideoFrameProcessingException -> L1f
            int r8 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r8 == 0) goto L25
            goto L43
        L1d:
            r0 = move-exception
            goto L20
        L1f:
            r0 = move-exception
        L20:
            r8 = r0
            r1 = r7
            r2 = r9
            r3 = r10
            goto L5d
        L25:
            androidx.media3.common.SurfaceInfo r8 = r7.outputSurfaceInfo     // Catch: androidx.media3.common.util.GlUtil.GlException -> L3c androidx.media3.common.VideoFrameProcessingException -> L3e
            if (r8 == 0) goto L31
            r1 = r7
            r2 = r9
            r3 = r10
            r5 = r12
            r1.renderFrameToOutputSurface(r2, r3, r5)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            goto L67
        L31:
            r1 = r7
            r2 = r9
            r3 = r10
            androidx.media3.effect.GlTextureProducer$Listener r8 = r1.textureOutputListener     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            if (r8 == 0) goto L67
            r7.renderFrameToOutputTexture(r2, r3)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            goto L67
        L3c:
            r0 = move-exception
            goto L3f
        L3e:
            r0 = move-exception
        L3f:
            r1 = r7
            r2 = r9
            r3 = r10
            goto L5c
        L43:
            r1 = r7
            r2 = r9
            r3 = r10
            androidx.media3.effect.GlShaderProgram$InputListener r8 = r1.inputListener     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            r8.onInputFrameProcessed(r2)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            if (r0 != 0) goto L58
            androidx.media3.effect.FinalShaderProgramWrapper$Listener r8 = r1.listener     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            java.lang.Object r8 = androidx.media3.common.util.Assertions.checkNotNull(r8)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            androidx.media3.effect.FinalShaderProgramWrapper$Listener r8 = (androidx.media3.effect.FinalShaderProgramWrapper.Listener) r8     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
            r8.onFrameRendered(r3)     // Catch: androidx.media3.common.util.GlUtil.GlException -> L59 androidx.media3.common.VideoFrameProcessingException -> L5b
        L58:
            return
        L59:
            r0 = move-exception
            goto L5c
        L5b:
            r0 = move-exception
        L5c:
            r8 = r0
        L5d:
            java.util.concurrent.Executor r9 = r1.videoFrameProcessorListenerExecutor
            androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda0 r10 = new androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda0
            r10.<init>()
            r9.execute(r10)
        L67:
            androidx.media3.effect.GlShaderProgram$InputListener r8 = r1.inputListener
            r8.onInputFrameProcessed(r2)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.media3.effect.FinalShaderProgramWrapper.renderFrame(androidx.media3.common.GlObjectsProvider, androidx.media3.common.GlTextureInfo, long, long):void");
    }

    /* JADX INFO: renamed from: lambda$renderFrame$6$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7396x68aa10c0(Exception exc, long j) {
        this.videoFrameProcessorListener.onError(VideoFrameProcessingException.from(exc, j));
    }

    private void renderFrameToOutputSurface(GlTextureInfo glTextureInfo, long j, long j2) throws VideoFrameProcessingException, GlUtil.GlException {
        EGLSurface eGLSurface = (EGLSurface) Assertions.checkNotNull(this.outputEglSurface);
        SurfaceInfo surfaceInfo = (SurfaceInfo) Assertions.checkNotNull(this.outputSurfaceInfo);
        DefaultShaderProgram defaultShaderProgram = (DefaultShaderProgram) Assertions.checkNotNull(this.defaultShaderProgram);
        GlUtil.focusEglSurface(this.eglDisplay, this.eglContext, eGLSurface, surfaceInfo.width, surfaceInfo.height);
        GlUtil.clearFocusedBuffers();
        defaultShaderProgram.drawFrame(glTextureInfo.texId, j);
        if (j2 == -3) {
            Assertions.checkState(j != C.TIME_UNSET);
            j2 = 1000 * j;
        }
        EGLExt.eglPresentationTimeANDROID(this.eglDisplay, eGLSurface, j2);
        EGL14.eglSwapBuffers(this.eglDisplay, eGLSurface);
        ((Listener) Assertions.checkNotNull(this.listener)).onFrameRendered(j);
        DebugTraceUtil.logEvent(DebugTraceUtil.COMPONENT_VFP, DebugTraceUtil.EVENT_RENDERED_TO_OUTPUT_SURFACE, j);
    }

    private void renderFrameToOutputTexture(GlTextureInfo glTextureInfo, long j) throws VideoFrameProcessingException, GlUtil.GlException {
        GlTextureInfo glTextureInfoUseTexture = this.outputTexturePool.useTexture();
        this.outputTextureTimestamps.add(j);
        GlUtil.focusFramebufferUsingCurrentContext(glTextureInfoUseTexture.fboId, glTextureInfoUseTexture.width, glTextureInfoUseTexture.height);
        GlUtil.clearFocusedBuffers();
        ((DefaultShaderProgram) Assertions.checkNotNull(this.defaultShaderProgram)).drawFrame(glTextureInfo.texId, j);
        long jCreateGlSyncFence = GlUtil.createGlSyncFence();
        this.syncObjects.add(jCreateGlSyncFence);
        ((GlTextureProducer.Listener) Assertions.checkNotNull(this.textureOutputListener)).onTextureRendered(this, glTextureInfoUseTexture, j, jCreateGlSyncFence);
    }

    private boolean ensureConfigured(GlObjectsProvider glObjectsProvider, int i, int i2) throws VideoFrameProcessingException, GlUtil.GlException {
        int width;
        int height;
        boolean z = (this.inputWidth == i && this.inputHeight == i2 && this.outputSizeBeforeSurfaceTransformation != null) ? false : true;
        if (z) {
            this.inputWidth = i;
            this.inputHeight = i2;
            final Size sizeConfigureAndGetOutputSize = MatrixUtils.configureAndGetOutputSize(i, i2, this.matrixTransformations);
            if (!Objects.equals(this.outputSizeBeforeSurfaceTransformation, sizeConfigureAndGetOutputSize)) {
                this.outputSizeBeforeSurfaceTransformation = sizeConfigureAndGetOutputSize;
                this.videoFrameProcessorListenerExecutor.execute(new Runnable() { // from class: androidx.media3.effect.FinalShaderProgramWrapper$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.m7392x15dc1440(sizeConfigureAndGetOutputSize);
                    }
                });
            }
        }
        Assertions.checkNotNull(this.outputSizeBeforeSurfaceTransformation);
        SurfaceInfo surfaceInfo = this.outputSurfaceInfo;
        if (surfaceInfo == null && this.textureOutputListener == null) {
            Assertions.checkState(this.outputEglSurface == null);
            DefaultShaderProgram defaultShaderProgram = this.defaultShaderProgram;
            if (defaultShaderProgram != null) {
                defaultShaderProgram.release();
                this.defaultShaderProgram = null;
            }
            Log.w(TAG, "Output surface and size not set, dropping frame.");
            return false;
        }
        if (surfaceInfo == null) {
            width = this.outputSizeBeforeSurfaceTransformation.getWidth();
        } else {
            width = surfaceInfo.width;
        }
        SurfaceInfo surfaceInfo2 = this.outputSurfaceInfo;
        if (surfaceInfo2 == null) {
            height = this.outputSizeBeforeSurfaceTransformation.getHeight();
        } else {
            height = surfaceInfo2.height;
        }
        SurfaceInfo surfaceInfo3 = this.outputSurfaceInfo;
        if (surfaceInfo3 != null && this.outputEglSurface == null) {
            this.outputEglSurface = glObjectsProvider.createEglSurface(this.eglDisplay, surfaceInfo3.surface, this.outputColorInfo.colorTransfer, this.outputSurfaceInfo.isEncoderInputSurface);
        }
        if (this.textureOutputListener != null) {
            this.outputTexturePool.ensureConfigured(glObjectsProvider, width, height);
        }
        DefaultShaderProgram defaultShaderProgram2 = this.defaultShaderProgram;
        if (defaultShaderProgram2 != null && (this.outputSurfaceInfoChanged || z || this.matrixTransformationsChanged)) {
            defaultShaderProgram2.release();
            this.defaultShaderProgram = null;
            this.outputSurfaceInfoChanged = false;
            this.matrixTransformationsChanged = false;
        }
        if (this.defaultShaderProgram == null) {
            SurfaceInfo surfaceInfo4 = this.outputSurfaceInfo;
            this.defaultShaderProgram = createDefaultShaderProgram(surfaceInfo4 == null ? 0 : surfaceInfo4.orientationDegrees, width, height);
            this.outputSurfaceInfoChanged = false;
        }
        return true;
    }

    /* JADX INFO: renamed from: lambda$ensureConfigured$7$androidx-media3-effect-FinalShaderProgramWrapper, reason: not valid java name */
    /* synthetic */ void m7392x15dc1440(Size size) {
        this.videoFrameProcessorListener.onOutputSizeChanged(size.getWidth(), size.getHeight());
    }

    private DefaultShaderProgram createDefaultShaderProgram(int i, int i2, int i3) throws VideoFrameProcessingException {
        ImmutableList.Builder builderAddAll = new ImmutableList.Builder().addAll((Iterable) this.matrixTransformations);
        if (i != 0) {
            builderAddAll.add(new ScaleAndRotateTransformation.Builder().setRotationDegrees(i).build());
        }
        builderAddAll.add(Presentation.createForWidthAndHeight(i2, i3, 0));
        DefaultShaderProgram defaultShaderProgramCreateApplyingOetf = DefaultShaderProgram.createApplyingOetf(this.context, builderAddAll.build(), this.rgbMatrices, this.outputColorInfo, this.sdrWorkingColorSpace);
        Size sizeConfigure = defaultShaderProgramCreateApplyingOetf.configure(this.inputWidth, this.inputHeight);
        SurfaceInfo surfaceInfo = this.outputSurfaceInfo;
        if (surfaceInfo != null) {
            SurfaceInfo surfaceInfo2 = (SurfaceInfo) Assertions.checkNotNull(surfaceInfo);
            Assertions.checkState(sizeConfigure.getWidth() == surfaceInfo2.width);
            Assertions.checkState(sizeConfigure.getHeight() == surfaceInfo2.height);
        }
        return defaultShaderProgramCreateApplyingOetf;
    }
}
