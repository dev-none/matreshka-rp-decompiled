package com.vk.id.onetap.compose.onetap.sheet.content;

import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.VKIDUser;
import com.vk.id.onetap.common.OneTapOAuth;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import java.io.Serializable;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Common.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b1\u0018\u0000 \u00042\u00020\u0001:\u0007\u0004\u0005\u0006\u0007\b\t\nB\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0006\u000b\f\r\u000e\u000f\u0010¨\u0006\u0011"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "Ljava/io/Serializable;", "<init>", "()V", "Companion", "Init", "AuthStarted", "AuthFailedVKID", "AuthFailedAlternate", "AuthFailedMultibranding", "AuthSuccess", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedAlternate;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedMultibranding;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedVKID;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthStarted;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthSuccess;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$Init;", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OneTapBottomSheetAuthStatus implements Serializable {
    public static final int $stable = 0;
    private static final long serialVersionUID = 1;

    public /* synthetic */ OneTapBottomSheetAuthStatus(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private OneTapBottomSheetAuthStatus() {
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$Init;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Init extends OneTapBottomSheetAuthStatus {
        public static final int $stable = 0;
        public static final Init INSTANCE = new Init();

        private Init() {
            super(null);
        }
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthStarted;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class AuthStarted extends OneTapBottomSheetAuthStatus {
        public static final int $stable = 0;
        public static final AuthStarted INSTANCE = new AuthStarted();

        private AuthStarted() {
            super(null);
        }
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u00012\u00020\u0002B\u0011\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\u000b\u0010\t\u001a\u0004\u0018\u00010\u0004HÆ\u0003J\u0015\u0010\n\u001a\u00020\u00002\n\b\u0002\u0010\u0003\u001a\u0004\u0018\u00010\u0004HÇ\u0001J\b\u0010\u000b\u001a\u00020\fH\u0007J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H×\u0003J\t\u0010\u0011\u001a\u00020\fH×\u0001J\t\u0010\u0012\u001a\u00020\u0013H×\u0001J\u0018\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\fH\u0007R\u0013\u0010\u0003\u001a\u0004\u0018\u00010\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\u0019"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedVKID;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "Landroid/os/Parcelable;", "user", "Lcom/vk/id/VKIDUser;", "<init>", "(Lcom/vk/id/VKIDUser;)V", "getUser", "()Lcom/vk/id/VKIDUser;", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class AuthFailedVKID extends OneTapBottomSheetAuthStatus implements Parcelable {
        public static final int $stable = 0;
        public static final Parcelable.Creator<AuthFailedVKID> CREATOR = new Creator();
        private final VKIDUser user;

        /* JADX INFO: compiled from: Common.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<AuthFailedVKID> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final AuthFailedVKID createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new AuthFailedVKID((VKIDUser) parcel.readParcelable(AuthFailedVKID.class.getClassLoader()));
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final AuthFailedVKID[] newArray(int i) {
                return new AuthFailedVKID[i];
            }
        }

        public static /* synthetic */ AuthFailedVKID copy$default(AuthFailedVKID authFailedVKID, VKIDUser vKIDUser, int i, Object obj) {
            if ((i & 1) != 0) {
                vKIDUser = authFailedVKID.user;
            }
            return authFailedVKID.copy(vKIDUser);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final VKIDUser getUser() {
            return this.user;
        }

        public final AuthFailedVKID copy(VKIDUser user) {
            return new AuthFailedVKID(user);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof AuthFailedVKID) && Intrinsics.areEqual(this.user, ((AuthFailedVKID) other).user);
        }

        public int hashCode() {
            VKIDUser vKIDUser = this.user;
            if (vKIDUser == null) {
                return 0;
            }
            return vKIDUser.hashCode();
        }

        public String toString() {
            return "AuthFailedVKID(user=" + this.user + ")";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            dest.writeParcelable(this.user, flags);
        }

        public AuthFailedVKID(VKIDUser vKIDUser) {
            super(null);
            this.user = vKIDUser;
        }

        public final VKIDUser getUser() {
            return this.user;
        }
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedAlternate;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class AuthFailedAlternate extends OneTapBottomSheetAuthStatus {
        public static final int $stable = 0;
        public static final AuthFailedAlternate INSTANCE = new AuthFailedAlternate();

        private AuthFailedAlternate() {
            super(null);
        }
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0087\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH×\u0003J\t\u0010\u000e\u001a\u00020\u000fH×\u0001J\t\u0010\u0010\u001a\u00020\u0011H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0012"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthFailedMultibranding;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "oAuth", "Lcom/vk/id/onetap/common/OneTapOAuth;", "<init>", "(Lcom/vk/id/onetap/common/OneTapOAuth;)V", "getOAuth", "()Lcom/vk/id/onetap/common/OneTapOAuth;", "component1", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class AuthFailedMultibranding extends OneTapBottomSheetAuthStatus {
        public static final int $stable = 0;
        private final OneTapOAuth oAuth;

        public static /* synthetic */ AuthFailedMultibranding copy$default(AuthFailedMultibranding authFailedMultibranding, OneTapOAuth oneTapOAuth, int i, Object obj) {
            if ((i & 1) != 0) {
                oneTapOAuth = authFailedMultibranding.oAuth;
            }
            return authFailedMultibranding.copy(oneTapOAuth);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final OneTapOAuth getOAuth() {
            return this.oAuth;
        }

        public final AuthFailedMultibranding copy(OneTapOAuth oAuth) {
            Intrinsics.checkNotNullParameter(oAuth, "oAuth");
            return new AuthFailedMultibranding(oAuth);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof AuthFailedMultibranding) && this.oAuth == ((AuthFailedMultibranding) other).oAuth;
        }

        public int hashCode() {
            return this.oAuth.hashCode();
        }

        public String toString() {
            return "AuthFailedMultibranding(oAuth=" + this.oAuth + ")";
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AuthFailedMultibranding(OneTapOAuth oAuth) {
            super(null);
            Intrinsics.checkNotNullParameter(oAuth, "oAuth");
            this.oAuth = oAuth;
        }

        public final OneTapOAuth getOAuth() {
            return this.oAuth;
        }
    }

    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus$AuthSuccess;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class AuthSuccess extends OneTapBottomSheetAuthStatus {
        public static final int $stable = 0;
        public static final AuthSuccess INSTANCE = new AuthSuccess();

        private AuthSuccess() {
            super(null);
        }
    }
}
