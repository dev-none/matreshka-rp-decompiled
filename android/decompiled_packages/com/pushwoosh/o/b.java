package com.pushwoosh.o;

import android.webkit.JavascriptInterface;
import android.webkit.WebView;
import androidx.core.app.NotificationCompat;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.exception.PostEventException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.n.m;
import com.pushwoosh.tags.Tags;
import com.pushwoosh.tags.TagsBundle;
import java.lang.ref.WeakReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakReference f5297a;
    public final a b;

    public b(WebView webView, a aVar) {
        this.f5297a = new WeakReference(webView);
        this.b = aVar;
    }

    public final /* synthetic */ void a(String str, String str2, Result result) {
        WebView webView;
        if (str == null || (webView = (WebView) this.f5297a.get()) == null) {
            return;
        }
        if (result.isSuccess()) {
            webView.loadUrl("javascript:" + str + "();");
            return;
        }
        webView.loadUrl("javascript:" + str2 + "('" + ((PostEventException) result.getException()).getMessage() + "');");
    }

    @JavascriptInterface
    public void closeInApp() {
        ((m) this.b).a();
    }

    @JavascriptInterface
    public void log(String str) {
        PWLog.debug("[InApp]PushManagerJSInterface", str);
    }

    @JavascriptInterface
    public void postEvent(String str) {
        final String string;
        try {
            JSONObject jSONObject = new JSONObject(str);
            String string2 = jSONObject.getString(NotificationCompat.CATEGORY_EVENT);
            JSONObject jSONObject2 = jSONObject.getJSONObject("attributes");
            final String string3 = null;
            try {
                string = jSONObject.getString(FirebaseAnalytics.Param.SUCCESS);
            } catch (JSONException unused) {
                string = null;
            }
            try {
                string3 = jSONObject.getString("error");
            } catch (JSONException unused2) {
            }
            PushwooshPlatform.getInstance().pushwooshInApp().postEvent(string2, Tags.fromJson(jSONObject2), new Callback() { // from class: com.pushwoosh.o.b$$ExternalSyntheticLambda0
                @Override // com.pushwoosh.function.Callback
                public final void process(Result result) {
                    this.f$0.a(string, string3, result);
                }
            });
        } catch (JSONException e) {
            PWLog.error("Invalid arguments", e);
        }
    }

    @JavascriptInterface
    public void registerForPushNotifications() {
        if (PushwooshPlatform.getInstance() != null) {
            PushwooshPlatform.getInstance().notificationManager().a(null, true, null);
        }
    }

    @JavascriptInterface
    public void sendTags(String str) {
        try {
            Pushwoosh.getInstance().setTags(new TagsBundle.Builder().putAll(new JSONObject(str)).build());
        } catch (JSONException e) {
            PWLog.error("Invalid tags format, expected object with string properties", e);
        }
    }
}
