package ru.rustore.sdk.metrics.internal;

import android.net.http.X509TrustManagerExtensions;
import javax.net.ssl.X509TrustManager;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class n1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final X509TrustManager f6653a;
    public final X509TrustManagerExtensions b;

    public n1(X509TrustManager trustManager, X509TrustManagerExtensions trustExtensions) {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        Intrinsics.checkNotNullParameter(trustExtensions, "trustExtensions");
        this.f6653a = trustManager;
        this.b = trustExtensions;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n1)) {
            return false;
        }
        n1 n1Var = (n1) obj;
        return Intrinsics.areEqual(this.f6653a, n1Var.f6653a) && Intrinsics.areEqual(this.b, n1Var.b);
    }

    public final int hashCode() {
        return this.b.hashCode() + (this.f6653a.hashCode() * 31);
    }

    public final String toString() {
        return "X509TrustPair(trustManager=" + this.f6653a + ", trustExtensions=" + this.b + ')';
    }
}
