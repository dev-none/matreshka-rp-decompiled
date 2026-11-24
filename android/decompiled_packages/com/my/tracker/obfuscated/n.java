package com.my.tracker.obfuscated;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.text.TextUtils;
import com.adjust.sdk.Constants;
import com.my.tracker.MyTracker;
import com.my.tracker.MyTrackerAttribution;
import java.net.URLDecoder;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final AtomicBoolean f4975a = new AtomicBoolean(false);
    final y2 b;
    final Context c;

    n(y2 y2Var, Context context) {
        this.b = y2Var;
        this.c = context.getApplicationContext();
    }

    public static n a(y2 y2Var, Context context) {
        return new n(y2Var, context);
    }

    public void b(String str) {
        if (a()) {
            x2.a("AttributionHandler: attribution has already been received");
            return;
        }
        try {
            JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject("attribution");
            if (jSONObjectOptJSONObject == null) {
                x2.a("AttributionHandler: empty attribution object has been returned");
                return;
            }
            if (!jSONObjectOptJSONObject.has("error")) {
                a(jSONObjectOptJSONObject);
                return;
            }
            x2.a("AttributionHandler: attribution response returned error " + jSONObjectOptJSONObject.optInt("error"));
        } catch (Throwable th) {
            x2.b("AttributionHandler error: handling server attribution failed with error: ", th);
        }
    }

    public void a(String str) {
        if (TextUtils.isEmpty(str)) {
            x2.a("AttributionHandler: referrer is empty");
            return;
        }
        if (a()) {
            x2.a("AttributionHandler: attribution has already been received");
            return;
        }
        try {
            String queryParameter = Uri.parse("https://my.com/?" + URLDecoder.decode(str, "UTF-8")).getQueryParameter("mt_deeplink");
            if (TextUtils.isEmpty(queryParameter)) {
                x2.a("AttributionHandler: deeplink is empty");
            } else {
                a(new JSONObject().put(Constants.DEEPLINK, queryParameter));
            }
        } catch (Throwable th) {
            x2.b("AttributionHandler error: handling referrer failed with error: ", th);
        }
    }

    boolean a() {
        if (this.f4975a.get()) {
            return true;
        }
        return !TextUtils.isEmpty(p1.a(this.c).h());
    }

    void a(JSONObject jSONObject) {
        String strOptString = jSONObject.optString(Constants.DEEPLINK);
        if (TextUtils.isEmpty(strOptString)) {
            x2.a("AttributionHandler: deeplink is empty");
            return;
        }
        if (!this.f4975a.compareAndSet(false, true)) {
            x2.a("AttributionHandler: attribution has already been received");
            return;
        }
        p1 p1VarA = p1.a(this.c);
        if (!TextUtils.isEmpty(p1VarA.h())) {
            x2.a("AttributionHandler: attribution has already been received");
            return;
        }
        p1VarA.i(jSONObject.toString());
        final MyTracker.AttributionListener attributionListenerD = this.b.d();
        if (attributionListenerD == null) {
            return;
        }
        Handler handlerC = this.b.c();
        if (handlerC == null) {
            handlerC = m.f4967a;
        }
        final MyTrackerAttribution myTrackerAttributionNewAttribution = MyTrackerAttribution.newAttribution(strOptString);
        try {
            handlerC.post(new Runnable() { // from class: com.my.tracker.obfuscated.n$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    n.a(attributionListenerD, myTrackerAttributionNewAttribution);
                }
            });
        } catch (Throwable th) {
            x2.b("AttributionHandler error: exception occurred while post runnable", th);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(MyTracker.AttributionListener attributionListener, MyTrackerAttribution myTrackerAttribution) {
        try {
            attributionListener.onReceiveAttribution(myTrackerAttribution);
        } catch (Throwable unused) {
            x2.b("AttributionHandler error: exception at AttributionListener::onReceiveAttribution()");
        }
    }
}
