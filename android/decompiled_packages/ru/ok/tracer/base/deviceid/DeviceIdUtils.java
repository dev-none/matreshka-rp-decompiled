package ru.ok.tracer.base.deviceid;

import android.content.Context;
import android.content.SharedPreferences;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import ru.ok.tracer.base.io.FileUtils;

/* JADX INFO: compiled from: DeviceIdUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u000e\u0010\u0007\u001a\u00020\u00012\u0006\u0010\b\u001a\u00020\t\u001a\u0010\u0010\n\u001a\u00020\u00012\u0006\u0010\b\u001a\u00020\tH\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\"\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0001X\u0082\u000e¢\u0006\u0002\n\u0000\"\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"FILE_DEVICE_ID", "", "KEY_DEVICE_ID", "NULL_UUID", "cachedDeviceId", "deviceIdLock", "Ljava/lang/Object;", "getDeviceId", "context", "Landroid/content/Context;", "loadDeviceId", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class DeviceIdUtils {
    private static final String FILE_DEVICE_ID = "device_id.txt";
    private static final String KEY_DEVICE_ID = "device_id";
    public static final String NULL_UUID = "00000000-0000-0000-0000-000000000000";
    private static volatile String cachedDeviceId;
    private static final Object deviceIdLock = new Object();

    public static final String getDeviceId(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String str = cachedDeviceId;
        if (str != null) {
            return str;
        }
        synchronized (deviceIdLock) {
            String str2 = cachedDeviceId;
            if (str2 != null) {
                return str2;
            }
            Context applicationContext = context.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
            String strLoadDeviceId = loadDeviceId(applicationContext);
            cachedDeviceId = strLoadDeviceId;
            return strLoadDeviceId;
        }
    }

    /* JADX WARN: Code duplicated, block: B:17:0x0055 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:18:0x0056 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:19:0x0058  */
    /* JADX WARN: Code duplicated, block: B:20:0x0066  */
    /* JADX WARN: Code duplicated, block: B:25:0x008d  */
    private static final String loadDeviceId(Context context) {
        String string;
        String string2;
        FileOutputStream fileOutputStream;
        SharedPreferences sharedPreferences = context.getSharedPreferences("tracer", 0);
        String string3 = sharedPreferences.getString(KEY_DEVICE_ID, null);
        String str = string3 == null ? "00000000-0000-0000-0000-000000000000" : string3;
        try {
            File filesDir = context.getFilesDir();
            Intrinsics.checkNotNullExpressionValue(filesDir, "context.filesDir");
            File fileResolve = FilesKt.resolve(FileUtils.mkdirsChecked(FilesKt.resolve(filesDir, "tracer")), FILE_DEVICE_ID);
            if (!fileResolve.exists()) {
            } else {
                try {
                    string = StringsKt.trim((CharSequence) FilesKt.readText$default(fileResolve, null, 1, null)).toString();
                    if (string.length() <= 0) {
                    }
                } catch (IOException unused) {
                }
                if (string != null) {
                    return string;
                }
                if (string3 == null) {
                    string2 = UUID.randomUUID().toString();
                    Intrinsics.checkNotNullExpressionValue(string2, "randomUUID().toString()");
                } else {
                    string2 = string3;
                }
                fileOutputStream = new FileOutputStream(fileResolve);
                try {
                    FileOutputStream fileOutputStream2 = fileOutputStream;
                    byte[] bytes = string2.getBytes(Charsets.UTF_8);
                    Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
                    fileOutputStream2.write(bytes);
                    fileOutputStream2.getFD().sync();
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(fileOutputStream, null);
                    if (string3 != null) {
                        sharedPreferences.edit().remove(KEY_DEVICE_ID).apply();
                    }
                    return string2;
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(fileOutputStream, th);
                        throw th2;
                    }
                }
            }
            string = null;
            if (string != null) {
                return string;
            }
            if (string3 == null) {
                string2 = UUID.randomUUID().toString();
                Intrinsics.checkNotNullExpressionValue(string2, "randomUUID().toString()");
            } else {
                string2 = string3;
            }
            fileOutputStream = new FileOutputStream(fileResolve);
            FileOutputStream fileOutputStream3 = fileOutputStream;
            byte[] bytes2 = string2.getBytes(Charsets.UTF_8);
            Intrinsics.checkNotNullExpressionValue(bytes2, "this as java.lang.String).getBytes(charset)");
            fileOutputStream3.write(bytes2);
            fileOutputStream3.getFD().sync();
            Unit unit2 = Unit.INSTANCE;
            CloseableKt.closeFinally(fileOutputStream, null);
            if (string3 != null) {
                sharedPreferences.edit().remove(KEY_DEVICE_ID).apply();
            }
            return string2;
        } catch (IOException unused2) {
            return str;
        }
    }
}
