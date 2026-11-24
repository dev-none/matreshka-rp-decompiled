package com.vk.id;

import android.content.Context;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.internal.di.VKIDDepsProd;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
import com.vk.id.test.TestSilentAuthInfoProvider;
import com.vk.id.tracking.core.CrashReporter;
import com.vk.id.tracking.core.PerformanceTracker;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000g\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003*\u0001\u0000\b\n\u0018\u00002\u00020\u0001R\u001a\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006R\u001a\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\b0\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0006R\u001a\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u000b0\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u0006R\u001a\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0006R\u001a\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00110\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0006R\u001a\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00140\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0006R\u0014\u0010\u0016\u001a\u00020\u0017X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0014\u0010\u001a\u001a\u00020\u001bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0014\u0010\u001e\u001a\u00020\u001fX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0014\u0010\"\u001a\u00020#X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u0014\u0010&\u001a\u00020'X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b(\u0010)¨\u0006*"}, d2 = {"com/vk/id/VKID$Companion$init$2", "Lcom/vk/id/internal/di/VKIDDepsProd;", "api", "Lkotlin/Lazy;", "Lcom/vk/id/network/InternalVKIDApiContract;", "getApi", "()Lkotlin/Lazy;", "groupSubscriptionApiService", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "getGroupSubscriptionApiService", "vkSilentAuthInfoProvider", "Lcom/vk/id/test/TestSilentAuthInfoProvider;", "getVkSilentAuthInfoProvider", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "getDeviceIdStorage", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "getPrefsStore", "encryptedSharedPreferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getEncryptedSharedPreferencesStorage", "vkidPackageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "getVkidPackageManager", "()Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "getActivityStarter", "()Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "trackingTracker", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "getTrackingTracker", "()Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKID$Companion$init$2 extends VKIDDepsProd {
    private final InternalVKIDActivityStarter activityStarter;
    private final Lazy<InternalVKIDApiContract> api;
    private final CrashReporter crashReporter;
    private final Lazy<InternalVKIDDeviceIdProvider.DeviceIdStorage> deviceIdStorage;
    private final Lazy<InternalVKIDPreferencesStorage> encryptedSharedPreferencesStorage;
    private final Lazy<InternalVKIDGroupSubscriptionApiContract> groupSubscriptionApiService;
    private final PerformanceTracker performanceTracker;
    private final Lazy<InternalVKIDPrefsStore> prefsStore;
    private final VKIDAnalytics.Tracker trackingTracker;
    private final Lazy<TestSilentAuthInfoProvider> vkSilentAuthInfoProvider;
    private final InternalVKIDPackageManager vkidPackageManager;

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDGroupSubscriptionApiContract groupSubscriptionApiService$lambda$1(InternalVKIDGroupSubscriptionApiContract internalVKIDGroupSubscriptionApiContract) {
        return internalVKIDGroupSubscriptionApiContract;
    }

    VKID$Companion$init$2(InternalVKIDPackageManager internalVKIDPackageManager, InternalVKIDActivityStarter internalVKIDActivityStarter, Context context, GroupSubscriptionLimit groupSubscriptionLimit, final InternalVKIDApiContract internalVKIDApiContract, final InternalVKIDGroupSubscriptionApiContract internalVKIDGroupSubscriptionApiContract, final InternalVKIDDeviceIdProvider.DeviceIdStorage deviceIdStorage, final InternalVKIDPrefsStore internalVKIDPrefsStore, final InternalVKIDPreferencesStorage internalVKIDPreferencesStorage) {
        super(context, false, null, false, false, groupSubscriptionLimit, null, 92, null);
        this.api = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.api$lambda$0(internalVKIDApiContract, this);
            }
        });
        this.groupSubscriptionApiService = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.groupSubscriptionApiService$lambda$1(internalVKIDGroupSubscriptionApiContract);
            }
        });
        this.vkSilentAuthInfoProvider = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.vkSilentAuthInfoProvider$lambda$2();
            }
        });
        this.deviceIdStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.deviceIdStorage$lambda$3(deviceIdStorage, this);
            }
        });
        this.prefsStore = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.prefsStore$lambda$4(internalVKIDPrefsStore, this);
            }
        });
        this.encryptedSharedPreferencesStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$init$2$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$init$2.encryptedSharedPreferencesStorage$lambda$5(internalVKIDPreferencesStorage, this);
            }
        });
        this.vkidPackageManager = internalVKIDPackageManager == null ? super.getVkidPackageManager() : internalVKIDPackageManager;
        this.activityStarter = internalVKIDActivityStarter == null ? super.getActivityStarter() : internalVKIDActivityStarter;
        this.performanceTracker = new PerformanceTracker() { // from class: com.vk.id.VKID$Companion$init$2$performanceTracker$1
            @Override // com.vk.id.tracking.core.PerformanceTracker
            public void endTracking(String key) {
                Intrinsics.checkNotNullParameter(key, "key");
            }

            @Override // com.vk.id.tracking.core.PerformanceTracker
            public void startTracking(String key) {
                Intrinsics.checkNotNullParameter(key, "key");
            }

            @Override // com.vk.id.tracking.core.PerformanceTracker
            public void runTracking(String key, Function0<Unit> action) {
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(action, "action");
                action.invoke();
            }

            @Override // com.vk.id.tracking.core.PerformanceTracker
            public Object runTrackingSuspend(String str, Function1<? super Continuation<? super Unit>, ? extends Object> function1, Continuation<? super Unit> continuation) {
                Object objInvoke = function1.invoke(continuation);
                return objInvoke == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objInvoke : Unit.INSTANCE;
            }
        };
        this.crashReporter = new CrashReporter() { // from class: com.vk.id.VKID$Companion$init$2$crashReporter$1
            @Override // com.vk.id.tracking.core.CrashReporter
            public void report(Throwable crash) {
                Intrinsics.checkNotNullParameter(crash, "crash");
            }

            @Override // com.vk.id.tracking.core.CrashReporter
            public <T> T runReportingCrashes(Function1<? super Throwable, ? extends T> errorValueProvider, Function0<? extends T> action) {
                Intrinsics.checkNotNullParameter(errorValueProvider, "errorValueProvider");
                Intrinsics.checkNotNullParameter(action, "action");
                return action.invoke();
            }

            @Override // com.vk.id.tracking.core.CrashReporter
            public <T> Object runReportingCrashesSuspend(Function2<? super Throwable, ? super Continuation<? super T>, ? extends Object> function2, Function1<? super Continuation<? super T>, ? extends Object> function1, Continuation<? super T> continuation) {
                return function1.invoke(continuation);
            }
        };
        this.trackingTracker = new VKIDAnalytics.Tracker() { // from class: com.vk.id.VKID$Companion$init$2$trackingTracker$1
            @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
            public void trackEvent(String accessToken, String name, VKIDAnalytics.EventParam... params) {
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(params, "params");
            }

            @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
            @InternalVKIDApi
            public void trackEvent(String str, VKIDAnalytics.EventParam... eventParamArr) {
                VKIDAnalytics.Tracker.DefaultImpls.trackEvent(this, str, eventParamArr);
            }
        };
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDApiContract> getApi() {
        return this.api;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDApiContract api$lambda$0(InternalVKIDApiContract internalVKIDApiContract, VKID$Companion$init$2 vKID$Companion$init$2) {
        return internalVKIDApiContract == null ? super.getApi().getValue() : internalVKIDApiContract;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDGroupSubscriptionApiContract> getGroupSubscriptionApiService() {
        return this.groupSubscriptionApiService;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TestSilentAuthInfoProvider vkSilentAuthInfoProvider$lambda$2() {
        return new TestSilentAuthInfoProvider();
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<TestSilentAuthInfoProvider> getVkSilentAuthInfoProvider() {
        return this.vkSilentAuthInfoProvider;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDDeviceIdProvider.DeviceIdStorage deviceIdStorage$lambda$3(InternalVKIDDeviceIdProvider.DeviceIdStorage deviceIdStorage, VKID$Companion$init$2 vKID$Companion$init$2) {
        return deviceIdStorage == null ? super.getDeviceIdStorage().getValue() : deviceIdStorage;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDDeviceIdProvider.DeviceIdStorage> getDeviceIdStorage() {
        return this.deviceIdStorage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDPrefsStore prefsStore$lambda$4(InternalVKIDPrefsStore internalVKIDPrefsStore, VKID$Companion$init$2 vKID$Companion$init$2) {
        return internalVKIDPrefsStore == null ? super.getPrefsStore().getValue() : internalVKIDPrefsStore;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDPrefsStore> getPrefsStore() {
        return this.prefsStore;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDPreferencesStorage> getEncryptedSharedPreferencesStorage() {
        return this.encryptedSharedPreferencesStorage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDPreferencesStorage encryptedSharedPreferencesStorage$lambda$5(InternalVKIDPreferencesStorage internalVKIDPreferencesStorage, VKID$Companion$init$2 vKID$Companion$init$2) {
        return internalVKIDPreferencesStorage == null ? super.getEncryptedSharedPreferencesStorage().getValue() : internalVKIDPreferencesStorage;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public InternalVKIDPackageManager getVkidPackageManager() {
        return this.vkidPackageManager;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public InternalVKIDActivityStarter getActivityStarter() {
        return this.activityStarter;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public PerformanceTracker getPerformanceTracker() {
        return this.performanceTracker;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public CrashReporter getCrashReporter() {
        return this.crashReporter;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public VKIDAnalytics.Tracker getTrackingTracker() {
        return this.trackingTracker;
    }
}
