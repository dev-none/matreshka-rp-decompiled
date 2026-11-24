package io.appmetrica.analytics.networktasks.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.network.internal.NetworkClient;
import io.appmetrica.analytics.network.internal.Request;
import io.appmetrica.analytics.network.internal.Response;
import io.appmetrica.analytics.networktasks.internal.ExponentialBackoffPolicy;
import io.appmetrica.analytics.networktasks.internal.NetworkTask;
import io.appmetrica.analytics.networktasks.internal.RequestDataHolder;
import io.appmetrica.analytics.networktasks.internal.ResponseDataHolder;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NetworkTask f6493a;
    public final InterruptionSafeThread b;
    public final f c;

    public h(NetworkTask networkTask, InterruptionSafeThread interruptionSafeThread, f fVar) {
        this.f6493a = networkTask;
        this.b = interruptionSafeThread;
        this.c = fVar;
    }

    /* JADX WARN: Code duplicated, block: B:58:0x01be  */
    @Override // java.lang.Runnable
    public final void run() {
        boolean zOnRequestComplete;
        byte[] postData;
        ExponentialBackoffPolicy exponentialBackoffPolicy = this.f6493a.getExponentialBackoffPolicy();
        boolean zCanBeExecuted = this.f6493a.getConnectionExecutionPolicy().canBeExecuted();
        boolean zCanBeExecuted2 = this.f6493a.getExponentialBackoffPolicy().canBeExecuted(this.f6493a.getRetryPolicyConfig());
        if (!this.b.isRunning() || !zCanBeExecuted || !zCanBeExecuted2) {
            this.f6493a.onShouldNotExecute();
            return;
        }
        boolean zOnCreateNetworkTask = this.f6493a.onCreateNetworkTask();
        Boolean boolValueOf = null;
        while (this.b.isRunning() && zOnCreateNetworkTask && exponentialBackoffPolicy.canBeExecuted(this.f6493a.getRetryPolicyConfig())) {
            f fVar = this.c;
            NetworkTask networkTask = this.f6493a;
            fVar.getClass();
            boolean z = true;
            if (networkTask.onPerformRequest()) {
                String url = networkTask.getUrl();
                if (url == null || TextUtils.isEmpty(StringsKt.trim((CharSequence) url).toString())) {
                    StringBuilder sb = new StringBuilder("Task ");
                    sb.append(networkTask.description());
                    sb.append(" url is `");
                    sb.append(url);
                    sb.append("`. All hosts = ");
                    List<String> allHosts = networkTask.getUnderlyingTask().getFullUrlFormer().getAllHosts();
                    sb.append(allHosts != null ? allHosts.toString() : null);
                    networkTask.onRequestError(new IllegalArgumentException(sb.toString()));
                } else {
                    Request.Builder builderAddHeader = new Request.Builder(url).addHeader("Accept", "application/json").addHeader("User-Agent", networkTask.getUserAgent());
                    RequestDataHolder requestDataHolder = networkTask.getRequestDataHolder();
                    Iterator<T> it = requestDataHolder.getHeaders().entrySet().iterator();
                    while (it.hasNext()) {
                        Map.Entry entry = (Map.Entry) it.next();
                        builderAddHeader.addHeader((String) entry.getKey(), CollectionsKt.joinToString$default((Iterable) entry.getValue(), StringUtils.COMMA, null, null, 0, null, null, 62, null));
                    }
                    if (NetworkTask.Method.POST == requestDataHolder.getMethod() && (postData = requestDataHolder.getPostData()) != null) {
                        if (!(postData.length == 0)) {
                            builderAddHeader.post(postData);
                            Long sendTimestamp = requestDataHolder.getSendTimestamp();
                            if (sendTimestamp != null) {
                                builderAddHeader.addHeader("Send-Timestamp", String.valueOf(TimeUnit.MILLISECONDS.toSeconds(sendTimestamp.longValue())));
                            }
                            Integer sendTimezoneSec = requestDataHolder.getSendTimezoneSec();
                            if (sendTimezoneSec != null) {
                                builderAddHeader.addHeader("Send-Timezone", String.valueOf(sendTimezoneSec.intValue()));
                            }
                        }
                    }
                    NetworkClient.Builder builder = new NetworkClient.Builder();
                    int i = b.f6490a;
                    Response responseExecute = builder.withConnectTimeout(i).withReadTimeout(i).withSslSocketFactory(networkTask.getSslSocketFactory()).build().newCall(builderAddHeader.build()).execute();
                    int code = responseExecute.getCode();
                    ResponseDataHolder responseDataHolder = networkTask.getResponseDataHolder();
                    responseDataHolder.setResponseCode(code);
                    responseDataHolder.setResponseHeaders(CollectionUtils.convertMapKeysToLowerCase(responseExecute.getHeaders()));
                    if (responseDataHolder.isValidResponse()) {
                        responseDataHolder.setResponseData(responseExecute.getResponseData());
                    }
                    if (responseExecute.isCompleted()) {
                        zOnRequestComplete = networkTask.onRequestComplete();
                    } else {
                        networkTask.onRequestError(responseExecute.getException());
                    }
                    boolValueOf = Boolean.valueOf(zOnRequestComplete);
                    boolValueOf.getClass();
                    if (zOnRequestComplete || !this.f6493a.shouldTryNextHost()) {
                        z = false;
                    }
                    boolValueOf.getClass();
                    exponentialBackoffPolicy.onHostAttemptFinished(zOnRequestComplete);
                    zOnCreateNetworkTask = z;
                }
            } else {
                networkTask.onRequestError(null);
            }
            zOnRequestComplete = false;
            boolValueOf = Boolean.valueOf(zOnRequestComplete);
            boolValueOf.getClass();
            if (zOnRequestComplete) {
                z = false;
            } else {
                z = false;
            }
            boolValueOf.getClass();
            exponentialBackoffPolicy.onHostAttemptFinished(zOnRequestComplete);
            zOnCreateNetworkTask = z;
        }
        exponentialBackoffPolicy.onAllHostsAttemptsFinished(Intrinsics.areEqual(boolValueOf, Boolean.TRUE));
    }
}
