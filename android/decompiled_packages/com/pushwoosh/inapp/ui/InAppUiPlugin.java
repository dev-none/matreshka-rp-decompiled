package com.pushwoosh.inapp.ui;

import android.content.Context;
import com.pushwoosh.inapp.event.ActivityBroughtOnTopEvent;
import com.pushwoosh.inapp.nativeui.NativeInAppPresenterProvider;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.ApplicationOpenDetector;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.platform.prefs.migration.MigrationScheme;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Collection;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u001e\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u0000 \f2\u00020\u0001:\u0001\rB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0016¢\u0006\u0004\b\u0005\u0010\u0003J\u001d\u0010\n\u001a\b\u0012\u0004\u0012\u00020\t0\b2\u0006\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\n\u0010\u000b¨\u0006\u000e"}, d2 = {"Lcom/pushwoosh/inapp/ui/InAppUiPlugin;", "Lcom/pushwoosh/internal/Plugin;", "<init>", "()V", "", "init", "Lcom/pushwoosh/internal/platform/prefs/PrefsProvider;", "prefsProvider", "", "Lcom/pushwoosh/internal/platform/prefs/migration/MigrationScheme;", "getPrefsMigrationSchemes", "(Lcom/pushwoosh/internal/platform/prefs/PrefsProvider;)Ljava/util/Collection;", "Companion", "com/pushwoosh/inapp/ui/l1", "pushwoosh-inapp-ui_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class InAppUiPlugin implements Plugin {
    public static final l1 Companion = new l1();
    private static final String TAG = "InAppUiPlugin";

    /* JADX INFO: Access modifiers changed from: private */
    public static final void init$lambda$1(ApplicationOpenDetector.ApplicationMovedToForegroundEvent applicationMovedToForegroundEvent) {
        h1 h1Var;
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext != null) {
            g1 g1VarB = v0.f5172a.b(applicationContext);
            s0 s0Var = g1VarB.h;
            if (g1VarB.i) {
                s0Var = null;
            }
            if (s0Var != null && (h1Var = g1VarB.e) != null) {
                h1Var.a(s0Var);
            }
            g1VarB.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void init$lambda$3(ActivityBroughtOnTopEvent activityBroughtOnTopEvent) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext != null) {
            v0.f5172a.b(applicationContext).a();
        }
    }

    @Override // com.pushwoosh.internal.Plugin
    public Collection<MigrationScheme> getPrefsMigrationSchemes(PrefsProvider prefsProvider) {
        Intrinsics.checkNotNullParameter(prefsProvider, "prefsProvider");
        return CollectionsKt.emptyList();
    }

    @Override // com.pushwoosh.internal.Plugin
    public void init() {
        NativeInAppPresenterProvider.set(new z1());
        EventBus.subscribe(ApplicationOpenDetector.ApplicationMovedToForegroundEvent.class, new EventListener() { // from class: com.pushwoosh.inapp.ui.InAppUiPlugin$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                InAppUiPlugin.init$lambda$1((ApplicationOpenDetector.ApplicationMovedToForegroundEvent) event);
            }
        });
        EventBus.subscribe(ActivityBroughtOnTopEvent.class, new EventListener() { // from class: com.pushwoosh.inapp.ui.InAppUiPlugin$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                InAppUiPlugin.init$lambda$3((ActivityBroughtOnTopEvent) event);
            }
        });
        PWLog.info(TAG, "InAppUiPlugin initialized");
    }
}
