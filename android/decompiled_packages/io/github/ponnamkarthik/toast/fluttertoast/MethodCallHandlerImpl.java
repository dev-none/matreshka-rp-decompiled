package io.github.ponnamkarthik.toast.fluttertoast;

import android.app.Activity;
import android.content.Context;
import android.content.res.AssetManager;
import android.graphics.PorterDuff;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.Toast$Callback;
import androidx.core.app.NotificationCompat;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.adjust.sdk.Constants;
import com.tekartik.sqflite.Utils$$ExternalSyntheticApiModelOutline0;
import io.flutter.FlutterInjector;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MethodCallHandlerImpl.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lio/github/ponnamkarthik/toast/fluttertoast/MethodCallHandlerImpl;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "mToast", "Landroid/widget/Toast;", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "fluttertoast_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MethodCallHandlerImpl implements MethodChannel.MethodCallHandler {
    private Context context;
    private Toast mToast;

    public MethodCallHandlerImpl(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        int i;
        Toast toast;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (Intrinsics.areEqual(str, "showToast")) {
            String strValueOf = String.valueOf(call.argument(NotificationCompat.CATEGORY_MESSAGE));
            String strValueOf2 = String.valueOf(call.argument("length"));
            String strValueOf3 = String.valueOf(call.argument("gravity"));
            Number number = (Number) call.argument("bgcolor");
            Number number2 = (Number) call.argument("textcolor");
            Number number3 = (Number) call.argument(TtmlNode.ATTR_TTS_FONT_SIZE);
            String str2 = (String) call.argument("fontAsset");
            if (Intrinsics.areEqual(strValueOf3, RRWebVideoEvent.JsonKeys.TOP)) {
                i = 48;
            } else {
                i = Intrinsics.areEqual(strValueOf3, TtmlNode.CENTER) ? 17 : 80;
            }
            boolean zAreEqual = Intrinsics.areEqual(strValueOf2, Constants.LONG);
            if (number != null) {
                Object systemService = this.context.getSystemService("layout_inflater");
                Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.LayoutInflater");
                View viewInflate = ((LayoutInflater) systemService).inflate(R.layout.toast_custom, (ViewGroup) null);
                TextView textView = (TextView) viewInflate.findViewById(R.id.text);
                textView.setText(strValueOf);
                Drawable drawable = this.context.getDrawable(R.drawable.corner);
                Intrinsics.checkNotNull(drawable);
                Intrinsics.checkNotNull(drawable);
                drawable.setColorFilter(number.intValue(), PorterDuff.Mode.SRC_IN);
                textView.setBackground(drawable);
                if (number3 != null) {
                    textView.setTextSize(number3.floatValue());
                }
                if (number2 != null) {
                    textView.setTextColor(number2.intValue());
                }
                Toast toast2 = new Toast(this.context);
                this.mToast = toast2;
                toast2.setDuration(zAreEqual ? 1 : 0);
                if (str2 != null) {
                    AssetManager assets = this.context.getAssets();
                    Intrinsics.checkNotNullExpressionValue(assets, "getAssets(...)");
                    String lookupKeyForAsset = FlutterInjector.instance().flutterLoader().getLookupKeyForAsset(str2);
                    Intrinsics.checkNotNullExpressionValue(lookupKeyForAsset, "getLookupKeyForAsset(...)");
                    textView.setTypeface(Typeface.createFromAsset(assets, lookupKeyForAsset));
                }
                Toast toast3 = this.mToast;
                if (toast3 != null) {
                    toast3.setView(viewInflate);
                }
            } else {
                this.mToast = Toast.makeText(this.context, strValueOf, zAreEqual ? 1 : 0);
                if (Build.VERSION.SDK_INT < 30) {
                    Toast toast4 = this.mToast;
                    View view = toast4 != null ? toast4.getView() : null;
                    Intrinsics.checkNotNull(view);
                    View viewFindViewById = view.findViewById(android.R.id.message);
                    Intrinsics.checkNotNullExpressionValue(viewFindViewById, "findViewById(...)");
                    TextView textView2 = (TextView) viewFindViewById;
                    if (number3 != null) {
                        textView2.setTextSize(number3.floatValue());
                    }
                    if (number2 != null) {
                        textView2.setTextColor(number2.intValue());
                    }
                    if (str2 != null) {
                        AssetManager assets2 = this.context.getAssets();
                        Intrinsics.checkNotNullExpressionValue(assets2, "getAssets(...)");
                        String lookupKeyForAsset2 = FlutterInjector.instance().flutterLoader().getLookupKeyForAsset(str2);
                        Intrinsics.checkNotNullExpressionValue(lookupKeyForAsset2, "getLookupKeyForAsset(...)");
                        textView2.setTypeface(Typeface.createFromAsset(assets2, lookupKeyForAsset2));
                    }
                }
            }
            if (number != null) {
                try {
                    if (i == 17) {
                        Toast toast5 = this.mToast;
                        if (toast5 != null) {
                            toast5.setGravity(i, 0, 0);
                        }
                    } else if (i == 48) {
                        Toast toast6 = this.mToast;
                        if (toast6 != null) {
                            toast6.setGravity(i, 0, 100);
                        }
                    } else {
                        Toast toast7 = this.mToast;
                        if (toast7 != null) {
                            toast7.setGravity(i, 0, 100);
                        }
                    }
                } catch (Exception unused) {
                }
            }
            Context context = this.context;
            if (context instanceof Activity) {
                Intrinsics.checkNotNull(context, "null cannot be cast to non-null type android.app.Activity");
                ((Activity) context).runOnUiThread(new Runnable() { // from class: io.github.ponnamkarthik.toast.fluttertoast.MethodCallHandlerImpl$$ExternalSyntheticLambda2
                    @Override // java.lang.Runnable
                    public final void run() {
                        MethodCallHandlerImpl.onMethodCall$lambda$0(this.f$0);
                    }
                });
            } else {
                Toast toast8 = this.mToast;
                if (toast8 != null) {
                    toast8.show();
                }
            }
            if (Build.VERSION.SDK_INT >= 30 && (toast = this.mToast) != null) {
                toast.addCallback(Utils$$ExternalSyntheticApiModelOutline0.m9100m((Object) new Toast$Callback() { // from class: io.github.ponnamkarthik.toast.fluttertoast.MethodCallHandlerImpl.onMethodCall.2
                    public void onToastHidden() {
                        super.onToastHidden();
                        MethodCallHandlerImpl.this.mToast = null;
                    }
                }));
            }
            result.success(true);
            return;
        }
        if (Intrinsics.areEqual(str, "cancel")) {
            Toast toast9 = this.mToast;
            if (toast9 != null) {
                if (toast9 != null) {
                    toast9.cancel();
                }
                this.mToast = null;
            }
            result.success(true);
            return;
        }
        result.notImplemented();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onMethodCall$lambda$0(MethodCallHandlerImpl methodCallHandlerImpl) {
        Toast toast = methodCallHandlerImpl.mToast;
        if (toast != null) {
            toast.show();
        }
    }
}
