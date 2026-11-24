package com.pushwoosh.m0;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f f5250a;

    public k(f fVar) {
        this.f5250a = fVar;
    }

    public final void a(int i) {
        PWLog.noise("LocalNotificationStorage", "Removed dbLocalNotification: " + i);
        try {
            f fVar = this.f5250a;
            if (fVar == null) {
                PWLog.error("dbLocalNotificationHelper is null, can't remove local push");
            } else {
                fVar.b("localNotification", i);
            }
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }
}
