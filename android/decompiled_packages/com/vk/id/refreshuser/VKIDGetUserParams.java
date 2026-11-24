package com.vk.id.refreshuser;

import io.sentry.protocol.OperatingSystem;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: VKIDGetUserParams.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\b\u0007\u0018\u00002\u00020\u0001:\u0001\bB\u0015\b\u0002\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\t"}, d2 = {"Lcom/vk/id/refreshuser/VKIDGetUserParams;", "", "refreshTokenState", "", "<init>", "(Ljava/lang/String;)V", "getRefreshTokenState$vkid_release", "()Ljava/lang/String;", "Builder", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDGetUserParams {
    public static final int $stable = 0;
    private final String refreshTokenState;

    public /* synthetic */ VKIDGetUserParams(String str, DefaultConstructorMarker defaultConstructorMarker) {
        this(str);
    }

    private VKIDGetUserParams(String str) {
        this.refreshTokenState = str;
    }

    /* synthetic */ VKIDGetUserParams(String str, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str);
    }

    /* JADX INFO: renamed from: getRefreshTokenState$vkid_release, reason: from getter */
    public final String getRefreshTokenState() {
        return this.refreshTokenState;
    }

    /* JADX INFO: compiled from: VKIDGetUserParams.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\n\u001a\u00020\u000bR\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\t¨\u0006\f"}, d2 = {"Lcom/vk/id/refreshuser/VKIDGetUserParams$Builder;", "", "<init>", "()V", "refreshTokenState", "", "getRefreshTokenState", "()Ljava/lang/String;", "setRefreshTokenState", "(Ljava/lang/String;)V", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/refreshuser/VKIDGetUserParams;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        public static final int $stable = 8;
        private String refreshTokenState;

        public final String getRefreshTokenState() {
            return this.refreshTokenState;
        }

        public final void setRefreshTokenState(String str) {
            this.refreshTokenState = str;
        }

        public final VKIDGetUserParams build() {
            return new VKIDGetUserParams(this.refreshTokenState, null);
        }
    }
}
