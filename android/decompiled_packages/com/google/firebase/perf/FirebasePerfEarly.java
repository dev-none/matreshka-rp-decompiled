package com.google.firebase.perf;

import android.content.Context;
import android.os.Build;
import com.google.firebase.FirebaseApp;
import com.google.firebase.StartupTime;
import com.google.firebase.perf.application.AppStateMonitor;
import com.google.firebase.perf.config.ConfigResolver;
import com.google.firebase.perf.metrics.AppStartTrace;
import com.google.firebase.perf.session.SessionManager;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes5.dex */
public class FirebasePerfEarly {
    public FirebasePerfEarly(FirebaseApp firebaseApp, StartupTime startupTime, Executor executor) {
        Context applicationContext = firebaseApp.getApplicationContext();
        ConfigResolver.getInstance().setApplicationContext(applicationContext);
        AppStateMonitor appStateMonitor = AppStateMonitor.getInstance();
        appStateMonitor.registerActivityLifecycleCallbacks(applicationContext);
        appStateMonitor.registerForAppColdStart(new FirebasePerformanceInitializer());
        if (startupTime != null) {
            AppStartTrace appStartTrace = AppStartTrace.getInstance();
            appStartTrace.registerActivityLifecycleCallbacks(applicationContext);
            if (Build.VERSION.SDK_INT < 34) {
                executor.execute(new AppStartTrace.StartFromBackgroundRunnable(appStartTrace));
            }
        }
        SessionManager.getInstance().initializeGaugeCollection();
    }
}
