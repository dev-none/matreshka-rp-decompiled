package com.pushwoosh.m0;

import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.e0.a f5256a = new com.pushwoosh.e0.a(this);

    public final void a(final LinkedList linkedList) {
        JSONObject jSONObject = new JSONObject();
        Iterator it = linkedList.iterator();
        while (it.hasNext()) {
            JsonUtils.mergeJson(((s) it.next()).f5255a, jSONObject);
        }
        NetworkModule.getRequestManager().sendRequest(new w(jSONObject), new Callback() { // from class: com.pushwoosh.m0.t$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(linkedList, result);
            }
        });
    }

    public final void a(List list, Result result) {
        if (result.isSuccess()) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                Callback callback = ((s) it.next()).b;
                if (callback != null) {
                    callback.process(Result.fromData(null));
                }
            }
            PWLog.info("Tags successfully sent to Pushwoosh");
            return;
        }
        NetworkException networkException = (NetworkException) result.getException();
        Iterator it2 = list.iterator();
        while (it2.hasNext()) {
            Callback callback2 = ((s) it2.next()).b;
            if (callback2 != null) {
                callback2.process(Result.fromException(networkException));
            }
        }
    }
}
