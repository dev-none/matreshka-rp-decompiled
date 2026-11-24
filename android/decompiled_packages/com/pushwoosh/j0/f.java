package com.pushwoosh.j0;

import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandler;
import java.util.HashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class f implements MessageSystemHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f5232a;

    public f() {
        HashMap map = new HashMap();
        this.f5232a = map;
        map.put("setLogLevel", new d());
        PWLog.debug("SystemCommandDispatcher", "Registered command handler: ".concat("setLogLevel"));
        map.put("set_base_url", new c());
        PWLog.debug("SystemCommandDispatcher", "Registered command handler: ".concat("set_base_url"));
    }

    public final boolean a(String str, String str2) {
        e eVar = (e) this.f5232a.get(str);
        if (eVar == null) {
            PWLog.warn("SystemCommandDispatcher", "No handler registered for command: " + str);
            return false;
        }
        PWLog.debug("SystemCommandDispatcher", "Handling command: " + str);
        boolean zA = eVar.a(str2);
        if (!zA) {
            PWLog.warn("SystemCommandDispatcher", "Command handler returned false: " + str);
            return zA;
        }
        StringBuilder sb = new StringBuilder("Command handled successfully: ");
        sb.append(str);
        sb.append(", value: ");
        if (str2 == null) {
            str2 = "(no value)";
        }
        sb.append(str2);
        PWLog.info("SystemCommandDispatcher", sb.toString());
        return zA;
    }

    @Override // com.pushwoosh.notification.handlers.message.system.MessageSystemHandler
    public final boolean preHandleMessage(Bundle bundle) {
        if (!PushBundleDataProvider.isSystemPush(bundle)) {
            return false;
        }
        String string = bundle.getString("pw_commands");
        if (TextUtils.isEmpty(string)) {
            String internalCommand = PushBundleDataProvider.getInternalCommand(bundle);
            if (!TextUtils.isEmpty(internalCommand)) {
                return a(internalCommand, PushBundleDataProvider.getValue(bundle));
            }
            PWLog.warn("SystemCommandDispatcher", "System push received but no command found");
            return true;
        }
        try {
            JSONArray jSONArray = new JSONArray(string);
            boolean z = false;
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    String strOptString = jSONObjectOptJSONObject.optString("command");
                    String strOptString2 = jSONObjectOptJSONObject.optString("value", null);
                    if (!TextUtils.isEmpty(strOptString) && a(strOptString, strOptString2)) {
                        z = true;
                    }
                }
            }
            return z || jSONArray.length() > 0;
        } catch (JSONException e) {
            PWLog.error("SystemCommandDispatcher", "Failed to parse pw_commands: " + e.getMessage());
            return false;
        }
    }
}
