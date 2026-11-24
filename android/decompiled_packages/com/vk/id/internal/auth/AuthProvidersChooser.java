package com.vk.id.internal.auth;

import com.vk.id.auth.VKIDAuthParams;
import io.sentry.protocol.Message;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: AuthProvidersChooser.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b`\u0018\u00002\u00020\u0001J\u0016\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H¦@¢\u0006\u0002\u0010\u0006¨\u0006\u0007"}, d2 = {"Lcom/vk/id/internal/auth/AuthProvidersChooser;", "", "chooseBest", "Lcom/vk/id/internal/auth/VKIDAuthProvider;", Message.JsonKeys.PARAMS, "Lcom/vk/id/auth/VKIDAuthParams;", "(Lcom/vk/id/auth/VKIDAuthParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface AuthProvidersChooser {
    Object chooseBest(VKIDAuthParams vKIDAuthParams, Continuation<? super VKIDAuthProvider> continuation);
}
