package com.vk.id.auth;

import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDAuthCallback.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0018\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0010\u0010\u000b\u001a\u00020\u00032\u0006\u0010\f\u001a\u00020\rH&¨\u0006\u000e"}, d2 = {"Lcom/vk/id/auth/VKIDAuthCallback;", "", "onAuth", "", Constants.ACCESS_TOKEN, "Lcom/vk/id/AccessToken;", "onAuthCode", "data", "Lcom/vk/id/auth/AuthCodeData;", "isCompletion", "", "onFail", "fail", "Lcom/vk/id/VKIDAuthFail;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface VKIDAuthCallback {

    /* JADX INFO: compiled from: VKIDAuthCallback.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class DefaultImpls {
        public static void onAuthCode(VKIDAuthCallback vKIDAuthCallback, AuthCodeData data, boolean z) {
            Intrinsics.checkNotNullParameter(data, "data");
        }
    }

    void onAuth(AccessToken accessToken);

    void onAuthCode(AuthCodeData data, boolean isCompletion);

    void onFail(VKIDAuthFail fail);
}
