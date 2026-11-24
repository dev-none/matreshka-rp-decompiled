package com.vk.id;

import com.vk.silentauth.SilentAuthInfo;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDUser.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0000¨\u0006\u0003"}, d2 = {"toVKIDUser", "Lcom/vk/id/VKIDUser;", "Lcom/vk/silentauth/SilentAuthInfo;", "vkid_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDUserKt {
    public static final VKIDUser toVKIDUser(SilentAuthInfo silentAuthInfo) {
        Intrinsics.checkNotNullParameter(silentAuthInfo, "<this>");
        return new VKIDUser(silentAuthInfo.getFirstName(), silentAuthInfo.getLastName(), silentAuthInfo.getPhone(), silentAuthInfo.getPhoto50(), silentAuthInfo.getPhoto100(), silentAuthInfo.getPhoto200(), null, 64, null);
    }
}
