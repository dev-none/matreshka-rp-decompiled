package com.pichillilorenzo.flutter_inappwebview_android.pull_to_refresh;

import android.graphics.Color;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugins.firebase.analytics.Constants;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public class PullToRefreshChannelDelegate extends ChannelDelegateImpl {
    private PullToRefreshLayout pullToRefreshView;

    public PullToRefreshChannelDelegate(PullToRefreshLayout pullToRefreshLayout, MethodChannel methodChannel) {
        super(methodChannel);
        this.pullToRefreshView = pullToRefreshLayout;
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl, com.pichillilorenzo.flutter_inappwebview_android.types.Disposable
    public void dispose() {
        super.dispose();
        this.pullToRefreshView = null;
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.types.ChannelDelegateImpl, io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
        String str = methodCall.method;
        str.getClass();
        str.hashCode();
        switch (str) {
            case "setSlingshotDistance":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setSlingshotDistance(((Integer) methodCall.argument("slingshotDistance")).intValue());
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "setRefreshing":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setRefreshing(((Boolean) methodCall.argument("refreshing")).booleanValue());
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "getDefaultSlingshotDistance":
                result.success(-1);
                break;
            case "setEnabled":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    Boolean bool = (Boolean) methodCall.argument(Constants.ENABLED);
                    PullToRefreshLayout pullToRefreshLayout = this.pullToRefreshView;
                    pullToRefreshLayout.settings.enabled = bool;
                    pullToRefreshLayout.setEnabled(bool.booleanValue());
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "setColor":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setColorSchemeColors(Color.parseColor((String) methodCall.argument(TtmlNode.ATTR_TTS_COLOR)));
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "setBackgroundColor":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setProgressBackgroundColorSchemeColor(Color.parseColor((String) methodCall.argument(TtmlNode.ATTR_TTS_COLOR)));
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "setDistanceToTriggerSync":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setDistanceToTriggerSync(((Integer) methodCall.argument("distanceToTriggerSync")).intValue());
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "isRefreshing":
                PullToRefreshLayout pullToRefreshLayout2 = this.pullToRefreshView;
                result.success(Boolean.valueOf(pullToRefreshLayout2 != null && pullToRefreshLayout2.isRefreshing()));
                break;
            case "setSize":
                if (this.pullToRefreshView == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    this.pullToRefreshView.setSize(((Integer) methodCall.argument(RRWebVideoEvent.JsonKeys.SIZE)).intValue());
                    result.success(Boolean.TRUE);
                    break;
                }
                break;
            case "isEnabled":
                PullToRefreshLayout pullToRefreshLayout3 = this.pullToRefreshView;
                if (pullToRefreshLayout3 == null) {
                    result.success(Boolean.FALSE);
                    break;
                } else {
                    result.success(Boolean.valueOf(pullToRefreshLayout3.isEnabled()));
                    break;
                }
                break;
            default:
                result.notImplemented();
                break;
        }
    }

    public void onRefresh() {
        MethodChannel channel = getChannel();
        if (channel == null) {
            return;
        }
        channel.invokeMethod("onRefresh", new HashMap());
    }
}
