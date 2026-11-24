package com.pushwoosh.firebase.internal.registrar;

import android.content.Context;
import android.content.pm.PackageManager;
import androidx.work.Data;
import androidx.work.ExistingPeriodicWorkPolicy;
import androidx.work.ExistingWorkPolicy;
import androidx.work.ListenableWorker;
import androidx.work.OneTimeWorkRequest;
import androidx.work.PeriodicWorkRequest;
import com.pushwoosh.PushwooshWorkManagerHelper;
import com.pushwoosh.firebase.a.a;
import com.pushwoosh.firebase.internal.checker.FirebaseChecker;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.registrar.PushRegistrar;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.tags.TagsBundle;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes6.dex */
public class FcmRegistrar implements PushRegistrar {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f5081a;

    @Override // com.pushwoosh.internal.registrar.PushRegistrar
    public final void checkDevice(String str) {
        GeneralUtils.checkNotNullOrEmpty(str, "mAppId");
        Context context = this.f5081a;
        if (context == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
        } else {
            try {
                context.getPackageManager().getPermissionInfo("com.google.android.c2dm.permission.RECEIVE", 4096);
            } catch (PackageManager.NameNotFoundException unused) {
                throw new IllegalStateException("Application does not define permission com.google.android.c2dm.permission.RECEIVE");
            }
        }
    }

    @Override // com.pushwoosh.internal.registrar.PushRegistrar
    public final void init() {
        new FirebaseChecker().check();
        this.f5081a = AndroidPlatformModule.getApplicationContext();
        a.b();
    }

    @Override // com.pushwoosh.internal.registrar.PushRegistrar
    public final void registerPW(TagsBundle tagsBundle) throws Throwable {
        PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(FcmRegistrarWorker.class).setInputData(new Data.Builder().putBoolean("DATA_REGISTER", true).putString("DATA_TAGS", tagsBundle != null ? tagsBundle.toJson().toString() : null).build()).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).build(), "FcmRegistrarWorker", ExistingWorkPolicy.REPLACE);
        Data dataBuild = new Data.Builder().putBoolean("DATA_REGISTER", true).build();
        TimeUnit timeUnit = TimeUnit.DAYS;
        PushwooshWorkManagerHelper.enqueuePeriodicUniqueWork(new PeriodicWorkRequest.Builder((Class<? extends ListenableWorker>) FcmRegistrarWorker.class, 14L, timeUnit).setInputData(dataBuild).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).setInitialDelay(14L, timeUnit).build(), "FcmPeriodicRegistrarWorker", ExistingPeriodicWorkPolicy.REPLACE);
    }

    @Override // com.pushwoosh.internal.registrar.PushRegistrar
    public final void unregisterPW() throws Throwable {
        PushwooshWorkManagerHelper.cancelPeriodicUniqueWork("FcmPeriodicRegistrarWorker");
        PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(FcmRegistrarWorker.class).setInputData(new Data.Builder().putBoolean("DATA_UNREGISTER", true).build()).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).build(), "FcmRegistrarWorker", ExistingWorkPolicy.REPLACE);
    }
}
