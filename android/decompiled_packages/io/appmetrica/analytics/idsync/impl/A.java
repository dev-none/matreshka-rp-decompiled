package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class A implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5557a = "request_state";
    public final String b = "type";
    public final String c = "last_attempt";
    public final String d = "prev_attempt_result";

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.util.Collection] */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.util.ArrayList] */
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final String fromModel(List<z> list) throws JSONException {
        ?? EmptyList;
        JSONObject jSONObject;
        JSONObject jSONObject2 = new JSONObject();
        String str = this.f5557a;
        if (list != null) {
            EmptyList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
            for (z zVar : list) {
                try {
                    jSONObject = new JSONObject();
                    jSONObject.put(this.b, zVar.f5579a);
                    jSONObject.put(this.c, zVar.b);
                    jSONObject.put(this.d, u.a(zVar.c));
                } catch (Throwable unused) {
                    jSONObject = new JSONObject();
                }
                EmptyList.add(jSONObject);
            }
        } else {
            EmptyList = CollectionsKt.emptyList();
        }
        jSONObject2.put(str, new JSONArray((Collection) EmptyList));
        return jSONObject2.toString();
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<z> toModel(String str) {
        JSONArray jSONArrayOptJSONArray;
        z zVar;
        int i;
        try {
            ArrayList arrayList = new ArrayList();
            if (str == null || (jSONArrayOptJSONArray = new JSONObject(str).optJSONArray(this.f5557a)) == null) {
                return arrayList;
            }
            int length = jSONArrayOptJSONArray.length();
            for (int i2 = 0; i2 < length; i2++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i2);
                if (jSONObjectOptJSONObject != null) {
                    try {
                        String string = jSONObjectOptJSONObject.getString(this.b);
                        long j = jSONObjectOptJSONObject.getLong(this.c);
                        String string2 = jSONObjectOptJSONObject.getString(this.d);
                        int[] iArrB = v.b(4);
                        int length2 = iArrB.length;
                        int i3 = 0;
                        while (true) {
                            if (i3 >= length2) {
                                i = 0;
                                break;
                            }
                            i = iArrB[i3];
                            if (Intrinsics.areEqual(u.a(i), string2)) {
                                break;
                            }
                            i3++;
                        }
                        if (i == 0) {
                            i = 1;
                        }
                        zVar = new z(string, j, i);
                    } catch (Throwable unused) {
                        zVar = null;
                    }
                    if (zVar != null) {
                        arrayList.add(zVar);
                    } else {
                        continue;
                    }
                }
            }
            return arrayList;
        } catch (Throwable unused2) {
            return CollectionsKt.emptyList();
        }
    }
}
