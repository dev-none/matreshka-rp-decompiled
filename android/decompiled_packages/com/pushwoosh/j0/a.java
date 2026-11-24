package com.pushwoosh.j0;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandler;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements MessageSystemHandler {
    @Override // com.pushwoosh.notification.handlers.message.system.MessageSystemHandler
    public final boolean preHandleMessage(Bundle bundle) {
        if (PushBundleDataProvider.isSilent(bundle)) {
            String packageName = AndroidPlatformModule.getAppInfoProvider().getPackageName();
            Intent intent = new Intent();
            intent.setAction(packageName + ".action.SILENT_PUSH_RECEIVE");
            intent.putExtras(bundle);
            intent.putExtra("pw_data_json_string", PushBundleDataProvider.asJson(bundle).toString());
            com.pushwoosh.b0.b receiverProvider = AndroidPlatformModule.getReceiverProvider();
            String strPermission = DeviceSpecificProvider.getInstance().permission(packageName);
            com.pushwoosh.b0.a aVar = (com.pushwoosh.b0.a) receiverProvider;
            if (((Context) aVar.f5044a.get()) != null) {
                ((Context) aVar.f5044a.get()).sendBroadcast(intent, strPermission);
            }
        }
        PushBundleDataProvider.setForeground(bundle, com.pushwoosh.d0.g.b());
        return false;
    }
}
