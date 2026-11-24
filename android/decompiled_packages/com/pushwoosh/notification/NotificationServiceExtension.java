package com.pushwoosh.notification;

import android.content.Context;
import android.os.Bundle;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.d0.g;
import com.pushwoosh.e0.d;
import com.pushwoosh.g0.c;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandleChainProvider;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandler;
import com.pushwoosh.notification.handlers.message.user.MessageHandleChainProvider;
import com.pushwoosh.notification.handlers.message.user.MessageHandler;
import com.pushwoosh.notification.handlers.notification.NotificationOpenHandlerChainProvider;
import com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler;
import com.pushwoosh.repository.RepositoryModule;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationServiceExtension {
    private final com.pushwoosh.g0.b c = PushwooshPlatform.getInstance().getPushMessageFactory();
    private final Context f = AndroidPlatformModule.getApplicationContext();
    private final PushwooshNotificationManager d = PushwooshPlatform.getInstance().notificationManager();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final com.pushwoosh.g0.a f5280a = new com.pushwoosh.g0.a(NotificationOpenHandlerChainProvider.getNotificationOpenHandlerChain());
    private final c b = new c(MessageSystemHandleChainProvider.getMessageSystemChain(), MessageHandleChainProvider.getHandleProcessor());
    private final d e = PushwooshPlatform.getInstance().getConfig();
    private final com.pushwoosh.l0.c g = new com.pushwoosh.l0.c();

    private void a(Bundle bundle, String str) {
        ActionButton next;
        PushMessage pushMessage = new PushMessage(bundle);
        try {
            if (str == null) {
                if (preHandleNotificationsWithUrl() && this.f5280a.a(PushBundleDataProvider.getLink(bundle))) {
                    Iterator iterator = this.f5280a.f5083a.getIterator();
                    while (iterator.hasNext()) {
                        ((PushNotificationOpenHandler) iterator.next()).postHandleNotification(bundle);
                    }
                    onMessageOpened(pushMessage);
                    return;
                }
                this.d.a(pushMessage);
                startActivityForPushMessage(pushMessage);
                Iterator iterator2 = this.f5280a.f5083a.getIterator();
                while (iterator2.hasNext()) {
                    ((PushNotificationOpenHandler) iterator2.next()).postHandleNotification(bundle);
                }
                onMessageOpened(pushMessage);
                return;
            }
            Iterator<ActionButton> it = pushMessage.getButtons().iterator();
            do {
                if (!it.hasNext()) {
                    next = null;
                    break;
                }
                next = it.next();
            } while (!str.equals(next.getId()));
            if (next == null) {
                PWLog.warn("NotificationService", "tapped button " + str + " is not in the message, opening nothing");
                Iterator iterator3 = this.f5280a.f5083a.getIterator();
                while (iterator3.hasNext()) {
                    ((PushNotificationOpenHandler) iterator3.next()).postHandleNotification(bundle);
                }
                onMessageOpened(pushMessage);
                return;
            }
            int i = a.f5290a[next.getAction().ordinal()];
            if (i == 1) {
                this.d.a(pushMessage);
                startActivityForPushMessage(pushMessage);
            } else if ((i == 2 || i == 3) && (!preHandleNotificationsWithUrl() || !this.f5280a.a(next.getUrl()))) {
                this.d.a(pushMessage);
                startActivityForPushMessage(pushMessage);
            }
            Iterator iterator4 = this.f5280a.f5083a.getIterator();
            while (iterator4.hasNext()) {
                ((PushNotificationOpenHandler) iterator4.next()).postHandleNotification(bundle);
            }
            onMessageOpened(pushMessage);
        } catch (Throwable th) {
            Iterator iterator5 = this.f5280a.f5083a.getIterator();
            while (iterator5.hasNext()) {
                ((PushNotificationOpenHandler) iterator5.next()).postHandleNotification(bundle);
            }
            onMessageOpened(pushMessage);
            throw th;
        }
    }

    protected final Context getApplicationContext() {
        return this.f;
    }

    public final void handleMessage(Bundle bundle) {
        boolean z;
        if (bundle == null) {
            PWLog.info("handle null message");
            return;
        }
        PWLog.debug("NotificationService", "handleMessage: " + bundle.toString());
        Iterator iterator = this.b.f5084a.getIterator();
        loop0: while (true) {
            z = false;
            while (true) {
                if (!iterator.hasNext()) {
                    break loop0;
                } else if (((MessageSystemHandler) iterator.next()).preHandleMessage(bundle) || z) {
                    z = true;
                }
            }
        }
        if (z) {
            return;
        }
        this.c.getClass();
        PushMessage pushMessage = new PushMessage(bundle);
        boolean zOnMessageReceived = onMessageReceived(pushMessage);
        if (zOnMessageReceived && ((com.pushwoosh.a.a) this.e).o) {
            PWLog.debug("NotificationService", "pushStatNotificationOpenHandler.postHandleNotification: " + bundle);
            this.g.postHandleNotification(bundle);
        }
        Iterator iterator2 = this.b.b.getIterator();
        while (iterator2.hasNext()) {
            MessageHandler messageHandler = (MessageHandler) iterator2.next();
            if (!zOnMessageReceived) {
                messageHandler.handlePushMessage(pushMessage);
            }
        }
    }

    public final void handleNotification(Bundle bundle) {
        if (bundle == null) {
            PWLog.info("open null notification");
        } else {
            a(bundle, null);
        }
    }

    public final void handleNotificationButton(Bundle bundle, String str) {
        if (bundle == null) {
            PWLog.info("open null notification");
        } else {
            if (str == null) {
                PWLog.info("open notification with null button id");
                return;
            }
            Bundle bundle2 = new Bundle(bundle);
            PushBundleDataProvider.setTappedButtonId(bundle2, str);
            a(bundle2, str);
        }
    }

    public final void handleNotificationCanceled(Bundle bundle) {
        if (bundle == null) {
            PWLog.info("cancel null notification");
        } else {
            onMessageCanceled(new PushMessage(bundle));
        }
    }

    public final void handleNotificationGroup(List<PushMessage> list) {
        onMessagesGroupOpened(list);
    }

    protected boolean isAppOnForeground() {
        return g.b();
    }

    protected void onMessageCanceled(PushMessage pushMessage) {
    }

    protected void onMessageOpened(PushMessage pushMessage) {
    }

    protected boolean onMessageReceived(PushMessage pushMessage) {
        return RepositoryModule.getNotificationPreferences() != null && RepositoryModule.getNotificationPreferences().showPushnotificationAlert().get() && isAppOnForeground();
    }

    protected void onMessagesGroupOpened(List<PushMessage> list) {
        handleNotification(list.get(list.size() - 1).toBundle());
    }

    protected boolean preHandleNotificationsWithUrl() {
        return true;
    }

    protected void startActivityForPushMessage(PushMessage pushMessage) {
        this.f5280a.a(pushMessage);
    }
}
