package com.pushwoosh.inapp.ui;

import com.pushwoosh.inapp.nativeui.NativeInAppPresenter;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class z1 implements NativeInAppPresenter {
    @Override // com.pushwoosh.inapp.nativeui.NativeInAppPresenter
    public final boolean present(String configJson, Resource resource) {
        PreferenceStringValue preferenceStringValueMessageHash;
        String string;
        Intrinsics.checkNotNullParameter(configJson, "configJson");
        Intrinsics.checkNotNullParameter(resource, "resource");
        String code = resource.getCode();
        Intrinsics.checkNotNullParameter(configJson, "configJson");
        if (code != null && code.length() != 0) {
            try {
                JSONObject jSONObject = new JSONObject(configJson);
                Object objOpt = jSONObject.opt("inAppId");
                if ((!(objOpt instanceof String) || ((CharSequence) objOpt).length() <= 0) && (string = jSONObject.put("inAppId", code).toString()) != null) {
                    configJson = string;
                }
            } catch (Exception unused) {
            }
        }
        PushwooshInAppUi pushwooshInAppUi = PushwooshInAppUi.INSTANCE;
        s0 s0VarA = g0.a(configJson, pushwooshInAppUi.isCurrentSchemeDark$pushwoosh_inapp_ui_release());
        if (s0VarA == null) {
            return false;
        }
        y1 y1Var = y1.f5178a;
        String rawJson = s0VarA.f;
        synchronized (y1Var) {
            Intrinsics.checkNotNullParameter(rawJson, "rawJson");
            Intrinsics.checkNotNullParameter(resource, "resource");
            NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
            y1.b.put(rawJson, new w1((notificationPreferences == null || (preferenceStringValueMessageHash = notificationPreferences.messageHash()) == null) ? null : preferenceStringValueMessageHash.get(), resource));
        }
        pushwooshInAppUi.route$pushwoosh_inapp_ui_release(s0VarA);
        return true;
    }
}
