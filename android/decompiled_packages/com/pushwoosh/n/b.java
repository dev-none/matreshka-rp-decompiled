package com.pushwoosh.n;

import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.io.IOException;

/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Resource f5261a;
    public final a b;
    public volatile boolean e = false;
    public final com.pushwoosh.j.d c = com.pushwoosh.e.b.a();
    public final NotificationPrefs d = RepositoryModule.getNotificationPreferences();

    public b(Resource resource, a aVar) {
        this.f5261a = resource;
        this.b = aVar;
    }

    public final void a() {
        PWLog.noise("DownloadHtmlTask", "execute()");
        this.b.a();
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.n.b$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final void b() {
        final Result resultFromException;
        this.f5261a.setTags(com.pushwoosh.h.b.a(this.d));
        com.pushwoosh.j.d dVar = this.c;
        if (dVar != null) {
            Result resultB = dVar.b(this.f5261a);
            if (resultB.isSuccess()) {
                Resource resource = (Resource) resultB.getData();
                try {
                    resultFromException = Result.fromData(dVar.d.a(resource));
                } catch (IOException e) {
                    resultFromException = Result.fromException(new com.pushwoosh.g.a("Can't mapping resource " + resource.getCode() + " to htmlData", e));
                }
            } else {
                resultFromException = Result.fromException((com.pushwoosh.g.a) resultB.getException());
            }
        } else {
            resultFromException = Result.fromException(new com.pushwoosh.g.a("InAppRepository is not initialized"));
        }
        if (this.e) {
            return;
        }
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.n.b$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(resultFromException);
            }
        });
    }

    public final /* synthetic */ void a(Result result) {
        if (this.e) {
            return;
        }
        if (!result.isSuccess()) {
            EventBus.sendEvent(new com.pushwoosh.f.d(this.f5261a, result.getException()));
        }
        this.b.a(result);
    }
}
