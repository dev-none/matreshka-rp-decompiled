package com.pushwoosh.plugin;

import android.webkit.JavascriptInterface;
import com.pushwoosh.internal.utils.PWLog;
import com.tekartik.sqflite.Constant;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicLong;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class FlutterJavaScriptInterface {
    private static final String TAG = "FlutterJSInterface";
    private static final Map<String, ResponseHandler> responseHandlers = new ConcurrentHashMap();
    private final AtomicLong callbackIdCounter = new AtomicLong(0);
    private final String interfaceName;
    private final List<String> methodNames;

    private static class ResponseHandler {
        final String errorCallback;
        final String successCallback;

        ResponseHandler(String str, String str2) {
            this.successCallback = str;
            this.errorCallback = str2;
        }
    }

    public FlutterJavaScriptInterface(String str, List<String> list) {
        this.interfaceName = str;
        this.methodNames = list;
    }

    @JavascriptInterface
    public void callFlutterMethod(String str, String str2, String str3, String str4) {
        try {
            if (!this.methodNames.contains(str)) {
                String str5 = "Method '" + str + "' is not allowed for interface '" + this.interfaceName + "'";
                PWLog.error(TAG, str5);
                if (str4 == null || str4.isEmpty()) {
                    return;
                }
                sendErrorCallback(str4, str5);
                return;
            }
            String str6 = this.interfaceName + "_" + this.callbackIdCounter.incrementAndGet();
            if (str3 != null || str4 != null) {
                responseHandlers.put(str6, new ResponseHandler(str3, str4));
            }
            Map<String, Object> map = new HashMap<>();
            if (str2 != null && !str2.isEmpty() && !str2.equals("{}")) {
                try {
                    map = jsonObjectToMap(new JSONObject(str2));
                } catch (JSONException e) {
                    PWLog.warn(TAG, "Failed to parse arguments JSON: " + str2 + ", error: " + e.getMessage());
                }
            }
            HashMap map2 = new HashMap();
            map2.put("interfaceName", this.interfaceName);
            map2.put("methodName", str);
            map2.put(Constant.PARAM_SQL_ARGUMENTS, map);
            map2.put("callbackId", str6);
            PushwooshPlugin.sendJavaScriptInterfaceCall(map2);
        } catch (Exception e2) {
            PWLog.error(TAG, "Error calling Flutter method: " + str + ", error: " + e2.getMessage());
            if (str4 == null || str4.isEmpty()) {
                return;
            }
            sendErrorCallback(str4, e2.getMessage());
        }
    }

    public static boolean sendResponse(String str, boolean z, Object obj, String str2) {
        String str3;
        try {
            ResponseHandler responseHandlerRemove = responseHandlers.remove(str);
            if (responseHandlerRemove == null) {
                PWLog.warn(TAG, "No response handler found for callback ID: " + str);
                return false;
            }
            String string = "{}";
            if (!z || responseHandlerRemove.successCallback == null || responseHandlerRemove.successCallback.isEmpty()) {
                if (!z && responseHandlerRemove.errorCallback != null && !responseHandlerRemove.errorCallback.isEmpty()) {
                    try {
                        HashMap map = new HashMap();
                        if (str2 == null) {
                            str2 = "Unknown error";
                        }
                        map.put("error", str2);
                        string = new JSONObject(map).toString();
                    } catch (Exception e) {
                        PWLog.error(TAG, "Error serializing success data: " + e.getMessage());
                    }
                    str3 = String.format("if (typeof %s === 'function') %s(%s);", responseHandlerRemove.errorCallback, responseHandlerRemove.errorCallback, string);
                }
                return true;
            }
            if (obj != null) {
                try {
                    HashMap map2 = new HashMap();
                    map2.put("result", obj);
                    string = new JSONObject(map2).toString();
                } catch (Exception e2) {
                    PWLog.error(TAG, "Error serializing success data: " + e2.getMessage());
                }
            }
            str3 = String.format("if (typeof %s === 'function') %s(%s);", responseHandlerRemove.successCallback, responseHandlerRemove.successCallback, string);
            executeJavaScript(str3);
            return true;
        } catch (Exception e3) {
            PWLog.error(TAG, "Error sending response for callback: " + str + ", error: " + e3.getMessage());
            return false;
        }
    }

    private static void executeJavaScript(String str) {
        PWLog.debug(TAG, "Should execute JavaScript: " + str);
    }

    private Map<String, Object> jsonObjectToMap(JSONObject jSONObject) throws JSONException {
        HashMap map = new HashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            Object obj = jSONObject.get(next);
            if (obj instanceof JSONObject) {
                map.put(next, jsonObjectToMap((JSONObject) obj));
            } else if (obj instanceof JSONArray) {
                map.put(next, jsonArrayToList((JSONArray) obj));
            } else if (obj == JSONObject.NULL) {
                map.put(next, null);
            } else {
                map.put(next, obj);
            }
        }
        return map;
    }

    private List<Object> jsonArrayToList(JSONArray jSONArray) throws JSONException {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            Object obj = jSONArray.get(i);
            if (obj instanceof JSONObject) {
                arrayList.add(jsonObjectToMap((JSONObject) obj));
            } else if (obj instanceof JSONArray) {
                arrayList.add(jsonArrayToList((JSONArray) obj));
            } else if (obj == JSONObject.NULL) {
                arrayList.add(null);
            } else {
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    private static void sendErrorCallback(String str, String str2) {
        try {
            HashMap map = new HashMap();
            if (str2 == null) {
                str2 = "Unknown error";
            }
            map.put("error", str2);
            executeJavaScript(String.format("if (typeof %s === 'function') %s(%s);", str, str, new JSONObject(map).toString()));
        } catch (Exception e) {
            PWLog.error(TAG, "Error sending error callback: " + e.getMessage());
        }
    }

    public String getInterfaceName() {
        return this.interfaceName;
    }

    public List<String> getMethodNames() {
        return this.methodNames;
    }
}
