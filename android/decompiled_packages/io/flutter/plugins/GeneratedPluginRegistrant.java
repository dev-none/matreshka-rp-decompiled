package io.flutter.plugins;

import ch.perron2.async_zip.AsyncZipPlugin;
import com.aboutyou.dart_packages.sign_in_with_apple.SignInWithApplePlugin;
import com.adjust.sdk.flutter.AdjustSdk;
import com.aelahmar.vpn_detector.VpnDetectorPlugin;
import com.baseflow.permissionhandler.PermissionHandlerPlugin;
import com.benjaminabel.vibration.VibrationPlugin;
import com.example.emulator_checker.EmulatorCheckerPlugin;
import com.github.dart_lang.jni.JniPlugin;
import com.kineapps.flutterarchive.FlutterArchivePlugin;
import com.mhz.savegallery.saver_gallery.SaverGalleryPlugin;
import com.piccmaq.disk_space_plus.DiskSpacePlusPlugin;
import com.pichillilorenzo.flutter_inappwebview_android.InAppWebViewFlutterPlugin;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskPlugin;
import com.pushwoosh.plugin.PushwooshPlugin;
import com.rebeloid.unity_ads.UnityAdsPlugin;
import com.tekartik.sqflite.SqflitePlugin;
import com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin;
import com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin;
import dev.britannio.in_app_review.InAppReviewPlugin;
import dev.fluttercommunity.plus.connectivity.ConnectivityPlugin;
import dev.fluttercommunity.plus.device_info.DeviceInfoPlusPlugin;
import dev.fluttercommunity.plus.packageinfo.PackageInfoPlugin;
import dev.fluttercommunity.plus.sensors.SensorsPlugin;
import dev.fluttercommunity.plus.share.SharePlusPlugin;
import dev.fluttercommunity.plus.wakelock.WakelockPlusPlugin;
import io.appmetrica.analytics.flutter.AppMetricaPlugin;
import io.crossingthestreams.flutterappauth.FlutterAppauthPlugin;
import io.flutter.Log;
import io.flutter.embedding.engine.FlutterEngine;
import io.flutter.plugins.firebase.analytics.FlutterFirebaseAnalyticsPlugin;
import io.flutter.plugins.firebase.auth.FlutterFirebaseAuthPlugin;
import io.flutter.plugins.firebase.core.FlutterFirebaseCorePlugin;
import io.flutter.plugins.firebase.firebaseremoteconfig.FirebaseRemoteConfigPlugin;
import io.flutter.plugins.firebase.messaging.FlutterFirebaseMessagingPlugin;
import io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin;
import io.flutter.plugins.flutter_plugin_android_lifecycle.FlutterAndroidLifecyclePlugin;
import io.flutter.plugins.googlesignin.GoogleSignInPlugin;
import io.flutter.plugins.imagepicker.ImagePickerPlugin;
import io.flutter.plugins.inapppurchase.InAppPurchasePlugin;
import io.flutter.plugins.pathprovider.PathProviderPlugin;
import io.flutter.plugins.sharedpreferences.SharedPreferencesPlugin;
import io.flutter.plugins.urllauncher.UrlLauncherPlugin;
import io.flutter.plugins.videoplayer.VideoPlayerPlugin;
import io.flutter.plugins.webviewflutter.WebViewFlutterPlugin;
import io.github.ponnamkarthik.toast.fluttertoast.FlutterToastPlugin;
import io.sentry.flutter.SentryFlutterPlugin;
import ru.innim.my_target_flutter.MyTargetFlutterPlugin;
import ru.rustore.flutter_rustore_review.FlutterRustoreReviewPlugin;
import xyz.luan.audioplayers.AudioplayersPlugin;

/* JADX INFO: loaded from: classes7.dex */
public final class GeneratedPluginRegistrant {
    private static final String TAG = "GeneratedPluginRegistrant";

    public static void registerWith(FlutterEngine flutterEngine) {
        try {
            flutterEngine.getPlugins().add(new AdjustSdk());
        } catch (Exception e) {
            Log.e(TAG, "Error registering plugin adjust_sdk, com.adjust.sdk.flutter.AdjustSdk", e);
        }
        try {
            flutterEngine.getPlugins().add(new AppMetricaPlugin());
        } catch (Exception e2) {
            Log.e(TAG, "Error registering plugin appmetrica_plugin, io.appmetrica.analytics.flutter.AppMetricaPlugin", e2);
        }
        try {
            flutterEngine.getPlugins().add(new AsyncZipPlugin());
        } catch (Exception e3) {
            Log.e(TAG, "Error registering plugin async_zip, ch.perron2.async_zip.AsyncZipPlugin", e3);
        }
        try {
            flutterEngine.getPlugins().add(new AudioplayersPlugin());
        } catch (Exception e4) {
            Log.e(TAG, "Error registering plugin audioplayers_android, xyz.luan.audioplayers.AudioplayersPlugin", e4);
        }
        try {
            flutterEngine.getPlugins().add(new ConnectivityPlugin());
        } catch (Exception e5) {
            Log.e(TAG, "Error registering plugin connectivity_plus, dev.fluttercommunity.plus.connectivity.ConnectivityPlugin", e5);
        }
        try {
            flutterEngine.getPlugins().add(new DeviceInfoPlusPlugin());
        } catch (Exception e6) {
            Log.e(TAG, "Error registering plugin device_info_plus, dev.fluttercommunity.plus.device_info.DeviceInfoPlusPlugin", e6);
        }
        try {
            flutterEngine.getPlugins().add(new DiskSpacePlusPlugin());
        } catch (Exception e7) {
            Log.e(TAG, "Error registering plugin disk_space_plus, com.piccmaq.disk_space_plus.DiskSpacePlusPlugin", e7);
        }
        try {
            flutterEngine.getPlugins().add(new EmulatorCheckerPlugin());
        } catch (Exception e8) {
            Log.e(TAG, "Error registering plugin emulator_checker, com.example.emulator_checker.EmulatorCheckerPlugin", e8);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterFirebaseAnalyticsPlugin());
        } catch (Exception e9) {
            Log.e(TAG, "Error registering plugin firebase_analytics, io.flutter.plugins.firebase.analytics.FlutterFirebaseAnalyticsPlugin", e9);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterFirebaseAuthPlugin());
        } catch (Exception e10) {
            Log.e(TAG, "Error registering plugin firebase_auth, io.flutter.plugins.firebase.auth.FlutterFirebaseAuthPlugin", e10);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterFirebaseCorePlugin());
        } catch (Exception e11) {
            Log.e(TAG, "Error registering plugin firebase_core, io.flutter.plugins.firebase.core.FlutterFirebaseCorePlugin", e11);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterFirebaseMessagingPlugin());
        } catch (Exception e12) {
            Log.e(TAG, "Error registering plugin firebase_messaging, io.flutter.plugins.firebase.messaging.FlutterFirebaseMessagingPlugin", e12);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterFirebasePerformancePlugin());
        } catch (Exception e13) {
            Log.e(TAG, "Error registering plugin firebase_performance, io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin", e13);
        }
        try {
            flutterEngine.getPlugins().add(new FirebaseRemoteConfigPlugin());
        } catch (Exception e14) {
            Log.e(TAG, "Error registering plugin firebase_remote_config, io.flutter.plugins.firebase.firebaseremoteconfig.FirebaseRemoteConfigPlugin", e14);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterAppauthPlugin());
        } catch (Exception e15) {
            Log.e(TAG, "Error registering plugin flutter_appauth, io.crossingthestreams.flutterappauth.FlutterAppauthPlugin", e15);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterArchivePlugin());
        } catch (Exception e16) {
            Log.e(TAG, "Error registering plugin flutter_archive, com.kineapps.flutterarchive.FlutterArchivePlugin", e16);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterForegroundTaskPlugin());
        } catch (Exception e17) {
            Log.e(TAG, "Error registering plugin flutter_foreground_task, com.pravera.flutter_foreground_task.FlutterForegroundTaskPlugin", e17);
        }
        try {
            flutterEngine.getPlugins().add(new InAppWebViewFlutterPlugin());
        } catch (Exception e18) {
            Log.e(TAG, "Error registering plugin flutter_inappwebview_android, com.pichillilorenzo.flutter_inappwebview_android.InAppWebViewFlutterPlugin", e18);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterAndroidLifecyclePlugin());
        } catch (Exception e19) {
            Log.e(TAG, "Error registering plugin flutter_plugin_android_lifecycle, io.flutter.plugins.flutter_plugin_android_lifecycle.FlutterAndroidLifecyclePlugin", e19);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterRustoreReviewPlugin());
        } catch (Exception e20) {
            Log.e(TAG, "Error registering plugin flutter_rustore_review, ru.rustore.flutter_rustore_review.FlutterRustoreReviewPlugin", e20);
        }
        try {
            flutterEngine.getPlugins().add(new FlutterToastPlugin());
        } catch (Exception e21) {
            Log.e(TAG, "Error registering plugin fluttertoast, io.github.ponnamkarthik.toast.fluttertoast.FlutterToastPlugin", e21);
        }
        try {
            flutterEngine.getPlugins().add(new GoogleSignInPlugin());
        } catch (Exception e22) {
            Log.e(TAG, "Error registering plugin google_sign_in_android, io.flutter.plugins.googlesignin.GoogleSignInPlugin", e22);
        }
        try {
            flutterEngine.getPlugins().add(new ImagePickerPlugin());
        } catch (Exception e23) {
            Log.e(TAG, "Error registering plugin image_picker_android, io.flutter.plugins.imagepicker.ImagePickerPlugin", e23);
        }
        try {
            flutterEngine.getPlugins().add(new InAppPurchasePlugin());
        } catch (Exception e24) {
            Log.e(TAG, "Error registering plugin in_app_purchase_android, io.flutter.plugins.inapppurchase.InAppPurchasePlugin", e24);
        }
        try {
            flutterEngine.getPlugins().add(new InAppReviewPlugin());
        } catch (Exception e25) {
            Log.e(TAG, "Error registering plugin in_app_review, dev.britannio.in_app_review.InAppReviewPlugin", e25);
        }
        try {
            flutterEngine.getPlugins().add(new JniPlugin());
        } catch (Exception e26) {
            Log.e(TAG, "Error registering plugin jni, com.github.dart_lang.jni.JniPlugin", e26);
        }
        try {
            flutterEngine.getPlugins().add(new MyTargetFlutterPlugin());
        } catch (Exception e27) {
            Log.e(TAG, "Error registering plugin my_target_flutter, ru.innim.my_target_flutter.MyTargetFlutterPlugin", e27);
        }
        try {
            flutterEngine.getPlugins().add(new PackageInfoPlugin());
        } catch (Exception e28) {
            Log.e(TAG, "Error registering plugin package_info_plus, dev.fluttercommunity.plus.packageinfo.PackageInfoPlugin", e28);
        }
        try {
            flutterEngine.getPlugins().add(new PathProviderPlugin());
        } catch (Exception e29) {
            Log.e(TAG, "Error registering plugin path_provider_android, io.flutter.plugins.pathprovider.PathProviderPlugin", e29);
        }
        try {
            flutterEngine.getPlugins().add(new PermissionHandlerPlugin());
        } catch (Exception e30) {
            Log.e(TAG, "Error registering plugin permission_handler_android, com.baseflow.permissionhandler.PermissionHandlerPlugin", e30);
        }
        try {
            flutterEngine.getPlugins().add(new PushwooshPlugin());
        } catch (Exception e31) {
            Log.e(TAG, "Error registering plugin pushwoosh_flutter, com.pushwoosh.plugin.PushwooshPlugin", e31);
        }
        try {
            flutterEngine.getPlugins().add(new SaverGalleryPlugin());
        } catch (Exception e32) {
            Log.e(TAG, "Error registering plugin saver_gallery, com.mhz.savegallery.saver_gallery.SaverGalleryPlugin", e32);
        }
        try {
            flutterEngine.getPlugins().add(new SensorsPlugin());
        } catch (Exception e33) {
            Log.e(TAG, "Error registering plugin sensors_plus, dev.fluttercommunity.plus.sensors.SensorsPlugin", e33);
        }
        try {
            flutterEngine.getPlugins().add(new SentryFlutterPlugin());
        } catch (Exception e34) {
            Log.e(TAG, "Error registering plugin sentry_flutter, io.sentry.flutter.SentryFlutterPlugin", e34);
        }
        try {
            flutterEngine.getPlugins().add(new SharePlusPlugin());
        } catch (Exception e35) {
            Log.e(TAG, "Error registering plugin share_plus, dev.fluttercommunity.plus.share.SharePlusPlugin", e35);
        }
        try {
            flutterEngine.getPlugins().add(new SharedPreferencesPlugin());
        } catch (Exception e36) {
            Log.e(TAG, "Error registering plugin shared_preferences_android, io.flutter.plugins.sharedpreferences.SharedPreferencesPlugin", e36);
        }
        try {
            flutterEngine.getPlugins().add(new SignInWithApplePlugin());
        } catch (Exception e37) {
            Log.e(TAG, "Error registering plugin sign_in_with_apple, com.aboutyou.dart_packages.sign_in_with_apple.SignInWithApplePlugin", e37);
        }
        try {
            flutterEngine.getPlugins().add(new SqflitePlugin());
        } catch (Exception e38) {
            Log.e(TAG, "Error registering plugin sqflite_android, com.tekartik.sqflite.SqflitePlugin", e38);
        }
        try {
            flutterEngine.getPlugins().add(new UnityAdsPlugin());
        } catch (Exception e39) {
            Log.e(TAG, "Error registering plugin unity_ads_plugin, com.rebeloid.unity_ads.UnityAdsPlugin", e39);
        }
        try {
            flutterEngine.getPlugins().add(new UrlLauncherPlugin());
        } catch (Exception e40) {
            Log.e(TAG, "Error registering plugin url_launcher_android, io.flutter.plugins.urllauncher.UrlLauncherPlugin", e40);
        }
        try {
            flutterEngine.getPlugins().add(new VVideoCompressorPlugin());
        } catch (Exception e41) {
            Log.e(TAG, "Error registering plugin v_video_compressor, com.v_chat_sdk.v_video_compressor.VVideoCompressorPlugin", e41);
        }
        try {
            flutterEngine.getPlugins().add(new VibrationPlugin());
        } catch (Exception e42) {
            Log.e(TAG, "Error registering plugin vibration, com.benjaminabel.vibration.VibrationPlugin", e42);
        }
        try {
            flutterEngine.getPlugins().add(new VideoPlayerPlugin());
        } catch (Exception e43) {
            Log.e(TAG, "Error registering plugin video_player_android, io.flutter.plugins.videoplayer.VideoPlayerPlugin", e43);
        }
        try {
            flutterEngine.getPlugins().add(new VkidFlutterSdkPlugin());
        } catch (Exception e44) {
            Log.e(TAG, "Error registering plugin vkid_flutter_sdk, com.vk.vkid.flutter.vkid_flutter_sdk.VkidFlutterSdkPlugin", e44);
        }
        try {
            flutterEngine.getPlugins().add(new VpnDetectorPlugin());
        } catch (Exception e45) {
            Log.e(TAG, "Error registering plugin vpn_detector, com.aelahmar.vpn_detector.VpnDetectorPlugin", e45);
        }
        try {
            flutterEngine.getPlugins().add(new WakelockPlusPlugin());
        } catch (Exception e46) {
            Log.e(TAG, "Error registering plugin wakelock_plus, dev.fluttercommunity.plus.wakelock.WakelockPlusPlugin", e46);
        }
        try {
            flutterEngine.getPlugins().add(new WebViewFlutterPlugin());
        } catch (Exception e47) {
            Log.e(TAG, "Error registering plugin webview_flutter_android, io.flutter.plugins.webviewflutter.WebViewFlutterPlugin", e47);
        }
    }
}
