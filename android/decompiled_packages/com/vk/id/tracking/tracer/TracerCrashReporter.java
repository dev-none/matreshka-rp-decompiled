package com.vk.id.tracking.tracer;

import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.measurement.AppMeasurement;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.id.tracking.core.AnalyticsTracking;
import com.vk.id.tracking.core.CrashReporter;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.crash.report.TracerCrashReportLite;

/* JADX INFO: compiled from: TracerCrashReporter.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u00012\u00020\u0002B\u0011\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\u0010\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0016J\u0010\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016JD\u0010\u0010\u001a\u0002H\u0011\"\u0004\b\u0000\u0010\u00112!\u0010\u0012\u001a\u001d\u0012\u0013\u0012\u00110\u000f¢\u0006\f\b\u0014\u0012\b\b\u0015\u0012\u0004\b\b(\u0016\u0012\u0004\u0012\u0002H\u00110\u00132\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u0002H\u00110\u0018H\u0016¢\u0006\u0002\u0010\u0019Je\u0010\u001a\u001a\u0002H\u0011\"\u0004\b\u0000\u0010\u001121\u0010\u0012\u001a-\b\u0001\u0012\u0013\u0012\u00110\u000f¢\u0006\f\b\u0014\u0012\b\b\u0015\u0012\u0004\b\b(\u0016\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00110\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001d0\u001b2\u001c\u0010\u0017\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00110\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001d0\u0013H\u0096@¢\u0006\u0002\u0010\u001eR\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lcom/vk/id/tracking/tracer/TracerCrashReporter;", "Lcom/vk/id/tracking/core/CrashReporter;", "Lcom/vk/id/tracking/core/AnalyticsTracking;", "tracer", "Lru/ok/tracer/lite/TracerLite;", "<init>", "(Lru/ok/tracer/lite/TracerLite;)V", "crashReporter", "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite;", "log", "", "message", "", "report", AppMeasurement.CRASH_ORIGIN, "", "runReportingCrashes", ExifInterface.GPS_DIRECTION_TRUE, "errorValueProvider", "Lkotlin/Function1;", "Lkotlin/ParameterName;", "name", "error", HandleInvocationsFromAdViewer.KEY_ACTION, "Lkotlin/Function0;", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "runReportingCrashesSuspend", "Lkotlin/Function2;", "Lkotlin/coroutines/Continuation;", "", "(Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "tracking-tracer_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TracerCrashReporter implements CrashReporter, AnalyticsTracking {
    private final TracerCrashReportLite crashReporter;

    /* JADX INFO: renamed from: com.vk.id.tracking.tracer.TracerCrashReporter$runReportingCrashesSuspend$1, reason: invalid class name */
    /* JADX INFO: compiled from: TracerCrashReporter.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.tracking.tracer.TracerCrashReporter", f = "TracerCrashReporter.kt", i = {0, 0}, l = {60, 65}, m = "runReportingCrashesSuspend", n = {"this", "errorValueProvider"}, s = {"L$0", "L$1"})
    static final class AnonymousClass1<T> extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return TracerCrashReporter.this.runReportingCrashesSuspend(null, null, this);
        }
    }

    public TracerCrashReporter(TracerLite tracerLite) {
        TracerCrashReportLite tracerCrashReportLite = null;
        if (tracerLite != null) {
            try {
                TracerCrashReportLite.Configuration.Builder builder = new TracerCrashReportLite.Configuration.Builder();
                builder.setObfuscatedNonFatalsEnabled(true);
                tracerCrashReportLite = new TracerCrashReportLite(tracerLite, builder.build());
            } catch (Throwable unused) {
            }
        }
        this.crashReporter = tracerCrashReportLite;
    }

    @Override // com.vk.id.tracking.core.AnalyticsTracking
    public void log(String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        try {
            TracerCrashReportLite tracerCrashReportLite = this.crashReporter;
            if (tracerCrashReportLite != null) {
                tracerCrashReportLite.log(message);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.vk.id.tracking.core.CrashReporter
    public void report(Throwable crash) {
        Intrinsics.checkNotNullParameter(crash, "crash");
        try {
            TracerCrashReportLite tracerCrashReportLite = this.crashReporter;
            if (tracerCrashReportLite != null) {
                TracerCrashReportLite.report$default(tracerCrashReportLite, crash, null, 2, null);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.vk.id.tracking.core.CrashReporter
    public <T> T runReportingCrashes(Function1<? super Throwable, ? extends T> errorValueProvider, Function0<? extends T> action) {
        Intrinsics.checkNotNullParameter(errorValueProvider, "errorValueProvider");
        Intrinsics.checkNotNullParameter(action, "action");
        try {
            return action.invoke();
        } catch (Throwable th) {
            report(th);
            return errorValueProvider.invoke(th);
        }
    }

    /* JADX WARN: Code duplicated, block: B:30:0x0066 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:31:0x0067 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.tracking.core.CrashReporter
    public <T> Object runReportingCrashesSuspend(Function2<? super Throwable, ? super Continuation<? super T>, ? extends Object> function2, Function1<? super Continuation<? super T>, ? extends Object> function1, Continuation<? super T> continuation) {
        AnonymousClass1 anonymousClass1;
        TracerCrashReporter tracerCrashReporter;
        Object objInvoke;
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
        Object obj = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                try {
                    anonymousClass1.L$0 = this;
                    anonymousClass1.L$1 = function2;
                    anonymousClass1.label = 1;
                    Object objInvoke2 = function1.invoke(anonymousClass1);
                    if (objInvoke2 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    return objInvoke2;
                } catch (Throwable th) {
                    th = th;
                    tracerCrashReporter = this;
                    tracerCrashReporter.report(th);
                    anonymousClass1.L$0 = null;
                    anonymousClass1.L$1 = null;
                    anonymousClass1.label = 2;
                    objInvoke = function2.invoke(th, anonymousClass1);
                    if (objInvoke != coroutine_suspended) {
                        return objInvoke;
                    }
                }
            } else {
                if (i != 1) {
                    if (i != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                    return obj;
                }
                function2 = (Function2) anonymousClass1.L$1;
                tracerCrashReporter = (TracerCrashReporter) anonymousClass1.L$0;
                try {
                    ResultKt.throwOnFailure(obj);
                    return obj;
                } catch (Throwable th2) {
                    th = th2;
                }
            }
            tracerCrashReporter.report(th);
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 2;
            objInvoke = function2.invoke(th, anonymousClass1);
            if (objInvoke != coroutine_suspended) {
                return coroutine_suspended;
            }
            return objInvoke;
        } catch (CancellationException e) {
            throw e;
        }
    }
}
