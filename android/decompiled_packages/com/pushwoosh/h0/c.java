package com.pushwoosh.h0;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.os.Bundle;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.notification.builder.AppIconHelper;

/* JADX INFO: loaded from: classes6.dex */
public final class c implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Notification.Builder f5092a;

    public c(Context context, String str) {
        this.f5092a = new Notification.Builder(context, str);
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i, int i2, int i3) {
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(CharSequence charSequence) {
        this.f5092a.setContentText(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a b(CharSequence charSequence) {
        this.f5092a.setContentTitle(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a c(CharSequence charSequence) {
        this.f5092a.setTicker(charSequence);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(long j) {
        this.f5092a.setWhen(j);
        this.f5092a.setShowWhen(true);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a b(int i) {
        this.f5092a.setSmallIcon(i);
        if (i == -1) {
            this.f5092a.setSmallIcon(AppIconHelper.getAppIcon(AndroidPlatformModule.getApplicationContext(), AndroidPlatformModule.getAppInfoProvider().getPackageName()));
        }
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a c(int i) {
        this.f5092a.setPriority(i);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bitmap bitmap, CharSequence charSequence) {
        Notification.Style styleBigText;
        if (bitmap != null) {
            styleBigText = new Notification.BigPictureStyle().bigPicture(bitmap).setSummaryText(charSequence);
        } else {
            styleBigText = new Notification.BigTextStyle().bigText(charSequence);
        }
        this.f5092a.setStyle(styleBigText);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Integer num) {
        if (num != null) {
            this.f5092a.setColor(num.intValue());
        }
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bitmap bitmap) {
        if (bitmap != null) {
            this.f5092a.setLargeIcon(bitmap);
        }
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i) {
        this.f5092a.setVisibility(i);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(int i, String str, PendingIntent pendingIntent) {
        this.f5092a.addAction(new Notification.Action(i, str, pendingIntent));
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(Bundle bundle) {
        this.f5092a.setExtras(bundle);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final a a(String str) {
        this.f5092a.setGroup(str);
        return this;
    }

    @Override // com.pushwoosh.h0.a
    public final Notification a() {
        return this.f5092a.build();
    }
}
