package com.piccmaq.disk_space_plus;

import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import androidx.core.app.NotificationCompat;
import com.tekartik.sqflite.Constant;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MethodHandlerImpl.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\b\u0010\n\u001a\u00020\u000bH\u0002J\b\u0010\f\u001a\u00020\rH\u0002J\u0010\u0010\u000e\u001a\u00020\r2\u0006\u0010\u000f\u001a\u00020\u000bH\u0002J\b\u0010\u0010\u001a\u00020\rH\u0002¨\u0006\u0011"}, d2 = {"Lcom/piccmaq/disk_space_plus/MethodHandlerImpl;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "<init>", "()V", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", Constant.METHOD_GET_PLATFORM_VERSION, "", "getFreeDiskSpace", "", "getFreeDiskSpaceForPath", "path", "getTotalDiskSpace", "disk_space_plus_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MethodHandlerImpl implements MethodChannel.MethodCallHandler {
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (str != null) {
            switch (str.hashCode()) {
                case -1687221785:
                    if (str.equals("getFreeDiskSpaceForPath")) {
                        Object objArgument = call.argument("path");
                        Intrinsics.checkNotNull(objArgument);
                        result.success(Double.valueOf(getFreeDiskSpaceForPath((String) objArgument)));
                        return;
                    }
                    break;
                case -835310425:
                    if (str.equals("getFreeDiskSpace")) {
                        result.success(Double.valueOf(getFreeDiskSpace()));
                        return;
                    }
                    break;
                case 609971067:
                    if (str.equals("getTotalDiskSpace")) {
                        result.success(Double.valueOf(getTotalDiskSpace()));
                        return;
                    }
                    break;
                case 1385449135:
                    if (str.equals(Constant.METHOD_GET_PLATFORM_VERSION)) {
                        result.success(getPlatformVersion());
                        return;
                    }
                    break;
            }
        }
        result.notImplemented();
    }

    private final String getPlatformVersion() {
        return "Android " + Build.VERSION.RELEASE;
    }

    private final double getFreeDiskSpace() {
        StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
        return (statFs.getBlockSizeLong() * statFs.getAvailableBlocksLong()) / 1048576.0f;
    }

    private final double getFreeDiskSpaceForPath(String path) {
        StatFs statFs = new StatFs(path);
        return (statFs.getBlockSizeLong() * statFs.getAvailableBlocksLong()) / 1048576.0f;
    }

    private final double getTotalDiskSpace() {
        StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
        return (statFs.getBlockSizeLong() * statFs.getBlockCountLong()) / 1048576.0f;
    }
}
