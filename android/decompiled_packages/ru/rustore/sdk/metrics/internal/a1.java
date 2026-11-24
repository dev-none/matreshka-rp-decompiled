package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public abstract class a1 {

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends a1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final a f6593a = new a();
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class b extends a1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final b f6594a = new b();
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class c extends a1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final ArrayList f6595a;

        public c(ArrayList values) {
            Intrinsics.checkNotNullParameter(values, "values");
            this.f6595a = values;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            return (obj instanceof c) && Intrinsics.areEqual(this.f6595a, ((c) obj).f6595a);
        }

        public final int hashCode() {
            return this.f6595a.hashCode();
        }

        public final String toString() {
            return "Rejected(values=" + this.f6595a + ')';
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class d extends a1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final ArrayList f6596a;

        public d(ArrayList values) {
            Intrinsics.checkNotNullParameter(values, "values");
            this.f6596a = values;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            return (obj instanceof d) && Intrinsics.areEqual(this.f6596a, ((d) obj).f6596a);
        }

        public final int hashCode() {
            return this.f6596a.hashCode();
        }

        public final String toString() {
            return "Sent(values=" + this.f6596a + ')';
        }
    }
}
