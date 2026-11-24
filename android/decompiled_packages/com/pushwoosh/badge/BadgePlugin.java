package com.pushwoosh.badge;

import com.pushwoosh.badge.b.a;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.platform.prefs.migration.MigrationScheme;
import com.pushwoosh.notification.handlers.message.user.MessageHandleChainProvider;
import java.util.Collection;
import java.util.Collections;

/* JADX INFO: loaded from: classes6.dex */
public class BadgePlugin implements Plugin {
    @Override // com.pushwoosh.internal.Plugin
    public Collection<? extends MigrationScheme> getPrefsMigrationSchemes(PrefsProvider prefsProvider) {
        MigrationScheme migrationScheme = new MigrationScheme("com.pushwoosh.badge");
        migrationScheme.put(prefsProvider, MigrationScheme.AvailableType.INT, "pw_badges_count");
        return Collections.singleton(migrationScheme);
    }

    @Override // com.pushwoosh.internal.Plugin
    public void init() {
        MessageHandleChainProvider.getHandleProcessor().addItem(new a());
        com.pushwoosh.badge.a.a.f5045a = new com.pushwoosh.badge.c.a();
    }
}
