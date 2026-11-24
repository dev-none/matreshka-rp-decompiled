package com.pushwoosh.internal.utils;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.media.AudioManager;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.os.PowerManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationManagerCompat;
import androidx.core.content.FileProvider;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.a.a;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.notification.SoundType;
import com.pushwoosh.notification.builder.AppIconHelper;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.net.URL;
import java.net.URLConnection;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationUtils {
    private static Uri a(String str, int i) {
        Uri uriFromFile;
        String strSubstring = str.substring(str.lastIndexOf(47) + 1);
        File externalCacheDir = AndroidPlatformModule.getAppInfoProvider().getExternalCacheDir();
        if (externalCacheDir == null) {
            PWLog.error("Asset", "Missing external cache dir");
            return Uri.EMPTY;
        }
        String str2 = externalCacheDir.toString() + "/com.pushwoosh.noitfysnd";
        File file = new File(str2, strSubstring);
        File file2 = new File(str2);
        if (!file2.exists() && !file2.mkdir()) {
            PWLog.error("Asset", "Storage file not created");
            return Uri.EMPTY;
        }
        AssetManager assets = AndroidPlatformModule.getManagerProvider().getAssets();
        if (assets == null) {
            return Uri.EMPTY;
        }
        try {
            InputStream inputStreamOpen = assets.open(str);
            try {
                FileOutputStream fileOutputStream = new FileOutputStream(file);
                byte[] bArr = new byte[1024];
                while (true) {
                    int i2 = inputStreamOpen.read(bArr);
                    if (i2 == -1) {
                        break;
                    }
                    fileOutputStream.write(bArr, 0, i2);
                }
                fileOutputStream.flush();
                fileOutputStream.close();
                if (i != 1) {
                    Uri uriFromFile2 = Uri.fromFile(file);
                    inputStreamOpen.close();
                    return uriFromFile2;
                }
                Context applicationContext = AndroidPlatformModule.getApplicationContext();
                if (applicationContext != null) {
                    uriFromFile = FileProvider.getUriForFile(applicationContext, applicationContext.getPackageName() + ".provider", file);
                    applicationContext.grantUriPermission("com.android.systemui", uriFromFile, 1);
                } else {
                    uriFromFile = Uri.fromFile(file);
                }
                inputStreamOpen.close();
                return uriFromFile;
            } catch (Throwable th) {
                if (inputStreamOpen != null) {
                    try {
                        inputStreamOpen.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        } catch (Throwable th3) {
            PWLog.error("Asset", "File not found: assets/".concat(str), th3);
            return Uri.EMPTY;
        }
    }

    public static boolean areNotificationsEnabled() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return false;
        }
        if (Build.VERSION.SDK_INT >= 33) {
            return ActivityCompat.checkSelfPermission(applicationContext, "android.permission.POST_NOTIFICATIONS") == 0;
        }
        return NotificationManagerCompat.from(applicationContext).areNotificationsEnabled();
    }

    public static String getPathFileInAssets(String str) {
        return a(str, 2).getEncodedPath();
    }

    public static Bitmap getScaleBitmap(Bitmap bitmap, int i) {
        DisplayMetrics displayMetrics = AndroidPlatformModule.getResourceProvider().getDisplayMetrics();
        if (displayMetrics != null) {
            i = (int) (i * displayMetrics.density);
        }
        return Bitmap.createScaledBitmap(bitmap, (bitmap.getWidth() * i) / bitmap.getHeight(), i, true);
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0052  */
    /* JADX WARN: Code duplicated, block: B:22:0x0075  */
    /* JADX WARN: Code duplicated, block: B:24:0x008d A[RETURN] */
    /* JADX WARN: Instruction removed from duplicated block: B:20:0x0052, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:22:0x0075, please report this as an issue */
    public static Uri getSoundUri(String str) {
        int identifier;
        Uri uriA;
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        Uri defaultUri = RingtoneManager.getDefaultUri(2);
        AudioManager audioManager = AndroidPlatformModule.getManagerProvider().getAudioManager();
        if (audioManager == null) {
            identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(str, "raw");
            if (identifier != 0) {
                return Uri.parse("android.resource://" + AndroidPlatformModule.getAppInfoProvider().getPackageName() + "/" + identifier);
            }
            uriA = a("www/res/" + str, 1);
            if (uriA != Uri.EMPTY) {
                return uriA;
            }
        } else {
            if (notificationPreferences.soundType().get() != SoundType.ALWAYS && (audioManager.getRingerMode() != 2 || notificationPreferences.soundType().get() != SoundType.DEFAULT_MODE)) {
                return null;
            }
            if (str != null && !str.equals("default")) {
                if (str.length() == 0) {
                    return null;
                }
                identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(str, "raw");
                if (identifier != 0) {
                    return Uri.parse("android.resource://" + AndroidPlatformModule.getAppInfoProvider().getPackageName() + "/" + identifier);
                }
                uriA = a("www/res/" + str, 1);
                if (uriA != Uri.EMPTY) {
                    return uriA;
                }
            }
        }
        return defaultUri;
    }

    public static boolean isValidURL(String str) {
        try {
            new URL(str).toURI();
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean phoneHaveVibratePermission() {
        PackageManager packageManager = AndroidPlatformModule.getManagerProvider().getPackageManager();
        if (packageManager == null) {
            return false;
        }
        try {
            return packageManager.checkPermission("android.permission.VIBRATE", AndroidPlatformModule.getAppInfoProvider().getPackageName()) == 0;
        } catch (Exception e) {
            PWLog.error("error in checking vibrate permission", e);
        }
    }

    public static Notification rebuildWithDefaultValuesIfNeeded(Notification notification) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        boolean zIsEmpty = TextUtils.isEmpty(notification.getGroup());
        boolean z = notification.getSmallIcon() == null;
        boolean zIsEmpty2 = TextUtils.isEmpty(notification.getChannelId());
        if (!zIsEmpty && !zIsEmpty2 && !z) {
            return notification;
        }
        Notification.Builder builderRecoverBuilder = Notification.Builder.recoverBuilder(applicationContext, notification);
        if (zIsEmpty) {
            builderRecoverBuilder.setGroup(NotificationPrefs.DEFAULT_NOTIFICATION_GROUP);
        }
        if (z) {
            builderRecoverBuilder.setSmallIcon(AppIconHelper.getAppIcon(applicationContext, AndroidPlatformModule.getAppInfoProvider().getPackageName()));
        }
        if (zIsEmpty2) {
            NotificationManager notificationManager = (NotificationManager) applicationContext.getSystemService("notification");
            if (notificationManager.getNotificationChannel(NotificationPrefs.DEFAULT_CHANNEL_NAME) == null) {
                notificationManager.createNotificationChannel(new NotificationChannel(NotificationPrefs.DEFAULT_CHANNEL_NAME, NotificationPrefs.DEFAULT_CHANNEL_NAME, 3));
            }
            builderRecoverBuilder.setChannelId(NotificationPrefs.DEFAULT_CHANNEL_NAME);
        }
        return builderRecoverBuilder.build();
    }

    public static Bitmap tryGetBitmap(String str, int i) {
        return isValidURL(str) ? tryToGetBitmapFromInternet(str, i) : tryToGetBitmapFromDisk(getPathFileInAssets(str), i);
    }

    public static Bitmap tryToGetBitmapFromDisk(String str, int i) {
        DisplayMetrics displayMetrics;
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inPreferredConfig = Bitmap.Config.ARGB_8888;
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeFile(str, options);
        options.inJustDecodeBounds = false;
        options.inSampleSize = Math.round((-1 == i || (displayMetrics = AndroidPlatformModule.getResourceProvider().getDisplayMetrics()) == null) ? 1.0f : Math.max(options.outWidth, options.outHeight) / (i * displayMetrics.density));
        return BitmapFactory.decodeFile(str, options);
    }

    public static Bitmap tryToGetBitmapFromInternet(String str, int i) {
        DisplayMetrics displayMetrics;
        if (str == null) {
            return null;
        }
        try {
            URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection());
            if (RepositoryModule.getNotificationPreferences() == null || !RepositoryModule.getNotificationPreferences().handleNotificationsUsingWorkManager().get()) {
                uRLConnection.setConnectTimeout(2000);
            }
            uRLConnection.connect();
            byte[] bArr = new byte[1024];
            InputStream inputStream = uRLConnection.getInputStream();
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                while (true) {
                    try {
                        int i2 = inputStream.read(bArr);
                        if (i2 == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i2);
                    } catch (Throwable th) {
                        byteArrayOutputStream.close();
                        throw th;
                    }
                }
                byte[] byteArray = byteArrayOutputStream.toByteArray();
                byteArrayOutputStream.close();
                inputStream.close();
                BitmapFactory.Options options = new BitmapFactory.Options();
                options.inJustDecodeBounds = true;
                BitmapFactory.decodeByteArray(byteArray, 0, byteArray.length, options);
                float fMax = (-1 == i || (displayMetrics = AndroidPlatformModule.getResourceProvider().getDisplayMetrics()) == null) ? 1.0f : Math.max(options.outWidth, options.outHeight) / (i * displayMetrics.density);
                options.inJustDecodeBounds = false;
                options.inSampleSize = Math.round(fMax);
                return BitmapFactory.decodeByteArray(byteArray, 0, byteArray.length, options);
            } catch (Throwable th2) {
                inputStream.close();
                throw th2;
            }
        } catch (Throwable th3) {
            PWLog.error("Can't load image: ".concat(str), th3);
            return null;
        }
    }

    public static int tryToGetIconFormStringOrGetFromApplication(String str) {
        int identifier;
        int i;
        int identifier2 = AndroidPlatformModule.getResourceProvider().getIdentifier("pw_notification", "drawable");
        if (identifier2 == 0) {
            identifier2 = -1;
        }
        if (PushwooshPlatform.getInstance() != null && PushwooshPlatform.getInstance().getConfig() != null && (i = ((a) PushwooshPlatform.getInstance().getConfig()).B) != 0) {
            identifier2 = i;
        }
        return (str == null || (identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(str, "drawable")) == 0) ? identifier2 : identifier;
    }

    public static void turnScreenOn() {
        PowerManager powerManager;
        try {
            if (RepositoryModule.getNotificationPreferences().lightScreenOn().get() && (powerManager = AndroidPlatformModule.getManagerProvider().getPowerManager()) != null) {
                powerManager.newWakeLock(268435466, "Push").acquire(1000L);
            }
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }
}
