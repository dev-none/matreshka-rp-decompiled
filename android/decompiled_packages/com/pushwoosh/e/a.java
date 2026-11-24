package com.pushwoosh.e;

import com.pushwoosh.inapp.view.config.ModalRichmediaConfig;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaSwipeGesture;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.m.a f5060a;

    public a(com.pushwoosh.m.a aVar) {
        this.f5060a = aVar;
    }

    public static void a(JSONObject jSONObject, ModalRichmediaConfig modalRichmediaConfig) {
        if (jSONObject.has("swipe_to_dismiss")) {
            try {
                JSONArray jSONArray = jSONObject.getJSONArray("swipe_to_dismiss");
                HashSet hashSet = new HashSet();
                for (int i = 0; i < jSONArray.length(); i++) {
                    ModalRichMediaSwipeGesture modalRichMediaSwipeGestureFromString = ModalRichMediaSwipeGesture.fromString(jSONArray.getString(i));
                    if (modalRichMediaSwipeGestureFromString != null && modalRichMediaSwipeGestureFromString != ModalRichMediaSwipeGesture.NONE) {
                        hashSet.add(modalRichMediaSwipeGestureFromString);
                    }
                }
                modalRichmediaConfig.setSwipeGestures(hashSet);
            } catch (JSONException e) {
                PWLog.warn("[InApp]InAppConfig", "Failed to parse swipe_to_dismiss: " + e.getMessage());
            }
        }
    }

    public final ModalRichmediaConfig b(String str) throws IOException {
        PWLog.noise("[InApp]InAppConfig", "parseModalConfig started for code: " + str);
        File fileA = this.f5060a.a(str);
        File file = fileA == null ? null : new File(fileA, "pushwoosh.json");
        if (!file.exists()) {
            return null;
        }
        try {
            String strB = com.pushwoosh.e0.e.b(file);
            if (strB != null && !strB.trim().isEmpty()) {
                JSONObject jSONObjectOptJSONObject = new JSONObject(strB).optJSONObject("style_settings");
                ModalRichmediaConfig modalRichmediaConfig = new ModalRichmediaConfig();
                if (jSONObjectOptJSONObject != null) {
                    if (jSONObjectOptJSONObject.has("position")) {
                        try {
                            ModalRichMediaViewPosition modalRichMediaViewPositionFromString = ModalRichMediaViewPosition.fromString(jSONObjectOptJSONObject.getString("position"));
                            if (modalRichMediaViewPositionFromString != null) {
                                modalRichmediaConfig.setViewPosition(modalRichMediaViewPositionFromString);
                            }
                        } catch (JSONException e) {
                            PWLog.warn("[InApp]InAppConfig", "Failed to parse position: " + e.getMessage());
                        }
                    }
                    if (jSONObjectOptJSONObject.has("present_animation")) {
                        try {
                            ModalRichMediaPresentAnimationType modalRichMediaPresentAnimationTypeFromString = ModalRichMediaPresentAnimationType.fromString(jSONObjectOptJSONObject.getString("present_animation"));
                            if (modalRichMediaPresentAnimationTypeFromString != null) {
                                modalRichmediaConfig.setPresentAnimationType(modalRichMediaPresentAnimationTypeFromString);
                            }
                        } catch (JSONException e2) {
                            PWLog.warn("[InApp]InAppConfig", "Failed to parse present_animation: " + e2.getMessage());
                        }
                    }
                    if (jSONObjectOptJSONObject.has("dismiss_animation")) {
                        try {
                            ModalRichMediaDismissAnimationType modalRichMediaDismissAnimationTypeFromString = ModalRichMediaDismissAnimationType.fromString(jSONObjectOptJSONObject.getString("dismiss_animation"));
                            if (modalRichMediaDismissAnimationTypeFromString != null) {
                                modalRichmediaConfig.setDismissAnimationType(modalRichMediaDismissAnimationTypeFromString);
                            }
                        } catch (JSONException e3) {
                            PWLog.warn("[InApp]InAppConfig", "Failed to parse dismiss_animation: " + e3.getMessage());
                        }
                    }
                    a(jSONObjectOptJSONObject, modalRichmediaConfig);
                    if (jSONObjectOptJSONObject.has("animation_duration")) {
                        try {
                            int i = jSONObjectOptJSONObject.getInt("animation_duration");
                            if (i > 0) {
                                modalRichmediaConfig.setAnimationDuration(Integer.valueOf(i));
                            }
                        } catch (JSONException e4) {
                            PWLog.warn("[InApp]InAppConfig", "Failed to parse animation_duration: " + e4.getMessage());
                        }
                    }
                }
                return modalRichmediaConfig;
            }
            PWLog.warn("[InApp]InAppConfig", "Config file exists but is empty for code: " + str);
            return null;
        } catch (JSONException e5) {
            PWLog.error("[InApp]InAppConfig", "Invalid JSON in config file for code: " + str, e5);
            throw new IOException("Malformed config file", e5);
        }
    }

    public final HashMap a(String str) throws JSONException {
        JSONObject jSONObject;
        File fileA = this.f5060a.a(str);
        JSONObject jSONObject2 = new JSONObject(com.pushwoosh.e0.e.b(fileA == null ? null : new File(fileA, "pushwoosh.json")));
        JSONObject jSONObject3 = jSONObject2.getJSONObject("localization");
        String string = jSONObject2.getString("default_language");
        try {
            jSONObject = jSONObject3.getJSONObject(RepositoryModule.getRegistrationPreferences().language().get());
        } catch (JSONException unused) {
            jSONObject = jSONObject3.getJSONObject(string);
        }
        HashMap map = new HashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            map.put(next, jSONObject.getString(next));
        }
        return map;
    }
}
