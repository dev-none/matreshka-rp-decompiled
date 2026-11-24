package com.pushwoosh.repository;

import android.content.Context;
import com.pushwoosh.e0.d;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.prefs.migration.MigrationScheme;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.a0;
import com.pushwoosh.m0.f;
import com.pushwoosh.m0.g;
import com.pushwoosh.m0.i;
import com.pushwoosh.m0.j;
import com.pushwoosh.m0.k;
import com.pushwoosh.m0.l;
import com.pushwoosh.m0.m;
import com.pushwoosh.m0.o;
import com.pushwoosh.m0.p;
import com.pushwoosh.m0.x;
import com.pushwoosh.m0.y;
import com.pushwoosh.m0.z;
import com.pushwoosh.n0.b;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class RepositoryModule {
    private static i inboxNotificationStorage;
    private static k localNotificationStorage;
    private static l lockScreenMediaStorage;
    private static NotificationPrefs notificationPreferences;
    private static o pushBundleStorage;
    private static RegistrationPrefs registrationPreferences;
    private static x silentRichMediaStorage;
    private static z summaryNotificationStorage;

    private static void createLocalNotificationStorage() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
        } else {
            localNotificationStorage = new k(new f(applicationContext));
        }
    }

    public static i getInboxNotificationStorage() {
        return inboxNotificationStorage;
    }

    public static k getLocalNotificationStorage() {
        return localNotificationStorage;
    }

    public static l getLockScreenMediaStorage() {
        return lockScreenMediaStorage;
    }

    public static NotificationPrefs getNotificationPreferences() {
        return notificationPreferences;
    }

    public static o getPushBundleStorage() {
        return pushBundleStorage;
    }

    public static RegistrationPrefs getRegistrationPreferences() {
        return registrationPreferences;
    }

    public static x getSilentRichMediaStorage() {
        return silentRichMediaStorage;
    }

    public static z getSummaryNotificationStorage() {
        return summaryNotificationStorage;
    }

    public static void init(d dVar, g gVar) {
        migratePrefsIfNeeded(dVar);
        if (notificationPreferences == null) {
            notificationPreferences = new NotificationPrefs(dVar);
        }
        if (registrationPreferences == null) {
            registrationPreferences = new RegistrationPrefs(dVar, gVar);
        }
        if (localNotificationStorage == null) {
            createLocalNotificationStorage();
        }
        if (lockScreenMediaStorage == null) {
            lockScreenMediaStorage = new m(AndroidPlatformModule.getApplicationContext());
        }
        if (pushBundleStorage == null) {
            pushBundleStorage = new p(AndroidPlatformModule.getApplicationContext());
        }
        if (inboxNotificationStorage == null) {
            inboxNotificationStorage = new j(AndroidPlatformModule.getApplicationContext());
        }
        if (silentRichMediaStorage == null) {
            silentRichMediaStorage = new y(AndroidPlatformModule.getApplicationContext());
        }
        if (summaryNotificationStorage == null) {
            summaryNotificationStorage = new a0(AndroidPlatformModule.getApplicationContext());
            BackgroundExecutor.execute(new Runnable() { // from class: com.pushwoosh.repository.RepositoryModule$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    ((a0) RepositoryModule.summaryNotificationStorage).a(b.a());
                }
            });
        }
    }

    private static void migratePrefsIfNeeded(d dVar) {
        PWLog.noise("Migrate prefs if needed");
        com.pushwoosh.a0.a prefsMigration = AndroidPlatformModule.getPrefsMigration();
        if (prefsMigration == null) {
            return;
        }
        com.pushwoosh.z.a aVarA = com.pushwoosh.z.b.b == null ? null : com.pushwoosh.z.b.a(com.pushwoosh.z.b.b.f5327a);
        if (aVarA == null) {
            return;
        }
        PWLog.noise("Start migration with prevPrefsProvider: ".concat(com.pushwoosh.z.a.class.getName()));
        ArrayList arrayList = new ArrayList();
        arrayList.add(RegistrationPrefs.provideMigrationScheme(aVarA));
        MigrationScheme migrationScheme = new MigrationScheme("com.pushwoosh.pushnotifications");
        MigrationScheme.AvailableType availableType = MigrationScheme.AvailableType.BOOLEAN;
        migrationScheme.put(aVarA, availableType, "dm_multimode");
        MigrationScheme.AvailableType availableType2 = MigrationScheme.AvailableType.INT;
        migrationScheme.put(aVarA, availableType2, "dm_soundtype");
        migrationScheme.put(aVarA, availableType2, "dm_vibratetype");
        MigrationScheme.AvailableType availableType3 = MigrationScheme.AvailableType.STRING;
        migrationScheme.put(aVarA, availableType3, "channel_name");
        migrationScheme.put(aVarA, availableType2, "dm_messageid");
        migrationScheme.put(aVarA, availableType, "dm_lightson");
        migrationScheme.put(aVarA, availableType, "dm_ledon");
        migrationScheme.put(aVarA, availableType2, "dm_led_color");
        migrationScheme.put(aVarA, availableType3, "pw_notification_factory");
        migrationScheme.put(aVarA, availableType3, "pushHistoryArray");
        migrationScheme.put(aVarA, availableType3, "pw_allowed_external_hosts");
        migrationScheme.put(aVarA, availableType3, "cached_tags_string");
        migrationScheme.put(aVarA, availableType2, "pw_notification_background_color");
        migrationScheme.put(aVarA, availableType3, "pw_notification_stat_hash");
        migrationScheme.put(aVarA, availableType2, "pw_richmedia_delay");
        migrationScheme.put(aVarA, availableType, "pw_notifications_enabled");
        arrayList.add(migrationScheme);
        Iterator it = ((com.pushwoosh.a.a) dVar).D.iterator();
        while (it.hasNext()) {
            Collection<? extends MigrationScheme> prefsMigrationSchemes = ((Plugin) it.next()).getPrefsMigrationSchemes(aVarA);
            if (prefsMigrationSchemes != null) {
                arrayList.addAll(prefsMigrationSchemes);
            }
        }
        ((com.pushwoosh.internal.platform.prefs.migration.a) prefsMigration).a(arrayList);
    }

    public static void setLocalNotificationStorage(k kVar) {
        localNotificationStorage = kVar;
    }

    public static void setNotificationPreferences(NotificationPrefs notificationPrefs) {
        notificationPreferences = notificationPrefs;
    }

    public static void setRegistrationPreferences(RegistrationPrefs registrationPrefs) {
        registrationPreferences = registrationPrefs;
    }
}
