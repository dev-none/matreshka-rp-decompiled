package com.pushwoosh.notification.event;

import com.pushwoosh.RegisterForPushNotificationsResultData;
import com.pushwoosh.internal.event.DataEvent;

/* JADX INFO: loaded from: classes6.dex */
public class RegistrationSuccessEvent extends DataEvent<RegisterForPushNotificationsResultData> {
    public RegistrationSuccessEvent(RegisterForPushNotificationsResultData registerForPushNotificationsResultData) {
        super(registerForPushNotificationsResultData);
    }
}
