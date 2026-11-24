package com.vk.id.internal.auth;

import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthEventBridge.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÁ\u0002\u0018\u00002\u00020\u0001:\u0001\u000fB\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0015\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0000¢\u0006\u0002\b\u000eR\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\t¨\u0006\u0010"}, d2 = {"Lcom/vk/id/internal/auth/AuthEventBridge;", "", "<init>", "()V", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/vk/id/internal/auth/AuthEventBridge$Listener;", "getListener$vkid_release", "()Lcom/vk/id/internal/auth/AuthEventBridge$Listener;", "setListener$vkid_release", "(Lcom/vk/id/internal/auth/AuthEventBridge$Listener;)V", "onAuthResult", "", "authResult", "Lcom/vk/id/internal/auth/AuthResult;", "onAuthResult$vkid_release", "Listener", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthEventBridge {
    private static Listener listener;
    public static final AuthEventBridge INSTANCE = new AuthEventBridge();
    public static final int $stable = 8;

    /* JADX INFO: compiled from: AuthEventBridge.kt */
    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b`\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0006"}, d2 = {"Lcom/vk/id/internal/auth/AuthEventBridge$Listener;", "", "onAuthResult", "", "authResult", "Lcom/vk/id/internal/auth/AuthResult;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public interface Listener {
        void onAuthResult(AuthResult authResult);
    }

    private AuthEventBridge() {
    }

    public final Listener getListener$vkid_release() {
        return listener;
    }

    public final void setListener$vkid_release(Listener listener2) {
        listener = listener2;
    }

    public final void onAuthResult$vkid_release(AuthResult authResult) {
        Intrinsics.checkNotNullParameter(authResult, "authResult");
        Listener listener2 = listener;
        if (listener2 != null) {
            listener2.onAuthResult(authResult);
        }
    }
}
