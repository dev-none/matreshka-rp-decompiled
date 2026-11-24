package io.appmetrica.analytics.idsync.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.idsync.internal.model.Preconditions;
import io.appmetrica.analytics.idsync.internal.model.RequestConfig;
import io.appmetrica.analytics.modulesapi.internal.common.ModuleSelfReporter;
import io.appmetrica.analytics.modulesapi.internal.service.ServiceContext;
import io.appmetrica.analytics.network.internal.NetworkClient;
import io.appmetrica.analytics.network.internal.Request;
import io.appmetrica.analytics.network.internal.Response;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ServiceContext f5572a;
    public final B b;
    public final SystemTimeProvider c = new SystemTimeProvider();
    public final q d;
    public final s e;
    public final i f;

    public p(ServiceContext serviceContext, B b) {
        this.f5572a = serviceContext;
        this.b = b;
        this.d = new q(serviceContext.getNetworkContext().getSslSocketFactoryProvider(), this);
        this.e = new s(serviceContext);
        this.f = new i(serviceContext);
    }

    public static final void a(y yVar, p pVar) {
        if (yVar.b) {
            B b = pVar.b;
            String str = yVar.f5578a;
            b.d.put(str, new z(str, pVar.c.currentTimeMillis(), yVar.d ? 2 : 4));
            b.f5558a.putString(b.c, b.b.fromModel(CollectionsKt.toList(b.d.values())));
            i iVar = pVar.f;
            ModuleSelfReporter selfReporter = iVar.f5566a.getSelfReporter();
            iVar.b.getClass();
            selfReporter.reportEvent("id_sync", j.a(yVar));
        }
    }

    public static final void a(p pVar, RequestConfig requestConfig) {
        t c1974a;
        s sVar = pVar.e;
        Preconditions preconditions = requestConfig.getPreconditions();
        sVar.getClass();
        if (r.f5574a[preconditions.getNetworkType().ordinal()] == 1) {
            c1974a = new C1975b(sVar.f5575a);
        } else {
            c1974a = new C1974a();
        }
        if (c1974a.a()) {
            q qVar = pVar.d;
            qVar.getClass();
            Request.Builder builder = new Request.Builder(requestConfig.getUrl());
            for (Map.Entry<String, List<String>> entry : requestConfig.getHeaders().entrySet()) {
                builder.addHeader(entry.getKey(), CollectionsKt.joinToString$default(entry.getValue(), ", ", null, null, 0, null, null, 62, null));
            }
            Response responseExecute = new NetworkClient.Builder().withSslSocketFactory(qVar.f5573a.getSslSocketFactory()).withUseCaches(false).withInstanceFollowRedirects(true).withMaxResponseSize(102400).build().newCall(builder.build()).execute();
            qVar.b.a(new y(requestConfig.getType(), responseExecute.isCompleted(), responseExecute.getUrl(), requestConfig.getValidResponseCodes().contains(Integer.valueOf(responseExecute.getCode())), responseExecute.getCode(), !(responseExecute.getResponseData().length == 0) ? responseExecute.getResponseData() : responseExecute.getErrorData(), responseExecute.getHeaders()));
        }
    }

    public final void a(final y yVar) {
        this.f5572a.getExecutorProvider().getModuleExecutor().execute(new Runnable() { // from class: io.appmetrica.analytics.idsync.impl.p$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                p.a(yVar, this);
            }
        });
    }

    public final void a(final RequestConfig requestConfig) {
        long resendIntervalForValidResponse;
        if (TextUtils.isEmpty(requestConfig.getType()) || TextUtils.isEmpty(requestConfig.getUrl()) || requestConfig.getValidResponseCodes().isEmpty()) {
            return;
        }
        z zVar = (z) this.b.d.get(requestConfig.getType());
        if (zVar != null) {
            long jCurrentTimeMillis = this.c.currentTimeMillis();
            int iA = v.a(zVar.c);
            if (iA != 1) {
                resendIntervalForValidResponse = iA != 3 ? 0L : requestConfig.getResendIntervalForInvalidResponse();
            } else {
                resendIntervalForValidResponse = requestConfig.getResendIntervalForValidResponse();
            }
            if (jCurrentTimeMillis - zVar.b < resendIntervalForValidResponse) {
                return;
            }
        }
        this.f5572a.getExecutorProvider().getSupportIOExecutor().execute(new Runnable() { // from class: io.appmetrica.analytics.idsync.impl.p$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                p.a(this.f$0, requestConfig);
            }
        });
    }
}
