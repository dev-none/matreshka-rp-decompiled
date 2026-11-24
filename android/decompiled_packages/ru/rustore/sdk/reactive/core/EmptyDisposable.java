package ru.rustore.sdk.reactive.core;

import kotlin.Metadata;

/* JADX INFO: compiled from: EmptyDisposable.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0016J\b\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0007"}, d2 = {"Lru/rustore/sdk/reactive/core/EmptyDisposable;", "Lru/rustore/sdk/reactive/core/Disposable;", "()V", "dispose", "", "isDisposed", "", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class EmptyDisposable implements Disposable {
    public static final EmptyDisposable INSTANCE = new EmptyDisposable();

    @Override // ru.rustore.sdk.reactive.core.Disposable
    public void dispose() {
    }

    @Override // ru.rustore.sdk.reactive.core.Disposable
    /* JADX INFO: renamed from: isDisposed */
    public boolean getDisposed() {
        return false;
    }

    private EmptyDisposable() {
    }
}
