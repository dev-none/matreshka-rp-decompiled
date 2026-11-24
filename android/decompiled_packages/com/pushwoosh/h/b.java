package com.pushwoosh.h;

import android.os.Build;
import com.pushwoosh.d0.g;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.NotificationPrefs;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {
    public static Map a(NotificationPrefs notificationPrefs) {
        if (notificationPrefs == null) {
            PWLog.warn("[InApp]InAppTags", "notification preferences are not initialized, substituting placeholder defaults");
            return Collections.EMPTY_MAP;
        }
        try {
            Map<String, Object> mapJsonToMap = JsonUtils.jsonToMap(notificationPrefs.tags().get());
            if (notificationPrefs.isCollectingDeviceOsVersionAllowed().get()) {
                mapJsonToMap.put("OS Version", Build.VERSION.RELEASE);
            }
            if (notificationPrefs.isCollectingDeviceModelAllowed().get()) {
                mapJsonToMap.put("Device Model", g.a());
            }
            a.a(mapJsonToMap);
            HashMap map = new HashMap();
            for (Map.Entry<String, Object> entry : mapJsonToMap.entrySet()) {
                if (entry.getValue() != null) {
                    map.put(entry.getKey(), entry.getValue().toString());
                }
            }
            return map;
        } catch (Throwable th) {
            PWLog.warn("[InApp]InAppTags", "failed to collect tags, substituting placeholder defaults", th);
            return Collections.EMPTY_MAP;
        }
    }
}
