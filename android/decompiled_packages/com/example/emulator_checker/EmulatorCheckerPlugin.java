package com.example.emulator_checker;

import android.os.Build;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: EmulatorCheckerPlugin.kt */
/* JADX INFO: loaded from: classes4.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\u0018\u00002\u00020\u00012\u00020\u0002B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0012\u0010\u0007\u001a\u00020\b2\b\b\u0001\u0010\t\u001a\u00020\nH\u0016J\u001c\u0010\u000b\u001a\u00020\b2\b\b\u0001\u0010\f\u001a\u00020\r2\b\b\u0001\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0002J\n\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0002J\u0012\u0010\u0014\u001a\u00020\b2\b\b\u0001\u0010\u0015\u001a\u00020\nH\u0016R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/example/emulator_checker/EmulatorCheckerPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "<init>", "()V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "onAttachedToEngine", "", "flutterPluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "isEmulator", "", "getRadioVersion", "", "onDetachedFromEngine", "binding", "emulator_checker_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class EmulatorCheckerPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler {
    private MethodChannel channel;

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        Intrinsics.checkNotNullParameter(flutterPluginBinding, "flutterPluginBinding");
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "emulator_checker");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "isEmulator")) {
            result.success(Boolean.valueOf(isEmulator()));
        } else {
            result.notImplemented();
        }
    }

    private final boolean isEmulator() {
        String radioVersion = getRadioVersion();
        Log.d("EmulatorChecker", "Radio Version: " + radioVersion);
        String FINGERPRINT = Build.FINGERPRINT;
        Intrinsics.checkNotNullExpressionValue(FINGERPRINT, "FINGERPRINT");
        if (StringsKt.startsWith$default(FINGERPRINT, "generic", false, 2, (Object) null)) {
            return true;
        }
        String FINGERPRINT2 = Build.FINGERPRINT;
        Intrinsics.checkNotNullExpressionValue(FINGERPRINT2, "FINGERPRINT");
        String lowerCase = FINGERPRINT2.toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        if (StringsKt.contains$default((CharSequence) lowerCase, (CharSequence) "unknown", false, 2, (Object) null)) {
            return true;
        }
        String MODEL = Build.MODEL;
        Intrinsics.checkNotNullExpressionValue(MODEL, "MODEL");
        if (StringsKt.contains$default((CharSequence) MODEL, (CharSequence) "Emulator", false, 2, (Object) null)) {
            return true;
        }
        String MODEL2 = Build.MODEL;
        Intrinsics.checkNotNullExpressionValue(MODEL2, "MODEL");
        if (StringsKt.contains$default((CharSequence) MODEL2, (CharSequence) "Android SDK built for x86", false, 2, (Object) null)) {
            return true;
        }
        String MANUFACTURER = Build.MANUFACTURER;
        Intrinsics.checkNotNullExpressionValue(MANUFACTURER, "MANUFACTURER");
        if (StringsKt.contains$default((CharSequence) MANUFACTURER, (CharSequence) "Genymotion", false, 2, (Object) null)) {
            return true;
        }
        String BRAND = Build.BRAND;
        Intrinsics.checkNotNullExpressionValue(BRAND, "BRAND");
        if (StringsKt.startsWith$default(BRAND, "generic", false, 2, (Object) null)) {
            String DEVICE = Build.DEVICE;
            Intrinsics.checkNotNullExpressionValue(DEVICE, "DEVICE");
            if (StringsKt.startsWith$default(DEVICE, "generic", false, 2, (Object) null)) {
                return true;
            }
        }
        if (Intrinsics.areEqual("google_sdk", Build.PRODUCT)) {
            return true;
        }
        String HARDWARE = Build.HARDWARE;
        Intrinsics.checkNotNullExpressionValue(HARDWARE, "HARDWARE");
        if (StringsKt.contains$default((CharSequence) HARDWARE, (CharSequence) "goldfish", false, 2, (Object) null)) {
            return true;
        }
        String HARDWARE2 = Build.HARDWARE;
        Intrinsics.checkNotNullExpressionValue(HARDWARE2, "HARDWARE");
        if (StringsKt.contains$default((CharSequence) HARDWARE2, (CharSequence) "ranchu", false, 2, (Object) null)) {
            return true;
        }
        String PRODUCT = Build.PRODUCT;
        Intrinsics.checkNotNullExpressionValue(PRODUCT, "PRODUCT");
        if (StringsKt.contains$default((CharSequence) PRODUCT, (CharSequence) "sdk", false, 2, (Object) null)) {
            return true;
        }
        String PRODUCT2 = Build.PRODUCT;
        Intrinsics.checkNotNullExpressionValue(PRODUCT2, "PRODUCT");
        if (StringsKt.contains$default((CharSequence) PRODUCT2, (CharSequence) "vbox86p", false, 2, (Object) null)) {
            return true;
        }
        String PRODUCT3 = Build.PRODUCT;
        Intrinsics.checkNotNullExpressionValue(PRODUCT3, "PRODUCT");
        return StringsKt.contains$default((CharSequence) PRODUCT3, (CharSequence) "emulator", false, 2, (Object) null) || radioVersion == null || radioVersion.length() == 0 || Intrinsics.areEqual(radioVersion, "1.0.0.0");
    }

    private final String getRadioVersion() {
        try {
            return Build.getRadioVersion();
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodChannel methodChannel = this.channel;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("channel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
    }
}
