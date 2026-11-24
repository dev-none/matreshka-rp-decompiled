package com.vk.id.onetap.compose.button.auth;

import androidx.compose.animation.core.Animatable;
import androidx.compose.animation.core.AnimationVector1D;
import androidx.compose.ui.unit.IntSize;
import androidx.media3.extractor.ts.TsExtractor;
import com.vk.id.onetap.compose.button.CommonKt;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDButtonSmall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1", f = "VKIDButtonSmall.kt", i = {}, l = {TsExtractor.TS_STREAM_TYPE_HDMV_DTS, 131}, m = "invokeSuspend", n = {}, s = {})
final class VKIDButtonSmallKt$SmallButtonAnimation$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ Animatable<Float, AnimationVector1D> $animatedOffsetXUserIcon;
    final /* synthetic */ Animatable<Float, AnimationVector1D> $animatedOffsetXVkIcon;
    final /* synthetic */ long $size;
    final /* synthetic */ VKIDSmallButtonState $state;
    private /* synthetic */ Object L$0;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKIDButtonSmallKt$SmallButtonAnimation$1$1(VKIDSmallButtonState vKIDSmallButtonState, Animatable<Float, AnimationVector1D> animatable, long j, Animatable<Float, AnimationVector1D> animatable2, Continuation<? super VKIDButtonSmallKt$SmallButtonAnimation$1$1> continuation) {
        super(2, continuation);
        this.$state = vKIDSmallButtonState;
        this.$animatedOffsetXUserIcon = animatable;
        this.$size = j;
        this.$animatedOffsetXVkIcon = animatable2;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        VKIDButtonSmallKt$SmallButtonAnimation$1$1 vKIDButtonSmallKt$SmallButtonAnimation$1$1 = new VKIDButtonSmallKt$SmallButtonAnimation$1$1(this.$state, this.$animatedOffsetXUserIcon, this.$size, this.$animatedOffsetXVkIcon, continuation);
        vKIDButtonSmallKt$SmallButtonAnimation$1$1.L$0 = obj;
        return vKIDButtonSmallKt$SmallButtonAnimation$1$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((VKIDButtonSmallKt$SmallButtonAnimation$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x0079, code lost:
    
        if (r10.$animatedOffsetXVkIcon.snapTo(kotlin.coroutines.jvm.internal.Boxing.boxFloat(0.0f), r10) == r0) goto L18;
     */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object invokeSuspend(java.lang.Object r11) {
        /*
            r10 = this;
            java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r1 = r10.label
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L1e
            if (r1 == r3) goto L1a
            if (r1 != r2) goto L12
            kotlin.ResultKt.throwOnFailure(r11)
            goto L7c
        L12:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
            r11.<init>(r0)
            throw r11
        L1a:
            kotlin.ResultKt.throwOnFailure(r11)
            goto L69
        L1e:
            kotlin.ResultKt.throwOnFailure(r11)
            java.lang.Object r11 = r10.L$0
            r4 = r11
            kotlinx.coroutines.CoroutineScope r4 = (kotlinx.coroutines.CoroutineScope) r4
            com.vk.id.onetap.compose.button.auth.VKIDSmallButtonState r11 = r10.$state
            boolean r11 = r11.getUserIconLoaded$onetap_compose_release()
            if (r11 == 0) goto L50
            com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$1 r11 = new com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$1
            androidx.compose.animation.core.Animatable<java.lang.Float, androidx.compose.animation.core.AnimationVector1D> r0 = r10.$animatedOffsetXUserIcon
            r1 = 0
            r11.<init>(r0, r1)
            r7 = r11
            kotlin.jvm.functions.Function2 r7 = (kotlin.jvm.functions.Function2) r7
            r8 = 3
            r9 = 0
            r5 = 0
            r6 = 0
            kotlinx.coroutines.BuildersKt.launch$default(r4, r5, r6, r7, r8, r9)
            com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$2 r11 = new com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$2
            androidx.compose.animation.core.Animatable<java.lang.Float, androidx.compose.animation.core.AnimationVector1D> r0 = r10.$animatedOffsetXVkIcon
            long r2 = r10.$size
            r11.<init>(r0, r2, r1)
            r7 = r11
            kotlin.jvm.functions.Function2 r7 = (kotlin.jvm.functions.Function2) r7
            kotlinx.coroutines.BuildersKt.launch$default(r4, r5, r6, r7, r8, r9)
            goto L7c
        L50:
            androidx.compose.animation.core.Animatable<java.lang.Float, androidx.compose.animation.core.AnimationVector1D> r11 = r10.$animatedOffsetXUserIcon
            long r4 = r10.$size
            int r1 = androidx.compose.ui.unit.IntSize.m7021getWidthimpl(r4)
            float r1 = (float) r1
            java.lang.Float r1 = kotlin.coroutines.jvm.internal.Boxing.boxFloat(r1)
            r4 = r10
            kotlin.coroutines.Continuation r4 = (kotlin.coroutines.Continuation) r4
            r10.label = r3
            java.lang.Object r11 = r11.snapTo(r1, r4)
            if (r11 != r0) goto L69
            goto L7b
        L69:
            androidx.compose.animation.core.Animatable<java.lang.Float, androidx.compose.animation.core.AnimationVector1D> r11 = r10.$animatedOffsetXVkIcon
            r1 = 0
            java.lang.Float r1 = kotlin.coroutines.jvm.internal.Boxing.boxFloat(r1)
            r3 = r10
            kotlin.coroutines.Continuation r3 = (kotlin.coroutines.Continuation) r3
            r10.label = r2
            java.lang.Object r11 = r11.snapTo(r1, r3)
            if (r11 != r0) goto L7c
        L7b:
            return r0
        L7c:
            kotlin.Unit r11 = kotlin.Unit.INSTANCE
            return r11
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1.invokeSuspend(java.lang.Object):java.lang.Object");
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDButtonSmall.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$1", f = "VKIDButtonSmall.kt", i = {}, l = {117}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Animatable<Float, AnimationVector1D> $animatedOffsetXUserIcon;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(Animatable<Float, AnimationVector1D> animatable, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$animatedOffsetXUserIcon = animatable;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$animatedOffsetXUserIcon, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (Animatable.animateTo$default(this.$animatedOffsetXUserIcon, Boxing.boxFloat(0.0f), CommonKt.getEaseInOutAnimation(), null, null, this, 12, null) == coroutine_suspended) {
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

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$2, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDButtonSmall.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$SmallButtonAnimation$1$1$2", f = "VKIDButtonSmall.kt", i = {}, l = {123}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Animatable<Float, AnimationVector1D> $animatedOffsetXVkIcon;
        final /* synthetic */ long $size;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(Animatable<Float, AnimationVector1D> animatable, long j, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$animatedOffsetXVkIcon = animatable;
            this.$size = j;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass2(this.$animatedOffsetXVkIcon, this.$size, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (Animatable.animateTo$default(this.$animatedOffsetXVkIcon, Boxing.boxFloat(-IntSize.m7021getWidthimpl(this.$size)), CommonKt.getEaseInOutAnimation(), null, null, this, 12, null) == coroutine_suspended) {
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
}
