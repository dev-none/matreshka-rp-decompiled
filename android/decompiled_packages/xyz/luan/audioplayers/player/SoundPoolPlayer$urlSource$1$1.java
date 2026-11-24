package xyz.luan.audioplayers.player;

import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import xyz.luan.audioplayers.source.UrlSource;

/* JADX INFO: compiled from: SoundPoolPlayer.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
@DebugMetadata(c = "xyz.luan.audioplayers.player.SoundPoolPlayer$urlSource$1$1", f = "SoundPoolPlayer.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
final class SoundPoolPlayer$urlSource$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ SoundPoolPlayer $soundPoolPlayer;
    final /* synthetic */ long $start;
    final /* synthetic */ UrlSource $value;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ SoundPoolPlayer this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    SoundPoolPlayer$urlSource$1$1(UrlSource urlSource, SoundPoolPlayer soundPoolPlayer, SoundPoolPlayer soundPoolPlayer2, long j, Continuation<? super SoundPoolPlayer$urlSource$1$1> continuation) {
        super(2, continuation);
        this.$value = urlSource;
        this.this$0 = soundPoolPlayer;
        this.$soundPoolPlayer = soundPoolPlayer2;
        this.$start = j;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        SoundPoolPlayer$urlSource$1$1 soundPoolPlayer$urlSource$1$1 = new SoundPoolPlayer$urlSource$1$1(this.$value, this.this$0, this.$soundPoolPlayer, this.$start, continuation);
        soundPoolPlayer$urlSource$1$1.L$0 = obj;
        return soundPoolPlayer$urlSource$1$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((SoundPoolPlayer$urlSource$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        final CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        final String audioPathForSoundPool = this.$value.getAudioPathForSoundPool();
        WrappedPlayer wrappedPlayer = this.this$0.getWrappedPlayer();
        final SoundPoolPlayer soundPoolPlayer = this.this$0;
        final SoundPoolPlayer soundPoolPlayer2 = this.$soundPoolPlayer;
        final UrlSource urlSource = this.$value;
        final long j = this.$start;
        wrappedPlayer.runOnAudioThread(new Function0() { // from class: xyz.luan.audioplayers.player.SoundPoolPlayer$urlSource$1$1$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return SoundPoolPlayer$urlSource$1$1.invokeSuspend$lambda$0(soundPoolPlayer, audioPathForSoundPool, soundPoolPlayer2, urlSource, j, coroutineScope);
            }
        });
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(SoundPoolPlayer soundPoolPlayer, String str, SoundPoolPlayer soundPoolPlayer2, UrlSource urlSource, long j, CoroutineScope coroutineScope) {
        soundPoolPlayer.getWrappedPlayer().handleLog("Now loading " + str);
        int iLoad = soundPoolPlayer.getSoundPool().load(str, 1);
        soundPoolPlayer.soundPoolWrapper.getSoundIdToPlayer().put(Integer.valueOf(iLoad), soundPoolPlayer2);
        soundPoolPlayer.setSoundId(Integer.valueOf(iLoad));
        soundPoolPlayer.getWrappedPlayer().handleLog("time to call load() for " + urlSource + ": " + (System.currentTimeMillis() - j) + " player=" + coroutineScope);
        return Unit.INSTANCE;
    }
}
