package com.vk.id.exchangetoken;

import com.vk.id.AccessToken;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.SuspendFunction;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.AdaptedFunctionReference;

/* JADX INFO: compiled from: VKIDTokenExchanger.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
/* synthetic */ class VKIDTokenExchanger$handleCode$3$1 extends AdaptedFunctionReference implements Function2<AccessToken, Continuation<? super Unit>, Object>, SuspendFunction {
    VKIDTokenExchanger$handleCode$3$1(Object obj) {
        super(2, obj, VKIDExchangeTokenCallback.class, "onAuth", "onAuth(Lcom/vk/id/AccessToken;)V", 4);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(AccessToken accessToken, Continuation<? super Unit> continuation) {
        return VKIDTokenExchanger.handleCode$lambda$4$onAuth((VKIDExchangeTokenCallback) this.receiver, accessToken, continuation);
    }
}
