package com.pushwoosh.d0;

import android.content.pm.ProviderInfo;
import android.os.AsyncTask;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes6.dex */
public final class d extends f {
    public final CountDownLatch d = new CountDownLatch(1);
    public c e;

    public final /* synthetic */ void a(Handler handler, e eVar, String str) {
        handler.removeCallbacksAndMessages(null);
        if (eVar != null) {
            eVar.a(str);
        }
        this.d.countDown();
        this.e = null;
    }

    @Override // com.pushwoosh.d0.f
    public final String b() {
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        c cVar = this.e;
        if (cVar == null || cVar.getStatus() == AsyncTask.Status.FINISHED) {
            a((e) null);
        }
        try {
            this.d.await();
            return registrationPreferences.deviceId().get();
        } catch (InterruptedException unused) {
            return null;
        }
    }

    public final /* synthetic */ void c() {
        c cVar = this.e;
        if (cVar == null || cVar.getStatus() == AsyncTask.Status.FINISHED) {
            return;
        }
        this.e.cancel(true);
    }

    @Override // com.pushwoosh.d0.f
    public final void a(final e eVar) {
        c cVar = this.e;
        if (cVar != null && cVar.getStatus() != AsyncTask.Status.FINISHED) {
            if (eVar != null) {
                c cVar2 = this.e;
                b bVar = new b() { // from class: com.pushwoosh.d0.d$$ExternalSyntheticLambda0
                    @Override // com.pushwoosh.d0.b
                    public final void a(String str) {
                        eVar.a(str);
                    }
                };
                synchronized (cVar2.f5057a) {
                    cVar2.f5057a.add(bVar);
                }
                return;
            }
            return;
        }
        final Handler handler = new Handler(Looper.myLooper() != null ? Looper.myLooper() : Looper.getMainLooper());
        b bVar2 = new b() { // from class: com.pushwoosh.d0.d$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.d0.b
            public final void a(String str) {
                this.f$0.a(handler, eVar, str);
            }
        };
        try {
            String str = RepositoryModule.getRegistrationPreferences().deviceId().get();
            if (!TextUtils.isEmpty(str)) {
                bVar2.a(str);
                return;
            }
            c cVar3 = new c();
            this.e = cVar3;
            cVar3.a(bVar2);
            handler.postDelayed(new Runnable() { // from class: com.pushwoosh.d0.d$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.c();
                }
            }, 10000L);
            this.e.execute(new Void[0]);
        } catch (Exception e) {
            PWLog.error("DeviceUtils", "Failed to query shared UUID provider", e);
            bVar2.a(null);
        }
    }

    public static ArrayList a(List list) {
        ArrayList arrayList = new ArrayList();
        if (list != null) {
            String[] strArr = ((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).h;
            Iterator it = list.iterator();
            while (it.hasNext()) {
                ProviderInfo providerInfo = (ProviderInfo) it.next();
                for (String str : strArr) {
                    if (!TextUtils.isEmpty(providerInfo.packageName) && TextUtils.equals(providerInfo.packageName, str)) {
                        arrayList.add(providerInfo);
                    }
                }
            }
        }
        return arrayList;
    }
}
