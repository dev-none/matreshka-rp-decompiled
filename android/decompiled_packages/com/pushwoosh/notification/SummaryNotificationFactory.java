package com.pushwoosh.notification;

import android.app.Notification;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import androidx.core.app.NotificationCompat;
import com.pushwoosh.h0.f;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.builder.AppIconHelper;
import com.pushwoosh.notification.builder.NotificationBuilderManager;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public abstract class SummaryNotificationFactory {
    public static String NEED_TO_ADD_NEW_NOTIFICATION_CHANNEL_ID = "pushwoosh_need_to_add_new_notification_channel_id";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f5287a;
    private final com.pushwoosh.i0.b b;

    SummaryNotificationFactory() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        this.f5287a = applicationContext;
        this.b = new com.pushwoosh.i0.b(applicationContext);
    }

    public static Intent getNotificationIntent() {
        Intent intent = new Intent(AndroidPlatformModule.getApplicationContext(), (Class<?>) NotificationOpenActivity.class);
        intent.setAction("summary-" + System.currentTimeMillis());
        return intent;
    }

    public boolean autoCancelSummaryNotification() {
        return false;
    }

    protected final Context getApplicationContext() {
        return this.f5287a;
    }

    public final Notification onGenerateSummaryNotification(int i, String str, String str2) {
        if (!shouldGenerateSummaryNotification()) {
            return null;
        }
        if (getApplicationContext() == null) {
            PWLog.error("onGenerateSummaryNotification Incorrect state of app. Context is null");
            return null;
        }
        int iSummaryNotificationIconResId = summaryNotificationIconResId();
        if (iSummaryNotificationIconResId == -1) {
            iSummaryNotificationIconResId = NotificationUtils.tryToGetIconFormStringOrGetFromApplication(null);
        }
        int iSummaryNotificationColor = summaryNotificationColor();
        if (iSummaryNotificationColor == -1) {
            iSummaryNotificationColor = RepositoryModule.getNotificationPreferences().iconBackgroundColor().get();
        }
        if (TextUtils.equals(str, NEED_TO_ADD_NEW_NOTIFICATION_CHANNEL_ID)) {
            str = this.b.f5097a.a();
        }
        f fVar = (f) NotificationBuilderManager.createSummaryNotificationBuilder(getApplicationContext(), str);
        fVar.f5094a.setSmallIcon(iSummaryNotificationIconResId);
        if (iSummaryNotificationIconResId == -1 && AndroidPlatformModule.getApplicationContext() != null) {
            fVar.f5094a.setSmallIcon(AppIconHelper.getAppIconResId(AndroidPlatformModule.getApplicationContext()));
        }
        fVar.f5094a.setColor(iSummaryNotificationColor);
        fVar.f5094a.setNumber(i);
        fVar.f5094a.setAutoCancel(autoCancelSummaryNotification());
        fVar.f5094a.setGroup(str2);
        fVar.f5094a.setGroupSummary(true);
        String strSummaryNotificationMessage = summaryNotificationMessage(i);
        if (!TextUtils.isEmpty(strSummaryNotificationMessage)) {
            fVar.f5094a.setStyle(new NotificationCompat.InboxStyle().setSummaryText(strSummaryNotificationMessage));
        }
        return fVar.f5094a.build();
    }

    public boolean shouldGenerateSummaryNotification() {
        return true;
    }

    public abstract int summaryNotificationColor();

    public abstract int summaryNotificationIconResId();

    public abstract String summaryNotificationMessage(int i);
}
