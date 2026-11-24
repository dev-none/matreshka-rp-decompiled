package com.vk.id.refresh;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.OperatingSystem;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: VKIDRefreshTokenParams.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\b\b\u0007\u0018\u00002\u00020\u0001:\u0001\fB\u001b\b\u0002\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\r"}, d2 = {"Lcom/vk/id/refresh/VKIDRefreshTokenParams;", "", "state", "", "refreshAccessToken", "", "<init>", "(Ljava/lang/String;Z)V", "getState$vkid_release", "()Ljava/lang/String;", "getRefreshAccessToken$vkid_release", "()Z", "Builder", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDRefreshTokenParams {
    public static final int $stable = 0;
    private final boolean refreshAccessToken;
    private final String state;

    public /* synthetic */ VKIDRefreshTokenParams(String str, boolean z, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, z);
    }

    private VKIDRefreshTokenParams(String str, boolean z) {
        this.state = str;
        this.refreshAccessToken = z;
    }

    /* JADX INFO: renamed from: getState$vkid_release, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: getRefreshAccessToken$vkid_release, reason: from getter */
    public final boolean getRefreshAccessToken() {
        return this.refreshAccessToken;
    }

    /* JADX INFO: compiled from: VKIDRefreshTokenParams.kt */
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0011\u001a\u00020\u0012R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR$\u0010\n\u001a\u00020\u000b8\u0006@\u0006X\u0087\u000e¢\u0006\u0014\n\u0000\u0012\u0004\b\f\u0010\u0003\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010¨\u0006\u0013"}, d2 = {"Lcom/vk/id/refresh/VKIDRefreshTokenParams$Builder;", "", "<init>", "()V", "state", "", "getState", "()Ljava/lang/String;", "setState", "(Ljava/lang/String;)V", "refreshAccessToken", "", "getRefreshAccessToken$annotations", "getRefreshAccessToken", "()Z", "setRefreshAccessToken", "(Z)V", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/refresh/VKIDRefreshTokenParams;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        public static final int $stable = 8;
        private boolean refreshAccessToken = true;
        private String state;

        @InternalVKIDApi
        public static /* synthetic */ void getRefreshAccessToken$annotations() {
        }

        public final String getState() {
            return this.state;
        }

        public final void setState(String str) {
            this.state = str;
        }

        public final boolean getRefreshAccessToken() {
            return this.refreshAccessToken;
        }

        public final void setRefreshAccessToken(boolean z) {
            this.refreshAccessToken = z;
        }

        public final VKIDRefreshTokenParams build() {
            return new VKIDRefreshTokenParams(this.state, this.refreshAccessToken, null);
        }
    }
}
