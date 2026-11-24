package com.pushwoosh.notification.handlers.message.user;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import androidx.core.app.NotificationManagerCompat;
import com.pushwoosh.NotificationUpdateReceiver;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.PendingIntentUtils;
import com.pushwoosh.m0.d;
import com.pushwoosh.m0.k;
import com.pushwoosh.m0.p;
import com.pushwoosh.notification.ActionButton;
import com.pushwoosh.notification.LocalNotificationReceiver;
import com.pushwoosh.notification.NotificationFactory;
import com.pushwoosh.notification.NotificationIntentHelper;
import com.pushwoosh.notification.NotificationOpenActivity;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.PushwooshNotificationFactory;
import com.pushwoosh.notification.SummaryNotificationUtils;
import com.pushwoosh.notification.builder.NotificationBuilderManager;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends NotificationMessageHandler {
    public static final Object d = new Object();
    public final NotificationFactory b;
    public final NotificationPrefs c = RepositoryModule.getNotificationPreferences();

    public a() {
        NotificationFactory pushwooshNotificationFactory;
        try {
            Class<?> cls = RepositoryModule.getNotificationPreferences().notificationFactoryClass().get();
            pushwooshNotificationFactory = cls != null ? (NotificationFactory) cls.newInstance() : new PushwooshNotificationFactory();
        } catch (Exception e) {
            PWLog.exception(e);
        }
        this.b = pushwooshNotificationFactory;
    }

    public final void a(PushMessage pushMessage) {
        Notification notificationOnGenerateNotification = this.b.onGenerateNotification(pushMessage);
        if (notificationOnGenerateNotification == null) {
            return;
        }
        final Notification notificationRebuildWithDefaultValuesIfNeeded = NotificationUtils.rebuildWithDefaultValuesIfNeeded(notificationOnGenerateNotification);
        List list = (List) NotificationBuilderManager.getActiveNotifications().stream().filter(new Predicate() { // from class: com.pushwoosh.notification.handlers.message.user.a$$ExternalSyntheticLambda0
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                return TextUtils.equals(((StatusBarNotification) obj).getNotification().getGroup(), notificationRebuildWithDefaultValuesIfNeeded.getGroup());
            }
        }).collect(Collectors.toList());
        if (list.size() >= 1) {
            Notification summaryNotification = SummaryNotificationUtils.getSummaryNotification(NotificationBuilderManager.isReplacingMessage(pushMessage, list) ? list.size() : list.size() + 1, notificationRebuildWithDefaultValuesIfNeeded.getChannelId(), notificationRebuildWithDefaultValuesIfNeeded.getGroup());
            if (summaryNotification != null) {
                SummaryNotificationUtils.fireSummaryNotification(summaryNotification);
            }
        }
        Intent notificationIntent = this.b.getNotificationIntent(pushMessage);
        notificationIntent.putExtra("group_id", SummaryNotificationUtils.getNotificationIdForGroup(pushMessage.getGroupId()));
        a(notificationRebuildWithDefaultValuesIfNeeded, notificationIntent, pushMessage);
    }

    @Override // com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler
    public final void handleNotification(PushMessage pushMessage) {
        if (pushMessage.isSilent()) {
            return;
        }
        if (this.c.multiMode().get()) {
            a(pushMessage);
            return;
        }
        Notification notificationOnGenerateNotification = this.b.onGenerateNotification(pushMessage);
        if (notificationOnGenerateNotification == null) {
            return;
        }
        Intent notificationIntent = this.b.getNotificationIntent(pushMessage);
        NotificationManagerCompat.from(AndroidPlatformModule.getApplicationContext()).cancelAll();
        a(notificationOnGenerateNotification, notificationIntent, pushMessage);
    }

    /* JADX WARN: Code duplicated, block: B:107:0x01a8 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:52:0x012b  */
    /* JADX WARN: Code duplicated, block: B:53:0x0130  */
    /* JADX WARN: Code duplicated, block: B:56:0x0161 A[Catch: Exception -> 0x0181, TryCatch #3 {Exception -> 0x0181, blocks: (B:45:0x00f4, B:49:0x0100, B:50:0x010a, B:54:0x0131, B:56:0x0161, B:58:0x0172, B:57:0x016a), top: B:103:0x00f4 }] */
    /* JADX WARN: Code duplicated, block: B:57:0x016a A[Catch: Exception -> 0x0181, TryCatch #3 {Exception -> 0x0181, blocks: (B:45:0x00f4, B:49:0x0100, B:50:0x010a, B:54:0x0131, B:56:0x0161, B:58:0x0172, B:57:0x016a), top: B:103:0x00f4 }] */
    /* JADX WARN: Code duplicated, block: B:66:0x01a5  */
    public final void a(Notification notification, Intent intent, PushMessage pushMessage) {
        int i;
        Intent intentA;
        int i2;
        Notification.Action actionBuild;
        Intent intent2;
        String str;
        String string;
        int iAddImmutableFlag;
        PendingIntent activity;
        int i3;
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return;
        }
        String tag = pushMessage.getTag();
        if (TextUtils.isEmpty(tag)) {
            synchronized (d) {
                i3 = this.c.messageId().get();
                if (this.c.multiMode().get()) {
                    i3++;
                    this.c.messageId().set(i3);
                }
            }
            i = i3;
        } else {
            i = 0;
        }
        try {
            long jA = ((p) RepositoryModule.getPushBundleStorage()).a(i, pushMessage.toBundle(), notification.getGroup());
            int notificationIdForGroup = SummaryNotificationUtils.getNotificationIdForGroup(notification.getGroup());
            intent.putExtra(NotificationIntentHelper.EXTRA_NOTIFICATION_ROW_ID, jA);
            intentA = a(jA, notificationIdForGroup, pushMessage);
        } catch (Exception e) {
            PWLog.error("ShowNotificationMessageHandler", "Failed to register group push bundle for tag=" + tag, e);
            intentA = null;
        }
        int i4 = 268435456;
        notification.contentIntent = PendingIntent.getActivity(applicationContext, i, intent, PendingIntentUtils.addImmutableFlag(268435456));
        if (intentA != null) {
            long pushwooshNotificationId = pushMessage.getPushwooshNotificationId();
            if (pushwooshNotificationId != -1) {
                intentA.putExtra(NotificationIntentHelper.EXTRA_PUSHWOOSH_NOTIFICATION_ID, pushwooshNotificationId);
            }
            notification.deleteIntent = PendingIntent.getBroadcast(applicationContext, i, intentA, PendingIntentUtils.addImmutableFlag(268435456));
        }
        List<ActionButton> buttons = pushMessage.getButtons();
        if (!buttons.isEmpty()) {
            ArrayList arrayList = new ArrayList();
            for (ActionButton actionButton : buttons) {
                try {
                    ActionButton.ActionType action = actionButton.getAction();
                    ActionButton.ActionType actionType = ActionButton.ActionType.CUSTOM;
                    if (action == actionType) {
                        intent2 = new Intent(applicationContext, (Class<?>) NotificationUpdateReceiver.class);
                    } else {
                        intent2 = new Intent(applicationContext, (Class<?>) NotificationOpenActivity.class);
                    }
                    Bundle extras = intent.getExtras();
                    if (extras != null) {
                        intent2.putExtras(extras);
                    }
                    if (extras != null) {
                        i2 = i4;
                        try {
                            if (extras.getBundle(NotificationIntentHelper.EXTRA_NOTIFICATION_BUNDLE) == null) {
                            }
                            intent2.putExtra("pushwoosh_button_id", actionButton.getId());
                            intent2.putExtra("pushwoosh_button_notification_tag", tag);
                            intent2.putExtra("pushwoosh_button_notification_id", i);
                            String id = actionButton.getId();
                            StringBuilder sb = new StringBuilder();
                            if (tag == null) {
                                str = "";
                            } else {
                                str = tag;
                            }
                            sb.append(str);
                            sb.append("#");
                            sb.append(i);
                            sb.append("#");
                            sb.append(id);
                            string = sb.toString();
                            intent2.setAction("pw_button:" + string);
                            iAddImmutableFlag = PendingIntentUtils.addImmutableFlag(i2);
                            if (actionButton.getAction() == actionType) {
                                activity = PendingIntent.getBroadcast(applicationContext, string.hashCode(), intent2, iAddImmutableFlag);
                            } else {
                                activity = PendingIntent.getActivity(applicationContext, string.hashCode(), intent2, iAddImmutableFlag);
                            }
                            actionBuild = new Notification.Action.Builder(0, actionButton.getLabel(), activity).build();
                        } catch (Exception e2) {
                            e = e2;
                            PWLog.error("ActionButtonIntents", "failed to build action button " + actionButton.getId() + ", skipping it", e);
                            actionBuild = null;
                        }
                        if (actionBuild != null) {
                            arrayList.add(actionBuild);
                        }
                        i4 = i2;
                    } else {
                        i2 = i4;
                    }
                    intent2.putExtra(NotificationIntentHelper.EXTRA_NOTIFICATION_BUNDLE, pushMessage.toBundle());
                    intent2.putExtra("pushwoosh_button_id", actionButton.getId());
                    intent2.putExtra("pushwoosh_button_notification_tag", tag);
                    intent2.putExtra("pushwoosh_button_notification_id", i);
                    String id2 = actionButton.getId();
                    StringBuilder sb2 = new StringBuilder();
                    if (tag == null) {
                        str = "";
                    } else {
                        str = tag;
                    }
                    sb2.append(str);
                    sb2.append("#");
                    sb2.append(i);
                    sb2.append("#");
                    sb2.append(id2);
                    string = sb2.toString();
                    intent2.setAction("pw_button:" + string);
                    iAddImmutableFlag = PendingIntentUtils.addImmutableFlag(i2);
                    if (actionButton.getAction() == actionType) {
                        activity = PendingIntent.getBroadcast(applicationContext, string.hashCode(), intent2, iAddImmutableFlag);
                    } else {
                        activity = PendingIntent.getActivity(applicationContext, string.hashCode(), intent2, iAddImmutableFlag);
                    }
                    actionBuild = new Notification.Action.Builder(0, actionButton.getLabel(), activity).build();
                } catch (Exception e3) {
                    e = e3;
                    i2 = i4;
                }
                if (actionBuild != null) {
                    arrayList.add(actionBuild);
                }
                i4 = i2;
            }
            if (!arrayList.isEmpty()) {
                Notification.Action[] actionArr = notification.actions;
                int length = actionArr == null ? 0 : actionArr.length;
                Notification.Action[] actionArr2 = new Notification.Action[arrayList.size() + length];
                for (int i5 = 0; i5 < length; i5++) {
                    actionArr2[i5] = actionArr[i5];
                }
                for (int i6 = 0; i6 < arrayList.size(); i6++) {
                    actionArr2[length + i6] = (Notification.Action) arrayList.get(i6);
                }
                notification.actions = actionArr2;
            }
        }
        k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
        d dVarA = localNotificationStorage.f5250a.a(tag, i);
        if (dVarA != null) {
            localNotificationStorage.f5250a.b("localNotificationShown", dVarA.f5246a);
        }
        if (intent.hasExtra(LocalNotificationReceiver.EXTRA_NOTIFICATION_ID)) {
            localNotificationStorage.f5250a.a(new d(intent.getIntExtra(LocalNotificationReceiver.EXTRA_NOTIFICATION_ID, 0), i, tag));
        }
        NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
        if (notificationManager == null) {
            return;
        }
        notificationManager.notify(tag, i, notification);
        if (RepositoryModule.getNotificationPreferences().lightScreenOn().get()) {
            NotificationUtils.turnScreenOn();
        }
        this.c.pushHistory().add(pushMessage.toJson().toString());
        EventBus.sendEvent(new NotificationCreatedEvent(i, tag, pushMessage));
    }

    public static Intent a(long j, int i, PushMessage pushMessage) {
        Intent intent = new Intent(AndroidPlatformModule.getApplicationContext(), (Class<?>) NotificationUpdateReceiver.class);
        intent.putExtra(NotificationIntentHelper.EXTRA_NOTIFICATION_ROW_ID, j);
        intent.putExtra(NotificationIntentHelper.EXTRA_IS_DELETE_INTENT, true);
        intent.putExtra(NotificationIntentHelper.EXTRA_NOTIFICATION_BUNDLE, pushMessage.toBundle());
        intent.putExtra("group_id", i);
        intent.setAction(Long.toString(System.currentTimeMillis()));
        return intent;
    }
}
