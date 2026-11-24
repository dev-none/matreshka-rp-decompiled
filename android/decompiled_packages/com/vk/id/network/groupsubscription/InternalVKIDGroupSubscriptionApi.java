package com.vk.id.network.groupsubscription;

import androidx.exifinterface.media.ExifInterface;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.InternalVKIDCall;
import com.vk.id.network.common.ApiConstants;
import com.vk.id.network.http.FormBody;
import com.vk.id.network.http.HttpClient;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.util.CreateRequestKt;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0014\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\nJ\u0014\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\nJ\u001c\u0010\f\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nJ$\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\u0010J\u001c\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nJ\u0010\u0010\u0012\u001a\u00020\u00132\u0006\u0010\t\u001a\u00020\nH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi;", "", "client", "Lcom/vk/id/network/http/HttpClient;", "<init>", "(Lcom/vk/id/network/http/HttpClient;)V", "getShouldShowSubscription", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", Constants.ACCESS_TOKEN, "", "getProfileShortInfo", "getGroup", "groupId", "getMembers", "justFriends", "", "subscribeToGroup", "bodyBuilder", "Lcom/vk/id/network/http/FormBody$Builder;", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDGroupSubscriptionApi {
    private static final Companion Companion = new Companion(null);
    private static final String FIELD_ACCESS_TOKEN = "access_token";
    private static final String FIELD_GROUP_ID = "group_id";
    private static final String FIELD_SOURCE = "source";
    private static final String HOST_VK_API = "https://api.vk.ru";
    private static final String HOST_VK_ID = "https://id.vk.ru";
    private static final String PATH_ACCOUNT_PROFILE_SHORT_INFO = "method/account.getProfileShortInfo";
    private static final String PATH_GROUPS_GET_BY_ID = "method/groups.getById";
    private static final String PATH_GROUPS_GET_MEMBERS = "method/groups.getMembers";
    private static final String PATH_GROUPS_JOIN = "method/groups.join";
    private static final String PATH_SHOULD_SHOW_SUBSCRIPTION = "vkid_sdk_is_show_subscription";
    private final HttpClient client;

    public InternalVKIDGroupSubscriptionApi(HttpClient client) {
        Intrinsics.checkNotNullParameter(client, "client");
        this.client = client;
    }

    public final InternalVKIDCall<HttpResponse> getShouldShowSubscription(String accessToken) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_ID, PATH_SHOULD_SHOW_SUBSCRIPTION, bodyBuilder(accessToken).build(), null, 8, null);
    }

    public final InternalVKIDCall<HttpResponse> getProfileShortInfo(String accessToken) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_API, PATH_ACCOUNT_PROFILE_SHORT_INFO, bodyBuilder(accessToken).build(), null, 8, null);
    }

    public final InternalVKIDCall<HttpResponse> getGroup(String accessToken, String groupId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_API, PATH_GROUPS_GET_BY_ID, bodyBuilder(accessToken).add("group_ids", groupId).add("fields", "description,verified,is_member").build(), null, 8, null);
    }

    public final InternalVKIDCall<HttpResponse> getMembers(String accessToken, String groupId, boolean justFriends) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        HttpClient httpClient = this.client;
        FormBody.Builder builderAdd = bodyBuilder(accessToken).add("group_id", groupId).add("sort", "id_asc").add("count", ExifInterface.GPS_MEASUREMENT_3D).add("fields", "photo_200");
        if (justFriends) {
            builderAdd.add("filter", "friends");
        }
        Unit unit = Unit.INSTANCE;
        return CreateRequestKt.createRequest$default(httpClient, HOST_VK_API, PATH_GROUPS_GET_MEMBERS, builderAdd.build(), null, 8, null);
    }

    public final InternalVKIDCall<HttpResponse> subscribeToGroup(String accessToken, String groupId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_API, PATH_GROUPS_JOIN, bodyBuilder(accessToken).add("group_id", groupId).add("source", "vkid_sdk").build(), null, 8, null);
    }

    private final FormBody.Builder bodyBuilder(String accessToken) {
        return new FormBody.Builder().add("v", ApiConstants.API_VERSION_VALUE).add(FIELD_ACCESS_TOKEN, accessToken);
    }

    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApi.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\n\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi$Companion;", "", "<init>", "()V", "HOST_VK_API", "", "HOST_VK_ID", "PATH_ACCOUNT_PROFILE_SHORT_INFO", "PATH_GROUPS_GET_BY_ID", "PATH_GROUPS_GET_MEMBERS", "PATH_GROUPS_JOIN", "PATH_SHOULD_SHOW_SUBSCRIPTION", "FIELD_ACCESS_TOKEN", "FIELD_GROUP_ID", "FIELD_SOURCE", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
