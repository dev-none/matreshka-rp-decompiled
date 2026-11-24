package com.pushwoosh.inapp.ui;

import com.pushwoosh.inapp.network.model.Resource;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class w1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Resource f5176a;
    public final String b;

    public w1(String str, Resource resource) {
        Intrinsics.checkNotNullParameter(resource, "resource");
        this.f5176a = resource;
        this.b = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof w1)) {
            return false;
        }
        w1 w1Var = (w1) obj;
        return Intrinsics.areEqual(this.f5176a, w1Var.f5176a) && Intrinsics.areEqual(this.b, w1Var.b);
    }

    public final int hashCode() {
        int iHashCode = this.f5176a.hashCode() * 31;
        String str = this.b;
        return iHashCode + (str == null ? 0 : str.hashCode());
    }

    public final String toString() {
        return "Pending(resource=" + this.f5176a + ", messageHash=" + this.b + ')';
    }
}
