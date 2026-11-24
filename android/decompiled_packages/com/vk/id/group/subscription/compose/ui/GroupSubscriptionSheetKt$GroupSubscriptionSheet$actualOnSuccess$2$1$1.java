package com.vk.id.group.subscription.compose.ui;

import androidx.compose.material3.SnackbarHostState;
import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics;
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

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {194}, m = "invokeSuspend", n = {}, s = {})
final class GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ Function0<String> $accessTokenProvider;
    final /* synthetic */ SnackbarHostState $actualSnackbarHostState;
    final /* synthetic */ String $snackbarLabel;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1(Function0<String> function0, SnackbarHostState snackbarHostState, String str, Continuation<? super GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1> continuation) {
        super(2, continuation);
        this.$accessTokenProvider = function0;
        this.$actualSnackbarHostState = snackbarHostState;
        this.$snackbarLabel = str;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1(this.$accessTokenProvider, this.$actualSnackbarHostState, this.$snackbarLabel, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        String token;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
            Function0<String> function0 = this.$accessTokenProvider;
            if (function0 == null || (token = function0.invoke()) == null) {
                AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
                token = accessToken != null ? accessToken.getToken() : null;
            }
            groupSubscriptionAnalytics.successShown$group_subscription_compose_release(token);
            this.label = 1;
            if (SnackbarHostState.showSnackbar$default(this.$actualSnackbarHostState, this.$snackbarLabel, null, false, null, this, 14, null) == coroutine_suspended) {
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
