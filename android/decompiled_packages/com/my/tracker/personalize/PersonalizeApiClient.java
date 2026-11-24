package com.my.tracker.personalize;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.text.TextUtils;
import com.my.tracker.MyTracker;
import com.my.tracker.MyTrackerConfig;
import com.my.tracker.obfuscated.m;
import com.my.tracker.obfuscated.s0;
import com.my.tracker.obfuscated.x2;
import com.my.tracker.obfuscated.y2;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class PersonalizeApiClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final a f5019a;

    public static final class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List f5020a;
        private Context b;

        public PersonalizeApiClient build() {
            y2 y2Var = MyTracker.a.f4892a;
            String strG = y2Var.g();
            if (TextUtils.isEmpty(strG)) {
                x2.a("Builder: MyTracker hasn't been initialized. Initialize it before using Personalize API");
                return null;
            }
            Context context = this.b;
            String instanceId = context != null ? MyTracker.getInstanceId(context) : null;
            List list = this.f5020a;
            return new PersonalizeApiClient(new a(strG, (list == null || instanceId == null || !list.contains(instanceId)) ? y2Var.l() : y2Var.k()));
        }

        public Builder withTestDevices(Context context, List<String> list) {
            this.f5020a = list;
            this.b = context;
            return this;
        }
    }

    public interface OnCompleteListener<T> {
        void onRequestComplete(PersonalizeApiClient personalizeApiClient, PersonalizeRequest<T> personalizeRequest, PersonalizeResponse<T> personalizeResponse);
    }

    PersonalizeApiClient(a aVar) {
        this.f5019a = aVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, PersonalizeRequest personalizeRequest, Handler handler, OnCompleteListener onCompleteListener) {
        a(personalizeRequest, s0.a((MyTrackerConfig.OkHttpClientProvider) null).a(str), handler, onCompleteListener);
    }

    public static Builder newBuilder() {
        return new Builder();
    }

    public <T> void sendRequest(final PersonalizeRequest<T> personalizeRequest, final Handler handler, final OnCompleteListener<T> onCompleteListener) {
        final String strA = a(personalizeRequest, this.f5019a);
        m.b(new Runnable() { // from class: com.my.tracker.personalize.PersonalizeApiClient$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(strA, personalizeRequest, handler, onCompleteListener);
            }
        });
    }

    private void a(final PersonalizeRequest personalizeRequest, Object obj, String str, Handler handler, final String str2, final OnCompleteListener onCompleteListener) {
        if (handler == null) {
            handler = m.f4967a;
        }
        if (!TextUtils.isEmpty(str2)) {
            x2.b("PersonalizeApiClient: " + str2);
            handler.post(new Runnable() { // from class: com.my.tracker.personalize.PersonalizeApiClient$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(onCompleteListener, personalizeRequest, str2);
                }
            });
            return;
        }
        final PersonalizeResponse personalizeResponse = new PersonalizeResponse(obj, null, str);
        handler.post(new Runnable() { // from class: com.my.tracker.personalize.PersonalizeApiClient$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(onCompleteListener, personalizeRequest, personalizeResponse);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(OnCompleteListener onCompleteListener, PersonalizeRequest personalizeRequest, String str) {
        onCompleteListener.onRequestComplete(this, personalizeRequest, new PersonalizeResponse(null, str, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(OnCompleteListener onCompleteListener, PersonalizeRequest personalizeRequest, PersonalizeResponse personalizeResponse) {
        onCompleteListener.onRequestComplete(this, personalizeRequest, personalizeResponse);
    }

    private void a(PersonalizeRequest personalizeRequest, s0.b bVar, Handler handler, OnCompleteListener onCompleteListener) {
        if (bVar == null) {
            x2.a("PersonalizeApiClient: MyTracker hasn't been initialized yet");
            a(personalizeRequest, null, null, handler, "MyTracker hasn't been initialized yet", onCompleteListener);
            return;
        }
        String str = (String) bVar.b();
        if (TextUtils.isEmpty(str)) {
            x2.a("PersonalizeApiClient: HTTP response is empty");
            a(personalizeRequest, null, null, handler, "HTTP response is empty", onCompleteListener);
            return;
        }
        try {
            c cVarA = personalizeRequest.c().a(new JSONObject(str));
            String strA = cVarA.a();
            if (strA != null) {
                a(personalizeRequest, null, null, handler, strA, onCompleteListener);
            } else {
                a(personalizeRequest, cVarA.b(), str, handler, null, onCompleteListener);
            }
        } catch (Throwable th) {
            String str2 = "Can't parse JSON with error: " + th.getMessage();
            x2.a("PersonalizeApiClient: " + str2);
            a(personalizeRequest, null, null, handler, str2, onCompleteListener);
        }
    }

    private String a(PersonalizeRequest personalizeRequest, a aVar) {
        String str = aVar.b + "/api/v1/recommendation" + personalizeRequest.a();
        Map mapB = personalizeRequest.b();
        mapB.remove("sdk_key");
        if (mapB.isEmpty()) {
            return str;
        }
        Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
        for (Map.Entry entry : mapB.entrySet()) {
            String str2 = (String) entry.getKey();
            Iterator it = ((List) entry.getValue()).iterator();
            while (it.hasNext()) {
                builderBuildUpon.appendQueryParameter(str2, (String) it.next());
            }
        }
        builderBuildUpon.appendQueryParameter("sdk_key", aVar.f5023a);
        return builderBuildUpon.toString();
    }
}
