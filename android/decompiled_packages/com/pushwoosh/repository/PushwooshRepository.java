package com.pushwoosh.repository;

import android.os.Bundle;
import android.text.TextUtils;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.pushwoosh.e.b;
import com.pushwoosh.exception.GetTagsException;
import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.g0.e;
import com.pushwoosh.internal.event.DeviceDataRemovedEvent;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.RequestManager;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.j.d;
import com.pushwoosh.m0.c;
import com.pushwoosh.m0.h;
import com.pushwoosh.m0.n;
import com.pushwoosh.m0.q;
import com.pushwoosh.m0.s;
import com.pushwoosh.m0.t;
import com.pushwoosh.m0.u;
import com.pushwoosh.m0.v;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.tags.Tags;
import com.pushwoosh.tags.TagsBundle;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicReference;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshRepository {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final RequestManager f5307a;
    private final t b;
    private final RegistrationPrefs c;
    private final NotificationPrefs d;
    private String e;
    private String f;
    private String g;

    public PushwooshRepository(RequestManager requestManager, t tVar, RegistrationPrefs registrationPrefs, NotificationPrefs notificationPrefs) {
        this.f5307a = requestManager;
        this.b = tVar;
        this.c = registrationPrefs;
        this.d = notificationPrefs;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(c cVar, Result result) {
        RegistrationPrefs registrationPreferences;
        if (result.isSuccess()) {
            String str = cVar.f5245a;
            AtomicReference atomicReference = e.f5085a;
            if (str == null || (registrationPreferences = RepositoryModule.getRegistrationPreferences()) == null) {
                return;
            }
            registrationPreferences.pushPermissionLastSent().set(str);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(Callback callback, Result result) {
        if (result.isSuccess()) {
            Result resultFromData = Result.fromData((Void) result.getData());
            if (callback != null) {
                callback.process(resultFromData);
                return;
            }
            return;
        }
        Result resultFromException = Result.fromException(result.getException());
        if (callback != null) {
            callback.process(resultFromException);
        }
    }

    public void communicationEnabled(boolean z) {
        this.c.communicationEnable().set(z);
    }

    public String getCurrentInAppCode() {
        return this.g;
    }

    public String getCurrentRichMediaCode() {
        return this.f;
    }

    public String getCurrentSessionHash() {
        return this.e;
    }

    public String getHwid() {
        return this.c.hwid().get();
    }

    public List<PushMessage> getPushHistory() {
        List<String> list = this.d.pushHistory().get();
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            Bundle bundle = new Bundle();
            try {
                JSONObject jSONObject = new JSONObject(str);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    if (jSONObject.get(next) instanceof String) {
                        bundle.putString(next, jSONObject.getString(next));
                    }
                }
                arrayList.add(new PushMessage(bundle));
            } catch (Exception e) {
                PWLog.exception(e);
            }
        }
        return arrayList;
    }

    public void getTags(final Callback<TagsBundle, GetTagsException> callback) {
        this.f5307a.sendRequest(new h(), new Callback() { // from class: com.pushwoosh.repository.PushwooshRepository$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(callback, result);
            }
        });
    }

    public boolean isCommunicationEnabled() {
        return this.c.communicationEnable().get();
    }

    public boolean isDeviceDataRemoved() {
        return this.c.removeAllDeviceData().get();
    }

    public void prefetchTags() {
        Result resultSendRequestSync = this.f5307a.sendRequestSync(new h());
        if (!resultSendRequestSync.isSuccess() || resultSendRequestSync.getData() == null) {
            return;
        }
        JSONObject json = ((TagsBundle) resultSendRequestSync.getData()).toJson();
        if (json.length() > 0) {
            this.d.tags().set(json);
        }
    }

    public void removeAllDeviceData() {
        this.d.tags().set(null);
        this.c.advertisingId().set("");
        this.c.removeAllDeviceData().set(true);
        EventBus.sendEvent(new DeviceDataRemovedEvent());
    }

    public void sendAdvertisingId(String str, Callback<Void, NetworkException> callback) {
        this.f5307a.sendRequest(new u(str), this.c.getTrackingUrl(), callback);
    }

    public void sendAppOpen() {
        PWLog.noise("PushwooshRepository", "sendAppOpen()");
        final c cVar = new c();
        this.f5307a.sendRequest(cVar, new Callback() { // from class: com.pushwoosh.repository.PushwooshRepository$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                PushwooshRepository.a(cVar, result);
            }
        });
    }

    public void sendEmailTags(TagsBundle tagsBundle, String str, final Callback<Void, PushwooshException> callback) {
        this.f5307a.sendRequest(new v(str, tagsBundle.toJson()), new Callback() { // from class: com.pushwoosh.repository.PushwooshRepository$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.b(callback, result);
            }
        });
    }

    public void sendInappPurchase(String str, BigDecimal bigDecimal, String str2, Date date) {
        d dVarA = b.a();
        if (dVarA == null) {
            return;
        }
        dVarA.a("PW_InAppPurchase", new TagsBundle.Builder().putString("productIdentifier", str).putInt("quantity", 1).putString("amount", bigDecimal.toPlainString()).putDate("transactionDate", date).putString("currency", str2).putString("status", FirebaseAnalytics.Param.SUCCESS).build(), new Callback() { // from class: com.pushwoosh.repository.PushwooshRepository$$ExternalSyntheticLambda3
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                PushwooshRepository.a(result);
            }
        });
    }

    @Deprecated
    public void sendPushDelivered(String str, String str2) {
        PWLog.info("PushwooshRepository", "Sending MessageDeliveredRequest, hash: " + str);
        this.f5307a.sendRequest(new n(str, str2));
    }

    public Result<Void, NetworkException> sendPushDeliveredSync(String str, String str2) {
        PWLog.info("PushwooshRepository", "Sending MessageDeliveredRequest sync, hash: " + str);
        try {
            return this.f5307a.sendRequestSync(new n(str, str2));
        } catch (Exception e) {
            PWLog.error("PushwooshRepository", "Message delivered exception for hash: " + str, e);
            return Result.fromException(new NetworkException(e.getMessage()));
        }
    }

    @Deprecated
    public void sendPushOpened(String str, String str2) {
        PWLog.info("PushwooshRepository", "Sending PushStatRequest, hash: " + str);
        if (str == null || !TextUtils.equals(str, this.d.lastNotificationHash().get())) {
            this.d.lastNotificationHash().set(str);
            this.f5307a.sendRequest(new q(str, str2));
        } else {
            PWLog.warn("PushwooshRepository", "Push stat for (" + str + ") already sent");
        }
    }

    public Result<Void, NetworkException> sendPushOpenedSync(String str, String str2) {
        return sendPushOpenedSync(str, str2, null);
    }

    public void sendTags(TagsBundle tagsBundle, Callback<Void, PushwooshException> callback) {
        PWLog.noise("PushwooshRepository", "sendTags()");
        JSONObject json = tagsBundle.toJson();
        try {
            this.d.tags().merge(json);
        } catch (Exception e) {
            PWLog.error("PushwooshRepository", "Failed to cache tags", e);
        }
        this.b.f5256a.a(new s(json, callback));
    }

    public void setCurrentInAppCode(String str) {
        this.g = str;
    }

    public void setCurrentRichMediaCode(String str) {
        this.f = str;
    }

    public void setCurrentSessionHash(String str) {
        this.e = str;
    }

    public Result<Void, NetworkException> sendPushOpenedSync(String str, String str2, String str3) {
        PWLog.info("PushwooshRepository", "Sending PushStatRequest sync, hash: " + str + ", buttonId: " + str3);
        if (TextUtils.isEmpty(str3) && str != null && TextUtils.equals(str, this.d.lastNotificationHash().get())) {
            PWLog.warn("PushwooshRepository", "Push stat for (" + str + ") already sent");
            return Result.fromData(null);
        }
        try {
            Result<Void, NetworkException> resultSendRequestSync = this.f5307a.sendRequestSync(new q(str, str2, str3));
            if (resultSendRequestSync.isSuccess() && str != null) {
                this.d.lastNotificationHash().set(str);
            }
            return resultSendRequestSync;
        } catch (Exception e) {
            PWLog.error("PushwooshRepository", "Push stat exception for hash: " + str, e);
            return Result.fromException(new NetworkException(e.getMessage()));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Callback callback, Result result) {
        String message;
        if (callback != null) {
            if (result.isSuccess()) {
                TagsBundle tagsBundleEmpty = result.getData() == null ? Tags.empty() : (TagsBundle) result.getData();
                this.d.tags().set(tagsBundleEmpty.toJson());
                callback.process(Result.fromData(tagsBundleEmpty));
                return;
            }
            JSONObject jSONObject = this.d.tags().get();
            if (jSONObject != null) {
                callback.process(Result.fromData(Tags.fromJson(jSONObject)));
                return;
            }
            if (result.getException() == null) {
                message = "";
            } else {
                message = ((NetworkException) result.getException()).getMessage();
            }
            callback.process(Result.fromException(new GetTagsException(message)));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Result result) {
        if (result.isSuccess()) {
            PWLog.noise("PushwooshRepository", "In-app purchase data sent successfully");
        } else if (result.getException() != null) {
            PWLog.error("PushwooshRepository", "Failed to send in-app purchase data", result.getException());
        }
    }
}
