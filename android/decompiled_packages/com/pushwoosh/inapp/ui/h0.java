package com.pushwoosh.inapp.ui;

import com.pushwoosh.internal.utils.PWLog;
import java.util.ArrayList;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class h0 {
    public static final Integer a(JSONObject jSONObject, String str) {
        Integer numValueOf;
        String strF = f(jSONObject, str);
        if (strF == null) {
            return null;
        }
        String string = StringsKt.trim((CharSequence) strF).toString();
        if (string == null || !StringsKt.startsWith$default(string, "#", false, 2, (Object) null)) {
            numValueOf = null;
            break;
        }
        String strSubstring = string.substring(1);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "this as java.lang.String).substring(startIndex)");
        int i = 0;
        while (true) {
            if (i >= strSubstring.length()) {
                Long longOrNull = StringsKt.toLongOrNull(strSubstring, 16);
                if (longOrNull != null) {
                    long jLongValue = longOrNull.longValue();
                    int length = strSubstring.length();
                    if (length == 3) {
                        numValueOf = Integer.valueOf(d0.a(255L, d0.a(jLongValue, 2), d0.a(jLongValue, 1), d0.a(jLongValue, 0)));
                        break;
                    }
                    if (length == 4) {
                        numValueOf = Integer.valueOf(d0.a(d0.a(jLongValue, 0), d0.a(jLongValue, 3), d0.a(jLongValue, 2), d0.a(jLongValue, 1)));
                        break;
                    }
                    if (length == 6) {
                        numValueOf = Integer.valueOf(d0.a(255L, (jLongValue >> 16) & 255, (jLongValue >> 8) & 255, jLongValue & 255));
                        break;
                    }
                    if (length == 8) {
                        numValueOf = Integer.valueOf(d0.a(jLongValue & 255, (jLongValue >> 24) & 255, (jLongValue >> 16) & 255, (jLongValue >> 8) & 255));
                        break;
                    }
                    break;
                }
            } else {
                char cCharAt = strSubstring.charAt(i);
                if (('0' <= cCharAt && cCharAt < ':') || (('a' <= cCharAt && cCharAt < 'g') || ('A' <= cCharAt && cCharAt < 'G'))) {
                    i++;
                }
            }
            numValueOf = null;
            break;
        }
        if (numValueOf != null) {
            return numValueOf;
        }
        PWLog.warn("InAppConfigParser", "native-config: '" + str + "' is not a valid #RGB/#RGBA/#RRGGBB/#RRGGBBAA color");
        return null;
    }

    public static final Double b(JSONObject jSONObject, String str) {
        if (jSONObject.has(str) && !jSONObject.isNull(str)) {
            Object objOpt = jSONObject.opt(str);
            if (objOpt instanceof Number) {
                return Double.valueOf(((Number) objOpt).doubleValue());
            }
            if (objOpt instanceof String) {
                return StringsKt.toDoubleOrNull((String) objOpt);
            }
        }
        return null;
    }

    public static final JSONObject c(JSONObject jSONObject, String str) {
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(str);
        if (jSONObjectOptJSONObject != null) {
            return jSONObjectOptJSONObject;
        }
        PWLog.warn("InAppConfigParser", "native-config: '" + str + "' is missing or not an object");
        return null;
    }

    public static final Boolean d(JSONObject jSONObject, String str) {
        Object objOpt = jSONObject.opt(str);
        if (objOpt instanceof Boolean) {
            return (Boolean) objOpt;
        }
        PWLog.warn("InAppConfigParser", "native-config: '" + str + "' is missing or not a boolean");
        return null;
    }

    public static final Double e(JSONObject jSONObject, String str) {
        Object objOpt = jSONObject.opt(str);
        if (objOpt instanceof Number) {
            return Double.valueOf(((Number) objOpt).doubleValue());
        }
        PWLog.warn("InAppConfigParser", "native-config: '" + str + "' is missing or not a number");
        return null;
    }

    public static final String f(JSONObject jSONObject, String str) {
        Object objOpt = jSONObject.opt(str);
        if ((objOpt instanceof String) && ((CharSequence) objOpt).length() > 0) {
            return (String) objOpt;
        }
        PWLog.warn("InAppConfigParser", "native-config: '" + str + "' is missing or not a non-empty string");
        return null;
    }

    public static final ArrayList a(JSONObject jSONObject, Function1 function1) {
        Object objInvoke;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("items");
        if (jSONArrayOptJSONArray == null) {
            PWLog.warn("InAppConfigParser", "native-config: 'items' is missing or not an array");
            jSONArrayOptJSONArray = null;
        }
        if (jSONArrayOptJSONArray == null) {
            return null;
        }
        if (jSONArrayOptJSONArray.length() == 0) {
            PWLog.warn("InAppConfigParser", "native-config: 'items' must not be empty");
            return null;
        }
        ArrayList arrayList = new ArrayList(jSONArrayOptJSONArray.length());
        int length = jSONArrayOptJSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject == null || (objInvoke = function1.invoke(jSONObjectOptJSONObject)) == null) {
                return null;
            }
            arrayList.add(objInvoke);
        }
        return arrayList;
    }
}
