package com.pushwoosh.firebase.b;

import android.os.Bundle;
import android.text.TextUtils;
import com.google.firebase.messaging.RemoteMessage;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class a {
    public static Bundle a(RemoteMessage remoteMessage) {
        if (remoteMessage == null) {
            return new Bundle();
        }
        Map<String, String> data = remoteMessage.getData();
        Bundle bundle = new Bundle();
        if (data != null) {
            for (Map.Entry<String, String> entry : data.entrySet()) {
                bundle.putString(entry.getKey(), entry.getValue());
            }
        }
        String collapseKey = remoteMessage.getCollapseKey();
        if (!TextUtils.isEmpty(collapseKey) && TextUtils.isEmpty(bundle.getString("pw_msg_tag"))) {
            bundle.putString("pw_msg_tag", collapseKey);
        }
        return bundle;
    }
}
