package com.unity3d.ads.core.data.datasource;

import android.content.Context;
import com.android.installreferrer.api.InstallReferrerClient;
import com.android.installreferrer.api.InstallReferrerStateListener;
import com.google.protobuf.ByteString;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import gatewayprotocol.v1.InitializationRequestOuterClass;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.time.Duration;
import kotlin.time.DurationKt;
import kotlin.time.DurationUnit;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CancellableContinuationImpl;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.TimeoutCancellationException;
import kotlinx.coroutines.TimeoutKt;

/* JADX INFO: compiled from: AndroidInstallReferrerDataSource.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u00112\u00020\u0001:\u0001\u0011B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0096B¢\u0006\u0002\u0010\fJ\u0018\u0010\r\u001a\u00020\u000e2\u000e\u0010\u000f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000b0\u0010H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/unity3d/ads/core/data/datasource/AndroidInstallReferrerDataSource;", "Lcom/unity3d/ads/core/data/datasource/InstallReferrerDataSource;", "appContext", "Landroid/content/Context;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "<init>", "(Landroid/content/Context;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Lkotlinx/coroutines/CoroutineScope;)V", "invoke", "Lgatewayprotocol/v1/InitializationRequestOuterClass$InstallReferrer;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onError", "", "continuation", "Lkotlinx/coroutines/CancellableContinuation;", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidInstallReferrerDataSource implements InstallReferrerDataSource {
    private static final long TIME_OUT_MS = 500;
    private final Context appContext;
    private final CoroutineScope scope;
    private final SendDiagnosticEvent sendDiagnosticEvent;

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.datasource.AndroidInstallReferrerDataSource$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidInstallReferrerDataSource.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.datasource.AndroidInstallReferrerDataSource", f = "AndroidInstallReferrerDataSource.kt", i = {}, l = {35}, m = "invoke", n = {}, s = {})
    static final class AnonymousClass1 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidInstallReferrerDataSource.this.invoke(this);
        }
    }

    public AndroidInstallReferrerDataSource(Context appContext, SendDiagnosticEvent sendDiagnosticEvent, CoroutineScope scope) {
        Intrinsics.checkNotNullParameter(appContext, "appContext");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        Intrinsics.checkNotNullParameter(scope, "scope");
        this.appContext = appContext;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.scope = scope;
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.datasource.AndroidInstallReferrerDataSource$invoke$2, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidInstallReferrerDataSource.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lgatewayprotocol/v1/InitializationRequestOuterClass$InstallReferrer;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.datasource.AndroidInstallReferrerDataSource$invoke$2", f = "AndroidInstallReferrerDataSource.kt", i = {}, l = {111}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InitializationRequestOuterClass.InstallReferrer>, Object> {
        Object L$0;
        int label;

        AnonymousClass2(Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidInstallReferrerDataSource.this.new AnonymousClass2(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InitializationRequestOuterClass.InstallReferrer> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i != 0) {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                return obj;
            }
            ResultKt.throwOnFailure(obj);
            final AndroidInstallReferrerDataSource androidInstallReferrerDataSource = AndroidInstallReferrerDataSource.this;
            this.L$0 = androidInstallReferrerDataSource;
            this.label = 1;
            AnonymousClass2 anonymousClass2 = this;
            CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(anonymousClass2), 1);
            cancellableContinuationImpl.initCancellability();
            final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
            try {
                final InstallReferrerClient installReferrerClientBuild = InstallReferrerClient.newBuilder(androidInstallReferrerDataSource.appContext).build();
                installReferrerClientBuild.startConnection(new InstallReferrerStateListener() { // from class: com.unity3d.ads.core.data.datasource.AndroidInstallReferrerDataSource$invoke$2$1$1
                    @Override // com.android.installreferrer.api.InstallReferrerStateListener
                    public void onInstallReferrerSetupFinished(int responseCode) {
                        if (responseCode == 0) {
                            if (BuildersKt__Builders_commonKt.launch$default(androidInstallReferrerDataSource.scope, null, null, new AndroidInstallReferrerDataSource$invoke$2$1$1$onInstallReferrerSetupFinished$job$1(installReferrerClientBuild, androidInstallReferrerDataSource, cancellableContinuationImpl2, null), 3, null).isActive()) {
                                return;
                            }
                            try {
                                installReferrerClientBuild.endConnection();
                            } catch (Throwable unused) {
                            }
                            androidInstallReferrerDataSource.onError(cancellableContinuationImpl2);
                            return;
                        }
                        try {
                            installReferrerClientBuild.endConnection();
                        } catch (Throwable unused2) {
                        }
                        androidInstallReferrerDataSource.onError(cancellableContinuationImpl2);
                    }

                    @Override // com.android.installreferrer.api.InstallReferrerStateListener
                    public void onInstallReferrerServiceDisconnected() {
                        androidInstallReferrerDataSource.onError(cancellableContinuationImpl2);
                    }
                });
            } catch (Throwable unused) {
                androidInstallReferrerDataSource.onError(cancellableContinuationImpl2);
            }
            Object result = cancellableContinuationImpl.getResult();
            if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
                DebugProbesKt.probeCoroutineSuspended(anonymousClass2);
            }
            return result == coroutine_suspended ? coroutine_suspended : result;
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.data.datasource.InstallReferrerDataSource
    public Object invoke(Continuation<? super InitializationRequestOuterClass.InstallReferrer> continuation) {
        AnonymousClass1 anonymousClass1;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object objM11366withTimeoutKLykuaI = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(objM11366withTimeoutKLykuaI);
                Duration.Companion companion = Duration.INSTANCE;
                long duration = DurationKt.toDuration(500L, DurationUnit.MILLISECONDS);
                AnonymousClass2 anonymousClass2 = new AnonymousClass2(null);
                anonymousClass1.label = 1;
                objM11366withTimeoutKLykuaI = TimeoutKt.m11366withTimeoutKLykuaI(duration, anonymousClass2, anonymousClass1);
                if (objM11366withTimeoutKLykuaI == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(objM11366withTimeoutKLykuaI);
            }
            return (InitializationRequestOuterClass.InstallReferrer) objM11366withTimeoutKLykuaI;
        } catch (TimeoutCancellationException unused) {
            SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, "install_referral_fetch_timed_out", (Double) null, (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 126, (Object) null);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void onError(CancellableContinuation<? super InitializationRequestOuterClass.InstallReferrer> continuation) {
        Object objM9861constructorimpl;
        try {
            Result.Companion companion = Result.INSTANCE;
            AndroidInstallReferrerDataSource androidInstallReferrerDataSource = this;
            Result.Companion companion2 = Result.INSTANCE;
            continuation.resumeWith(Result.m9861constructorimpl(null));
            objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
        } catch (Throwable th) {
            Result.Companion companion3 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        if (Result.m9868isSuccessimpl(objM9861constructorimpl)) {
            SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, "install_referral_fetch_failed", (Double) null, (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 126, (Object) null);
        }
    }
}
