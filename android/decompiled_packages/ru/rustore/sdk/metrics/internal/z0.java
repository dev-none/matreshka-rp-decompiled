package ru.rustore.sdk.metrics.internal;

import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.os.PersistableBundle;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.time.Duration;
import kotlin.time.DurationKt;
import kotlin.time.DurationUnit;
import ru.rustore.sdk.metrics.BuildConfig;
import ru.rustore.sdk.metrics.internal.presentation.SendMetricsEventJobService;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class z0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6681a;
    public final g b;

    public z0(Context context, g getJobRepeatIntervalUseCase) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(getJobRepeatIntervalUseCase, "getJobRepeatIntervalUseCase");
        this.f6681a = context;
        this.b = getJobRepeatIntervalUseCase;
    }

    public final void a() {
        Object next;
        Object systemService = this.f6681a.getSystemService((Class<Object>) JobScheduler.class);
        Intrinsics.checkNotNullExpressionValue(systemService, "context.getSystemService(JobScheduler::class.java)");
        JobScheduler jobScheduler = (JobScheduler) systemService;
        List<JobInfo> allPendingJobs = jobScheduler.getAllPendingJobs();
        Intrinsics.checkNotNullExpressionValue(allPendingJobs, "jobScheduler.allPendingJobs");
        Iterator<T> it = allPendingJobs.iterator();
        do {
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
        } while (((JobInfo) next).getId() != 88123556);
        JobInfo jobInfo = (JobInfo) next;
        int i = 0;
        if (jobInfo == null || jobInfo.getExtras().getInt("job_config_version", 0) < 1) {
            ComponentName componentName = new ComponentName(this.f6681a, (Class<?>) SendMetricsEventJobService.class);
            List<JobInfo> allPendingJobs2 = jobScheduler.getAllPendingJobs();
            Intrinsics.checkNotNullExpressionValue(allPendingJobs2, "jobScheduler.allPendingJobs");
            if (!(allPendingJobs2 instanceof Collection) || !allPendingJobs2.isEmpty()) {
                Iterator<T> it2 = allPendingJobs2.iterator();
                while (it2.hasNext()) {
                    if (Intrinsics.areEqual(((JobInfo) it2.next()).getService(), componentName) && (i = i + 1) < 0) {
                        CollectionsKt.throwCountOverflow();
                    }
                }
            }
            JobInfo.Builder builder = new JobInfo.Builder(88123556, componentName);
            this.b.f6632a.f6639a.getClass();
            Duration.Companion companion = Duration.INSTANCE;
            JobInfo.Builder persisted = builder.setPeriodic(Duration.m11224getInWholeMillisecondsimpl(DurationKt.toDuration(Integer.parseInt(BuildConfig.JOB_REPEAT_INTERVAL_MINUTES), DurationUnit.MINUTES))).setRequiredNetworkType(1).setPersisted(true);
            PersistableBundle persistableBundle = new PersistableBundle();
            persistableBundle.putInt("pending_jobs_count", i);
            persistableBundle.putInt("job_config_version", 1);
            jobScheduler.schedule(persisted.setExtras(persistableBundle).build());
        }
    }
}
