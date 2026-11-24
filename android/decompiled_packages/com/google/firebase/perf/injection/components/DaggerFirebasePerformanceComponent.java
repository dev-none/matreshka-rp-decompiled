package com.google.firebase.perf.injection.components;

import com.google.android.datatransport.TransportFactory;
import com.google.firebase.FirebaseApp;
import com.google.firebase.installations.FirebaseInstallationsApi;
import com.google.firebase.perf.FirebasePerformance;
import com.google.firebase.perf.FirebasePerformance_Factory;
import com.google.firebase.perf.config.ConfigResolver;
import com.google.firebase.perf.config.RemoteConfigManager;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesConfigResolverFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesFirebaseAppFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesFirebaseInstallationsFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesRemoteConfigComponentFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesRemoteConfigManagerFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesSessionManagerFactory;
import com.google.firebase.perf.injection.modules.FirebasePerformanceModule_ProvidesTransportFactoryProviderFactory;
import com.google.firebase.perf.session.SessionManager;
import com.google.firebase.remoteconfig.RemoteConfigComponent;
import dagger.internal.DoubleCheck;
import dagger.internal.Preconditions;
import dagger.internal.Provider;

/* JADX INFO: loaded from: classes5.dex */
public final class DaggerFirebasePerformanceComponent {
    private DaggerFirebasePerformanceComponent() {
    }

    public static Builder builder() {
        return new Builder();
    }

    public static final class Builder {
        private FirebasePerformanceModule firebasePerformanceModule;

        private Builder() {
        }

        public Builder firebasePerformanceModule(FirebasePerformanceModule firebasePerformanceModule) {
            this.firebasePerformanceModule = (FirebasePerformanceModule) Preconditions.checkNotNull(firebasePerformanceModule);
            return this;
        }

        public FirebasePerformanceComponent build() {
            Preconditions.checkBuilderRequirement(this.firebasePerformanceModule, FirebasePerformanceModule.class);
            return new FirebasePerformanceComponentImpl(this.firebasePerformanceModule);
        }
    }

    private static final class FirebasePerformanceComponentImpl implements FirebasePerformanceComponent {
        private final FirebasePerformanceComponentImpl firebasePerformanceComponentImpl = this;
        Provider<FirebasePerformance> firebasePerformanceProvider;
        Provider<ConfigResolver> providesConfigResolverProvider;
        Provider<FirebaseApp> providesFirebaseAppProvider;
        Provider<FirebaseInstallationsApi> providesFirebaseInstallationsProvider;
        Provider<com.google.firebase.inject.Provider<RemoteConfigComponent>> providesRemoteConfigComponentProvider;
        Provider<RemoteConfigManager> providesRemoteConfigManagerProvider;
        Provider<SessionManager> providesSessionManagerProvider;
        Provider<com.google.firebase.inject.Provider<TransportFactory>> providesTransportFactoryProvider;

        FirebasePerformanceComponentImpl(FirebasePerformanceModule firebasePerformanceModule) {
            initialize(firebasePerformanceModule);
        }

        private void initialize(FirebasePerformanceModule firebasePerformanceModule) {
            this.providesFirebaseAppProvider = FirebasePerformanceModule_ProvidesFirebaseAppFactory.create(firebasePerformanceModule);
            this.providesRemoteConfigComponentProvider = FirebasePerformanceModule_ProvidesRemoteConfigComponentFactory.create(firebasePerformanceModule);
            this.providesFirebaseInstallationsProvider = FirebasePerformanceModule_ProvidesFirebaseInstallationsFactory.create(firebasePerformanceModule);
            this.providesTransportFactoryProvider = FirebasePerformanceModule_ProvidesTransportFactoryProviderFactory.create(firebasePerformanceModule);
            this.providesRemoteConfigManagerProvider = FirebasePerformanceModule_ProvidesRemoteConfigManagerFactory.create(firebasePerformanceModule);
            this.providesConfigResolverProvider = FirebasePerformanceModule_ProvidesConfigResolverFactory.create(firebasePerformanceModule);
            FirebasePerformanceModule_ProvidesSessionManagerFactory firebasePerformanceModule_ProvidesSessionManagerFactoryCreate = FirebasePerformanceModule_ProvidesSessionManagerFactory.create(firebasePerformanceModule);
            this.providesSessionManagerProvider = firebasePerformanceModule_ProvidesSessionManagerFactoryCreate;
            this.firebasePerformanceProvider = DoubleCheck.provider((Provider) FirebasePerformance_Factory.create(this.providesFirebaseAppProvider, this.providesRemoteConfigComponentProvider, this.providesFirebaseInstallationsProvider, this.providesTransportFactoryProvider, this.providesRemoteConfigManagerProvider, this.providesConfigResolverProvider, firebasePerformanceModule_ProvidesSessionManagerFactoryCreate));
        }

        @Override // com.google.firebase.perf.injection.components.FirebasePerformanceComponent
        public FirebasePerformance getFirebasePerformance() {
            return this.firebasePerformanceProvider.get();
        }
    }
}
