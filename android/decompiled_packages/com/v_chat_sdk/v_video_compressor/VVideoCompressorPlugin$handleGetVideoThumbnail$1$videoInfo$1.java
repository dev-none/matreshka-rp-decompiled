package com.v_chat_sdk.v_video_compressor;

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
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
@DebugMetadata(c = "com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1", f = "VVideoCompressorPlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
final class VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super VVideoInfo>, Object> {
    final /* synthetic */ String $videoPath;
    int label;
    final /* synthetic */ VVideoCompressorPlugin this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1(VVideoCompressorPlugin vVideoCompressorPlugin, String str, Continuation<? super VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1> continuation) {
        super(2, continuation);
        this.this$0 = vVideoCompressorPlugin;
        this.$videoPath = str;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1(this.this$0, this.$videoPath, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super VVideoInfo> continuation) {
        return ((VVideoCompressorPlugin$handleGetVideoThumbnail$1$videoInfo$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            VVideoCompressionEngine vVideoCompressionEngine = this.this$0.compressionEngine;
            if (vVideoCompressionEngine == null) {
                Intrinsics.throwUninitializedPropertyAccessException("compressionEngine");
                vVideoCompressionEngine = null;
            }
            return vVideoCompressionEngine.getVideoInfo(this.$videoPath);
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
