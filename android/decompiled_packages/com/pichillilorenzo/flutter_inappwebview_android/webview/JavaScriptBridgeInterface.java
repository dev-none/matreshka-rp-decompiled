package com.pichillilorenzo.flutter_inappwebview_android.webview;

import android.os.Handler;
import android.util.Log;
import android.webkit.JavascriptInterface;
import android.webkit.ValueCallback;
import com.pichillilorenzo.flutter_inappwebview_android.InAppWebViewFlutterPlugin;
import com.pichillilorenzo.flutter_inappwebview_android.print_job.PrintJobController;
import com.pichillilorenzo.flutter_inappwebview_android.print_job.PrintJobManager;
import com.pichillilorenzo.flutter_inappwebview_android.print_job.PrintJobSettings;
import com.pichillilorenzo.flutter_inappwebview_android.webview.in_app_webview.InAppWebView;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class JavaScriptBridgeInterface {
    private static final String LOG_TAG = "JSBridgeInterface";
    private InAppWebView inAppWebView;

    public JavaScriptBridgeInterface(InAppWebView inAppWebView) {
        this.inAppWebView = inAppWebView;
    }

    @JavascriptInterface
    public void _callHandler(final String str, final String str2, final String str3) {
        if (this.inAppWebView == null) {
            return;
        }
        new Handler(this.inAppWebView.getWebViewLooper()).post(new Runnable() { // from class: com.pichillilorenzo.flutter_inappwebview_android.webview.JavaScriptBridgeInterface.2
            @Override // java.lang.Runnable
            public void run() {
                WebViewChannelDelegate webViewChannelDelegate;
                if (JavaScriptBridgeInterface.this.inAppWebView == null) {
                    return;
                }
                if (str.equals("onPrintRequest")) {
                    PrintJobSettings printJobSettings = new PrintJobSettings();
                    printJobSettings.handledByClient = Boolean.TRUE;
                    final String strPrintCurrentPage = JavaScriptBridgeInterface.this.inAppWebView.printCurrentPage(printJobSettings);
                    InAppWebView inAppWebView = JavaScriptBridgeInterface.this.inAppWebView;
                    if (inAppWebView == null || (webViewChannelDelegate = inAppWebView.channelDelegate) == null) {
                        return;
                    }
                    webViewChannelDelegate.onPrintRequest(inAppWebView.getUrl(), strPrintCurrentPage, new WebViewChannelDelegate.PrintRequestCallback() { // from class: com.pichillilorenzo.flutter_inappwebview_android.webview.JavaScriptBridgeInterface.2.1
                        @Override // com.pichillilorenzo.flutter_inappwebview_android.types.BaseCallbackResultImpl, io.flutter.plugin.common.MethodChannel.Result
                        public void error(String str4, String str5, Object obj) {
                            StringBuilder sb = new StringBuilder();
                            sb.append(str4);
                            sb.append(", ");
                            if (str5 == null) {
                                str5 = "";
                            }
                            sb.append(str5);
                            Log.e(JavaScriptBridgeInterface.LOG_TAG, sb.toString());
                            defaultBehaviour((Boolean) null);
                        }

                        @Override // com.pichillilorenzo.flutter_inappwebview_android.types.BaseCallbackResultImpl, com.pichillilorenzo.flutter_inappwebview_android.types.ICallbackResult
                        public void defaultBehaviour(Boolean bool) {
                            InAppWebViewFlutterPlugin inAppWebViewFlutterPlugin;
                            PrintJobManager printJobManager;
                            PrintJobController printJobController;
                            InAppWebView inAppWebView2 = JavaScriptBridgeInterface.this.inAppWebView;
                            if (inAppWebView2 == null || (inAppWebViewFlutterPlugin = inAppWebView2.plugin) == null || (printJobManager = inAppWebViewFlutterPlugin.printJobManager) == null || (printJobController = printJobManager.jobs.get(strPrintCurrentPage)) == null) {
                                return;
                            }
                            printJobController.disposeNoCancel();
                        }

                        @Override // com.pichillilorenzo.flutter_inappwebview_android.types.BaseCallbackResultImpl, com.pichillilorenzo.flutter_inappwebview_android.types.ICallbackResult
                        public boolean nonNullSuccess(Boolean bool) {
                            return !bool.booleanValue();
                        }
                    });
                    return;
                }
                if (str.equals("callAsyncJavaScript")) {
                    try {
                        JSONObject jSONObject = new JSONArray(str3).getJSONObject(0);
                        String string = jSONObject.getString("resultUuid");
                        ValueCallback<String> valueCallback = JavaScriptBridgeInterface.this.inAppWebView.callAsyncJavaScriptCallbacks.get(string);
                        if (valueCallback != null) {
                            valueCallback.onReceiveValue(jSONObject.toString());
                            JavaScriptBridgeInterface.this.inAppWebView.callAsyncJavaScriptCallbacks.remove(string);
                            return;
                        }
                        return;
                    } catch (JSONException e) {
                        Log.e(JavaScriptBridgeInterface.LOG_TAG, "", e);
                        return;
                    }
                }
                if (!str.equals("evaluateJavaScriptWithContentWorld")) {
                    WebViewChannelDelegate webViewChannelDelegate2 = JavaScriptBridgeInterface.this.inAppWebView.channelDelegate;
                    if (webViewChannelDelegate2 != null) {
                        webViewChannelDelegate2.onCallJsHandler(str, str3, new WebViewChannelDelegate.CallJsHandlerCallback() { // from class: com.pichillilorenzo.flutter_inappwebview_android.webview.JavaScriptBridgeInterface.2.2
                            @Override // com.pichillilorenzo.flutter_inappwebview_android.types.BaseCallbackResultImpl, com.pichillilorenzo.flutter_inappwebview_android.types.ICallbackResult
                            public void defaultBehaviour(Object obj) {
                                if (JavaScriptBridgeInterface.this.inAppWebView == null) {
                                    return;
                                }
                                JavaScriptBridgeInterface.this.inAppWebView.evaluateJavascript("if (window.flutter_inappwebview[" + str2 + "] != null) { window.flutter_inappwebview[" + str2 + "].resolve(" + obj + "); delete window.flutter_inappwebview[" + str2 + "]; }", null);
                            }

                            @Override // com.pichillilorenzo.flutter_inappwebview_android.types.BaseCallbackResultImpl, io.flutter.plugin.common.MethodChannel.Result
                            public void error(String str4, String str5, Object obj) {
                                String str6;
                                StringBuilder sb = new StringBuilder();
                                sb.append(str4);
                                if (str5 != null) {
                                    str6 = ", " + str5;
                                } else {
                                    str6 = "";
                                }
                                sb.append(str6);
                                String string2 = sb.toString();
                                Log.e(JavaScriptBridgeInterface.LOG_TAG, string2);
                                if (JavaScriptBridgeInterface.this.inAppWebView == null) {
                                    return;
                                }
                                JavaScriptBridgeInterface.this.inAppWebView.evaluateJavascript("if (window.flutter_inappwebview[" + str2 + "] != null) { window.flutter_inappwebview[" + str2 + "].reject(new Error(" + JSONObject.quote(string2) + ")); delete window.flutter_inappwebview[" + str2 + "]; }", null);
                            }
                        });
                        return;
                    }
                    return;
                }
                try {
                    JSONObject jSONObject2 = new JSONArray(str3).getJSONObject(0);
                    String string2 = jSONObject2.getString("resultUuid");
                    ValueCallback<String> valueCallback2 = JavaScriptBridgeInterface.this.inAppWebView.evaluateJavaScriptContentWorldCallbacks.get(string2);
                    if (valueCallback2 != null) {
                        valueCallback2.onReceiveValue(jSONObject2.has("value") ? jSONObject2.get("value").toString() : "null");
                        JavaScriptBridgeInterface.this.inAppWebView.evaluateJavaScriptContentWorldCallbacks.remove(string2);
                    }
                } catch (JSONException e2) {
                    Log.e(JavaScriptBridgeInterface.LOG_TAG, "", e2);
                }
            }
        });
    }

    @JavascriptInterface
    public void _hideContextMenu() {
        if (this.inAppWebView == null) {
            return;
        }
        new Handler(this.inAppWebView.getWebViewLooper()).post(new Runnable() { // from class: com.pichillilorenzo.flutter_inappwebview_android.webview.JavaScriptBridgeInterface.1
            @Override // java.lang.Runnable
            public void run() {
                InAppWebView inAppWebView = JavaScriptBridgeInterface.this.inAppWebView;
                if (inAppWebView == null || inAppWebView.floatingContextMenu == null) {
                    return;
                }
                inAppWebView.hideContextMenu();
            }
        });
    }

    public void dispose() {
        this.inAppWebView = null;
    }
}
