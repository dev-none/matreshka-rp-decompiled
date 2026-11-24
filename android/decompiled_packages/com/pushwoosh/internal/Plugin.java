package com.pushwoosh.internal;

import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.platform.prefs.migration.MigrationScheme;
import java.util.Collection;

/* JADX INFO: loaded from: classes6.dex */
public interface Plugin {
    Collection<? extends MigrationScheme> getPrefsMigrationSchemes(PrefsProvider prefsProvider);

    void init();
}
