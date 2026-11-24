package com.pushwoosh.internal.network;

import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public interface RequestManager {
    <Response> void sendRequest(PushRequest<Response> pushRequest);

    <Response> void sendRequest(PushRequest<Response> pushRequest, Callback<Response, NetworkException> callback);

    <Response> void sendRequest(PushRequest<Response> pushRequest, String str, Callback<Response, NetworkException> callback);

    <Response> Result<Response, NetworkException> sendRequestSync(PushRequest<Response> pushRequest);

    boolean setReverseProxyUrl(String str, Map<String, String> map);

    boolean updateBaseUrl(String str);
}
