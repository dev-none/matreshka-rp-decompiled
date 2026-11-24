package com.vk.id.internal.concurrent;

import kotlin.Metadata;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: CoroutinesDispatchersProd.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003R\u0014\u0010\u0004\u001a\u00020\u00058VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/internal/concurrent/CoroutinesDispatchersProd;", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "<init>", "()V", "io", "Lkotlinx/coroutines/CoroutineDispatcher;", "getIo", "()Lkotlinx/coroutines/CoroutineDispatcher;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class CoroutinesDispatchersProd implements VKIDCoroutinesDispatchers {
    public static final int $stable = 0;

    @Override // com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers
    public CoroutineDispatcher getIo() {
        return Dispatchers.getIO();
    }
}
