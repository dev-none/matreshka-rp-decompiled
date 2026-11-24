package com.pushwoosh.notification.builder;

import android.R;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import androidx.core.app.NotificationManagerCompat;
import androidx.media3.common.C;
import com.pushwoosh.h0.a;
import com.pushwoosh.h0.c;
import com.pushwoosh.h0.d;
import com.pushwoosh.h0.e;
import com.pushwoosh.h0.f;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.PendingIntentUtils;
import com.pushwoosh.m0.a0;
import com.pushwoosh.m0.j;
import com.pushwoosh.m0.p;
import com.pushwoosh.notification.Action;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.SummaryNotificationUtils;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationBuilderManager {
    public static void addAction(Context context, a aVar, Action action) {
        int identifier;
        if (action.getIcon() != null) {
            if (action.getIcon().startsWith("android.R.drawable")) {
                String strReplace = action.getIcon().replace("android.R.drawable.", "");
                identifier = 0;
                for (Field field : R.drawable.class.getFields()) {
                    try {
                        if (strReplace.equalsIgnoreCase(field.getName())) {
                            identifier = field.getInt(field);
                        }
                    } catch (Exception e) {
                        PWLog.exception(e);
                    }
                }
            } else {
                identifier = 0;
            }
            if (identifier == 0) {
                identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(action.getIcon(), "drawable");
            }
        } else {
            identifier = 0;
        }
        String title = action.getTitle();
        String intentAction = action.getIntentAction();
        Intent intent = new Intent();
        String url = action.getUrl();
        if (url != null) {
            intent = new Intent(intentAction, Uri.parse(url));
        }
        Class<?> actionClass = action.getActionClass();
        if (actionClass != null) {
            intent.setClass(context, actionClass);
        }
        if (intentAction != null) {
            intent.setAction(intentAction);
        }
        JSONObject extras = action.getExtras();
        if (extras != null) {
            Iterator<String> itKeys = extras.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                try {
                    intent.putExtra(next, extras.getString(next));
                } catch (JSONException e2) {
                    PWLog.exception(e2);
                }
            }
        }
        int i = d.f5093a[action.getType().ordinal()];
        PendingIntent service = i != 1 ? i != 2 ? PendingIntent.getService(context, 0, intent, PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE)) : PendingIntent.getBroadcast(context, 0, intent, PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE)) : PendingIntent.getActivity(context, 0, intent, PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE));
        if (service != null) {
            aVar.a(identifier, title, service);
        }
    }

    public static void addLED(a aVar, Integer num, int i, int i2) {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        boolean z = notificationPreferences.ledEnabled().get();
        int iIntValue = notificationPreferences.ledColor().get();
        if (z || num != null) {
            if (num != null) {
                iIntValue = num.intValue();
            }
            aVar.a(iIntValue, i, i2);
        }
    }

    public static void cancelGroupSummary(String str) {
        int notificationIdForGroup = SummaryNotificationUtils.getNotificationIdForGroup(str);
        if (notificationIdForGroup != -1) {
            getNotificationManager().cancel(notificationIdForGroup);
            try {
                ((a0) RepositoryModule.getSummaryNotificationStorage()).b(str);
            } catch (com.pushwoosh.c.a unused) {
                PWLog.error("Failed to remove entry for group id " + str + " from summaryNotificationStorage");
            }
        }
    }

    public static void cancelLastStatusBarNotificationForGroup(String str) throws Exception {
        com.pushwoosh.n0.a aVarA = ((p) RepositoryModule.getPushBundleStorage()).a(str);
        NotificationManager notificationManager = getNotificationManager();
        for (StatusBarNotification statusBarNotification : getActiveNotificationsForGroup(str)) {
            if (statusBarNotification.getId() == aVarA.f5270a) {
                statusBarNotification.getNotification().deleteIntent.send();
                notificationManager.cancel(aVarA.f5270a);
            }
        }
        if (getActiveNotifications().isEmpty()) {
            cancelGroupSummary(str);
        }
        ((p) RepositoryModule.getPushBundleStorage()).a("groupPushBundles", aVarA.b);
    }

    public static e createSummaryNotificationBuilder(Context context, String str) {
        return new f(context, str);
    }

    public static List<StatusBarNotification> getActiveNotifications() {
        ArrayList arrayList = new ArrayList();
        NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
        if (notificationManager == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return arrayList;
        }
        try {
            for (StatusBarNotification statusBarNotification : notificationManager.getActiveNotifications()) {
                boolean zIsGroupSummary = isGroupSummary(statusBarNotification);
                boolean zIsGroup = statusBarNotification.isGroup();
                if (!zIsGroupSummary && zIsGroup) {
                    arrayList.add(statusBarNotification);
                }
            }
            return arrayList;
        } catch (Throwable unused) {
            return Collections.EMPTY_LIST;
        }
    }

    public static List<StatusBarNotification> getActiveNotificationsForGroup(final String str) {
        return (List) getActiveNotifications().stream().filter(new Predicate() { // from class: com.pushwoosh.notification.builder.NotificationBuilderManager$$ExternalSyntheticLambda0
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                return TextUtils.equals(((StatusBarNotification) obj).getNotification().getGroup(), str);
            }
        }).collect(Collectors.toList());
    }

    private static NotificationManager getNotificationManager() {
        return (NotificationManager) ((Context) Objects.requireNonNull(AndroidPlatformModule.getApplicationContext())).getSystemService("notification");
    }

    public static boolean isGroupSummary(StatusBarNotification statusBarNotification) {
        return (statusBarNotification.getNotification().flags & 512) != 0;
    }

    public static boolean isReplacingMessage(PushMessage pushMessage, List<StatusBarNotification> list) {
        if (list == null || list.isEmpty() || TextUtils.isEmpty(pushMessage.getTag())) {
            return false;
        }
        for (StatusBarNotification statusBarNotification : list) {
            if (statusBarNotification.getId() == 0 && TextUtils.equals(pushMessage.getTag(), statusBarNotification.getTag())) {
                return true;
            }
        }
        return false;
    }

    public static void removeInboxNotification(String str) {
        NotificationManager notificationManager;
        try {
            Integer numA = ((j) RepositoryModule.getInboxNotificationStorage()).a(str);
            String strB = ((j) RepositoryModule.getInboxNotificationStorage()).b(str);
            if (numA == null || (notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager()) == null) {
                return;
            }
            if (TextUtils.isEmpty(strB)) {
                notificationManager.cancel(numA.intValue());
            } else {
                notificationManager.cancel(strB, numA.intValue());
            }
        } catch (Exception e) {
            PWLog.error("Can't delete notification from notification manager", e);
        }
    }

    public static void removeInboxNotificationFromStatusBar(String str) {
        String string;
        try {
            NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
            for (StatusBarNotification statusBarNotification : notificationManager.getActiveNotifications()) {
                Bundle bundle = statusBarNotification.getNotification().extras;
                if (bundle != null && (string = bundle.getString("pw_inbox")) != null && TextUtils.equals(str, string)) {
                    if (TextUtils.isEmpty(statusBarNotification.getTag())) {
                        notificationManager.cancel(statusBarNotification.getId());
                    } else {
                        notificationManager.cancel(statusBarNotification.getTag(), statusBarNotification.getId());
                    }
                    if (statusBarNotification.getNotification().deleteIntent == null) {
                        break;
                    }
                    statusBarNotification.getNotification().deleteIntent.send();
                    break;
                }
            }
            StatusBarNotification[] activeNotifications = notificationManager.getActiveNotifications();
            if (activeNotifications.length == 1) {
                StatusBarNotification statusBarNotification2 = activeNotifications[0];
                if (isGroupSummary(statusBarNotification2)) {
                    notificationManager.cancel(statusBarNotification2.getId());
                    if (statusBarNotification2.getNotification().deleteIntent != null) {
                        statusBarNotification2.getNotification().deleteIntent.send();
                    }
                }
            }
        } catch (Exception e) {
            PWLog.error("Can't delete message from status bar", e);
        }
    }

    public static void setGroupToActiveNotifications(List<StatusBarNotification> list, String str) {
        if (AndroidPlatformModule.getApplicationContext() == null) {
            PWLog.error("setGroupToActiveNotifications Incorrect state of app. Context is null");
            return;
        }
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        for (StatusBarNotification statusBarNotification : list) {
            Notification notificationBuild = Notification.Builder.recoverBuilder(applicationContext, statusBarNotification.getNotification()).setOnlyAlertOnce(true).setGroup(str).build();
            if (list.size() == 1) {
                NotificationManagerCompat.from(applicationContext).cancel(statusBarNotification.getTag(), statusBarNotification.getId());
            }
            NotificationManagerCompat.from(applicationContext).notify(statusBarNotification.getId(), notificationBuild);
        }
    }

    public static Notification setNotificationGroup(Notification notification, String str) {
        if (AndroidPlatformModule.getApplicationContext() != null) {
            return Notification.Builder.recoverBuilder(AndroidPlatformModule.getApplicationContext(), notification).setGroup(str).build();
        }
        PWLog.error("setNotificationGroup Incorrect state of app. Context is null");
        return null;
    }

    public static a createNotificationBuilder(Context context, String str) {
        return new c(context, str);
    }
}
