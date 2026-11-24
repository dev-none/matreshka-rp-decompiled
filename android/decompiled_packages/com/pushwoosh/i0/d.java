package com.pushwoosh.i0;

import android.app.Notification;
import android.net.Uri;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.VibrateType;

/* JADX INFO: loaded from: classes6.dex */
public interface d {
    String a();

    void a(Notification notification, int i, int i2, int i3);

    void a(Notification notification, Uri uri, boolean z);

    void a(Notification notification, VibrateType vibrateType, boolean z);

    void a(String str, String str2, String str3, PushMessage pushMessage);
}
