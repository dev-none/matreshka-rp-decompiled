package com.pushwoosh.notification;

import android.R;
import android.app.Notification;
import android.graphics.Bitmap;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.notification.builder.NotificationBuilderManager;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshNotificationFactory extends NotificationFactory {
    protected Bitmap getBigPicture(PushMessage pushMessage) {
        return NotificationUtils.tryToGetBitmapFromInternet(pushMessage.getBigPictureUrl(), -1);
    }

    protected Bitmap getLargeIcon(PushMessage pushMessage) {
        int dimension = (int) AndroidPlatformModule.getResourceProvider().getDimension(R.dimen.notification_large_icon_height);
        String largeIconUrl = pushMessage.getLargeIconUrl();
        if (largeIconUrl != null) {
            return NotificationUtils.tryGetBitmap(largeIconUrl, dimension);
        }
        return null;
    }

    @Override // com.pushwoosh.notification.NotificationFactory
    public Notification onGenerateNotification(PushMessage pushMessage) {
        Bitmap largeIcon = getLargeIcon(pushMessage);
        Bitmap bigPicture = getBigPicture(pushMessage);
        String strAddChannel = addChannel(pushMessage);
        if (getApplicationContext() == null) {
            return null;
        }
        com.pushwoosh.h0.a aVarCreateNotificationBuilder = NotificationBuilderManager.createNotificationBuilder(getApplicationContext(), strAddChannel);
        aVarCreateNotificationBuilder.b(getContentFromHtml(pushMessage.getHeader())).a(getContentFromHtml(pushMessage.getMessage())).b(pushMessage.getSmallIcon()).a(bigPicture, getContentFromHtml(pushMessage.getMessage())).a(largeIcon).a(pushMessage.getIconBackgroundColor()).c(pushMessage.getPriority()).a(pushMessage.getVisibility()).c(getContentFromHtml(pushMessage.getTicker())).a(pushMessage.getGroupId()).a(System.currentTimeMillis());
        Iterator<Action> it = pushMessage.getActions().iterator();
        while (it.hasNext()) {
            NotificationBuilderManager.addAction(getApplicationContext(), aVarCreateNotificationBuilder, it.next());
        }
        aVarCreateNotificationBuilder.a(pushMessage.toBundle());
        Notification notificationA = aVarCreateNotificationBuilder.a();
        addLED(notificationA, pushMessage.getLed(), pushMessage.getLedOnMS(), pushMessage.getLedOffMS());
        addSound(notificationA, pushMessage.getSound());
        addVibration(notificationA, pushMessage.getVibration());
        addCancel(notificationA);
        return notificationA;
    }
}
