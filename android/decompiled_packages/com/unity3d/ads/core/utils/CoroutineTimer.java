package com.unity3d.ads.core.utils;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.coroutines.Job;

/* JADX INFO: compiled from: CoroutineTimer.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J&\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bH&¨\u0006\n"}, d2 = {"Lcom/unity3d/ads/core/utils/CoroutineTimer;", "", TtmlNode.START, "Lkotlinx/coroutines/Job;", "delayStartMillis", "", "repeatMillis", HandleInvocationsFromAdViewer.KEY_ACTION, "Lkotlin/Function0;", "", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public interface CoroutineTimer {
    Job start(long delayStartMillis, long repeatMillis, Function0<Unit> action);
}
