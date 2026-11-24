package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import java.util.Iterator;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class c0 {
    public static b0 a(String uuid, String jsonString) throws JSONException {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
        JSONObject jSONObject = new JSONObject(jsonString);
        String string = jSONObject.getString("name");
        Intrinsics.checkNotNullExpressionValue(string, "jsonObject.getString(NAME_KEY)");
        JSONObject jSONObject2 = jSONObject.getJSONObject("data");
        Intrinsics.checkNotNullExpressionValue(jSONObject2, "jsonObject.getJSONObject(DATA_KEY)");
        Intrinsics.checkNotNullParameter(jSONObject2, "<this>");
        ArrayList arrayList = new ArrayList();
        Iterator<String> itKeys = jSONObject2.keys();
        Intrinsics.checkNotNullExpressionValue(itKeys, "keys()");
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            arrayList.add(TuplesKt.to(next, jSONObject2.get(next).toString()));
        }
        return new b0(uuid, string, MapsKt.toMap(arrayList));
    }
}
