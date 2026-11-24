package com.pushwoosh.tags;

import android.text.TextUtils;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class TagsBundle {
    private static final Object b = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final HashMap f5313a;

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final ConcurrentHashMap f5314a = new ConcurrentHashMap();

        public Builder appendList(String str, List<String> list) {
            HashMap map = new HashMap();
            map.put("operation", "append");
            map.put("value", list);
            this.f5314a.put(str, map);
            return this;
        }

        public TagsBundle build() {
            return new TagsBundle(this);
        }

        public HashMap<String, Object> getTagsHashMap() {
            HashMap<String, Object> map = new HashMap<>();
            for (Map.Entry entry : this.f5314a.entrySet()) {
                map.put((String) entry.getKey(), entry.getValue() == TagsBundle.b ? null : entry.getValue());
            }
            return map;
        }

        public Builder incrementInt(String str, int i) {
            HashMap map = new HashMap();
            map.put("operation", "increment");
            map.put("value", Integer.valueOf(i));
            this.f5314a.put(str, map);
            return this;
        }

        public Builder putAll(JSONObject jSONObject) {
            if (jSONObject == null) {
                PWLog.warn("Skipping putAll: JSON is null");
                return this;
            }
            Iterator<String> itKeys = jSONObject.keys();
            synchronized (itKeys) {
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    this.f5314a.put(next, jSONObject.opt(next));
                }
            }
            return this;
        }

        public Builder putBoolean(String str, boolean z) {
            this.f5314a.put(str, Boolean.valueOf(z));
            return this;
        }

        public Builder putDate(String str, Date date) {
            if (date != null) {
                this.f5314a.put(str, new SimpleDateFormat("yyyy-MM-dd HH:mm", Locale.US).format(date));
                return this;
            }
            PWLog.warn("Skipping date tag \"" + str + "\": value is null");
            return this;
        }

        public Builder putInt(String str, int i) {
            this.f5314a.put(str, Integer.valueOf(i));
            return this;
        }

        public Builder putList(String str, List<String> list) {
            if (list != null) {
                this.f5314a.put(str, list);
                return this;
            }
            PWLog.warn("Skipping list tag \"" + str + "\": value is null");
            return this;
        }

        public Builder putLong(String str, long j) {
            this.f5314a.put(str, Long.valueOf(j));
            return this;
        }

        public Builder putString(String str, String str2) {
            try {
                this.f5314a.put(str, str2);
                return this;
            } catch (Exception e) {
                PWLog.error("Failed to put String tag in TagsBundle", e);
                return this;
            }
        }

        public Builder putStringIfNotEmpty(String str, String str2) {
            if (!TextUtils.isEmpty(str2)) {
                this.f5314a.put(str, str2);
            }
            return this;
        }

        public Builder remove(String str) {
            this.f5314a.put(str, TagsBundle.b);
            return this;
        }

        public Builder removeFromList(String str, List<String> list) {
            HashMap map = new HashMap();
            map.put("operation", "remove");
            map.put("value", list);
            this.f5314a.put(str, map);
            return this;
        }
    }

    TagsBundle(Builder builder) {
        this.f5313a = builder.getTagsHashMap();
    }

    public boolean getBoolean(String str, boolean z) {
        Object obj = this.f5313a.get(str);
        return obj instanceof Boolean ? ((Boolean) obj).booleanValue() : z;
    }

    public int getInt(String str, int i) {
        Object obj = this.f5313a.get(str);
        return obj instanceof Number ? ((Number) obj).intValue() : i;
    }

    public List<String> getList(String str) {
        Object obj = this.f5313a.get(str);
        if (obj instanceof List) {
            return (List) obj;
        }
        ArrayList arrayList = new ArrayList();
        if (!(obj instanceof JSONArray)) {
            return null;
        }
        for (int i = 0; i < ((JSONArray) obj).length(); i++) {
            try {
                arrayList.add(((JSONArray) obj).getString(i));
            } catch (JSONException unused) {
            }
        }
        return arrayList;
    }

    public long getLong(String str, long j) {
        Object obj = this.f5313a.get(str);
        return obj instanceof Number ? ((Number) obj).longValue() : j;
    }

    public Map<String, Object> getMap() {
        return this.f5313a;
    }

    public String getString(String str) {
        Object obj = this.f5313a.get(str);
        if (obj instanceof String) {
            return (String) obj;
        }
        return null;
    }

    public JSONObject toJson() {
        return JsonUtils.mapToJson(this.f5313a);
    }

    public String toString() {
        return toJson().toString();
    }
}
