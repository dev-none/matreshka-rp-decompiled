package ru.rustore.sdk.metrics.internal;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class z {
    public static String a(MetricsEvent model) throws JSONException {
        Intrinsics.checkNotNullParameter(model, "model");
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("name", model.getEventName());
        JSONObject jSONObject2 = new JSONObject();
        for (Map.Entry<String, String> entry : model.getEventData().entrySet()) {
            jSONObject2.put(entry.getKey(), entry.getValue());
        }
        jSONObject.put("data", jSONObject2);
        jSONObject.put("time", model.getEventTime());
        String string = jSONObject.toString(0);
        Intrinsics.checkNotNullExpressionValue(string, "jsonObject.toString(0)");
        return string;
    }
}
