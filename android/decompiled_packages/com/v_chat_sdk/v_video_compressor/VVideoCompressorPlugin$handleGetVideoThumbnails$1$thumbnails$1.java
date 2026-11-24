package com.v_chat_sdk.v_video_compressor;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VVideoCompressorPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010!\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u0016\u0012\u0012\u0012\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u00020\u0001*\u00020\u0005H\n"}, d2 = {"<anonymous>", "", "", "", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
@DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
final class VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super List<Map<String, ? extends Object>>>, Object> {
    final /* synthetic */ List<Map<String, Object>> $configMaps;
    final /* synthetic */ VVideoInfo $videoInfo;
    int label;
    final /* synthetic */ VVideoCompressorPlugin this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1(List<? extends Map<String, ? extends Object>> list, VVideoCompressorPlugin vVideoCompressorPlugin, VVideoInfo vVideoInfo, Continuation<? super VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1> continuation) {
        super(2, continuation);
        this.$configMaps = list;
        this.this$0 = vVideoCompressorPlugin;
        this.$videoInfo = vVideoInfo;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1(this.$configMaps, this.this$0, this.$videoInfo, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super List<Map<String, ? extends Object>>> continuation) {
        return invoke2(coroutineScope, (Continuation<? super List<Map<String, Object>>>) continuation);
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super List<Map<String, Object>>> continuation) {
        return ((VVideoCompressorPlugin$handleGetVideoThumbnails$1$thumbnails$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) throws Throwable {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        ArrayList arrayList = new ArrayList();
        for (Map<String, ? extends Object> map : this.$configMaps) {
            VVideoThumbnailConfig.Companion companion = VVideoThumbnailConfig.INSTANCE;
            Intrinsics.checkNotNull(map, "null cannot be cast to non-null type kotlin.collections.Map<kotlin.String, kotlin.Any?>");
            VVideoThumbnailConfig vVideoThumbnailConfigFromMap = companion.fromMap(map);
            VVideoCompressionEngine vVideoCompressionEngine = this.this$0.compressionEngine;
            if (vVideoCompressionEngine == null) {
                Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                vVideoCompressionEngine = null;
            }
            VVideoThumbnailResult videoThumbnail = vVideoCompressionEngine.getVideoThumbnail(this.$videoInfo, vVideoThumbnailConfigFromMap);
            if (videoThumbnail != null) {
                arrayList.add(videoThumbnail.toMap());
            }
        }
        return arrayList;
    }
}
