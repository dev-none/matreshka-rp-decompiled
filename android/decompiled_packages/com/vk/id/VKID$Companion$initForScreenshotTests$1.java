package com.vk.id;

import android.content.Context;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.di.VKIDDepsProd;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
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
@Metadata(d1 = {"\u00007\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002*\u0001\u0000\b\n\u0018\u00002\u00020\u0001R\u001a\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0007\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0014\u0010\u000b\u001a\u00020\fX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0014\u0010\u000f\u001a\u00020\u0010X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0014\u0010\u0013\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\nR\u001a\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0006¨\u0006\u0018"}, d2 = {"com/vk/id/VKID$Companion$initForScreenshotTests$1", "Lcom/vk/id/internal/di/VKIDDepsProd;", "serviceCredentials", "Lkotlin/Lazy;", "Lcom/vk/id/internal/auth/ServiceCredentials;", "getServiceCredentials", "()Lkotlin/Lazy;", "statTracker", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "getStatTracker", "()Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "trackingTracker", "getTrackingTracker", "encryptedSharedPreferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getEncryptedSharedPreferencesStorage", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKID$Companion$initForScreenshotTests$1 extends VKIDDepsProd {
    private final CrashReporter crashReporter;
    private final Lazy<InternalVKIDPreferencesStorage> encryptedSharedPreferencesStorage;
    private final PerformanceTracker performanceTracker;
    private final Lazy<ServiceCredentials> serviceCredentials;
    private final VKIDAnalytics.Tracker statTracker;
    private final VKIDAnalytics.Tracker trackingTracker;

    VKID$Companion$initForScreenshotTests$1(Context context, GroupSubscriptionLimit groupSubscriptionLimit) {
        super(context, false, null, false, false, groupSubscriptionLimit, null, 92, null);
        this.serviceCredentials = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$initForScreenshotTests$1.serviceCredentials$lambda$0();
            }
        });
        this.statTracker = new VKIDAnalytics.Tracker() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$statTracker$1
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
        this.crashReporter = new CrashReporter() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$crashReporter$1
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
        this.performanceTracker = new PerformanceTracker() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$performanceTracker$1
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
        this.trackingTracker = new VKIDAnalytics.Tracker() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$trackingTracker$1
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
        this.encryptedSharedPreferencesStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID$Companion$initForScreenshotTests$1.encryptedSharedPreferencesStorage$lambda$1();
            }
        });
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<ServiceCredentials> getServiceCredentials() {
        return this.serviceCredentials;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ServiceCredentials serviceCredentials$lambda$0() {
        return new ServiceCredentials("", "", "");
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public VKIDAnalytics.Tracker getStatTracker() {
        return this.statTracker;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public CrashReporter getCrashReporter() {
        return this.crashReporter;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public PerformanceTracker getPerformanceTracker() {
        return this.performanceTracker;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public VKIDAnalytics.Tracker getTrackingTracker() {
        return this.trackingTracker;
    }

    @Override // com.vk.id.internal.di.VKIDDepsProd, com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDPreferencesStorage> getEncryptedSharedPreferencesStorage() {
        return this.encryptedSharedPreferencesStorage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Type inference failed for: r0v0, types: [com.vk.id.VKID$Companion$initForScreenshotTests$1$encryptedSharedPreferencesStorage$1$1] */
    public static final VKID$Companion$initForScreenshotTests$1$encryptedSharedPreferencesStorage$1$1 encryptedSharedPreferencesStorage$lambda$1() {
        return new InternalVKIDPreferencesStorage() { // from class: com.vk.id.VKID$Companion$initForScreenshotTests$1$encryptedSharedPreferencesStorage$1$1
            @Override // com.vk.id.storage.InternalVKIDPreferencesStorage
            public String getString(String key) {
                Intrinsics.checkNotNullParameter(key, "key");
                return null;
            }

            @Override // com.vk.id.storage.InternalVKIDPreferencesStorage
            public void set(String key, String value) {
                Intrinsics.checkNotNullParameter(key, "key");
            }
        };
    }
}
