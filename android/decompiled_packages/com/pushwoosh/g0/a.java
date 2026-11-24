package com.pushwoosh.g0;

import android.app.PendingIntent;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.PendingIntentUtils;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Chain f5083a;
    public final Context b = AndroidPlatformModule.getApplicationContext();

    public a(Chain chain) {
        this.f5083a = chain;
    }

    public final boolean a(String str) {
        if (!TextUtils.isEmpty(str) && this.b != null) {
            PWLog.debug("NotificationOpenHandler", "handling notification link: " + str);
            try {
                Uri uri = Uri.parse(str);
                String host = uri.getHost();
                ArrayList<T> arrayList = RepositoryModule.getNotificationPreferences().allowedExternalHosts().get();
                if (host != null && arrayList.contains(host)) {
                    PWLog.debug("NotificationOpenHandler", "host " + host + " is an allowed external host, opening link outside the app");
                    Intent intent = new Intent("android.intent.action.VIEW", uri);
                    intent.addFlags(268435456);
                    this.b.startActivity(intent);
                    return true;
                }
                Intent intent2 = new Intent("android.intent.action.VIEW", Uri.parse(str));
                if (intent2.resolveActivity(this.b.getPackageManager()) == null) {
                    PWLog.warn("NotificationOpenHandler", "no activity resolves " + str + ", check the ACTION_VIEW intent-filter in AndroidManifest.xml; launching the app instead");
                    return false;
                }
                PWLog.debug("NotificationOpenHandler", "opening " + str + " inside the app");
                intent2.addFlags(335544320);
                PendingIntent.getActivity(this.b, 0, intent2, PendingIntentUtils.addImmutableFlag(0)).send();
                return true;
            } catch (Exception e) {
                PWLog.exception(e);
            }
        }
        return false;
    }

    public final void a(PushMessage pushMessage) {
        Bundle bundle = new Bundle();
        bundle.putString(Pushwoosh.PUSH_RECEIVE_EVENT, pushMessage.toJson().toString());
        Intent intent = new Intent();
        String str = AndroidPlatformModule.getAppInfoProvider().getPackageName() + ".MESSAGE";
        intent.setAction(str);
        intent.setFlags(872415232);
        intent.putExtras(bundle);
        try {
            Context context = this.b;
            if (context != null) {
                context.startActivity(intent);
            }
        } catch (ActivityNotFoundException unused) {
            PWLog.debug("NotificationOpenHandler", "no activity handles " + str + ", falling back to the launcher activity");
            try {
                String packageName = AndroidPlatformModule.getAppInfoProvider().getPackageName();
                PackageManager packageManager = AndroidPlatformModule.getManagerProvider().getPackageManager();
                Intent launchIntentForPackage = packageManager == null ? null : packageManager.getLaunchIntentForPackage(packageName);
                if (launchIntentForPackage != null) {
                    launchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
                    launchIntentForPackage.setFlags(872415232);
                    launchIntentForPackage.putExtras(bundle);
                    this.b.startActivity(launchIntentForPackage);
                    return;
                }
                throw new ActivityNotFoundException();
            } catch (ActivityNotFoundException e) {
                PWLog.error("NotificationOpenHandler", "Failed to start default launch activity.", e);
            }
        }
    }
}
