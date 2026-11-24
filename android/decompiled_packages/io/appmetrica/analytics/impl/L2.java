package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences;

/* JADX INFO: loaded from: classes7.dex */
public abstract class L2 implements ModulePreferences {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2606yl f5768a;

    public L2(InterfaceC2606yl interfaceC2606yl) {
        this.f5768a = interfaceC2606yl;
    }

    public abstract String a(String str);

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final boolean getBoolean(String str, boolean z) {
        return ((Fd) this.f5768a).c(str, z);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final int getInt(String str, int i) {
        return ((Fd) this.f5768a).c(str, i);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final long getLong(String str, long j) {
        return ((Fd) this.f5768a).c(a(str), j);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final String getString(String str, String str2) {
        return ((Fd) this.f5768a).c(a(str), str2);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final void putBoolean(String str, boolean z) {
        Fd fd = (Fd) this.f5768a;
        ((AbstractC2044cf) ((InterfaceC2606yl) fd.b(fd.f(a(str)), z))).b();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final void putInt(String str, int i) {
        Fd fd = (Fd) this.f5768a;
        ((AbstractC2044cf) ((InterfaceC2606yl) fd.b(fd.f(str), i))).b();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final void putLong(String str, long j) {
        Fd fd = (Fd) this.f5768a;
        ((AbstractC2044cf) ((InterfaceC2606yl) fd.b(fd.f(a(str)), j))).b();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences
    public final void putString(String str, String str2) {
        Fd fd = (Fd) this.f5768a;
        ((AbstractC2044cf) ((InterfaceC2606yl) fd.b(fd.f(a(str)), str2))).b();
    }
}
