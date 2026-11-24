package com.vk.id.tracking.core;

import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.measurement.AppMeasurement;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: CrashReporter.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bg\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&JD\u0010\u0006\u001a\u0002H\u0007\"\u0004\b\u0000\u0010\u00072!\u0010\b\u001a\u001d\u0012\u0013\u0012\u00110\u0005¢\u0006\f\b\n\u0012\b\b\u000b\u0012\u0004\b\b(\f\u0012\u0004\u0012\u0002H\u00070\t2\f\u0010\r\u001a\b\u0012\u0004\u0012\u0002H\u00070\u000eH&¢\u0006\u0002\u0010\u000fJe\u0010\u0010\u001a\u0002H\u0007\"\u0004\b\u0000\u0010\u000721\u0010\b\u001a-\b\u0001\u0012\u0013\u0012\u00110\u0005¢\u0006\f\b\n\u0012\b\b\u000b\u0012\u0004\b\b(\f\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00070\u0012\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00112\u001c\u0010\r\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00070\u0012\u0012\u0006\u0012\u0004\u0018\u00010\u00010\tH¦@¢\u0006\u0002\u0010\u0013¨\u0006\u0014"}, d2 = {"Lcom/vk/id/tracking/core/CrashReporter;", "", "report", "", AppMeasurement.CRASH_ORIGIN, "", "runReportingCrashes", ExifInterface.GPS_DIRECTION_TRUE, "errorValueProvider", "Lkotlin/Function1;", "Lkotlin/ParameterName;", "name", "error", HandleInvocationsFromAdViewer.KEY_ACTION, "Lkotlin/Function0;", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "runReportingCrashesSuspend", "Lkotlin/Function2;", "Lkotlin/coroutines/Continuation;", "(Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "tracking-core_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface CrashReporter {
    void report(Throwable crash);

    <T> T runReportingCrashes(Function1<? super Throwable, ? extends T> errorValueProvider, Function0<? extends T> action);

    <T> Object runReportingCrashesSuspend(Function2<? super Throwable, ? super Continuation<? super T>, ? extends Object> function2, Function1<? super Continuation<? super T>, ? extends Object> function1, Continuation<? super T> continuation);
}
