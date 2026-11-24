package com.pushwoosh.i0;

import android.app.Notification;
import android.media.AudioManager;
import android.net.Uri;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.VibrateType;

/* JADX INFO: loaded from: classes6.dex */
public final class e implements d {
    @Override // com.pushwoosh.i0.d
    public final void a(String str, String str2, String str3, PushMessage pushMessage) {
    }

    @Override // com.pushwoosh.i0.d
    public final String a() {
        return "Stub!";
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, int i, int i2, int i3) {
        notification.ledARGB = i;
        notification.flags |= 1;
        notification.ledOnMS = i2;
        notification.ledOffMS = i3;
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, Uri uri, boolean z) {
        notification.sound = uri;
        if (z) {
            notification.defaults |= 1;
        }
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, VibrateType vibrateType, boolean z) {
        AudioManager audioManager = AndroidPlatformModule.getManagerProvider().getAudioManager();
        if (audioManager == null) {
            return;
        }
        if ((z || vibrateType == VibrateType.ALWAYS || (audioManager.getRingerMode() == 1 && vibrateType == VibrateType.DEFAULT_MODE)) && NotificationUtils.phoneHaveVibratePermission()) {
            notification.defaults |= 2;
        }
    }
}
