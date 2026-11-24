package com.pushwoosh.inapp.network.model;

import android.net.Uri;
import com.pushwoosh.inapp.view.config.ModalRichmediaConfig;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.l.a;
import com.pushwoosh.l.b;
import java.io.Serializable;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class Resource implements Serializable, Comparable<Resource> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5102a;
    private final String b;
    private final String c;
    private final long d;
    private final a e;
    private final boolean f;
    private final int g;
    private ModalRichmediaConfig h;
    private Map i;

    public Resource(JSONObject jSONObject) throws JSONException {
        this(jSONObject.getString("code"), jSONObject.getString("url"), jSONObject.optString("hash", ""), jSONObject.getLong("updated"), a.d, Collections.EMPTY_MAP, jSONObject.optBoolean("required", false), jSONObject.optInt("priority", 0));
    }

    public static Resource parseRichMedia(String str) throws com.pushwoosh.g.a {
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("hash");
            boolean zOptBoolean = jSONObject.optBoolean("required", false);
            int iOptInt = jSONObject.optInt("priority", 0);
            long j = jSONObject.getLong("ts");
            String string = jSONObject.getString("url");
            String strA = b.a(string, Uri.parse(string).getLastPathSegment());
            JSONObject jSONObject2 = new JSONObject("{}");
            if (jSONObject.has("tags")) {
                jSONObject2 = jSONObject.getJSONObject("tags");
            }
            return new Resource(strA, string, strOptString, j, a.d, JsonUtils.jsonToMap(jSONObject2), zOptBoolean, iOptInt);
        } catch (Exception e) {
            throw new com.pushwoosh.g.a("Can't parse richMedia", e);
        }
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            Resource resource = (Resource) obj;
            if (this.d != resource.d || this.f != resource.f || this.g != resource.g) {
                return false;
            }
            String str = this.f5102a;
            if (str == null ? resource.f5102a != null : !str.equals(resource.f5102a)) {
                return false;
            }
            String str2 = this.b;
            if (str2 == null ? resource.b != null : !str2.equals(resource.b)) {
                return false;
            }
            if (this.e == resource.e) {
                return true;
            }
        }
        return false;
    }

    public String getCode() {
        return this.f5102a;
    }

    public String getHash() {
        return this.c;
    }

    public a getLayout() {
        return this.e;
    }

    public int getPriority() {
        return this.g;
    }

    public ModalRichmediaConfig getResourceModalConfig() {
        return this.h;
    }

    public Map<String, String> getTags() {
        return new HashMap(this.i);
    }

    public long getUpdated() {
        return this.d;
    }

    public String getUrl() {
        return this.b;
    }

    public boolean hasResourceModalConfig() {
        return this.h != null;
    }

    public int hashCode() {
        String str = this.f5102a;
        int iHashCode = (str != null ? str.hashCode() : 0) * 31;
        String str2 = this.b;
        int iHashCode2 = (iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        long j = this.d;
        int i = (iHashCode2 + ((int) (j ^ (j >>> 32)))) * 31;
        a aVar = this.e;
        return ((((i + (aVar != null ? aVar.hashCode() : 0)) * 31) + (this.f ? 1 : 0)) * 31) + this.g;
    }

    public boolean isInApp() {
        return this.f5102a.length() > 0 && !this.f5102a.startsWith("r-");
    }

    public boolean isNotDownload() {
        return this.b == null;
    }

    public boolean isRequired() {
        return this.f;
    }

    public void setResourceModalConfig(ModalRichmediaConfig modalRichmediaConfig) {
        this.h = modalRichmediaConfig;
    }

    public void setTags(Map<String, String> map) {
        this.i = new HashMap(map);
    }

    @Override // java.lang.Comparable
    public int compareTo(Resource resource) {
        boolean z = this.f;
        if (!(z && resource.f) && (z || resource.f)) {
            return z ? -1 : 1;
        }
        int i = resource.g - this.g;
        if (i != 0) {
            return i;
        }
        String str = this.f5102a;
        if (str == null) {
            return 1;
        }
        return str.compareTo(resource.getCode());
    }

    public Resource(String str) {
        this("", str, null, 0L, a.b, null, false, -1);
    }

    public Resource(String str, boolean z) {
        this(str, null, null, 0L, a.b, null, z, -1);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.util.HashMap] */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r2v3, types: [java.util.Map] */
    public Resource(String str, String str2, String str3, long j, a aVar, Map<String, Object> map, boolean z, int i) {
        ?? map2;
        this.h = null;
        this.f = z;
        this.f5102a = str;
        this.b = str2;
        this.c = str3;
        this.d = j;
        this.e = aVar;
        if (map == null) {
            map2 = Collections.EMPTY_MAP;
        } else {
            map2 = new HashMap();
            for (Map.Entry<String, Object> entry : map.entrySet()) {
                if (entry.getValue() != null) {
                    map2.put(entry.getKey(), entry.getValue().toString());
                }
            }
        }
        this.i = map2;
        this.g = i;
    }
}
