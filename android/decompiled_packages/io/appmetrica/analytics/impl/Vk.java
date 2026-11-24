package io.appmetrica.analytics.impl;

import com.vk.id.analytics.stat.StatTracker;
import okhttp3.internal.connection.RealConnection;

/* JADX INFO: loaded from: classes7.dex */
public final class Vk {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final zo f5936a;

    public Vk(zo zoVar) {
        this.f5936a = zoVar;
    }

    public final long a() {
        long jOptLong;
        zo zoVar = this.f5936a;
        synchronized (zoVar) {
            jOptLong = zoVar.f6438a.a().optLong(StatTracker.EXTERNAL_PARAM_SESSION_ID, -1L);
        }
        long j = RealConnection.IDLE_CONNECTION_HEALTHY_NS;
        if (jOptLong >= RealConnection.IDLE_CONNECTION_HEALTHY_NS) {
            j = 1 + jOptLong;
        }
        this.f5936a.c(j);
        return j;
    }
}
