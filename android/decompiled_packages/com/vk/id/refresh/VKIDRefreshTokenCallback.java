package com.vk.id.refresh;

import com.vk.id.AccessToken;
import kotlin.Metadata;

/* JADX INFO: compiled from: VKIDRefreshTokenCallback.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH&¨\u0006\t"}, d2 = {"Lcom/vk/id/refresh/VKIDRefreshTokenCallback;", "", "onSuccess", "", "token", "Lcom/vk/id/AccessToken;", "onFail", "fail", "Lcom/vk/id/refresh/VKIDRefreshTokenFail;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface VKIDRefreshTokenCallback {
    void onFail(VKIDRefreshTokenFail fail);

    void onSuccess(AccessToken token);
}
