package com.pushwoosh.internal.registrar;

import android.content.Context;
import android.text.TextUtils;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.m0.g;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.s.c;
import com.pushwoosh.v.a;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes6.dex */
public class RegisterDeviceWorker extends BasePushwooshWorker {
    public RegisterDeviceWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    private boolean a(c cVar) {
        final CountDownLatch countDownLatch = new CountDownLatch(1);
        cVar.a(new Runnable() { // from class: com.pushwoosh.internal.registrar.RegisterDeviceWorker$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                countDownLatch.countDown();
            }
        });
        long nanos = TimeUnit.MILLISECONDS.toNanos(30000L) + System.nanoTime();
        while (!countDownLatch.await(100L, TimeUnit.MILLISECONDS)) {
            try {
                if (isStopped() || cVar.f5311a == 3 || System.nanoTime() >= nanos) {
                    return false;
                }
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
                return false;
            }
        }
        return cVar.f5311a == 2;
    }

    /* JADX WARN: Code duplicated, block: B:39:0x00ba  */
    @Override // androidx.work.Worker
    public final ListenableWorker.Result doWork() {
        boolean z;
        int i;
        c cVar = c.d;
        if (cVar.f5311a == 3) {
            PWLog.debug("RegisterDeviceWorker", "SDK initialization failed, retrying the delivery later");
            return ListenableWorker.Result.retry();
        }
        boolean zA = a(cVar);
        if (isStopped()) {
            PWLog.debug("RegisterDeviceWorker", "Worker stopped while waiting for the SDK, dropping the delivery");
            return ListenableWorker.Result.failure();
        }
        if (!zA) {
            PWLog.debug("RegisterDeviceWorker", "SDK is not ready yet, retrying the delivery later");
            return ListenableWorker.Result.retry();
        }
        if (TextUtils.isEmpty(RepositoryModule.getRegistrationPreferences().pushToken().get())) {
            PWLog.debug("RegisterDeviceWorker", "No push token saved, nothing to deliver");
            return ListenableWorker.Result.success();
        }
        g gVarDeviceRegistrar = PushwooshPlatform.getInstance().deviceRegistrar();
        String string = getInputData().getString("tags");
        gVarDeviceRegistrar.getClass();
        ReentrantLock reentrantLock = g.f5248a;
        reentrantLock.lock();
        try {
            Result resultA = g.a(string);
            reentrantLock.unlock();
            if (resultA.isSuccess()) {
                PWLog.debug("RegisterDeviceWorker", "Token delivered on attempt " + getRunAttemptCount());
                return ListenableWorker.Result.success();
            }
            NetworkException networkException = (NetworkException) resultA.getException();
            if (networkException instanceof a) {
                a aVar = (a) networkException;
                if ((aVar.b != 0 || aVar.f5317a != 0) && (i = aVar.f5317a) != 408 && i != 429 && i != 500) {
                    switch (i) {
                        case 502:
                        case 503:
                        case 504:
                            break;
                        default:
                            z = false;
                            break;
                    }
                }
                z = true;
            } else {
                z = false;
            }
            StringBuilder sb = new StringBuilder("Token delivery failed on attempt ");
            sb.append(getRunAttemptCount());
            sb.append(z ? ", retrying later" : ", giving up");
            PWLog.debug("RegisterDeviceWorker", sb.toString());
            return z ? ListenableWorker.Result.retry() : ListenableWorker.Result.failure();
        } catch (Throwable th) {
            g.f5248a.unlock();
            throw th;
        }
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected final String getLogTag() {
        return "RegisterDeviceWorker";
    }
}
