package com.vk.id.tracking.core;

import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;

/* JADX INFO: compiled from: PerformanceTracker.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bg\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u001e\u0010\u0007\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00030\tH&J4\u0010\n\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u001c\u0010\b\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\f\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u000bH¦@¢\u0006\u0002\u0010\r¨\u0006\u000e"}, d2 = {"Lcom/vk/id/tracking/core/PerformanceTracker;", "", "startTracking", "", "key", "", "endTracking", "runTracking", HandleInvocationsFromAdViewer.KEY_ACTION, "Lkotlin/Function0;", "runTrackingSuspend", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "(Ljava/lang/String;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "tracking-core_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface PerformanceTracker {
    void endTracking(String key);

    void runTracking(String key, Function0<Unit> action);

    Object runTrackingSuspend(String str, Function1<? super Continuation<? super Unit>, ? extends Object> function1, Continuation<? super Unit> continuation);

    void startTracking(String key);
}
