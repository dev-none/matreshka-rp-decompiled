package com.adjust.sdk;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
class FirstSessionDelayManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ActivityHandler f4176a;
    public final ArrayList b = new ArrayList();
    public int c = 0;

    public FirstSessionDelayManager(ActivityHandler activityHandler) {
        this.f4176a = activityHandler;
    }

    public final void a(Runnable runnable, String str) {
        if (this.c != 3) {
            runnable.run();
            return;
        }
        this.f4176a.getAdjustConfig().getLogger().debug("Enqueuing \"" + str + "\" action to be executed after first session delay ends", new Object[0]);
        this.b.add(runnable);
    }

    public final void a(String str, IRunActivityHandler iRunActivityHandler) {
        if (this.c == 3) {
            this.f4176a.getAdjustConfig().getLogger().debug("Enqueuing \"" + str + "\" action to be executed after first session delay ends", new Object[0]);
            this.f4176a.getAdjustConfig().preLaunchActions.preLaunchActionsArray.add(iRunActivityHandler);
            return;
        }
        iRunActivityHandler.run(this.f4176a);
    }
}
