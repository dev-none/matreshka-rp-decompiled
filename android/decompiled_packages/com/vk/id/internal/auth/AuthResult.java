package com.vk.id.internal.auth;

import com.my.target.common.menu.MenuActionType;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthResult.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b1\u0018\u00002\u00020\u0001:\u0005\u0004\u0005\u0006\u0007\bB\t\b\u0005¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0004\t\n\u000b\f¨\u0006\r"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult;", "", "<init>", "()V", "Success", "Canceled", "NoBrowserAvailable", "AuthActiviyResultFailed", "OAuth", "Lcom/vk/id/internal/auth/AuthResult$AuthActiviyResultFailed;", "Lcom/vk/id/internal/auth/AuthResult$Canceled;", "Lcom/vk/id/internal/auth/AuthResult$NoBrowserAvailable;", "Lcom/vk/id/internal/auth/AuthResult$Success;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class AuthResult {
    public static final int $stable = 0;

    public /* synthetic */ AuthResult(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private AuthResult() {
    }

    /* JADX INFO: compiled from: AuthResult.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0019\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u000b\u0010\f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÇ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012H×\u0003J\t\u0010\u0013\u001a\u00020\u0014H×\u0001J\t\u0010\u0015\u001a\u00020\u0005H×\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult$Success;", "Lcom/vk/id/internal/auth/AuthResult;", Constants.SIGN_IN_METHOD_OAUTH, "Lcom/vk/id/internal/auth/AuthResult$OAuth;", "deviceId", "", "<init>", "(Lcom/vk/id/internal/auth/AuthResult$OAuth;Ljava/lang/String;)V", "getOauth", "()Lcom/vk/id/internal/auth/AuthResult$OAuth;", "getDeviceId", "()Ljava/lang/String;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Success extends AuthResult {
        public static final int $stable = 0;
        private final String deviceId;
        private final OAuth oauth;

        public static /* synthetic */ Success copy$default(Success success, OAuth oAuth, String str, int i, Object obj) {
            if ((i & 1) != 0) {
                oAuth = success.oauth;
            }
            if ((i & 2) != 0) {
                str = success.deviceId;
            }
            return success.copy(oAuth, str);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final OAuth getOauth() {
            return this.oauth;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final String getDeviceId() {
            return this.deviceId;
        }

        public final Success copy(OAuth oauth, String deviceId) {
            Intrinsics.checkNotNullParameter(deviceId, "deviceId");
            return new Success(oauth, deviceId);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Success)) {
                return false;
            }
            Success success = (Success) other;
            return Intrinsics.areEqual(this.oauth, success.oauth) && Intrinsics.areEqual(this.deviceId, success.deviceId);
        }

        public int hashCode() {
            OAuth oAuth = this.oauth;
            return ((oAuth == null ? 0 : oAuth.hashCode()) * 31) + this.deviceId.hashCode();
        }

        public String toString() {
            return "Success(oauth=" + this.oauth + ", deviceId=" + this.deviceId + ")";
        }

        public final OAuth getOauth() {
            return this.oauth;
        }

        public final String getDeviceId() {
            return this.deviceId;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Success(OAuth oAuth, String deviceId) {
            super(null);
            Intrinsics.checkNotNullParameter(deviceId, "deviceId");
            this.oauth = oAuth;
            this.deviceId = deviceId;
        }
    }

    /* JADX INFO: compiled from: AuthResult.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH×\u0003J\t\u0010\u000e\u001a\u00020\u000fH×\u0001J\t\u0010\u0010\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0011"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult$Canceled;", "Lcom/vk/id/internal/auth/AuthResult;", "message", "", "<init>", "(Ljava/lang/String;)V", "getMessage", "()Ljava/lang/String;", "component1", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Canceled extends AuthResult {
        public static final int $stable = 0;
        private final String message;

        public static /* synthetic */ Canceled copy$default(Canceled canceled, String str, int i, Object obj) {
            if ((i & 1) != 0) {
                str = canceled.message;
            }
            return canceled.copy(str);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getMessage() {
            return this.message;
        }

        public final Canceled copy(String message) {
            Intrinsics.checkNotNullParameter(message, "message");
            return new Canceled(message);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof Canceled) && Intrinsics.areEqual(this.message, ((Canceled) other).message);
        }

        public int hashCode() {
            return this.message.hashCode();
        }

        public String toString() {
            return "Canceled(message=" + this.message + ")";
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Canceled(String message) {
            super(null);
            Intrinsics.checkNotNullParameter(message, "message");
            this.message = message;
        }

        public final String getMessage() {
            return this.message;
        }
    }

    /* JADX INFO: compiled from: AuthResult.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÇ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012H×\u0003J\t\u0010\u0013\u001a\u00020\u0014H×\u0001J\t\u0010\u0015\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult$NoBrowserAvailable;", "Lcom/vk/id/internal/auth/AuthResult;", "message", "", "error", "", "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "getMessage", "()Ljava/lang/String;", "getError", "()Ljava/lang/Throwable;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class NoBrowserAvailable extends AuthResult {
        public static final int $stable = 8;
        private final Throwable error;
        private final String message;

        public static /* synthetic */ NoBrowserAvailable copy$default(NoBrowserAvailable noBrowserAvailable, String str, Throwable th, int i, Object obj) {
            if ((i & 1) != 0) {
                str = noBrowserAvailable.message;
            }
            if ((i & 2) != 0) {
                th = noBrowserAvailable.error;
            }
            return noBrowserAvailable.copy(str, th);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getMessage() {
            return this.message;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final Throwable getError() {
            return this.error;
        }

        public final NoBrowserAvailable copy(String message, Throwable error) {
            Intrinsics.checkNotNullParameter(message, "message");
            return new NoBrowserAvailable(message, error);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof NoBrowserAvailable)) {
                return false;
            }
            NoBrowserAvailable noBrowserAvailable = (NoBrowserAvailable) other;
            return Intrinsics.areEqual(this.message, noBrowserAvailable.message) && Intrinsics.areEqual(this.error, noBrowserAvailable.error);
        }

        public int hashCode() {
            int iHashCode = this.message.hashCode() * 31;
            Throwable th = this.error;
            return iHashCode + (th == null ? 0 : th.hashCode());
        }

        public String toString() {
            return "NoBrowserAvailable(message=" + this.message + ", error=" + this.error + ")";
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public NoBrowserAvailable(String message, Throwable th) {
            super(null);
            Intrinsics.checkNotNullParameter(message, "message");
            this.message = message;
            this.error = th;
        }

        public final Throwable getError() {
            return this.error;
        }

        public final String getMessage() {
            return this.message;
        }
    }

    /* JADX INFO: compiled from: AuthResult.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÇ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012H×\u0003J\t\u0010\u0013\u001a\u00020\u0014H×\u0001J\t\u0010\u0015\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult$AuthActiviyResultFailed;", "Lcom/vk/id/internal/auth/AuthResult;", "message", "", "error", "", "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "getMessage", "()Ljava/lang/String;", "getError", "()Ljava/lang/Throwable;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class AuthActiviyResultFailed extends AuthResult {
        public static final int $stable = 8;
        private final Throwable error;
        private final String message;

        public static /* synthetic */ AuthActiviyResultFailed copy$default(AuthActiviyResultFailed authActiviyResultFailed, String str, Throwable th, int i, Object obj) {
            if ((i & 1) != 0) {
                str = authActiviyResultFailed.message;
            }
            if ((i & 2) != 0) {
                th = authActiviyResultFailed.error;
            }
            return authActiviyResultFailed.copy(str, th);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getMessage() {
            return this.message;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final Throwable getError() {
            return this.error;
        }

        public final AuthActiviyResultFailed copy(String message, Throwable error) {
            Intrinsics.checkNotNullParameter(message, "message");
            return new AuthActiviyResultFailed(message, error);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof AuthActiviyResultFailed)) {
                return false;
            }
            AuthActiviyResultFailed authActiviyResultFailed = (AuthActiviyResultFailed) other;
            return Intrinsics.areEqual(this.message, authActiviyResultFailed.message) && Intrinsics.areEqual(this.error, authActiviyResultFailed.error);
        }

        public int hashCode() {
            int iHashCode = this.message.hashCode() * 31;
            Throwable th = this.error;
            return iHashCode + (th == null ? 0 : th.hashCode());
        }

        public String toString() {
            return "AuthActiviyResultFailed(message=" + this.message + ", error=" + this.error + ")";
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AuthActiviyResultFailed(String message, Throwable th) {
            super(null);
            Intrinsics.checkNotNullParameter(message, "message");
            this.message = message;
            this.error = th;
        }

        public final Throwable getError() {
            return this.error;
        }

        public final String getMessage() {
            return this.message;
        }
    }

    /* JADX INFO: compiled from: AuthResult.kt */
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u001d\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0010\u001a\u00020\u0011H×\u0001J\t\u0010\u0012\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0013"}, d2 = {"Lcom/vk/id/internal/auth/AuthResult$OAuth;", "", "code", "", "state", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getCode", "()Ljava/lang/String;", "getState", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class OAuth {
        public static final int $stable = 0;
        private final String code;
        private final String state;

        public static /* synthetic */ OAuth copy$default(OAuth oAuth, String str, String str2, int i, Object obj) {
            if ((i & 1) != 0) {
                str = oAuth.code;
            }
            if ((i & 2) != 0) {
                str2 = oAuth.state;
            }
            return oAuth.copy(str, str2);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getCode() {
            return this.code;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final String getState() {
            return this.state;
        }

        public final OAuth copy(String code, String state) {
            Intrinsics.checkNotNullParameter(code, "code");
            Intrinsics.checkNotNullParameter(state, "state");
            return new OAuth(code, state);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof OAuth)) {
                return false;
            }
            OAuth oAuth = (OAuth) other;
            return Intrinsics.areEqual(this.code, oAuth.code) && Intrinsics.areEqual(this.state, oAuth.state);
        }

        public int hashCode() {
            return (this.code.hashCode() * 31) + this.state.hashCode();
        }

        public String toString() {
            return "OAuth(code=" + this.code + ", state=" + this.state + ")";
        }

        public OAuth(String code, String state) {
            Intrinsics.checkNotNullParameter(code, "code");
            Intrinsics.checkNotNullParameter(state, "state");
            this.code = code;
            this.state = state;
        }

        public final String getCode() {
            return this.code;
        }

        public final String getState() {
            return this.state;
        }
    }
}
