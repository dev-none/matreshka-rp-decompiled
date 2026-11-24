package io.appmetrica.analytics.billing.impl;

import io.appmetrica.analytics.billing.internal.config.BillingConfig;
import io.appmetrica.analytics.billing.internal.config.RemoteBillingConfig;
import io.appmetrica.analytics.coreapi.internal.data.JsonParser;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class q implements JsonParser {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final g f5418a;
    public final f b;

    /* JADX WARN: Multi-variable type inference failed */
    public q() {
        this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Parser
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final RemoteBillingConfig parse(JSONObject jSONObject) {
        s sVar;
        g gVar = this.f5418a;
        this.b.getClass();
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("auto_inapp_collecting");
        if (jSONObjectOptJSONObject == null) {
            sVar = new s();
        } else {
            s sVar2 = new s();
            Integer numOptIntOrNull = JsonUtils.optIntOrNull(jSONObjectOptJSONObject, "send_frequency_seconds");
            if (numOptIntOrNull != null) {
                sVar2.f5420a = numOptIntOrNull.intValue();
            }
            Integer numOptIntOrNull2 = JsonUtils.optIntOrNull(jSONObjectOptJSONObject, "first_collecting_inapp_max_age_seconds");
            if (numOptIntOrNull2 != null) {
                sVar2.b = numOptIntOrNull2.intValue();
            }
            sVar = sVar2;
        }
        gVar.getClass();
        return new RemoteBillingConfig(true, new BillingConfig(sVar.f5420a, sVar.b));
    }

    public final RemoteBillingConfig b(JSONObject jSONObject) {
        return (RemoteBillingConfig) JsonParser.DefaultImpls.parseOrNull(this, jSONObject);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Parser
    public final Object parseOrNull(JSONObject jSONObject) {
        return (RemoteBillingConfig) JsonParser.DefaultImpls.parseOrNull(this, jSONObject);
    }

    public q(g gVar, f fVar) {
        this.f5418a = gVar;
        this.b = fVar;
    }

    public /* synthetic */ q(g gVar, f fVar, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new g() : gVar, (i & 2) != 0 ? new f() : fVar);
    }
}
