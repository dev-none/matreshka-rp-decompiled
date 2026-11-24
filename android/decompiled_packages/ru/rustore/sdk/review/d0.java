package ru.rustore.sdk.review;

import android.content.Context;
import java.util.Map;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsClient;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class d0 {
    public static volatile d0 h;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6690a;
    public final Map<String, Object> b;
    public final Lazy c = LazyKt.lazy(new c());
    public final Lazy d = LazyKt.lazy(new e());
    public final Lazy e = LazyKt.lazy(d.f6693a);
    public final Lazy f = LazyKt.lazy(new b());
    public final Lazy g = LazyKt.lazy(new f());

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class a {
    }

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class b extends Lambda implements Function0<MetricsClient> {
        public b() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final MetricsClient invoke() {
            return MetricsClient.INSTANCE.getInstance(d0.this.f6690a);
        }
    }

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class c extends Lambda implements Function0<ru.rustore.sdk.review.f> {
        public c() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.review.f invoke() {
            return new ru.rustore.sdk.review.f((l) d0.this.d.getValue(), (z) d0.this.g.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class d extends Lambda implements Function0<h> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final d f6693a = new d();

        public d() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final h invoke() {
            return new h();
        }
    }

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class e extends Lambda implements Function0<l> {
        public e() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final l invoke() {
            return new l((h) d0.this.e.getValue(), (MetricsClient) d0.this.f.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class f extends Lambda implements Function0<z> {
        public f() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final z invoke() {
            return new z(new a0(), new b0(d0.this.b), new c0());
        }
    }

    public d0(Context context, Map map) {
        this.f6690a = context;
        this.b = map;
    }
}
