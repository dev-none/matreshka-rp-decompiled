package androidx.compose.foundation.gestures;

import androidx.compose.ui.unit.Velocity;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: Scrollable.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000\b\n\u0000\n\u0002\u0018\u0002\n\u0000\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0001H\u008a@"}, d2 = {"<anonymous>", "Landroidx/compose/ui/unit/Velocity;", "velocity"}, k = 3, mv = {1, 8, 0}, xi = 48)
@DebugMetadata(c = "androidx.compose.foundation.gestures.ScrollingLogic$onDragStopped$performFling$1", f = "Scrollable.kt", i = {0, 1, 1, 2, 2}, l = {745, 748, 751}, m = "invokeSuspend", n = {"velocity", "velocity", "available", "velocity", "velocityLeft"}, s = {"J$0", "J$0", "J$1", "J$0", "J$1"})
final class ScrollingLogic$onDragStopped$performFling$1 extends SuspendLambda implements Function2<Velocity, Continuation<? super Velocity>, Object> {
    /* synthetic */ long J$0;
    long J$1;
    int label;
    final /* synthetic */ ScrollingLogic this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ScrollingLogic$onDragStopped$performFling$1(ScrollingLogic scrollingLogic, Continuation<? super ScrollingLogic$onDragStopped$performFling$1> continuation) {
        super(2, continuation);
        this.this$0 = scrollingLogic;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ScrollingLogic$onDragStopped$performFling$1 scrollingLogic$onDragStopped$performFling$1 = new ScrollingLogic$onDragStopped$performFling$1(this.this$0, continuation);
        scrollingLogic$onDragStopped$performFling$1.J$0 = ((Velocity) obj).getPackedValue();
        return scrollingLogic$onDragStopped$performFling$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Velocity velocity, Continuation<? super Velocity> continuation) {
        return m540invokesFctU(velocity.getPackedValue(), continuation);
    }

    /* JADX INFO: renamed from: invoke-sF-c-tU, reason: not valid java name */
    public final Object m540invokesFctU(long j, Continuation<? super Velocity> continuation) {
        return ((ScrollingLogic$onDragStopped$performFling$1) create(Velocity.m7079boximpl(j), continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Code duplicated, block: B:22:0x0092  */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object objM5299dispatchPreFlingQWom1Mo;
        long j;
        long jM7091minusAH228Gc;
        Object objM533doFlingAnimationQWom1Mo;
        long packedValue;
        Object objM5297dispatchPostFlingRZ2iAVY;
        long j2;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            long j3 = this.J$0;
            this.J$0 = j3;
            this.label = 1;
            objM5299dispatchPreFlingQWom1Mo = this.this$0.nestedScrollDispatcher.m5299dispatchPreFlingQWom1Mo(j3, this);
            if (objM5299dispatchPreFlingQWom1Mo != coroutine_suspended) {
                j = j3;
            }
            return coroutine_suspended;
        }
        if (i == 1) {
            j = this.J$0;
            ResultKt.throwOnFailure(obj);
            objM5299dispatchPreFlingQWom1Mo = obj;
        } else {
            if (i == 2) {
                long j4 = this.J$1;
                long j5 = this.J$0;
                ResultKt.throwOnFailure(obj);
                jM7091minusAH228Gc = j4;
                j = j5;
                objM533doFlingAnimationQWom1Mo = obj;
                packedValue = ((Velocity) objM533doFlingAnimationQWom1Mo).getPackedValue();
                this.J$0 = j;
                this.J$1 = packedValue;
                this.label = 3;
                objM5297dispatchPostFlingRZ2iAVY = this.this$0.nestedScrollDispatcher.m5297dispatchPostFlingRZ2iAVY(Velocity.m7091minusAH228Gc(jM7091minusAH228Gc, packedValue), packedValue, this);
                if (objM5297dispatchPostFlingRZ2iAVY != coroutine_suspended) {
                    j2 = j;
                }
                return coroutine_suspended;
            }
            if (i != 3) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            long j6 = this.J$1;
            j2 = this.J$0;
            ResultKt.throwOnFailure(obj);
            packedValue = j6;
            objM5297dispatchPostFlingRZ2iAVY = obj;
        }
        return Velocity.m7079boximpl(Velocity.m7091minusAH228Gc(j2, Velocity.m7091minusAH228Gc(packedValue, ((Velocity) objM5297dispatchPostFlingRZ2iAVY).getPackedValue())));
        jM7091minusAH228Gc = Velocity.m7091minusAH228Gc(j, ((Velocity) objM5299dispatchPreFlingQWom1Mo).getPackedValue());
        this.J$0 = j;
        this.J$1 = jM7091minusAH228Gc;
        this.label = 2;
        objM533doFlingAnimationQWom1Mo = this.this$0.m533doFlingAnimationQWom1Mo(jM7091minusAH228Gc, this);
        if (objM533doFlingAnimationQWom1Mo != coroutine_suspended) {
            packedValue = ((Velocity) objM533doFlingAnimationQWom1Mo).getPackedValue();
            this.J$0 = j;
            this.J$1 = packedValue;
            this.label = 3;
            objM5297dispatchPostFlingRZ2iAVY = this.this$0.nestedScrollDispatcher.m5297dispatchPostFlingRZ2iAVY(Velocity.m7091minusAH228Gc(jM7091minusAH228Gc, packedValue), packedValue, this);
            if (objM5297dispatchPostFlingRZ2iAVY != coroutine_suspended) {
                j2 = j;
                return Velocity.m7079boximpl(Velocity.m7091minusAH228Gc(j2, Velocity.m7091minusAH228Gc(packedValue, ((Velocity) objM5297dispatchPostFlingRZ2iAVY).getPackedValue())));
            }
        }
        return coroutine_suspended;
    }
}
