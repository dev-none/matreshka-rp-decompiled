package com.unity3d.ads.adplayer.webviewpool;

import android.content.Context;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.webkit.ValueCallback;
import android.webkit.WebSettings;
import android.webkit.WebView;
import androidx.webkit.WebViewClientCompat;
import com.rebeloid.unity_ads.UnityAdsConstants;
import com.unity3d.ads.adplayer.AndroidWebViewClient;
import com.unity3d.ads.core.domain.GetCachedAsset;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CompletableDeferredKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.TimeoutKt;

/* JADX INFO: compiled from: AndroidWebViewPool.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0010\u0018\u0000 +2\u00020\u0001:\u0001+B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u0016\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0013H\u0096@¢\u0006\u0002\u0010\u0017J\u0010\u0010\u0018\u001a\u0004\u0018\u00010\u000eH\u0096@¢\u0006\u0002\u0010\u0019J\u000e\u0010\u001a\u001a\u00020\u000eH\u0096@¢\u0006\u0002\u0010\u0019J\u0016\u0010\u001b\u001a\u00020\u000e2\u0006\u0010\u001c\u001a\u00020\u000eH\u0096@¢\u0006\u0002\u0010\u001dJ\u0016\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\u000eH\u0096@¢\u0006\u0002\u0010\u001dJ\u0016\u0010\u001f\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\u000eH\u0096@¢\u0006\u0002\u0010\u001dJ\u0016\u0010 \u001a\u00020!2\u0006\u0010\u001c\u001a\u00020\u000eH\u0082@¢\u0006\u0002\u0010\u001dJ\u0016\u0010\"\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\u000eH\u0082@¢\u0006\u0002\u0010\u001dJ\u0010\u0010#\u001a\u00020\u000eH\u0090@¢\u0006\u0004\b$\u0010\u0019J\b\u0010%\u001a\u00020&H\u0002J\u0016\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020&H\u0083@¢\u0006\u0002\u0010*R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006,"}, d2 = {"Lcom/unity3d/ads/adplayer/webviewpool/AndroidWebViewPool;", "Lcom/unity3d/ads/adplayer/webviewpool/WebViewPool;", "context", "Landroid/content/Context;", "mainDispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "getCachedAsset", "Lcom/unity3d/ads/core/domain/GetCachedAsset;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "<init>", "(Landroid/content/Context;Lkotlinx/coroutines/CoroutineDispatcher;Lcom/unity3d/ads/core/domain/GetCachedAsset;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;)V", "freshViews", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Lcom/unity3d/ads/adplayer/webviewpool/PoolEntry;", "recycledViews", UnityAdsConstants.IS_INITIALIZED_METHOD, "Ljava/util/concurrent/atomic/AtomicBoolean;", "poolSize", "", "initialize", "", RRWebVideoEvent.JsonKeys.SIZE, "(ILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "acquireFreshEntry", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "acquireForShow", "resetEntry", "entry", "(Lcom/unity3d/ads/adplayer/webviewpool/PoolEntry;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "enqueueRecycled", "release", "isHealthy", "", "destroyEntry", "createFreshEntry", "createFreshEntry$unity_ads_defaultRelease", "createClient", "Lcom/unity3d/ads/adplayer/AndroidWebViewClient;", "createWebView", "Landroid/webkit/WebView;", "client", "(Lcom/unity3d/ads/adplayer/AndroidWebViewClient;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public class AndroidWebViewPool implements WebViewPool {
    private static final long ACQUIRE_TIMEOUT_MS = 2000;
    private static final long HEALTH_CHECK_TIMEOUT_MS = 500;
    private final Context context;
    private final ConcurrentLinkedQueue<PoolEntry> freshViews;
    private final GetCachedAsset getCachedAsset;
    private final AtomicBoolean isInitialized;
    private final CoroutineDispatcher mainDispatcher;
    private volatile int poolSize;
    private final ConcurrentLinkedQueue<PoolEntry> recycledViews;
    private final SendDiagnosticEvent sendDiagnosticEvent;

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$acquireForShow$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool", f = "AndroidWebViewPool.kt", i = {0}, l = {58, 69}, m = "acquireForShow$suspendImpl", n = {"$this"}, s = {"L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidWebViewPool.acquireForShow$suspendImpl(AndroidWebViewPool.this, this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$initialize$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool", f = "AndroidWebViewPool.kt", i = {0, 0}, l = {41}, m = "initialize$suspendImpl", n = {"$this", RRWebVideoEvent.JsonKeys.SIZE}, s = {"L$0", "I$0"})
    static final class C18301 extends ContinuationImpl {
        int I$0;
        int I$1;
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        C18301(Continuation<? super C18301> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidWebViewPool.initialize$suspendImpl(AndroidWebViewPool.this, 0, this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool", f = "AndroidWebViewPool.kt", i = {}, l = {117}, m = "isHealthy", n = {}, s = {})
    static final class C18311 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C18311(Continuation<? super C18311> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidWebViewPool.this.isHealthy(null, this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$release$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool", f = "AndroidWebViewPool.kt", i = {}, l = {113, 113}, m = "release$suspendImpl", n = {}, s = {})
    static final class C18331 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        C18331(Continuation<? super C18331> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidWebViewPool.release$suspendImpl(AndroidWebViewPool.this, null, this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool", f = "AndroidWebViewPool.kt", i = {0, 0, 0, 1, 1, 2, 2}, l = {83, 95, 97}, m = "resetEntry$suspendImpl", n = {"$this", "entry", "blankLoaded", "$this", "entry", "entry", "freshClient"}, s = {"L$0", "L$1", "L$2", "L$0", "L$1", "L$0", "L$1"})
    static final class C18341 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        int label;
        /* synthetic */ Object result;

        C18341(Continuation<? super C18341> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidWebViewPool.resetEntry$suspendImpl(AndroidWebViewPool.this, null, this);
        }
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object acquireForShow(Continuation<? super PoolEntry> continuation) {
        return acquireForShow$suspendImpl(this, continuation);
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object acquireFreshEntry(Continuation<? super PoolEntry> continuation) {
        return acquireFreshEntry$suspendImpl(this, continuation);
    }

    public Object createFreshEntry$unity_ads_defaultRelease(Continuation<? super PoolEntry> continuation) {
        return createFreshEntry$suspendImpl(this, continuation);
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object enqueueRecycled(PoolEntry poolEntry, Continuation<? super Unit> continuation) {
        return enqueueRecycled$suspendImpl(this, poolEntry, continuation);
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object initialize(int i, Continuation<? super Unit> continuation) {
        return initialize$suspendImpl(this, i, continuation);
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object release(PoolEntry poolEntry, Continuation<? super Unit> continuation) {
        return release$suspendImpl(this, poolEntry, continuation);
    }

    @Override // com.unity3d.ads.adplayer.webviewpool.WebViewPool
    public Object resetEntry(PoolEntry poolEntry, Continuation<? super PoolEntry> continuation) {
        return resetEntry$suspendImpl(this, poolEntry, continuation);
    }

    public AndroidWebViewPool(Context context, CoroutineDispatcher mainDispatcher, GetCachedAsset getCachedAsset, SendDiagnosticEvent sendDiagnosticEvent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(mainDispatcher, "mainDispatcher");
        Intrinsics.checkNotNullParameter(getCachedAsset, "getCachedAsset");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        this.context = context;
        this.mainDispatcher = mainDispatcher;
        this.getCachedAsset = getCachedAsset;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.freshViews = new ConcurrentLinkedQueue<>();
        this.recycledViews = new ConcurrentLinkedQueue<>();
        this.isInitialized = new AtomicBoolean(false);
    }

    /* JADX WARN: Code duplicated, block: B:21:0x0059  */
    /* JADX WARN: Code duplicated, block: B:23:0x006b A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:24:0x006c  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:24:0x006c -> B:12:0x0038). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    static /* synthetic */ java.lang.Object initialize$suspendImpl(com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r6, int r7, kotlin.coroutines.Continuation<? super kotlin.Unit> r8) {
        /*
            boolean r0 = r8 instanceof com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.C18301
            if (r0 == 0) goto L14
            r0 = r8
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$initialize$1 r0 = (com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.C18301) r0
            int r1 = r0.label
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 & r2
            if (r1 == 0) goto L14
            int r8 = r0.label
            int r8 = r8 - r2
            r0.label = r8
            goto L19
        L14:
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$initialize$1 r0 = new com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$initialize$1
            r0.<init>(r8)
        L19:
            java.lang.Object r8 = r0.result
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r2 = r0.label
            r3 = 1
            if (r2 == 0) goto L43
            if (r2 != r3) goto L3b
            int r6 = r0.I$1
            int r7 = r0.I$0
            java.lang.Object r2 = r0.L$1
            java.util.concurrent.ConcurrentLinkedQueue r2 = (java.util.concurrent.ConcurrentLinkedQueue) r2
            java.lang.Object r4 = r0.L$0
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r4 = (com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool) r4
            kotlin.ResultKt.throwOnFailure(r8)
            r5 = r0
            r0 = r7
            r7 = r4
        L38:
            r4 = r2
            r2 = r5
            goto L70
        L3b:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "call to 'resume' before 'invoke' with coroutine"
            r6.<init>(r7)
            throw r6
        L43:
            kotlin.ResultKt.throwOnFailure(r8)
            r6.poolSize = r7
            java.util.concurrent.atomic.AtomicBoolean r8 = r6.isInitialized
            r2 = 0
            boolean r8 = r8.compareAndSet(r2, r3)
            if (r8 != 0) goto L54
            kotlin.Unit r6 = kotlin.Unit.INSTANCE
            return r6
        L54:
            r8 = r7
            r7 = r6
            r6 = r2
        L57:
            if (r6 >= r8) goto L77
            java.util.concurrent.ConcurrentLinkedQueue<com.unity3d.ads.adplayer.webviewpool.PoolEntry> r2 = r7.freshViews
            r0.L$0 = r7
            r0.L$1 = r2
            r0.I$0 = r8
            r0.I$1 = r6
            r0.label = r3
            java.lang.Object r4 = r7.createFreshEntry$unity_ads_defaultRelease(r0)
            if (r4 != r1) goto L6c
            return r1
        L6c:
            r5 = r0
            r0 = r8
            r8 = r4
            goto L38
        L70:
            r4.offer(r8)
            int r6 = r6 + r3
            r8 = r0
            r0 = r2
            goto L57
        L77:
            kotlin.Unit r6 = kotlin.Unit.INSTANCE
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.initialize$suspendImpl(com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool, int, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$acquireFreshEntry$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/unity3d/ads/adplayer/webviewpool/PoolEntry;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$acquireFreshEntry$2", f = "AndroidWebViewPool.kt", i = {0}, l = {49, 50}, m = "invokeSuspend", n = {"entry"}, s = {"L$0"})
    static final class C18272 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super PoolEntry>, Object> {
        Object L$0;
        int label;

        C18272(Continuation<? super C18272> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidWebViewPool.this.new C18272(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super PoolEntry> continuation) {
            return ((C18272) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:12:0x0035  */
        /* JADX WARN: Code duplicated, block: B:15:0x0045 A[PHI: r1 r7
  0x0045: PHI (r1v2 com.unity3d.ads.adplayer.webviewpool.PoolEntry) = (r1v3 com.unity3d.ads.adplayer.webviewpool.PoolEntry), (r1v7 com.unity3d.ads.adplayer.webviewpool.PoolEntry) binds: [B:13:0x0042, B:9:0x001b] A[DONT_GENERATE, DONT_INLINE]
  0x0045: PHI (r7v5 java.lang.Object) = (r7v11 java.lang.Object), (r7v0 java.lang.Object) binds: [B:13:0x0042, B:9:0x001b] A[DONT_GENERATE, DONT_INLINE]] */
        /* JADX WARN: Code duplicated, block: B:17:0x004d A[RETURN] */
        /* JADX WARN: Code duplicated, block: B:18:0x004e  */
        /* JADX WARN: Code duplicated, block: B:22:0x006c A[RETURN] */
        /* JADX WARN: Code restructure failed: missing block: B:19:0x005b, code lost:
        
            if (r6.this$0.destroyEntry(r1, r6) == r0) goto L20;
         */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:19:0x005b -> B:21:0x005e). Please report as a decompilation issue!!! */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r7) {
            /*
                r6 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r6.label
                r2 = 0
                r3 = 2
                r4 = 1
                if (r1 == 0) goto L23
                if (r1 == r4) goto L1b
                if (r1 != r3) goto L13
                kotlin.ResultKt.throwOnFailure(r7)
                goto L5e
            L13:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r7.<init>(r0)
                throw r7
            L1b:
                java.lang.Object r1 = r6.L$0
                com.unity3d.ads.adplayer.webviewpool.PoolEntry r1 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r1
                kotlin.ResultKt.throwOnFailure(r7)
                goto L45
            L23:
                kotlin.ResultKt.throwOnFailure(r7)
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                java.util.concurrent.ConcurrentLinkedQueue r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$getFreshViews$p(r7)
                java.lang.Object r7 = r7.poll()
                com.unity3d.ads.adplayer.webviewpool.PoolEntry r7 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r7
                r1 = r7
            L33:
                if (r1 == 0) goto L6c
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                r5 = r6
                kotlin.coroutines.Continuation r5 = (kotlin.coroutines.Continuation) r5
                r6.L$0 = r1
                r6.label = r4
                java.lang.Object r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$isHealthy(r7, r1, r5)
                if (r7 != r0) goto L45
                goto L5d
            L45:
                java.lang.Boolean r7 = (java.lang.Boolean) r7
                boolean r7 = r7.booleanValue()
                if (r7 == 0) goto L4e
                return r1
            L4e:
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                r5 = r6
                kotlin.coroutines.Continuation r5 = (kotlin.coroutines.Continuation) r5
                r6.L$0 = r2
                r6.label = r3
                java.lang.Object r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$destroyEntry(r7, r1, r5)
                if (r7 != r0) goto L5e
            L5d:
                return r0
            L5e:
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                java.util.concurrent.ConcurrentLinkedQueue r7 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$getFreshViews$p(r7)
                java.lang.Object r7 = r7.poll()
                r1 = r7
                com.unity3d.ads.adplayer.webviewpool.PoolEntry r1 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r1
                goto L33
            L6c:
                return r2
            */
            throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.C18272.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    static /* synthetic */ Object acquireFreshEntry$suspendImpl(AndroidWebViewPool androidWebViewPool, Continuation<? super PoolEntry> continuation) {
        return TimeoutKt.withTimeoutOrNull(2000L, androidWebViewPool.new C18272(null), continuation);
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$acquireForShow$2, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/unity3d/ads/adplayer/webviewpool/PoolEntry;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$acquireForShow$2", f = "AndroidWebViewPool.kt", i = {0, 0, 1}, l = {62, 63}, m = "invokeSuspend", n = {"queue", "entry", "queue"}, s = {"L$1", "L$2", "L$1"})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super PoolEntry>, Object> {
        Object L$0;
        Object L$1;
        Object L$2;
        int label;

        AnonymousClass2(Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidWebViewPool.this.new AnonymousClass2(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super PoolEntry> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:11:0x004f A[PHI: r10
  0x004f: PHI (r10v6 java.util.Iterator) = (r10v5 java.util.Iterator), (r10v13 java.util.Iterator) binds: [B:10:0x0034, B:15:0x0061] A[DONT_GENERATE, DONT_INLINE]] */
        /* JADX WARN: Code duplicated, block: B:13:0x0055  */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:13:0x0055 -> B:14:0x005b). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:27:0x009b -> B:14:0x005b). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r10) {
            /*
                r9 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r9.label
                r2 = 0
                r3 = 2
                r4 = 1
                if (r1 == 0) goto L34
                if (r1 == r4) goto L24
                if (r1 != r3) goto L1c
                java.lang.Object r1 = r9.L$1
                java.util.concurrent.ConcurrentLinkedQueue r1 = (java.util.concurrent.ConcurrentLinkedQueue) r1
                java.lang.Object r5 = r9.L$0
                java.util.Iterator r5 = (java.util.Iterator) r5
                kotlin.ResultKt.throwOnFailure(r10)
                r10 = r5
                goto L5b
            L1c:
                java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r10.<init>(r0)
                throw r10
            L24:
                java.lang.Object r1 = r9.L$2
                com.unity3d.ads.adplayer.webviewpool.PoolEntry r1 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r1
                java.lang.Object r5 = r9.L$1
                java.util.concurrent.ConcurrentLinkedQueue r5 = (java.util.concurrent.ConcurrentLinkedQueue) r5
                java.lang.Object r6 = r9.L$0
                java.util.Iterator r6 = (java.util.Iterator) r6
                kotlin.ResultKt.throwOnFailure(r10)
                goto L7e
            L34:
                kotlin.ResultKt.throwOnFailure(r10)
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r10 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                java.util.concurrent.ConcurrentLinkedQueue r10 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$getFreshViews$p(r10)
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r1 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                java.util.concurrent.ConcurrentLinkedQueue r1 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$getRecycledViews$p(r1)
                java.util.concurrent.ConcurrentLinkedQueue[] r10 = new java.util.concurrent.ConcurrentLinkedQueue[]{r10, r1}
                java.util.List r10 = kotlin.collections.CollectionsKt.listOf(r10)
                java.util.Iterator r10 = r10.iterator()
            L4f:
                boolean r1 = r10.hasNext()
                if (r1 == 0) goto L9e
                java.lang.Object r1 = r10.next()
                java.util.concurrent.ConcurrentLinkedQueue r1 = (java.util.concurrent.ConcurrentLinkedQueue) r1
            L5b:
                java.lang.Object r5 = r1.poll()
                com.unity3d.ads.adplayer.webviewpool.PoolEntry r5 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r5
                if (r5 != 0) goto L64
                goto L4f
            L64:
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r6 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                r7 = r9
                kotlin.coroutines.Continuation r7 = (kotlin.coroutines.Continuation) r7
                r9.L$0 = r10
                r9.L$1 = r1
                r9.L$2 = r5
                r9.label = r4
                java.lang.Object r6 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$isHealthy(r6, r5, r7)
                if (r6 != r0) goto L78
                goto L9a
            L78:
                r8 = r6
                r6 = r10
                r10 = r8
                r8 = r5
                r5 = r1
                r1 = r8
            L7e:
                java.lang.Boolean r10 = (java.lang.Boolean) r10
                boolean r10 = r10.booleanValue()
                if (r10 == 0) goto L87
                return r1
            L87:
                com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r10 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.this
                r7 = r9
                kotlin.coroutines.Continuation r7 = (kotlin.coroutines.Continuation) r7
                r9.L$0 = r6
                r9.L$1 = r5
                r9.L$2 = r2
                r9.label = r3
                java.lang.Object r10 = com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.access$destroyEntry(r10, r1, r7)
                if (r10 != r0) goto L9b
            L9a:
                return r0
            L9b:
                r1 = r5
                r10 = r6
                goto L5b
            L9e:
                return r2
            */
            throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.AnonymousClass2.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    static /* synthetic */ Object acquireForShow$suspendImpl(AndroidWebViewPool androidWebViewPool, Continuation<? super PoolEntry> continuation) {
        AnonymousClass1 anonymousClass1;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = androidWebViewPool.new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = androidWebViewPool.new AnonymousClass1(continuation);
        }
        Object objWithTimeoutOrNull = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
            AnonymousClass2 anonymousClass2 = androidWebViewPool.new AnonymousClass2(null);
            anonymousClass1.L$0 = androidWebViewPool;
            anonymousClass1.label = 1;
            objWithTimeoutOrNull = TimeoutKt.withTimeoutOrNull(2000L, anonymousClass2, anonymousClass1);
            if (objWithTimeoutOrNull != coroutine_suspended) {
            }
        }
        if (i != 1) {
            if (i != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
            return objWithTimeoutOrNull;
        }
        androidWebViewPool = (AndroidWebViewPool) anonymousClass1.L$0;
        ResultKt.throwOnFailure(objWithTimeoutOrNull);
        PoolEntry poolEntry = (PoolEntry) objWithTimeoutOrNull;
        if (poolEntry != null) {
            return poolEntry;
        }
        anonymousClass1.L$0 = null;
        anonymousClass1.label = 2;
        Object objCreateFreshEntry$unity_ads_defaultRelease = androidWebViewPool.createFreshEntry$unity_ads_defaultRelease(anonymousClass1);
        return objCreateFreshEntry$unity_ads_defaultRelease == coroutine_suspended ? coroutine_suspended : objCreateFreshEntry$unity_ads_defaultRelease;
    }

    /* JADX WARN: Code duplicated, block: B:29:0x00bc  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Type inference failed for: r2v1, types: [com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$resetClient$1] */
    static /* synthetic */ Object resetEntry$suspendImpl(AndroidWebViewPool androidWebViewPool, PoolEntry poolEntry, Continuation<? super PoolEntry> continuation) {
        C18341 c18341;
        AndroidWebViewPool androidWebViewPool2;
        CompletableDeferred completableDeferred;
        PoolEntry poolEntry2;
        AndroidWebViewPool androidWebViewPool3;
        AndroidWebViewClient androidWebViewClientCreateClient;
        CoroutineDispatcher coroutineDispatcher;
        AnonymousClass4 anonymousClass4;
        PoolEntry poolEntry3;
        AndroidWebViewClient androidWebViewClient;
        if (continuation instanceof C18341) {
            c18341 = (C18341) continuation;
            if ((c18341.label & Integer.MIN_VALUE) != 0) {
                c18341.label -= Integer.MIN_VALUE;
            } else {
                c18341 = androidWebViewPool.new C18341(continuation);
            }
        } else {
            c18341 = androidWebViewPool.new C18341(continuation);
        }
        Object obj = c18341.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c18341.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            final CompletableDeferred completableDeferredCompletableDeferred$default = CompletableDeferredKt.CompletableDeferred$default(null, 1, null);
            ?? r2 = new WebViewClientCompat() { // from class: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$resetClient$1
                @Override // android.webkit.WebViewClient
                public void onPageFinished(WebView view, String url) {
                    Intrinsics.checkNotNullParameter(view, "view");
                    Intrinsics.checkNotNullParameter(url, "url");
                    if (Intrinsics.areEqual(url, AndroidWebViewClient.BLANK_PAGE)) {
                        completableDeferredCompletableDeferred$default.complete(Unit.INSTANCE);
                    }
                }
            };
            CoroutineDispatcher coroutineDispatcher2 = androidWebViewPool.mainDispatcher;
            C18352 c18352 = new C18352(poolEntry, r2, null);
            c18341.L$0 = androidWebViewPool;
            c18341.L$1 = poolEntry;
            c18341.L$2 = completableDeferredCompletableDeferred$default;
            c18341.label = 1;
            if (BuildersKt.withContext(coroutineDispatcher2, c18352, c18341) != coroutine_suspended) {
                androidWebViewPool2 = androidWebViewPool;
                completableDeferred = completableDeferredCompletableDeferred$default;
            }
            return coroutine_suspended;
        }
        if (i == 1) {
            completableDeferred = (CompletableDeferred) c18341.L$2;
            poolEntry = (PoolEntry) c18341.L$1;
            androidWebViewPool2 = (AndroidWebViewPool) c18341.L$0;
            ResultKt.throwOnFailure(obj);
        } else {
            if (i == 2) {
                poolEntry2 = (PoolEntry) c18341.L$1;
                androidWebViewPool3 = (AndroidWebViewPool) c18341.L$0;
                ResultKt.throwOnFailure(obj);
                androidWebViewClientCreateClient = androidWebViewPool3.createClient();
                coroutineDispatcher = androidWebViewPool3.mainDispatcher;
                anonymousClass4 = new AnonymousClass4(poolEntry2, androidWebViewClientCreateClient, null);
                c18341.L$0 = poolEntry2;
                c18341.L$1 = androidWebViewClientCreateClient;
                c18341.label = 3;
                if (BuildersKt.withContext(coroutineDispatcher, anonymousClass4, c18341) != coroutine_suspended) {
                    poolEntry3 = poolEntry2;
                    androidWebViewClient = androidWebViewClientCreateClient;
                }
                return coroutine_suspended;
            }
            if (i != 3) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            androidWebViewClient = (AndroidWebViewClient) c18341.L$1;
            poolEntry3 = (PoolEntry) c18341.L$0;
            ResultKt.throwOnFailure(obj);
        }
        return new PoolEntry(poolEntry3.getWebView(), androidWebViewClient);
        AnonymousClass3 anonymousClass3 = new AnonymousClass3(completableDeferred, null);
        c18341.L$0 = androidWebViewPool2;
        c18341.L$1 = poolEntry;
        c18341.L$2 = null;
        c18341.label = 2;
        if (TimeoutKt.withTimeoutOrNull(500L, anonymousClass3, c18341) != coroutine_suspended) {
            poolEntry2 = poolEntry;
            androidWebViewPool3 = androidWebViewPool2;
            androidWebViewClientCreateClient = androidWebViewPool3.createClient();
            coroutineDispatcher = androidWebViewPool3.mainDispatcher;
            anonymousClass4 = new AnonymousClass4(poolEntry2, androidWebViewClientCreateClient, null);
            c18341.L$0 = poolEntry2;
            c18341.L$1 = androidWebViewClientCreateClient;
            c18341.label = 3;
            if (BuildersKt.withContext(coroutineDispatcher, anonymousClass4, c18341) != coroutine_suspended) {
                poolEntry3 = poolEntry2;
                androidWebViewClient = androidWebViewClientCreateClient;
                return new PoolEntry(poolEntry3.getWebView(), androidWebViewClient);
            }
        }
        return coroutine_suspended;
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$2", f = "AndroidWebViewPool.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C18352 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ PoolEntry $entry;
        final /* synthetic */ AndroidWebViewPool$resetEntry$resetClient$1 $resetClient;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18352(PoolEntry poolEntry, AndroidWebViewPool$resetEntry$resetClient$1 androidWebViewPool$resetEntry$resetClient$1, Continuation<? super C18352> continuation) {
            super(2, continuation);
            this.$entry = poolEntry;
            this.$resetClient = androidWebViewPool$resetEntry$resetClient$1;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18352(this.$entry, this.$resetClient, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C18352) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ViewParent parent = this.$entry.getWebView().getParent();
            ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
            if (viewGroup != null) {
                viewGroup.removeView(this.$entry.getWebView());
            }
            this.$entry.getWebView().removeJavascriptInterface("webviewbridge");
            this.$entry.getWebView().setWebViewClient(this.$resetClient);
            this.$entry.getWebView().loadUrl(AndroidWebViewClient.BLANK_PAGE);
            this.$entry.getWebView().clearHistory();
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$3, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$3", f = "AndroidWebViewPool.kt", i = {}, l = {95}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ CompletableDeferred<Unit> $blankLoaded;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass3(CompletableDeferred<Unit> completableDeferred, Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
            this.$blankLoaded = completableDeferred;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass3(this.$blankLoaded, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (this.$blankLoaded.await(this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$4, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$resetEntry$4", f = "AndroidWebViewPool.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass4 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ PoolEntry $entry;
        final /* synthetic */ AndroidWebViewClient $freshClient;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass4(PoolEntry poolEntry, AndroidWebViewClient androidWebViewClient, Continuation<? super AnonymousClass4> continuation) {
            super(2, continuation);
            this.$entry = poolEntry;
            this.$freshClient = androidWebViewClient;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass4(this.$entry, this.$freshClient, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass4) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            this.$entry.getWebView().setWebViewClient(this.$freshClient);
            return Unit.INSTANCE;
        }
    }

    static /* synthetic */ Object enqueueRecycled$suspendImpl(AndroidWebViewPool androidWebViewPool, PoolEntry poolEntry, Continuation<? super Unit> continuation) {
        if (androidWebViewPool.recycledViews.size() < androidWebViewPool.poolSize) {
            androidWebViewPool.recycledViews.offer(poolEntry);
            return Unit.INSTANCE;
        }
        Object objDestroyEntry = androidWebViewPool.destroyEntry(poolEntry, continuation);
        return objDestroyEntry == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objDestroyEntry : Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0056, code lost:
    
        if (r5.enqueueRecycled((com.unity3d.ads.adplayer.webviewpool.PoolEntry) r7, r0) == r1) goto L21;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ java.lang.Object release$suspendImpl(com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r5, com.unity3d.ads.adplayer.webviewpool.PoolEntry r6, kotlin.coroutines.Continuation<? super kotlin.Unit> r7) {
        /*
            boolean r0 = r7 instanceof com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.C18331
            if (r0 == 0) goto L14
            r0 = r7
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$release$1 r0 = (com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.C18331) r0
            int r1 = r0.label
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 & r2
            if (r1 == 0) goto L14
            int r7 = r0.label
            int r7 = r7 - r2
            r0.label = r7
            goto L19
        L14:
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$release$1 r0 = new com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$release$1
            r0.<init>(r7)
        L19:
            java.lang.Object r7 = r0.result
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r2 = r0.label
            r3 = 2
            r4 = 1
            if (r2 == 0) goto L3d
            if (r2 == r4) goto L35
            if (r2 != r3) goto L2d
            kotlin.ResultKt.throwOnFailure(r7)
            goto L59
        L2d:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "call to 'resume' before 'invoke' with coroutine"
            r5.<init>(r6)
            throw r5
        L35:
            java.lang.Object r5 = r0.L$0
            com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool r5 = (com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool) r5
            kotlin.ResultKt.throwOnFailure(r7)
            goto L4b
        L3d:
            kotlin.ResultKt.throwOnFailure(r7)
            r0.L$0 = r5
            r0.label = r4
            java.lang.Object r7 = r5.resetEntry(r6, r0)
            if (r7 != r1) goto L4b
            goto L58
        L4b:
            com.unity3d.ads.adplayer.webviewpool.PoolEntry r7 = (com.unity3d.ads.adplayer.webviewpool.PoolEntry) r7
            r6 = 0
            r0.L$0 = r6
            r0.label = r3
            java.lang.Object r5 = r5.enqueueRecycled(r7, r0)
            if (r5 != r1) goto L59
        L58:
            return r1
        L59:
            kotlin.Unit r5 = kotlin.Unit.INSTANCE
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool.release$suspendImpl(com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool, com.unity3d.ads.adplayer.webviewpool.PoolEntry, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$2", f = "AndroidWebViewPool.kt", i = {0}, l = {119, 124}, m = "invokeSuspend", n = {"result"}, s = {"L$0"})
    static final class C18322 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        final /* synthetic */ PoolEntry $entry;
        Object L$0;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18322(PoolEntry poolEntry, Continuation<? super C18322> continuation) {
            super(2, continuation);
            this.$entry = poolEntry;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidWebViewPool.this.new C18322(this.$entry, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C18322) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            CompletableDeferred completableDeferredCompletableDeferred$default;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                completableDeferredCompletableDeferred$default = CompletableDeferredKt.CompletableDeferred$default(null, 1, null);
                this.L$0 = completableDeferredCompletableDeferred$default;
                this.label = 1;
                if (BuildersKt.withContext(AndroidWebViewPool.this.mainDispatcher, new AnonymousClass1(this.$entry, completableDeferredCompletableDeferred$default, null), this) != coroutine_suspended) {
                }
            }
            if (i != 1) {
                if (i != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                return obj;
            }
            completableDeferredCompletableDeferred$default = (CompletableDeferred) this.L$0;
            ResultKt.throwOnFailure(obj);
            this.L$0 = null;
            this.label = 2;
            Object objAwait = completableDeferredCompletableDeferred$default.await(this);
            return objAwait == coroutine_suspended ? coroutine_suspended : objAwait;
        }

        /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: AndroidWebViewPool.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$2$1", f = "AndroidWebViewPool.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ PoolEntry $entry;
            final /* synthetic */ CompletableDeferred<Boolean> $result;
            int label;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(PoolEntry poolEntry, CompletableDeferred<Boolean> completableDeferred, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.$entry = poolEntry;
                this.$result = completableDeferred;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.$entry, this.$result, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                IntrinsicsKt.getCOROUTINE_SUSPENDED();
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                WebView webView = this.$entry.getWebView();
                final CompletableDeferred<Boolean> completableDeferred = this.$result;
                webView.evaluateJavascript("1", new ValueCallback() { // from class: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$isHealthy$2$1$$ExternalSyntheticLambda0
                    @Override // android.webkit.ValueCallback
                    public final void onReceiveValue(Object obj2) {
                        AndroidWebViewPool.C18322.AnonymousClass1.invokeSuspend$lambda$0(completableDeferred, (String) obj2);
                    }
                });
                return Unit.INSTANCE;
            }

            /* JADX INFO: Access modifiers changed from: private */
            public static final void invokeSuspend$lambda$0(CompletableDeferred completableDeferred, String str) {
                completableDeferred.complete(Boolean.valueOf(str != null));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object isHealthy(PoolEntry poolEntry, Continuation<? super Boolean> continuation) {
        C18311 c18311;
        if (continuation instanceof C18311) {
            c18311 = (C18311) continuation;
            if ((c18311.label & Integer.MIN_VALUE) != 0) {
                c18311.label -= Integer.MIN_VALUE;
            } else {
                c18311 = new C18311(continuation);
            }
        } else {
            c18311 = new C18311(continuation);
        }
        Object objWithTimeoutOrNull = c18311.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c18311.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
            C18322 c18322 = new C18322(poolEntry, null);
            c18311.label = 1;
            objWithTimeoutOrNull = TimeoutKt.withTimeoutOrNull(500L, c18322, c18311);
            if (objWithTimeoutOrNull == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
        }
        Boolean bool = (Boolean) objWithTimeoutOrNull;
        return Boxing.boxBoolean(bool != null ? bool.booleanValue() : false);
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$destroyEntry$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$destroyEntry$2", f = "AndroidWebViewPool.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C18292 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ PoolEntry $entry;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18292(PoolEntry poolEntry, Continuation<? super C18292> continuation) {
            super(2, continuation);
            this.$entry = poolEntry;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18292(this.$entry, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C18292) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            this.$entry.getWebView().destroy();
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object destroyEntry(PoolEntry poolEntry, Continuation<? super Unit> continuation) {
        Object objWithContext = BuildersKt.withContext(this.mainDispatcher, new C18292(poolEntry, null), continuation);
        return objWithContext == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objWithContext : Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    static /* synthetic */ Object createFreshEntry$suspendImpl(AndroidWebViewPool androidWebViewPool, Continuation<? super PoolEntry> continuation) {
        AndroidWebViewPool$createFreshEntry$1 androidWebViewPool$createFreshEntry$1;
        AndroidWebViewClient androidWebViewClient;
        if (continuation instanceof AndroidWebViewPool$createFreshEntry$1) {
            androidWebViewPool$createFreshEntry$1 = (AndroidWebViewPool$createFreshEntry$1) continuation;
            if ((androidWebViewPool$createFreshEntry$1.label & Integer.MIN_VALUE) != 0) {
                androidWebViewPool$createFreshEntry$1.label -= Integer.MIN_VALUE;
            } else {
                androidWebViewPool$createFreshEntry$1 = new AndroidWebViewPool$createFreshEntry$1(androidWebViewPool, continuation);
            }
        } else {
            androidWebViewPool$createFreshEntry$1 = new AndroidWebViewPool$createFreshEntry$1(androidWebViewPool, continuation);
        }
        Object obj = androidWebViewPool$createFreshEntry$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = androidWebViewPool$createFreshEntry$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            AndroidWebViewClient androidWebViewClientCreateClient = androidWebViewPool.createClient();
            androidWebViewPool$createFreshEntry$1.L$0 = androidWebViewClientCreateClient;
            androidWebViewPool$createFreshEntry$1.label = 1;
            Object objCreateWebView = androidWebViewPool.createWebView(androidWebViewClientCreateClient, androidWebViewPool$createFreshEntry$1);
            if (objCreateWebView == coroutine_suspended) {
                return coroutine_suspended;
            }
            obj = objCreateWebView;
            androidWebViewClient = androidWebViewClientCreateClient;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            androidWebViewClient = (AndroidWebViewClient) androidWebViewPool$createFreshEntry$1.L$0;
            ResultKt.throwOnFailure(obj);
        }
        return new PoolEntry((WebView) obj, androidWebViewClient);
    }

    private final AndroidWebViewClient createClient() {
        return new AndroidWebViewClient(this.getCachedAsset, this.sendDiagnosticEvent);
    }

    /* JADX INFO: renamed from: com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$createWebView$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidWebViewPool.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/webkit/WebView;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.adplayer.webviewpool.AndroidWebViewPool$createWebView$2", f = "AndroidWebViewPool.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C18282 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super WebView>, Object> {
        final /* synthetic */ AndroidWebViewClient $client;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18282(AndroidWebViewClient androidWebViewClient, Continuation<? super C18282> continuation) {
            super(2, continuation);
            this.$client = androidWebViewClient;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidWebViewPool.this.new C18282(this.$client, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super WebView> continuation) {
            return ((C18282) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            WebView webView = new WebView(AndroidWebViewPool.this.context);
            AndroidWebViewClient androidWebViewClient = this.$client;
            WebSettings settings = webView.getSettings();
            settings.setAllowFileAccess(false);
            settings.setBlockNetworkImage(false);
            settings.setBlockNetworkLoads(false);
            settings.setBuiltInZoomControls(false);
            settings.setCacheMode(-1);
            settings.setDatabaseEnabled(false);
            settings.setDisplayZoomControls(false);
            settings.setDomStorageEnabled(false);
            settings.setGeolocationEnabled(false);
            settings.setJavaScriptCanOpenWindowsAutomatically(false);
            settings.setJavaScriptEnabled(true);
            settings.setLoadWithOverviewMode(false);
            settings.setLoadsImagesAutomatically(true);
            settings.setMediaPlaybackRequiresUserGesture(false);
            settings.setMixedContentMode(1);
            settings.setNeedInitialFocus(true);
            settings.setSupportMultipleWindows(false);
            settings.setSupportZoom(false);
            settings.setUseWideViewPort(true);
            webView.setWebViewClient(androidWebViewClient);
            webView.setHorizontalScrollBarEnabled(false);
            webView.setVerticalScrollBarEnabled(false);
            webView.setInitialScale(0);
            webView.setBackgroundColor(0);
            webView.setBackgroundResource(0);
            return webView;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object createWebView(AndroidWebViewClient androidWebViewClient, Continuation<? super WebView> continuation) {
        return BuildersKt.withContext(this.mainDispatcher, new C18282(androidWebViewClient, null), continuation);
    }
}
