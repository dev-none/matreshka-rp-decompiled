package com.pushwoosh.notification;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.a0;
import com.pushwoosh.m0.p;
import com.pushwoosh.notification.builder.NotificationBuilderManager;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationIntentHelper {
    public static final String EXTRA_GROUP_ID = "group_id";
    public static final String EXTRA_IS_DELETE_INTENT = "is_delete_intent";
    public static final String EXTRA_IS_SUMMARY_NOTIFICATION = "is_summary_notification";
    public static final String EXTRA_NOTIFICATION_BUNDLE = "pushBundle";
    public static final String EXTRA_NOTIFICATION_ROW_ID = "row_id";
    public static final String EXTRA_PUSHWOOSH_NOTIFICATION_ID = "pushwoosh_notification_id";
    public static final int SUMMARY_GROUP_ID = 20191017;

    private static void a(Intent intent) {
        try {
            PushwooshPlatform.getInstance().notificationService().handleNotificationCanceled(intent.getBundleExtra(EXTRA_NOTIFICATION_BUNDLE));
        } catch (Exception e) {
            PWLog.exception(e);
        }
        if (intent.getBooleanExtra(EXTRA_IS_SUMMARY_NOTIFICATION, false)) {
            BackgroundExecutor.execute(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationIntentHelper.a();
                }
            });
        } else {
            a(intent.getLongExtra(EXTRA_NOTIFICATION_ROW_ID, 0L), intent.getIntExtra("group_id", 0));
        }
    }

    private static void b(Intent intent) {
        try {
            PushwooshPlatform.getInstance().notificationService().handleNotification(intent.getBundleExtra(EXTRA_NOTIFICATION_BUNDLE));
        } catch (Exception e) {
            PWLog.exception(e);
        }
        a(intent.getLongExtra(EXTRA_NOTIFICATION_ROW_ID, 0L), intent.getIntExtra("group_id", 0));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void c(Intent intent, Runnable runnable) {
        b(intent);
        runnable.run();
    }

    public static void processIntent(Context context, Intent intent, Runnable runnable) {
        if (intent == null) {
            runnable.run();
            return;
        }
        if (intent.getBooleanExtra(EXTRA_IS_DELETE_INTENT, false)) {
            PWLog.debug("NotificationIntentHelper", "processIntent: delete intent");
            a(intent);
            runnable.run();
            return;
        }
        if (intent.getStringExtra("pushwoosh_button_id") == null) {
            if (intent.getBooleanExtra(EXTRA_IS_SUMMARY_NOTIFICATION, false)) {
                PWLog.debug("NotificationIntentHelper", "processIntent: summary notification click");
                a(intent, runnable);
                return;
            } else {
                PWLog.debug("NotificationIntentHelper", "processIntent: single notification click");
                b(intent);
                runnable.run();
                return;
            }
        }
        PWLog.debug("NotificationIntentHelper", "processIntent: action button click");
        try {
            NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
            if (notificationManager != null) {
                notificationManager.cancel(intent.getStringExtra("pushwoosh_button_notification_tag"), intent.getIntExtra("pushwoosh_button_notification_id", 0));
            }
        } catch (Exception e) {
            PWLog.exception(e);
        }
        try {
            PushwooshPlatform.getInstance().notificationService().handleNotificationButton(intent.getBundleExtra(EXTRA_NOTIFICATION_BUNDLE), intent.getStringExtra("pushwoosh_button_id"));
        } catch (Exception e2) {
            PWLog.exception(e2);
        }
        a(intent.getLongExtra(EXTRA_NOTIFICATION_ROW_ID, 0L), intent.getIntExtra("group_id", 0));
        runnable.run();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(Intent intent, Runnable runnable) {
        b(intent);
        runnable.run();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(long j, int i) {
        String strA;
        List<StatusBarNotification> activeNotificationsForGroup;
        String strA2 = null;
        if (j > 0) {
            p pVar = (p) RepositoryModule.getPushBundleStorage();
            strA = pVar.a(j);
            try {
                pVar.a("groupPushBundles", j);
            } catch (Throwable th) {
                PWLog.error("NotificationIntentHelper", "Failed to remove group push bundle row " + j, th);
            }
        } else {
            strA = null;
        }
        if (strA != null || i <= 0) {
            strA2 = strA;
        } else {
            try {
                strA2 = ((a0) RepositoryModule.getSummaryNotificationStorage()).a(i);
            } catch (com.pushwoosh.c.b unused) {
            }
        }
        if (strA2 == null || SummaryNotificationUtils.getNotificationIdForGroup(strA2) == -1 || (activeNotificationsForGroup = NotificationBuilderManager.getActiveNotificationsForGroup(strA2)) == null) {
            return;
        }
        if (activeNotificationsForGroup.isEmpty()) {
            NotificationBuilderManager.cancelGroupSummary(strA2);
            return;
        }
        Notification summaryNotification = SummaryNotificationUtils.getSummaryNotification(activeNotificationsForGroup.size(), SummaryNotificationFactory.NEED_TO_ADD_NEW_NOTIFICATION_CHANNEL_ID, strA2);
        if (summaryNotification == null) {
            return;
        }
        SummaryNotificationUtils.fireSummaryNotification(summaryNotification);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a() {
        ((p) RepositoryModule.getPushBundleStorage()).b();
    }

    private static void a(final Intent intent, final Runnable runnable) {
        final int intExtra = intent.getIntExtra("group_id", 0);
        if (intExtra != 0) {
            BackgroundExecutor.execute(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationIntentHelper.a(intExtra, intent, runnable);
                }
            });
        } else {
            runnable.run();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(int i, final Intent intent, final Runnable runnable) {
        String strA;
        try {
            try {
                strA = ((a0) RepositoryModule.getSummaryNotificationStorage()).a(i);
            } catch (com.pushwoosh.c.b unused) {
                strA = null;
            }
            if (strA == null) {
                PWLog.warn("NotificationIntentHelper", "Group ID not found for summary notification: " + i);
                BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda3
                    @Override // java.lang.Runnable
                    public final void run() {
                        NotificationIntentHelper.b(intent, runnable);
                    }
                });
                return;
            }
            final List listA = a(strA);
            NotificationBuilderManager.cancelLastStatusBarNotificationForGroup(strA);
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationIntentHelper.a(listA, intent, runnable);
                }
            });
        } catch (Throwable th) {
            PWLog.exception(th);
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda5
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationIntentHelper.c(intent, runnable);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(List list, Intent intent, Runnable runnable) {
        if (!list.isEmpty()) {
            try {
                PushwooshPlatform.getInstance().notificationService().handleNotificationGroup(list);
            } catch (Exception e) {
                PWLog.exception(e);
            }
        } else {
            b(intent);
        }
        runnable.run();
    }

    private static void a(final long j, final int i) {
        if (j > 0 || i > 0) {
            BackgroundExecutor.execute(new Runnable() { // from class: com.pushwoosh.notification.NotificationIntentHelper$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationIntentHelper.b(j, i);
                }
            });
        }
    }

    private static List a(String str) {
        ArrayList arrayListA = ((p) RepositoryModule.getPushBundleStorage()).a();
        if (arrayListA.isEmpty()) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        Iterator it = arrayListA.iterator();
        while (it.hasNext()) {
            PushMessage pushMessage = new PushMessage((Bundle) it.next());
            if (str.equals(pushMessage.getGroupId())) {
                arrayList.add(pushMessage);
            }
        }
        return arrayList;
    }
}
