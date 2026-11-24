package com.pushwoosh.internal.utils;

import android.os.Bundle;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class JsonUtils {
    private static Object a(Object obj) {
        if (obj == null) {
            return JSONObject.NULL;
        }
        if ((obj instanceof JSONArray) || (obj instanceof JSONObject)) {
            return obj;
        }
        try {
            if (obj instanceof Collection) {
                return collectionToJson((Collection) obj);
            }
            if (obj.getClass().isArray()) {
                return arrayToJson((Object[]) obj);
            }
            if (obj instanceof Map) {
                return mapToJson((Map) obj);
            }
            if (!(obj instanceof Boolean) && !(obj instanceof Byte) && !(obj instanceof Character) && !(obj instanceof Double) && !(obj instanceof Float) && !(obj instanceof Integer) && !(obj instanceof Long) && !(obj instanceof Short) && !(obj instanceof String)) {
                if (obj.getClass().getPackage().getName().startsWith("java.")) {
                    return obj.toString();
                }
                return JSONObject.NULL;
            }
            return obj;
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public static <T> JSONArray arrayToJson(T[] tArr) throws JSONException {
        int length = Array.getLength(tArr);
        JSONArray jSONArray = new JSONArray();
        for (int i = 0; i < length; i++) {
            jSONArray.put(a(Array.get(tArr, i)));
        }
        return jSONArray;
    }

    public static JSONObject bundleToJson(Bundle bundle) {
        JSONObject jSONObject = new JSONObject();
        if (bundle != null) {
            for (String str : bundle.keySet()) {
                try {
                    Object obj = bundle.get(str);
                    if (obj instanceof char[]) {
                        jSONObject.put(str, Arrays.toString((char[]) obj));
                    } else if (obj instanceof float[]) {
                        jSONObject.put(str, Arrays.toString((float[]) obj));
                    } else if (obj instanceof double[]) {
                        jSONObject.put(str, Arrays.toString((double[]) obj));
                    } else if (obj instanceof int[]) {
                        jSONObject.put(str, Arrays.toString((int[]) obj));
                    } else if (obj instanceof long[]) {
                        jSONObject.put(str, Arrays.toString((long[]) obj));
                    } else if (obj instanceof byte[]) {
                        jSONObject.put(str, Arrays.toString((byte[]) obj));
                    } else if (obj instanceof Object[]) {
                        jSONObject.put(str, Arrays.deepToString((Object[]) obj));
                    } else {
                        jSONObject.put(str, obj);
                    }
                } catch (JSONException unused) {
                }
            }
        }
        return jSONObject;
    }

    public static JSONObject bundleToJsonWithUserData(Bundle bundle) {
        JSONObject jSONObject = new JSONObject();
        if (bundle != null) {
            for (String str : bundle.keySet()) {
                if (str.equals("u")) {
                    try {
                        String string = bundle.getString("u");
                        if (string != null) {
                            if (string.trim().startsWith("{")) {
                                jSONObject.put("userdata", new JSONObject(string));
                            } else if (string.trim().startsWith("[")) {
                                jSONObject.put("userdata", new JSONArray(string));
                            }
                            try {
                                jSONObject.put(str, bundle.get(str));
                            } catch (JSONException unused) {
                            }
                        }
                    } catch (JSONException unused2) {
                    }
                } else {
                    jSONObject.put(str, bundle.get(str));
                }
            }
        }
        return jSONObject;
    }

    public static void clearJsonObject(JSONObject jSONObject) {
        Iterator<String> itKeys = jSONObject.keys();
        ArrayList arrayList = new ArrayList();
        while (itKeys.hasNext()) {
            arrayList.add(itKeys.next());
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            jSONObject.remove((String) it.next());
        }
    }

    public static JSONArray collectionToJson(Collection collection) {
        JSONArray jSONArray = new JSONArray();
        if (collection != null) {
            Iterator it = collection.iterator();
            while (it.hasNext()) {
                jSONArray.put(a(it.next()));
            }
        }
        return jSONArray;
    }

    public static Bundle jsonStringToBundle(String str) {
        return jsonStringToBundle(str, false);
    }

    public static List<Object> jsonToList(JSONArray jSONArray) throws JSONException {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            Object objJsonToMap = jSONArray.get(i);
            if (objJsonToMap instanceof JSONArray) {
                objJsonToMap = jsonToList((JSONArray) objJsonToMap);
            } else if (objJsonToMap instanceof JSONObject) {
                objJsonToMap = jsonToMap((JSONObject) objJsonToMap);
            } else if (JSONObject.NULL.equals(objJsonToMap)) {
                objJsonToMap = null;
            }
            arrayList.add(objJsonToMap);
        }
        return arrayList;
    }

    public static Map<String, Object> jsonToMap(JSONObject jSONObject, boolean z) throws JSONException {
        HashMap map = new HashMap();
        if (jSONObject != null) {
            try {
                JSONObject jSONObject2 = new JSONObject(jSONObject.toString());
                Iterator<String> itKeys = jSONObject2.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    Object string = jSONObject2.get(next);
                    if (string instanceof JSONArray) {
                        string = z ? string.toString() : jsonToList((JSONArray) string);
                    } else if (string instanceof JSONObject) {
                        string = z ? string.toString() : jsonToMap((JSONObject) string, false);
                    } else if (JSONObject.NULL.equals(string)) {
                        string = null;
                    }
                    map.put(next, string);
                }
            } catch (Throwable unused) {
            }
        }
        return map;
    }

    public static JSONObject mapToJson(Map<?, ?> map) {
        JSONObject jSONObject = new JSONObject();
        if (map == null) {
            return new JSONObject();
        }
        for (Map.Entry<?, ?> entry : map.entrySet()) {
            String str = (String) entry.getKey();
            if (str == null) {
                throw new IllegalArgumentException("key == null");
            }
            try {
                jSONObject.put(str, a(entry.getValue()));
            } catch (JSONException e) {
                PWLog.exception(e);
            }
        }
        return jSONObject;
    }

    public static void mergeJson(JSONObject jSONObject, JSONObject jSONObject2) {
        Iterator<String> itKeys = jSONObject.keys();
        synchronized (itKeys) {
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                try {
                    jSONObject2.put(next, jSONObject.opt(next));
                } catch (JSONException e) {
                    PWLog.exception(e);
                }
            }
        }
    }

    public static Bundle jsonStringToBundle(String str, boolean z) {
        try {
            return a((Map) jsonToMap(new JSONObject(str), z));
        } catch (JSONException e) {
            PWLog.error("JsonUtils", "Failed to convert json string to bundle", e);
            return new Bundle();
        }
    }

    public static Map<String, Object> jsonToMap(JSONObject jSONObject) throws JSONException {
        return jsonToMap(jSONObject, false);
    }

    private static Bundle a(Map map) {
        Bundle bundle = new Bundle();
        for (Map.Entry entry : map.entrySet()) {
            String str = (String) entry.getKey();
            Object value = entry.getValue();
            if (value instanceof String) {
                bundle.putString(str, (String) value);
            } else if (value instanceof Integer) {
                bundle.putInt(str, ((Integer) value).intValue());
            } else if (value instanceof Float) {
                bundle.putFloat(str, ((Float) value).floatValue());
            } else if (value instanceof Double) {
                bundle.putDouble(str, ((Double) value).doubleValue());
            } else if (value instanceof Boolean) {
                bundle.putBoolean(str, ((Boolean) value).booleanValue());
            } else if (value instanceof Byte) {
                bundle.putByte(str, ((Byte) value).byteValue());
            } else if (value instanceof Long) {
                bundle.putLong(str, ((Long) value).longValue());
            } else if (value instanceof Character) {
                bundle.putChar(str, ((Character) value).charValue());
            } else if (value instanceof char[]) {
                bundle.putCharArray(str, (char[]) value);
            } else if (value instanceof float[]) {
                bundle.putFloatArray(str, (float[]) value);
            } else if (value instanceof double[]) {
                bundle.putDoubleArray(str, (double[]) value);
            } else if (value instanceof int[]) {
                bundle.putIntArray(str, (int[]) value);
            } else if (value instanceof long[]) {
                bundle.putLongArray(str, (long[]) value);
            } else if (value instanceof byte[]) {
                bundle.putByteArray(str, (byte[]) value);
            } else if (value instanceof Map) {
                bundle.putBundle(str, a((Map) value));
            } else {
                throw new IllegalArgumentException("can't parse value by key:" + str + " value:" + value);
            }
        }
        return bundle;
    }
}
