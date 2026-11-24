package com.pushwoosh.v;

import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.internal.network.RequestManager;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class e implements RequestManager {
    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(PushRequest pushRequest, Callback callback) {
        sendRequest(pushRequest, null, callback);
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final Result sendRequestSync(PushRequest pushRequest) {
        PWLog.error("NotInitializedRequestManager", "SDK is not initialized, request dropped: " + pushRequest.getMethod());
        return Result.fromException(new NetworkException("SDK is not initialized"));
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final boolean setReverseProxyUrl(String str, Map map) {
        PWLog.error("NotInitializedRequestManager", "SDK is not initialized, reverse proxy not set");
        return false;
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final boolean updateBaseUrl(String str) {
        PWLog.warn("NotInitializedRequestManager", "SDK is not initialized, base url not updated");
        return false;
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(PushRequest pushRequest) {
        sendRequestSync(pushRequest);
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(PushRequest pushRequest, String str, Callback callback) {
        Result resultSendRequestSync = sendRequestSync(pushRequest);
        if (callback == null) {
            return;
        }
        try {
            callback.process(resultSendRequestSync);
        } catch (Exception e) {
            PWLog.error("NotInitializedRequestManager", "Error processing callback", e);
        }
    }
}
