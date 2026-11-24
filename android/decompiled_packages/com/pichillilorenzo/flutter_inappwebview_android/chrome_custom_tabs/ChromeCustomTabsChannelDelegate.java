package com.pichillilorenzo.flutter_inappwebview_android.chrome_custom_tabs;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import androidx.browser.customtabs.CustomTabsSession;
import androidx.media3.common.C;
import com.adjust.sdk.Constants;
import com.pichillilorenzo.flutter_inappwebview_android.InAppWebViewFlutterPlugin;
import com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl;
import com.pichillilorenzo.flutter_inappwebview_android.types.CustomTabsSecondaryToolbar;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class ChromeCustomTabsChannelDelegate extends ChannelDelegateImpl {
    private ChromeCustomTabsActivity chromeCustomTabsActivity;

    public ChromeCustomTabsChannelDelegate(ChromeCustomTabsActivity chromeCustomTabsActivity, MethodChannel methodChannel) {
        super(methodChannel);
        this.chromeCustomTabsActivity = chromeCustomTabsActivity;
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl, com.pichillilorenzo.flutter_inappwebview_android.types.Disposable
    public void dispose() {
        super.dispose();
        this.chromeCustomTabsActivity = null;
    }

    public void onClosed() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onClosed", new HashMap());
    }

    public void onCompletedInitialLoad() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onCompletedInitialLoad", new HashMap());
    }

    public void onGreatestScrollPercentageIncreased(int i) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("scrollPercentage", Integer.valueOf(i));
        channel.invokeMethod("onGreatestScrollPercentageIncreased", map);
    }

    public void onItemActionPerform(int i, String str, String str2) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("id", Integer.valueOf(i));
        map.put("url", str);
        map.put("title", str2);
        channel.invokeMethod("onItemActionPerform", map);
    }

    public void onMessageChannelReady() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onMessageChannelReady", new HashMap());
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl, io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
        CustomTabsSession customTabsSession;
        InAppWebViewFlutterPlugin inAppWebViewFlutterPlugin;
        Activity activity;
        String str = methodCall.method;
        str.getClass();
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -1526944655:
                if (str.equals("isEngagementSignalsApiAvailable")) {
                    b = 0;
                }
                break;
            case -675108676:
                if (str.equals("launchUrl")) {
                    b = 1;
                }
                break;
            case -334843312:
                if (str.equals("updateSecondaryToolbar")) {
                    b = 2;
                }
                break;
            case 50870385:
                if (str.equals("updateActionButton")) {
                    b = 3;
                }
                break;
            case 94756344:
                if (str.equals("close")) {
                    b = 4;
                }
                break;
            case 1256059502:
                if (str.equals("validateRelationship")) {
                    b = 5;
                }
                break;
            case 1392239787:
                if (str.equals("requestPostMessageChannel")) {
                    b = 6;
                }
                break;
            case 1490029383:
                if (str.equals("postMessage")) {
                    b = 7;
                }
                break;
            case 2000053463:
                if (str.equals("mayLaunchUrl")) {
                    b = 8;
                }
                break;
        }
        switch (b) {
            case 0:
                ChromeCustomTabsActivity chromeCustomTabsActivity = this.chromeCustomTabsActivity;
                if (chromeCustomTabsActivity == null || (customTabsSession = chromeCustomTabsActivity.customTabsSession) == null) {
                    result.success(Boolean.FALSE);
                } else {
                    try {
                        result.success(Boolean.valueOf(customTabsSession.isEngagementSignalsApiAvailable(new Bundle())));
                    } catch (Throwable unused) {
                        result.success(Boolean.FALSE);
                        return;
                    }
                }
                break;
            case 1:
                if (this.chromeCustomTabsActivity == null) {
                    result.success(Boolean.FALSE);
                } else {
                    String str2 = (String) methodCall.argument("url");
                    if (str2 == null) {
                        result.success(Boolean.FALSE);
                    } else {
                        this.chromeCustomTabsActivity.launchUrl(str2, (Map) methodCall.argument("headers"), (String) methodCall.argument(Constants.REFERRER), (List) methodCall.argument("otherLikelyURLs"));
                        result.success(Boolean.TRUE);
                    }
                }
                break;
            case 2:
                if (this.chromeCustomTabsActivity == null) {
                    result.success(Boolean.FALSE);
                } else {
                    this.chromeCustomTabsActivity.updateSecondaryToolbar(CustomTabsSecondaryToolbar.fromMap((Map) methodCall.argument("secondaryToolbar")));
                    result.success(Boolean.TRUE);
                }
                break;
            case 3:
                if (this.chromeCustomTabsActivity == null) {
                    result.success(Boolean.FALSE);
                } else {
                    this.chromeCustomTabsActivity.updateActionButton((byte[]) methodCall.argument(PreferencesKey.NOTIFICATION_CONTENT_ICON), (String) methodCall.argument("description"));
                    result.success(Boolean.TRUE);
                }
                break;
            case 4:
                ChromeCustomTabsActivity chromeCustomTabsActivity2 = this.chromeCustomTabsActivity;
                if (chromeCustomTabsActivity2 == null) {
                    result.success(Boolean.FALSE);
                } else {
                    chromeCustomTabsActivity2.onStop();
                    this.chromeCustomTabsActivity.onDestroy();
                    this.chromeCustomTabsActivity.close();
                    ChromeSafariBrowserManager chromeSafariBrowserManager = this.chromeCustomTabsActivity.manager;
                    if (chromeSafariBrowserManager != null && (inAppWebViewFlutterPlugin = chromeSafariBrowserManager.plugin) != null && (activity = inAppWebViewFlutterPlugin.activity) != null) {
                        Intent intent = new Intent(activity, activity.getClass());
                        intent.addFlags(67108864);
                        intent.addFlags(C.BUFFER_FLAG_LAST_SAMPLE);
                        activity.startActivity(intent);
                    }
                    this.chromeCustomTabsActivity.dispose();
                    result.success(Boolean.TRUE);
                }
                break;
            case 5:
                ChromeCustomTabsActivity chromeCustomTabsActivity3 = this.chromeCustomTabsActivity;
                if (chromeCustomTabsActivity3 == null || chromeCustomTabsActivity3.customTabsSession == null) {
                    result.success(Boolean.FALSE);
                } else {
                    result.success(Boolean.valueOf(this.chromeCustomTabsActivity.customTabsSession.validateRelationship(((Integer) methodCall.argument("relation")).intValue(), Uri.parse((String) methodCall.argument("origin")), null)));
                }
                break;
            case 6:
                ChromeCustomTabsActivity chromeCustomTabsActivity4 = this.chromeCustomTabsActivity;
                if (chromeCustomTabsActivity4 == null || chromeCustomTabsActivity4.customTabsSession == null) {
                    result.success(Boolean.FALSE);
                } else {
                    String str3 = (String) methodCall.argument("sourceOrigin");
                    String str4 = (String) methodCall.argument("targetOrigin");
                    result.success(Boolean.valueOf(this.chromeCustomTabsActivity.customTabsSession.requestPostMessageChannel(Uri.parse(str3), str4 != null ? Uri.parse(str4) : null, new Bundle())));
                }
                break;
            case 7:
                ChromeCustomTabsActivity chromeCustomTabsActivity5 = this.chromeCustomTabsActivity;
                if (chromeCustomTabsActivity5 == null || chromeCustomTabsActivity5.customTabsSession == null) {
                    result.success(-3);
                } else {
                    result.success(Integer.valueOf(this.chromeCustomTabsActivity.customTabsSession.postMessage((String) methodCall.argument("message"), new Bundle())));
                }
                break;
            case 8:
                if (this.chromeCustomTabsActivity == null) {
                    result.success(Boolean.FALSE);
                } else {
                    result.success(Boolean.valueOf(this.chromeCustomTabsActivity.mayLaunchUrl((String) methodCall.argument("url"), (List) methodCall.argument("otherLikelyURLs"))));
                }
                break;
            default:
                result.notImplemented();
                break;
        }
    }

    public void onNavigationEvent(int i) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("navigationEvent", Integer.valueOf(i));
        channel.invokeMethod("onNavigationEvent", map);
    }

    public void onOpened() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onOpened", new HashMap());
    }

    public void onPostMessage(String str) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("message", str);
        channel.invokeMethod("onPostMessage", map);
    }

    public void onRelationshipValidationResult(int i, Uri uri, boolean z) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("relation", Integer.valueOf(i));
        map.put("requestedOrigin", uri.toString());
        map.put("result", Boolean.valueOf(z));
        channel.invokeMethod("onRelationshipValidationResult", map);
    }

    public void onSecondaryItemActionPerform(String str, String str2) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("name", str);
        map.put("url", str2);
        channel.invokeMethod("onSecondaryItemActionPerform", map);
    }

    public void onServiceConnected() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onServiceConnected", new HashMap());
    }

    public void onSessionEnded(boolean z) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("didUserInteract", Boolean.valueOf(z));
        channel.invokeMethod("onSessionEnded", map);
    }

    public void onVerticalScrollEvent(boolean z) {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("isDirectionUp", Boolean.valueOf(z));
        channel.invokeMethod("onVerticalScrollEvent", map);
    }
}
