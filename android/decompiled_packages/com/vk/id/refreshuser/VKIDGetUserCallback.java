package com.vk.id.refreshuser;

import com.vk.id.VKIDUser;
import kotlin.Metadata;

/* JADX INFO: compiled from: VKIDGetUserCallback.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH&¨\u0006\t"}, d2 = {"Lcom/vk/id/refreshuser/VKIDGetUserCallback;", "", "onSuccess", "", "user", "Lcom/vk/id/VKIDUser;", "onFail", "fail", "Lcom/vk/id/refreshuser/VKIDGetUserFail;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface VKIDGetUserCallback {
    void onFail(VKIDGetUserFail fail);

    void onSuccess(VKIDUser user);
}
