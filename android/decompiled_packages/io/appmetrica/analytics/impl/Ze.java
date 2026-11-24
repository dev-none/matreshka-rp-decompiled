package io.appmetrica.analytics.impl;

import android.content.Context;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class Ze implements Yc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5986a;
    public final String b;
    public final String c;

    public Ze(Context context, String str, String str2) {
        this.f5986a = context;
        this.b = str;
        this.c = str2;
    }

    public final Ze a(Context context, String str, String str2) {
        return new Ze(context, str, str2);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Ze)) {
            return false;
        }
        Ze ze = (Ze) obj;
        return Intrinsics.areEqual(this.f5986a, ze.f5986a) && Intrinsics.areEqual(this.b, ze.b) && Intrinsics.areEqual(this.c, ze.c);
    }

    public final int hashCode() {
        return this.c.hashCode() + ((this.b.hashCode() + (this.f5986a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "PreferencesBasedModuleEntryPoint(context=" + this.f5986a + ", prefName=" + this.b + ", prefValueName=" + this.c + ')';
    }

    public static Ze a(Ze ze, Context context, String str, String str2, int i, Object obj) {
        if ((i & 1) != 0) {
            context = ze.f5986a;
        }
        if ((i & 2) != 0) {
            str = ze.b;
        }
        if ((i & 4) != 0) {
            str2 = ze.c;
        }
        ze.getClass();
        return new Ze(context, str, str2);
    }

    @Override // io.appmetrica.analytics.impl.Yc
    public final String a() {
        String string = this.f5986a.getSharedPreferences(this.b, 0).getString(this.c, "");
        return string == null ? "" : string;
    }
}
