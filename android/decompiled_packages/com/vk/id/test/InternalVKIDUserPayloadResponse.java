package com.vk.id.test;

import com.google.gson.annotations.SerializedName;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import com.vk.silentauth.SilentAuthInfo;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDOverrideApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0013\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J;\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\u0016\u001a\u00020\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0019\u001a\u00020\u001aH×\u0001J\t\u0010\u001b\u001a\u00020\u0003H×\u0001R\u0016\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0004\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u000bR\u0016\u0010\u0005\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000bR\u0016\u0010\u0006\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000bR\u0016\u0010\u0007\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000b¨\u0006\u001c"}, d2 = {"Lcom/vk/id/test/InternalVKIDUserPayloadResponse;", "", "firstName", "", "lastName", "phone", "email", SilentAuthInfo.KEY_AVATAR, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getFirstName", "()Ljava/lang/String;", "getLastName", "getPhone", "getEmail", "getAvatar", "component1", "component2", "component3", "component4", "component5", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDUserPayloadResponse {
    public static final int $stable = 0;

    @SerializedName(SilentAuthInfo.KEY_AVATAR)
    private final String avatar;

    @SerializedName("email")
    private final String email;

    @SerializedName(SilentAuthInfo.KEY_FIRST_NAME)
    private final String firstName;

    @SerializedName(SilentAuthInfo.KEY_LAST_NAME)
    private final String lastName;

    @SerializedName("phone")
    private final String phone;

    public static /* synthetic */ InternalVKIDUserPayloadResponse copy$default(InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse, String str, String str2, String str3, String str4, String str5, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDUserPayloadResponse.firstName;
        }
        if ((i & 2) != 0) {
            str2 = internalVKIDUserPayloadResponse.lastName;
        }
        if ((i & 4) != 0) {
            str3 = internalVKIDUserPayloadResponse.phone;
        }
        if ((i & 8) != 0) {
            str4 = internalVKIDUserPayloadResponse.email;
        }
        if ((i & 16) != 0) {
            str5 = internalVKIDUserPayloadResponse.avatar;
        }
        String str6 = str5;
        String str7 = str3;
        return internalVKIDUserPayloadResponse.copy(str, str2, str7, str4, str6);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getFirstName() {
        return this.firstName;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getLastName() {
        return this.lastName;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getPhone() {
        return this.phone;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getEmail() {
        return this.email;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getAvatar() {
        return this.avatar;
    }

    public final InternalVKIDUserPayloadResponse copy(String firstName, String lastName, String phone, String email, String avatar) {
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        Intrinsics.checkNotNullParameter(phone, "phone");
        Intrinsics.checkNotNullParameter(email, "email");
        Intrinsics.checkNotNullParameter(avatar, "avatar");
        return new InternalVKIDUserPayloadResponse(firstName, lastName, phone, email, avatar);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDUserPayloadResponse)) {
            return false;
        }
        InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse = (InternalVKIDUserPayloadResponse) other;
        return Intrinsics.areEqual(this.firstName, internalVKIDUserPayloadResponse.firstName) && Intrinsics.areEqual(this.lastName, internalVKIDUserPayloadResponse.lastName) && Intrinsics.areEqual(this.phone, internalVKIDUserPayloadResponse.phone) && Intrinsics.areEqual(this.email, internalVKIDUserPayloadResponse.email) && Intrinsics.areEqual(this.avatar, internalVKIDUserPayloadResponse.avatar);
    }

    public int hashCode() {
        return (((((((this.firstName.hashCode() * 31) + this.lastName.hashCode()) * 31) + this.phone.hashCode()) * 31) + this.email.hashCode()) * 31) + this.avatar.hashCode();
    }

    public String toString() {
        return "InternalVKIDUserPayloadResponse(firstName=" + this.firstName + ", lastName=" + this.lastName + ", phone=" + this.phone + ", email=" + this.email + ", avatar=" + this.avatar + ")";
    }

    public InternalVKIDUserPayloadResponse(String firstName, String lastName, String phone, String email, String avatar) {
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        Intrinsics.checkNotNullParameter(phone, "phone");
        Intrinsics.checkNotNullParameter(email, "email");
        Intrinsics.checkNotNullParameter(avatar, "avatar");
        this.firstName = firstName;
        this.lastName = lastName;
        this.phone = phone;
        this.email = email;
        this.avatar = avatar;
    }

    public final String getFirstName() {
        return this.firstName;
    }

    public final String getLastName() {
        return this.lastName;
    }

    public final String getPhone() {
        return this.phone;
    }

    public final String getEmail() {
        return this.email;
    }

    public final String getAvatar() {
        return this.avatar;
    }
}
