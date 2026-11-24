package com.vk.id.network.groupsubscription;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupByIdData;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiContract.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\bg\u0018\u00002\u00020\u0001J\u0016\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H¦@¢\u0006\u0002\u0010\u0006J\u0016\u0010\u0007\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H¦@¢\u0006\u0002\u0010\u0006J\u001e\u0010\b\u001a\u00020\t2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u0005H¦@¢\u0006\u0002\u0010\u000bJ&\u0010\f\u001a\u00020\r2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0003H¦@¢\u0006\u0002\u0010\u000fJ\u001e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u0005H¦@¢\u0006\u0002\u0010\u000b¨\u0006\u0012"}, d2 = {"Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "", "shouldShowSubscription", "", Constants.ACCESS_TOKEN, "", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "isServiceAccount", "getGroup", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "groupId", "(Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getMembers", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "justFriends", "(Ljava/lang/String;Ljava/lang/String;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "subscribeToGroup", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface InternalVKIDGroupSubscriptionApiContract {
    Object getGroup(String str, String str2, Continuation<? super InternalVKIDGroupByIdData> continuation);

    Object getMembers(String str, String str2, boolean z, Continuation<? super InternalVKIDGroupMembersData> continuation);

    Object isServiceAccount(String str, Continuation<? super Boolean> continuation);

    Object shouldShowSubscription(String str, Continuation<? super Boolean> continuation);

    Object subscribeToGroup(String str, String str2, Continuation<? super Unit> continuation);
}
