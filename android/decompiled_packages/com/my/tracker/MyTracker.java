package com.my.tracker;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.text.TextUtils;
import com.my.tracker.ads.AdEvent;
import com.my.tracker.miniapps.MiniAppEvent;
import com.my.tracker.obfuscated.c1;
import com.my.tracker.obfuscated.c3;
import com.my.tracker.obfuscated.x2;
import com.my.tracker.obfuscated.y2;
import com.my.tracker.plugins.MyTrackerPluginConfig;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTracker {
    public static final String VERSION = "3.5.0";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final List f4891a = Collections.synchronizedList(new ArrayList());
    private static volatile c1 b;

    public interface AttributionListener {
        void onReceiveAttribution(MyTrackerAttribution myTrackerAttribution);
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final y2 f4892a;
        static final MyTrackerConfig b;

        static {
            y2 y2VarY = y2.y();
            f4892a = y2VarY;
            b = MyTrackerConfig.a(y2VarY);
        }
    }

    private static void a(int i, boolean z) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(i, z);
        }
    }

    public static void applyPlugin(MyTrackerPluginConfig myTrackerPluginConfig) {
        f4891a.add(myTrackerPluginConfig);
    }

    public static void flush() {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a();
        }
    }

    public static String getInstanceId(Context context) {
        return c3.a(context);
    }

    public static MyTrackerConfig getTrackerConfig() {
        return a.b;
    }

    public static MyTrackerParams getTrackerParams() {
        return a.f4892a.m();
    }

    public static String handleDeeplink(Intent intent) {
        c1 c1Var = b;
        if (c1Var != null) {
            return c1Var.a(intent);
        }
        x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        return null;
    }

    public static void incrementEventTimeSpent(int i) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(i);
        }
    }

    public static void initTracker(String str, Application application) {
        if (TextUtils.isEmpty(str)) {
            x2.b("MyTracker initialization failed: id can't be empty");
            return;
        }
        if (b != null) {
            x2.c("MyTracker has already been initialized");
            return;
        }
        synchronized (MyTracker.class) {
            if (b != null) {
                x2.c("MyTracker has already been initialized");
                return;
            }
            y2 y2Var = a.f4892a;
            ArrayList arrayList = new ArrayList(f4891a);
            c1 c1VarA = c1.a(str, y2Var, application);
            c1VarA.a(arrayList);
            b = c1VarA;
        }
    }

    public static boolean isDebugMode() {
        return x2.a();
    }

    public static void onActivityResult(int i, Intent intent) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(i, intent);
        }
    }

    public static void onPurchasesUpdated(int i, List<Object> list) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(i, list);
        }
    }

    public static void setAttributionListener(AttributionListener attributionListener) {
        setAttributionListener(attributionListener, null);
    }

    public static void setDebugMode(boolean z) {
        x2.a(z);
    }

    public static void startAnytimeTimeSpent(int i) {
        a(i, true);
    }

    public static void startForegroundTimeSpent(int i) {
        a(i, false);
    }

    public static void stopAnytimeTimeSpent(int i) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.b(i, true);
        }
    }

    public static void stopForegroundTimeSpent(int i) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.b(i, false);
        }
    }

    public static void trackAdEvent(AdEvent adEvent) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(adEvent);
        }
    }

    public static void trackAppGalleryPurchaseEvent(Object obj, String str, String str2, String str3, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(obj, str, str2, str3, map);
        }
    }

    public static void trackEvent(String str, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(str, map);
        }
    }

    public static void trackInviteEvent(Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(map);
        }
    }

    public static void trackLaunchManually(Activity activity) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(activity);
        }
    }

    public static void trackLevelEvent(Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.b(map);
        }
    }

    public static void trackLoginEvent(String str, String str2, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(str, str2, map);
        }
    }

    public static void trackMiniAppEvent(MiniAppEvent miniAppEvent) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(miniAppEvent);
        }
    }

    public static void trackPurchaseEvent(JSONObject jSONObject, JSONObject jSONObject2, String str, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(jSONObject, jSONObject2, str, map);
        }
    }

    public static void trackRegistrationEvent(String str, String str2, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.b(str, str2, map);
        }
    }

    public static void setAttributionListener(AttributionListener attributionListener, Handler handler) {
        a.f4892a.a(attributionListener, handler);
    }

    public static void trackEvent(String str) {
        trackEvent(str, null);
    }

    public static void trackInviteEvent() {
        trackInviteEvent(null);
    }

    public static void trackLevelEvent() {
        trackLevelEvent(null);
    }

    public static void trackLoginEvent(String str, String str2) {
        trackLoginEvent(str, str2, null);
    }

    public static void trackPurchaseEvent(JSONObject jSONObject, JSONObject jSONObject2, String str) {
        trackPurchaseEvent(jSONObject, jSONObject2, str, null);
    }

    public static void trackRegistrationEvent(String str, String str2) {
        trackRegistrationEvent(str, str2, null);
    }

    public static void trackLevelEvent(int i, Map<String, String> map) {
        c1 c1Var = b;
        if (c1Var == null) {
            x2.b("MyTracker hasn't been initialized yet. You should call MyTracker.initTracker() method first");
        } else {
            c1Var.a(i, map);
        }
    }
}
