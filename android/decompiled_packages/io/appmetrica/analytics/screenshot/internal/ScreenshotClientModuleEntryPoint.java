package io.appmetrica.analytics.screenshot.internal;

import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.modulesapi.internal.client.BundleToServiceConfigConverter;
import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint;
import io.appmetrica.analytics.modulesapi.internal.client.ModuleServiceConfig;
import io.appmetrica.analytics.modulesapi.internal.client.ServiceConfigExtensionConfiguration;
import io.appmetrica.analytics.modulesapi.internal.client.ServiceConfigUpdateListener;
import io.appmetrica.analytics.screenshot.impl.C2641h;
import io.appmetrica.analytics.screenshot.impl.C2645l;
import io.appmetrica.analytics.screenshot.impl.C2646m;
import io.appmetrica.analytics.screenshot.impl.C2655w;
import io.appmetrica.analytics.screenshot.impl.C2656x;
import io.appmetrica.analytics.screenshot.impl.D;
import io.appmetrica.analytics.screenshot.impl.F;
import io.appmetrica.analytics.screenshot.impl.I;
import io.appmetrica.analytics.screenshot.impl.T;
import io.appmetrica.analytics.screenshot.impl.V;
import io.sentry.protocol.ViewHierarchyNode;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0014\u0010\u0015J\u0010\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0004\u001a\u00020\u0003H\u0016J\b\u0010\u0007\u001a\u00020\u0005H\u0016R\u001a\u0010\r\u001a\u00020\b8\u0016X\u0096D¢\u0006\f\n\u0004\b\t\u0010\n\u001a\u0004\b\u000b\u0010\fR \u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00020\u000e8\u0016X\u0096\u0004¢\u0006\f\n\u0004\b\u000f\u0010\u0010\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u0016"}, d2 = {"Lio/appmetrica/analytics/screenshot/internal/ScreenshotClientModuleEntryPoint;", "Lio/appmetrica/analytics/modulesapi/internal/client/ModuleClientEntryPoint;", "Lio/appmetrica/analytics/screenshot/impl/D;", "Lio/appmetrica/analytics/modulesapi/internal/client/ClientContext;", "clientContext", "", "initClientSide", "onActivated", "", "e", "Ljava/lang/String;", "getIdentifier", "()Ljava/lang/String;", ViewHierarchyNode.JsonKeys.IDENTIFIER, "Lio/appmetrica/analytics/modulesapi/internal/client/ServiceConfigExtensionConfiguration;", "f", "Lio/appmetrica/analytics/modulesapi/internal/client/ServiceConfigExtensionConfiguration;", "getServiceConfigExtensionConfiguration", "()Lio/appmetrica/analytics/modulesapi/internal/client/ServiceConfigExtensionConfiguration;", "serviceConfigExtensionConfiguration", "<init>", "()V", "screenshot_release"}, k = 1, mv = {1, 6, 0})
public final class ScreenshotClientModuleEntryPoint extends ModuleClientEntryPoint<D> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private C2645l f6582a;
    private V d;
    private final C2641h b = new C2641h();
    private final ScreenshotClientModuleEntryPoint$configUpdateListener$1 c = new ServiceConfigUpdateListener<D>() { // from class: io.appmetrica.analytics.screenshot.internal.ScreenshotClientModuleEntryPoint$configUpdateListener$1
        @Override // io.appmetrica.analytics.modulesapi.internal.client.ServiceConfigUpdateListener
        public void onServiceConfigUpdated(ModuleServiceConfig<D> config) {
            C2645l c2645l;
            ScreenshotClientModuleEntryPoint screenshotClientModuleEntryPoint = this.f6583a;
            synchronized (screenshotClientModuleEntryPoint) {
                D featuresConfig = config.getFeaturesConfig();
                V v = null;
                if (featuresConfig != null) {
                    boolean zB = featuresConfig.b();
                    F fA = featuresConfig.a();
                    c2645l = new C2645l(zB, fA != null ? new C2646m(fA) : null);
                } else {
                    c2645l = null;
                }
                screenshotClientModuleEntryPoint.f6582a = c2645l;
                if (screenshotClientModuleEntryPoint.d != null) {
                    V v2 = screenshotClientModuleEntryPoint.d;
                    if (v2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("screenshotCaptorsController");
                    } else {
                        v = v2;
                    }
                    v.a(screenshotClientModuleEntryPoint.f6582a);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
    };

    /* JADX INFO: renamed from: e, reason: from kotlin metadata */
    private final String identifier = "screenshot";
    private final ScreenshotClientModuleEntryPoint$serviceConfigExtensionConfiguration$1 f = new ServiceConfigExtensionConfiguration<D>() { // from class: io.appmetrica.analytics.screenshot.internal.ScreenshotClientModuleEntryPoint$serviceConfigExtensionConfiguration$1
        @Override // io.appmetrica.analytics.modulesapi.internal.client.ServiceConfigExtensionConfiguration
        public BundleToServiceConfigConverter<D> getBundleConverter() {
            return this.f6584a.b;
        }

        @Override // io.appmetrica.analytics.modulesapi.internal.client.ServiceConfigExtensionConfiguration
        public ServiceConfigUpdateListener<D> getServiceConfigUpdateListener() {
            return this.f6584a.c;
        }
    };

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint
    public String getIdentifier() {
        return this.identifier;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint
    public ServiceConfigExtensionConfiguration<D> getServiceConfigExtensionConfiguration() {
        return this.f;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint
    public void initClientSide(ClientContext clientContext) {
        synchronized (this) {
            C2656x c2656x = new C2656x(clientContext);
            this.d = new V(AndroidUtils.isApiAchieved(34) ? new C2655w(clientContext, c2656x) : new I(clientContext, c2656x));
            Unit unit = Unit.INSTANCE;
        }
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint
    public void onActivated() {
        synchronized (this) {
            V v = this.d;
            if (v != null) {
                if (v == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("screenshotCaptorsController");
                    v = null;
                }
                C2645l c2645l = this.f6582a;
                Iterator it = v.f6548a.iterator();
                while (it.hasNext()) {
                    ((T) it.next()).a();
                }
                v.a(c2645l);
            }
            Unit unit = Unit.INSTANCE;
        }
    }
}
