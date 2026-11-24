package io.flutter.plugins.firebase.messaging;

import android.app.Activity;
import androidx.core.app.ActivityCompat;
import androidx.media3.extractor.ts.PsExtractor;
import io.flutter.plugin.common.PluginRegistry;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes7.dex */
class FlutterFirebasePermissionManager implements PluginRegistry.RequestPermissionsResultListener {
    private static final String REQUEST_IN_PROGRESS_ERROR = "A request for permissions is already running, please wait for it to finish before doing another request.";
    private RequestPermissionsSuccessCallback successCallback;
    private final Object requestLock = new Object();
    private final int permissionCode = PsExtractor.VIDEO_STREAM_MASK;
    private boolean requestInProgress = false;

    @FunctionalInterface
    interface RequestPermissionsSuccessCallback {
        void onSuccess(int i);
    }

    FlutterFirebasePermissionManager() {
    }

    @Override // io.flutter.plugin.common.PluginRegistry.RequestPermissionsResultListener
    public boolean onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        RequestPermissionsSuccessCallback requestPermissionsSuccessCallback;
        synchronized (this.requestLock) {
            int i2 = 0;
            if (this.requestInProgress && i == 240 && (requestPermissionsSuccessCallback = this.successCallback) != null) {
                this.successCallback = null;
                this.requestInProgress = false;
                if (iArr.length > 0 && iArr[0] == 0) {
                    i2 = 1;
                }
                requestPermissionsSuccessCallback.onSuccess(i2);
                return true;
            }
            return false;
        }
    }

    private boolean setRequestInProgress(RequestPermissionsSuccessCallback requestPermissionsSuccessCallback) {
        synchronized (this.requestLock) {
            if (this.requestInProgress) {
                return false;
            }
            this.requestInProgress = true;
            this.successCallback = requestPermissionsSuccessCallback;
            return true;
        }
    }

    public void requestPermissions(Activity activity, RequestPermissionsSuccessCallback requestPermissionsSuccessCallback, ErrorCallback errorCallback) {
        if (activity == null) {
            errorCallback.onError("Unable to detect current Android Activity.");
        } else {
            if (!setRequestInProgress(requestPermissionsSuccessCallback)) {
                errorCallback.onError(REQUEST_IN_PROGRESS_ERROR);
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add("android.permission.POST_NOTIFICATIONS");
            ActivityCompat.requestPermissions(activity, (String[]) arrayList.toArray(new String[0]), PsExtractor.VIDEO_STREAM_MASK);
        }
    }
}
