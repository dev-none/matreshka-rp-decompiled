package com.pushwoosh.j0;

import android.os.Bundle;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandler;

/* JADX INFO: loaded from: classes6.dex */
public final class g implements MessageSystemHandler {
    @Override // com.pushwoosh.notification.handlers.message.system.MessageSystemHandler
    public final boolean preHandleMessage(Bundle bundle) {
        return !PushBundleDataProvider.isUserPush(bundle);
    }
}
