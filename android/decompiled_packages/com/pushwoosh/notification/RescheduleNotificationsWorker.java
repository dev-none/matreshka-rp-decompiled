package com.pushwoosh.notification;

import android.content.Context;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.e0.l;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.m0.d;
import com.pushwoosh.m0.e;
import com.pushwoosh.m0.k;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class RescheduleNotificationsWorker extends BasePushwooshWorker {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int f5285a = 0;

    public RescheduleNotificationsWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(long j, d dVar) {
        PWLog.debug("RescheduleNotificationsWorker", "Rescheduling local push: " + dVar.e.toString());
        LocalNotificationReceiver.rescheduleNotification(dVar, j);
    }

    @Override // androidx.work.Worker
    public final ListenableWorker.Result doWork() {
        final long jA = AndroidPlatformModule.getInstance().getTimeProvider() != null ? l.a() : System.currentTimeMillis();
        k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
        if (localNotificationStorage == null) {
            PWLog.error("RescheduleNotificationsWorker", "LocalNotificationStorage is null, can't reschedule notifications");
            return ListenableWorker.Result.failure();
        }
        localNotificationStorage.f5250a.a(new e() { // from class: com.pushwoosh.notification.RescheduleNotificationsWorker$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.m0.e
            public final void a(d dVar) {
                RescheduleNotificationsWorker.a(jA, dVar);
            }
        });
        return ListenableWorker.Result.success();
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected final String getLogTag() {
        return "RescheduleNotificationsWorker";
    }
}
