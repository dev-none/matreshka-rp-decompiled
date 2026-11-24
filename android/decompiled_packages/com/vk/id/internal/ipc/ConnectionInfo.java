package com.vk.id.internal.ipc;

import android.content.ServiceConnection;
import androidx.exifinterface.media.ExifInterface;
import io.sentry.protocol.SentryStackFrame;
import java.util.concurrent.CountDownLatch;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ConnectionInfo.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\b\n\u0002\b\u000f\b\u0001\u0018\u0000 \u001e*\u0004\b\u0000\u0010\u00012\u00020\u0002:\u0001\u001eB\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bR\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u001a\u0010\u000f\u001a\u00020\u0010X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001e\u0010\u0015\u001a\u0004\u0018\u00018\u0000X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u001a\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R\u0017\u0010\u001b\u001a\b\u0012\u0004\u0012\u00028\u00000\u0000¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001d¨\u0006\u001f"}, d2 = {"Lcom/vk/id/internal/ipc/ConnectionInfo;", ExifInterface.GPS_DIRECTION_TRUE, "", "latch", "Ljava/util/concurrent/CountDownLatch;", "connection", "Landroid/content/ServiceConnection;", "<init>", "(Ljava/util/concurrent/CountDownLatch;Landroid/content/ServiceConnection;)V", "getLatch", "()Ljava/util/concurrent/CountDownLatch;", "setLatch", "(Ljava/util/concurrent/CountDownLatch;)V", "getConnection", "()Landroid/content/ServiceConnection;", "connectionState", "", "getConnectionState", "()I", "setConnectionState", "(I)V", "provider", "getProvider", "()Ljava/lang/Object;", "setProvider", "(Ljava/lang/Object;)V", "Ljava/lang/Object;", SentryStackFrame.JsonKeys.LOCK, "getLock", "()Lcom/vk/id/internal/ipc/ConnectionInfo;", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class ConnectionInfo<T> {
    public static final int CONNECTION_STATE_CONNECTED = 1;
    public static final int CONNECTION_STATE_DISCONNECTED = 2;
    public static final int CONNECTION_STATE_UNKNOWN = 0;
    private final ServiceConnection connection;
    private int connectionState;
    private CountDownLatch latch;
    private final ConnectionInfo<T> lock;
    private T provider;
    public static final int $stable = 8;

    public ConnectionInfo(CountDownLatch latch, ServiceConnection connection) {
        Intrinsics.checkNotNullParameter(latch, "latch");
        Intrinsics.checkNotNullParameter(connection, "connection");
        this.latch = latch;
        this.connection = connection;
        this.lock = this;
    }

    public final ServiceConnection getConnection() {
        return this.connection;
    }

    public final CountDownLatch getLatch() {
        return this.latch;
    }

    public final void setLatch(CountDownLatch countDownLatch) {
        Intrinsics.checkNotNullParameter(countDownLatch, "<set-?>");
        this.latch = countDownLatch;
    }

    public final int getConnectionState() {
        return this.connectionState;
    }

    public final void setConnectionState(int i) {
        this.connectionState = i;
    }

    public final T getProvider() {
        return this.provider;
    }

    public final void setProvider(T t) {
        this.provider = t;
    }

    public final ConnectionInfo<T> getLock() {
        return this.lock;
    }
}
