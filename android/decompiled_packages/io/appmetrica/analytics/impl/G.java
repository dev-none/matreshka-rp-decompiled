package io.appmetrica.analytics.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class G {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5682a;
    public final int b;
    public final int c;

    public G(int i, int i2, int i3) {
        this.f5682a = i;
        this.b = i2;
        this.c = i3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(G.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj == null) {
            throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.impl.id.AdvIdGetterController.CanTrackIdentifiers");
        }
        G g = (G) obj;
        return this.f5682a == g.f5682a && this.b == g.b && this.c == g.c;
    }

    public final int hashCode() {
        return Q7.a(this.c) + ((Q7.a(this.b) + (Q7.a(this.f5682a) * 31)) * 31);
    }

    public final String toString() {
        return "CanTrackIdentifiers(canTrackGaid=" + H.a(this.f5682a) + ", canTrackHoaid=" + H.a(this.b) + ", canTrackYandexAdvId=" + H.a(this.c) + ')';
    }
}
