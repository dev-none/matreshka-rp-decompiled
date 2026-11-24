package com.pushwoosh.h0;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.graphics.Bitmap;
import android.os.Bundle;
import androidx.core.app.NotificationCompat;
import com.pushwoosh.internal.platform.AndroidPlatformModule;

/* JADX INFO: loaded from: classes6.dex */
public final class b implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NotificationCompat.Builder f5091a;

    public b(Context context, String str) {
        this.f5091a = new NotificationCompat.Builder(context, str);
    }

    @Override // com.pushwoosh.h0.a
    public final a a(CharSequence charSequence) {
        this.f5091a.setContentText(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a b(CharSequence charSequence) {
        this.f5091a.setContentTitle(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a c(CharSequence charSequence) {
        this.f5091a.setTicker(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(long j) {
        this.f5091a.setWhen(j);
        this.f5091a.setShowWhen(true);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a b(int i) {
        if (i == -1) {
            ApplicationInfo applicationInfo = AndroidPlatformModule.getAppInfoProvider().getApplicationInfo();
            i = applicationInfo == null ? -1 : applicationInfo.icon;
        }
        if (i == -1) {
            return this;
        }
        this.f5091a.setSmallIcon(i);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a c(int i) {
        this.f5091a.setPriority(i);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bitmap bitmap, CharSequence charSequence) {
        NotificationCompat.Style styleBigText;
        if (bitmap != null) {
            styleBigText = new NotificationCompat.BigPictureStyle().bigPicture(bitmap).setSummaryText(charSequence);
        } else {
            styleBigText = new NotificationCompat.BigTextStyle().bigText(charSequence);
        }
        this.f5091a.setStyle(styleBigText);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Integer num) {
        if (num != null) {
            this.f5091a.setColor(num.intValue());
        }
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bitmap bitmap) {
        if (bitmap != null) {
            this.f5091a.setLargeIcon(bitmap);
        }
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i) {
        this.f5091a.setVisibility(i);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i, String str, PendingIntent pendingIntent) {
        this.f5091a.addAction(new NotificationCompat.Action(i, str, pendingIntent));
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i, int i2, int i3) {
        this.f5091a.setLights(i, i2, i3);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bundle bundle) {
        this.f5091a.setExtras(bundle);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(String str) {
        this.f5091a.setGroup(str);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final Notification a() {
        return this.f5091a.build();
    }
}
