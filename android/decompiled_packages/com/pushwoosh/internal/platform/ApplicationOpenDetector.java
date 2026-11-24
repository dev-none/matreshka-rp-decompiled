package com.pushwoosh.internal.platform;

import android.app.Application;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Date;

/* JADX INFO: loaded from: classes6.dex */
public class ApplicationOpenDetector {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Date f5198a;
    private final Application b;
    private final Handler c = new Handler(Looper.getMainLooper());

    public static class ApplicationMovedToForegroundEvent implements Event {
    }

    ApplicationOpenDetector(Context context) {
        this.b = (Application) context.getApplicationContext();
    }

    public void onApplicationCreated(boolean z) {
        if (z) {
            EventBus.sendEvent(new com.pushwoosh.w.b());
            this.f5198a = new Date();
            PWLog.debug("ApplicationOpenDetector", "First launch, ApplicationOpenEvent fired");
        }
        this.b.registerActivityLifecycleCallbacks(new a(this));
    }
}
