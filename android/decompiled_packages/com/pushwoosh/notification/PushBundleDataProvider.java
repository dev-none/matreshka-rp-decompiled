package com.pushwoosh.notification;

import android.graphics.Color;
import android.os.Bundle;
import android.text.TextUtils;
import androidx.core.app.NotificationCompat;
import androidx.media3.exoplayer.upstream.CmcdData;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.google.firebase.messaging.Constants;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class PushBundleDataProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f5281a = 1;

    private static int a(int i, Bundle bundle, String str) {
        String string = bundle.getString(str);
        if (TextUtils.isEmpty(string)) {
            return (string == null || !string.isEmpty()) ? bundle.getInt(str, i) : i;
        }
        try {
            return Integer.parseInt(string);
        } catch (NumberFormatException unused) {
            PWLog.error("ERROR! Incorrect format for key [ " + str + " ]: " + string);
            return i;
        }
    }

    public static JSONObject asJson(Bundle bundle) {
        return JsonUtils.bundleToJsonWithUserData(bundle);
    }

    public static Collection<Action> getActions(Bundle bundle) {
        ArrayList arrayList = new ArrayList();
        if (!bundle.containsKey("pw_buttons")) {
            try {
                String string = bundle.getString("pw_actions");
                if (string != null) {
                    JSONArray jSONArray = new JSONArray(string);
                    for (int i = 0; i < jSONArray.length(); i++) {
                        arrayList.add(new Action(jSONArray.getJSONObject(i)));
                    }
                }
            } catch (JSONException e) {
                PWLog.exception(e);
                return arrayList;
            }
        }
        return arrayList;
    }

    public static String getApplicationBundles(Bundle bundle) {
        return bundle.getString("packs");
    }

    public static int getBadges(Bundle bundle) {
        return a(-1, bundle, "pw_badges");
    }

    public static String getBigPicture(Bundle bundle) {
        return bundle.getString("b");
    }

    public static List<ActionButton> getButtons(Bundle bundle) {
        String string = bundle.getString("pw_buttons");
        if (string == null) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        HashSet hashSet = new HashSet();
        try {
            JSONArray jSONArray = new JSONArray(string);
            for (int i = 0; i < jSONArray.length() && arrayList.size() < 3; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject == null) {
                    PWLog.warn("PushBundleDataProvider", "action button #" + i + " is not an object, skipping it");
                } else {
                    ActionButton actionButtonA = ActionButton.a(jSONObjectOptJSONObject);
                    if (actionButtonA == null) {
                        PWLog.warn("PushBundleDataProvider", "action button #" + i + " is incomplete, skipping it");
                    } else if (hashSet.add(actionButtonA.getId())) {
                        arrayList.add(actionButtonA);
                    } else {
                        PWLog.warn("PushBundleDataProvider", "action button id " + actionButtonA.getId() + " is duplicated, skipping it");
                    }
                }
            }
            return Collections.unmodifiableList(arrayList);
        } catch (JSONException unused) {
            PWLog.warn("PushBundleDataProvider", "pw_buttons is not a valid JSON array, showing no action buttons");
            return Collections.EMPTY_LIST;
        }
    }

    public static String getCustomData(Bundle bundle) {
        return bundle.getString("u");
    }

    public static String getGroupId(Bundle bundle) {
        return bundle.getString("group_id", NotificationPrefs.DEFAULT_NOTIFICATION_GROUP);
    }

    public static String getHeader(Bundle bundle) {
        String str = (String) bundle.get("header");
        if (str != null) {
            return str;
        }
        CharSequence applicationLabel = AndroidPlatformModule.getAppInfoProvider().getApplicationLabel();
        if (applicationLabel == null) {
            applicationLabel = "";
        }
        return applicationLabel.toString();
    }

    public static Integer getIconBackgroundColor(Bundle bundle) {
        String string = bundle.getString("ibc");
        return string != null ? Integer.valueOf(Color.parseColor(string)) : Integer.valueOf(RepositoryModule.getNotificationPreferences().iconBackgroundColor().get());
    }

    public static String getInternalCommand(Bundle bundle) {
        return bundle.getString("pw_command");
    }

    public static String getLargeIcon(Bundle bundle) {
        return bundle.getString("ci");
    }

    public static Integer getLedColor(Bundle bundle) {
        String string = bundle.getString("led");
        if (string != null) {
            return Integer.valueOf(GeneralUtils.parseColor(string));
        }
        return null;
    }

    public static int getLedOffMs(Bundle bundle) {
        return a(1000, bundle, "led_off_ms");
    }

    public static int getLedOnMs(Bundle bundle) {
        return a(100, bundle, "led_on_ms");
    }

    public static String getLink(Bundle bundle) {
        return bundle.getString(CmcdData.STREAM_TYPE_LIVE);
    }

    public static String getMessage(Bundle bundle) {
        return bundle.getString("title");
    }

    public static String getMessageTag(Bundle bundle) {
        return bundle.getString("pw_msg_tag");
    }

    public static String getNotificationChannel(Bundle bundle) {
        return bundle.getString("pw_channel");
    }

    public static int getPriority(Bundle bundle) {
        int iA = a(0, bundle, "pri");
        if (Math.abs(iA) <= 2) {
            return iA;
        }
        PWLog.warn("Unsupported priority: " + iA + ", setting to default: 0");
        return 0;
    }

    public static String getPushHash(Bundle bundle) {
        return bundle.getString(TtmlNode.TAG_P);
    }

    public static String getPushMetadata(Bundle bundle) {
        return bundle.getString("md");
    }

    public static String getRichMedia(Bundle bundle) {
        return bundle.getString("rm");
    }

    public static long getSentTime(Bundle bundle) {
        return bundle.getLong(Constants.MessagePayloadKeys.SENT_TIME, System.currentTimeMillis());
    }

    public static int getSmallIcon(Bundle bundle) {
        return NotificationUtils.tryToGetIconFormStringOrGetFromApplication(bundle.getString(CmcdData.OBJECT_TYPE_INIT_SEGMENT));
    }

    public static String getSound(Bundle bundle) {
        return bundle.getString("s");
    }

    public static String getTappedButtonId(Bundle bundle) {
        return bundle.getString("tapped_button_id");
    }

    public static String getValue(Bundle bundle) {
        return bundle.getString("value");
    }

    public static boolean getVibration(Bundle bundle) {
        String string = bundle.getString("vib");
        return !TextUtils.isEmpty(string) && string.equals("1");
    }

    public static int getVisibility(Bundle bundle) {
        int i = f5281a;
        int iA = a(i, bundle, "visibility");
        if (Math.abs(iA) <= 1) {
            return iA;
        }
        PWLog.warn("Unsupported visibility: " + iA + ", setting to default: 1");
        return i;
    }

    public static boolean isBadgesAdditive(Bundle bundle) {
        String string = bundle.getString("pw_badges");
        return !TextUtils.isEmpty(string) && (string.charAt(0) == '-' || string.charAt(0) == '+');
    }

    public static boolean isLocal(Bundle bundle) {
        return bundle.getBoolean("local", false);
    }

    public static boolean isLockScreen(Bundle bundle) {
        return a(bundle, "pw_lockscreen");
    }

    public static boolean isSilent(Bundle bundle) {
        return a(bundle, NotificationCompat.GROUP_KEY_SILENT) || a(bundle, "pw_silent");
    }

    public static boolean isSystemPush(Bundle bundle) {
        return a(0, bundle, "pw_system_push") == 1;
    }

    public static boolean isUserPush(Bundle bundle) {
        return a(0, bundle, "pw_msg") == 1;
    }

    public static void setBanner(Bundle bundle, String str) {
        bundle.putString("b", str);
    }

    public static void setForeground(Bundle bundle, boolean z) {
        bundle.putBoolean("foreground", z);
        bundle.putBoolean("onStart", !z);
    }

    public static void setLargeIcon(Bundle bundle, String str) {
        bundle.putString("ci", str);
    }

    public static void setLink(Bundle bundle, String str) {
        bundle.putString(CmcdData.STREAM_TYPE_LIVE, str);
    }

    public static void setLocal(Bundle bundle, boolean z) {
        bundle.putString("pw_msg", "1");
        bundle.putBoolean("local", z);
    }

    public static void setMessage(Bundle bundle, String str) {
        bundle.putString("title", str);
    }

    public static void setSmallIcon(Bundle bundle, String str) {
        bundle.putString(CmcdData.OBJECT_TYPE_INIT_SEGMENT, str);
    }

    public static void setTag(Bundle bundle, String str) {
        bundle.putString("pw_msg_tag", str);
    }

    public static void setTappedButtonId(Bundle bundle, String str) {
        bundle.putString("tapped_button_id", str);
    }

    private static boolean a(Bundle bundle, String str) {
        String string = bundle.getString(str);
        if (TextUtils.equals(string, AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE)) {
            return true;
        }
        try {
            return Integer.parseInt(string) > 0;
        } catch (Exception unused) {
            return false;
        }
    }
}
