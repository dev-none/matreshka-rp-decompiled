package com.mhz.savegallery.saver_gallery;

import android.content.Context;
import android.os.Build;
import androidx.core.app.NotificationCompat;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SaverGalleryPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 \u00192\u00020\u00012\u00020\u0002:\u0001\u0019B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u0018\u0010\u0011\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u0018\u0010\u0012\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u0018\u0010\u0013\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u0010\u0010\u0014\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0016J\u0010\u0010\u0017\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0016J\u0010\u0010\u0018\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0002R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/SaverGalleryPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "<init>", "()V", "context", "Landroid/content/Context;", "delegate", "Lcom/mhz/savegallery/saver_gallery/SaverDelegate;", "channel", "Lio/flutter/plugin/common/MethodChannel;", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "handleSaveImage", "handleSaveFile", "handleSaveFiles", "onAttachedToEngine", "binding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onDetachedFromEngine", "constructDelegate", "Companion", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SaverGalleryPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler {
    private static final String CHANNEL_NAME = "com.fluttercandies/saver_gallery";
    private MethodChannel channel;
    private Context context;
    private SaverDelegate delegate;

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (str != null) {
            int iHashCode = str.hashCode();
            if (iHashCode != -1545880963) {
                if (iHashCode != -705108034) {
                    if (iHashCode == 2091142169 && str.equals("saveImageToGallery")) {
                        handleSaveImage(call, result);
                        return;
                    }
                } else if (str.equals("saveFileToGallery")) {
                    handleSaveFile(call, result);
                    return;
                }
            } else if (str.equals("saveFilesToGallery")) {
                handleSaveFiles(call, result);
                return;
            }
        }
        result.notImplemented();
    }

    private final void handleSaveImage(MethodCall call, MethodChannel.Result result) {
        byte[] bArr = (byte[]) call.argument("image");
        if (bArr == null) {
            result.error("INVALID_ARGUMENT", "imageBytes is required", null);
            return;
        }
        Integer num = (Integer) call.argument("quality");
        int iIntValue = num != null ? num.intValue() : 100;
        String str = (String) call.argument("fileName");
        if (str == null) {
            result.error("INVALID_ARGUMENT", "fileName is required", null);
            return;
        }
        String str2 = (String) call.argument("extension");
        if (str2 == null) {
            result.error("INVALID_ARGUMENT", "File extension is required", null);
            return;
        }
        String str3 = (String) call.argument("relativePath");
        if (str3 == null) {
            str3 = "Pictures";
        }
        String str4 = str3;
        Boolean bool = (Boolean) call.argument("skipIfExists");
        boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
        SaverDelegate saverDelegate = this.delegate;
        if (saverDelegate != null) {
            saverDelegate.saveImageToGallery(bArr, iIntValue, str, str2, str4, zBooleanValue, result);
        }
    }

    private final void handleSaveFile(MethodCall call, MethodChannel.Result result) {
        String str = (String) call.argument("filePath");
        if (str == null) {
            result.error("INVALID_ARGUMENT", "File path is required", null);
            return;
        }
        String str2 = (String) call.argument("fileName");
        if (str2 == null) {
            result.error("INVALID_ARGUMENT", "fileName is required", null);
            return;
        }
        String str3 = (String) call.argument("relativePath");
        if (str3 == null) {
            str3 = "Download";
        }
        String str4 = str3;
        Boolean bool = (Boolean) call.argument("skipIfExists");
        boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
        SaverDelegate saverDelegate = this.delegate;
        if (saverDelegate != null) {
            saverDelegate.saveFileToGallery(str, str2, str4, zBooleanValue, result);
        }
    }

    private final void handleSaveFiles(MethodCall call, MethodChannel.Result result) {
        List<? extends Map<String, String>> list = (List) call.argument("files");
        if (list == null) {
            result.error("INVALID_ARGUMENT", "files is required", null);
            return;
        }
        Boolean bool = (Boolean) call.argument("skipIfExists");
        boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
        if (list.isEmpty()) {
            result.error("INVALID_ARGUMENT", "files list is empty", null);
            return;
        }
        SaverDelegate saverDelegate = this.delegate;
        if (saverDelegate != null) {
            saverDelegate.saveFilesToGallery(list, zBooleanValue, result);
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        this.context = binding.getApplicationContext();
        MethodChannel methodChannel = new MethodChannel(binding.getBinaryMessenger(), CHANNEL_NAME);
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        Context context = this.context;
        Intrinsics.checkNotNull(context);
        SaverDelegate saverDelegateConstructDelegate = constructDelegate(context);
        this.delegate = saverDelegateConstructDelegate;
        if (saverDelegateConstructDelegate != null) {
            saverDelegateConstructDelegate.onReady();
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodChannel methodChannel = this.channel;
        if (methodChannel != null) {
            methodChannel.setMethodCallHandler(null);
        }
        this.channel = null;
        SaverDelegate saverDelegate = this.delegate;
        if (saverDelegate != null) {
            saverDelegate.onClose();
        }
        this.delegate = null;
        this.context = null;
    }

    private final SaverDelegate constructDelegate(Context context) {
        if (Build.VERSION.SDK_INT < 29) {
            return new SaverDelegateDefault(context);
        }
        return new SaverDelegateAndroidT(context);
    }
}
