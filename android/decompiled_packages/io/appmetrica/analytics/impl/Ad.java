package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Ad {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f5596a;
    public final long b;

    public Ad(List list, long j) {
        this.f5596a = list;
        this.b = j;
    }

    public final String a() {
        JSONObject jSONObject;
        try {
            JSONObject jSONObject2 = new JSONObject();
            List<C2197id> list = this.f5596a;
            ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
            for (C2197id c2197id : list) {
                c2197id.getClass();
                try {
                    jSONObject = new JSONObject();
                    jSONObject.put("moduleName", c2197id.f6133a);
                    jSONObject.put("loaded", c2197id.b);
                } catch (Throwable unused) {
                    jSONObject = new JSONObject();
                }
                arrayList.add(jSONObject);
            }
            jSONObject2.put("modulesStatus", new JSONArray((Collection) arrayList));
            jSONObject2.put("lastSendTime", this.b);
            return jSONObject2.toString();
        } catch (Throwable unused2) {
            return "";
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Ad)) {
            return false;
        }
        Ad ad = (Ad) obj;
        return Intrinsics.areEqual(this.f5596a, ad.f5596a) && this.b == ad.b;
    }

    public final int hashCode() {
        return Long.hashCode(this.b) + (this.f5596a.hashCode() * 31);
    }

    public final String toString() {
        return "ModulesStatus(modulesStatus=" + this.f5596a + ", lastSendTime=" + this.b + ')';
    }
}
