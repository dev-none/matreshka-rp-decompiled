package com.pushwoosh.e0;

import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public abstract class i {
    public static void a() {
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.e0.i$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                i.b();
            }
        });
    }

    public static /* synthetic */ void b() {
        ArrayList arrayListD = ((com.pushwoosh.m0.m) RepositoryModule.getLockScreenMediaStorage()).d();
        if (arrayListD.isEmpty()) {
            return;
        }
        com.pushwoosh.richmedia.a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController == null) {
            PWLog.error("LockScreenReceiver", "RichMediaController is null");
            return;
        }
        Iterator it = arrayListD.iterator();
        while (it.hasNext()) {
            richMediaController.a((com.pushwoosh.q.b) it.next());
        }
        ((com.pushwoosh.m0.m) RepositoryModule.getLockScreenMediaStorage()).b();
    }
}
