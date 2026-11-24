package com.vk.id.onetap.compose.button;

import com.vk.id.VKIDUser;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: Common.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b`\u0018\u00002\u00020\u0001J\u000e\u0010\u0002\u001a\u00020\u0003H¦@¢\u0006\u0002\u0010\u0004J\u0018\u0010\u0005\u001a\u00020\u00032\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H¦@¢\u0006\u0002\u0010\bJ\b\u0010\t\u001a\u00020\u0003H&¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/compose/button/OnFetchingProgress;", "", "onPreFetch", "", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onFetched", "user", "Lcom/vk/id/VKIDUser;", "(Lcom/vk/id/VKIDUser;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onDispose", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface OnFetchingProgress {
    void onDispose();

    Object onFetched(VKIDUser vKIDUser, Continuation<? super Unit> continuation);

    Object onPreFetch(Continuation<? super Unit> continuation);
}
