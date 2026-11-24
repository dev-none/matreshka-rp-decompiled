package io.appmetrica.analytics.impl;

import android.content.Context;
import android.net.ConnectivityManager;
import io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy;
import io.appmetrica.analytics.coreapi.internal.system.NetworkType;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import java.util.EnumSet;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.w5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2540w5 implements IExecutionPolicy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6379a;
    public final C2208j b = C2495ua.k().b();
    public final EnumSet c = EnumSet.of(NetworkType.OFFLINE);
    public final String d = "connection based";

    public C2540w5(Context context) {
        this.f6379a = context;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final boolean canBeExecuted() {
        C2208j c2208j = this.b;
        Context context = this.f6379a;
        c2208j.getClass();
        He he = Le.f5775a;
        return !this.c.contains((NetworkType) SystemServiceUtils.accessSystemServiceSafelyOrDefault((ConnectivityManager) context.getSystemService("connectivity"), "getting connection type", "ConnectivityManager", NetworkType.UNDEFINED, new Ke()));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final String description() {
        return this.d;
    }
}
