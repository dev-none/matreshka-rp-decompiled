package com.unity3d.ads.adplayer;

import androidx.lifecycle.LifecycleOwnerKt;
import com.google.protobuf.ByteString;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;

/* JADX INFO: compiled from: FullScreenWebViewDisplay.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", "Lcom/unity3d/ads/adplayer/DisplayMessage;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@DebugMetadata(c = "com.unity3d.ads.adplayer.FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3", f = "FullScreenWebViewDisplay.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
final class FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3 extends SuspendLambda implements Function2<DisplayMessage, Continuation<? super Unit>, Object> {
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ FullScreenWebViewDisplay this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3(FullScreenWebViewDisplay fullScreenWebViewDisplay, Continuation<? super FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3> continuation) {
        super(2, continuation);
        this.this$0 = fullScreenWebViewDisplay;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3 fullScreenWebViewDisplay$listenToAdPlayerEvents$2$3 = new FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3(this.this$0, continuation);
        fullScreenWebViewDisplay$listenToAdPlayerEvents$2$3.L$0 = obj;
        return fullScreenWebViewDisplay$listenToAdPlayerEvents$2$3;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(DisplayMessage displayMessage, Continuation<? super Unit> continuation) {
        return ((FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3) create(displayMessage, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object objM9861constructorimpl;
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        DisplayMessage displayMessage = (DisplayMessage) this.L$0;
        FullScreenWebViewDisplay fullScreenWebViewDisplay = this.this$0;
        try {
            Result.Companion companion = Result.INSTANCE;
            if (displayMessage instanceof DisplayMessage.DisplayFinishRequest) {
                fullScreenWebViewDisplay.finish();
            } else if (displayMessage instanceof DisplayMessage.WebViewInstanceResponse) {
                fullScreenWebViewDisplay.loadWebView(((DisplayMessage.WebViewInstanceResponse) displayMessage).getWebView());
            } else if (displayMessage instanceof DisplayMessage.SetOrientation) {
                fullScreenWebViewDisplay.setRequestedOrientation(((DisplayMessage.SetOrientation) displayMessage).getOrientation());
            } else if (displayMessage instanceof DisplayMessage.OpenUrl) {
                fullScreenWebViewDisplay.openUrl(displayMessage.getOpportunityId(), ((DisplayMessage.OpenUrl) displayMessage).getIntent(), ((DisplayMessage.OpenUrl) displayMessage).getUseActivityForResult());
            } else if (displayMessage instanceof DisplayMessage.DisplayStarted) {
                AdObject adObject = fullScreenWebViewDisplay.getAdObject();
                if ((adObject != null ? adObject.getWebViewLessLoadingRequiredData() : null) != null) {
                    SendDiagnosticEvent.DefaultImpls.invoke$default(fullScreenWebViewDisplay.getSendDiagnosticEvent(), "native_webview_less_ad_display_started", (Double) null, (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 126, (Object) null);
                }
            }
            objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        FullScreenWebViewDisplay fullScreenWebViewDisplay2 = this.this$0;
        Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
        if (thM9864exceptionOrNullimpl != null) {
            BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(fullScreenWebViewDisplay2), fullScreenWebViewDisplay2.getDispatchers().getDefault(), null, new FullScreenWebViewDisplay$listenToAdPlayerEvents$2$3$2$1(fullScreenWebViewDisplay2, thM9864exceptionOrNullimpl, null), 2, null);
        }
        return Unit.INSTANCE;
    }
}
