package ru.rustore.sdk.review;

import com.google.firebase.remoteconfig.RemoteConfigConstants;
import java.util.Map;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.core.config.RuStoreInternalConfig;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final l f6698a;
    public final z b;
    public final Lazy c;

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class a extends Lambda implements Function0<Map<String, ? extends String>> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final Map<String, ? extends String> invoke() {
            z zVar = f.this.b;
            zVar.f6718a.getClass();
            b0 b0Var = zVar.b;
            b0Var.getClass();
            String type = RuStoreInternalConfig.INSTANCE.create(b0Var.f6687a).getSdkType().getValue();
            zVar.c.getClass();
            Intrinsics.checkNotNullParameter("ru.rustore.sdk:review", "value");
            Intrinsics.checkNotNullParameter(type, "value");
            Intrinsics.checkNotNullParameter("10.5.2", "value");
            Intrinsics.checkNotNullParameter("ru.rustore.sdk:review", "name");
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter("10.5.2", "version");
            return MapsKt.mapOf(TuplesKt.to("sdkName", "ru.rustore.sdk:review"), TuplesKt.to("sdkType", type), TuplesKt.to(RemoteConfigConstants.RequestFieldKey.SDK_VERSION, "10.5.2"));
        }
    }

    public f(l reviewAnalyticsRepository, z sdkInfoRepository) {
        Intrinsics.checkNotNullParameter(reviewAnalyticsRepository, "reviewAnalyticsRepository");
        Intrinsics.checkNotNullParameter(sdkInfoRepository, "sdkInfoRepository");
        this.f6698a = reviewAnalyticsRepository;
        this.b = sdkInfoRepository;
        this.c = LazyKt.lazy(new a());
    }
}
