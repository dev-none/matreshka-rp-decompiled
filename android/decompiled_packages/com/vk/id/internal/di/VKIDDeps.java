package com.vk.id.internal.di;

import android.content.Context;
import com.vk.id.AuthOptionsCreator;
import com.vk.id.AuthResultHandler;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.exchangetoken.VKIDTokenExchanger;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.auth.AuthCallbacksHolder;
import com.vk.id.internal.auth.AuthProvidersChooser;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.internal.user.UserDataFetcher;
import com.vk.id.logout.VKIDLoggerOut;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.refresh.VKIDTokenRefresher;
import com.vk.id.refreshuser.VKIDUserRefresher;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
import com.vk.id.storage.InternalVKIDTokenStorage;
import com.vk.id.tracking.core.CrashReporter;
import com.vk.id.tracking.core.PerformanceTracker;
import kotlin.Lazy;
import kotlin.Metadata;

/* JADX INFO: compiled from: VKIDDeps.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000Þ\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b`\u0018\u00002\u00020\u0001R\u0012\u0010\u0002\u001a\u00020\u0003X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0004\u0010\u0005R\u0018\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\nR\u0012\u0010\u000b\u001a\u00020\fX¦\u0004¢\u0006\u0006\u001a\u0004\b\r\u0010\u000eR\u0012\u0010\u000f\u001a\u00020\u0010X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0011\u0010\u0012R\u0012\u0010\u0013\u001a\u00020\u0014X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0015\u0010\u0016R\u0012\u0010\u0017\u001a\u00020\u0018X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0019\u0010\u001aR\u0018\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001c0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b\u001d\u0010\nR\u0018\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u001f0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b \u0010\nR\u0012\u0010!\u001a\u00020\"X¦\u0004¢\u0006\u0006\u001a\u0004\b#\u0010$R\u0018\u0010%\u001a\b\u0012\u0004\u0012\u00020&0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b'\u0010\nR\u0018\u0010(\u001a\b\u0012\u0004\u0012\u00020)0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b*\u0010\nR\u0018\u0010+\u001a\b\u0012\u0004\u0012\u00020,0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b-\u0010\nR\u0018\u0010.\u001a\b\u0012\u0004\u0012\u00020/0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b0\u0010\nR\u0018\u00101\u001a\b\u0012\u0004\u0012\u0002020\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b3\u0010\nR\u0018\u00104\u001a\b\u0012\u0004\u0012\u0002050\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b6\u0010\nR\u0018\u00107\u001a\b\u0012\u0004\u0012\u0002080\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b9\u0010\nR\u0012\u0010:\u001a\u00020;X¦\u0004¢\u0006\u0006\u001a\u0004\b<\u0010=R\u0018\u0010>\u001a\b\u0012\u0004\u0012\u00020?0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b@\u0010\nR\u0018\u0010A\u001a\b\u0012\u0004\u0012\u00020B0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\bC\u0010\nR\u0018\u0010D\u001a\b\u0012\u0004\u0012\u00020E0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\bF\u0010\nR\u0012\u0010G\u001a\u00020HX¦\u0004¢\u0006\u0006\u001a\u0004\bI\u0010JR\u0012\u0010K\u001a\u00020HX¦\u0004¢\u0006\u0006\u001a\u0004\bL\u0010JR\u0012\u0010M\u001a\u00020NX¦\u0004¢\u0006\u0006\u001a\u0004\bO\u0010PR\u0012\u0010Q\u001a\u00020RX¦\u0004¢\u0006\u0006\u001a\u0004\bS\u0010TR\u0012\u0010U\u001a\u00020VX¦\u0004¢\u0006\u0006\u001a\u0004\bU\u0010WR\u0012\u0010X\u001a\u00020\u0003X¦\u0004¢\u0006\u0006\u001a\u0004\bY\u0010\u0005R\u0018\u0010Z\u001a\b\u0012\u0004\u0012\u00020[0\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b\\\u0010\nR\u0014\u0010]\u001a\u0004\u0018\u00010^X¦\u0004¢\u0006\u0006\u001a\u0004\b_\u0010`¨\u0006a"}, d2 = {"Lcom/vk/id/internal/di/VKIDDeps;", "", "context", "Landroid/content/Context;", "getContext", "()Landroid/content/Context;", "serviceCredentials", "Lkotlin/Lazy;", "Lcom/vk/id/internal/auth/ServiceCredentials;", "getServiceCredentials", "()Lkotlin/Lazy;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "authCallbacksHolder", "Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "getAuthCallbacksHolder", "()Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "authOptionsCreator", "Lcom/vk/id/AuthOptionsCreator;", "getAuthOptionsCreator", "()Lcom/vk/id/AuthOptionsCreator;", "authProvidersChooser", "Lcom/vk/id/internal/auth/AuthProvidersChooser;", "getAuthProvidersChooser", "authResultHandler", "Lcom/vk/id/AuthResultHandler;", "getAuthResultHandler", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "getDispatchers", "()Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "vkSilentAuthInfoProvider", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "getVkSilentAuthInfoProvider", "userDataFetcher", "Lcom/vk/id/internal/user/UserDataFetcher;", "getUserDataFetcher", "api", "Lcom/vk/id/network/InternalVKIDApiContract;", "getApi", "tokenRefresher", "Lcom/vk/id/refresh/VKIDTokenRefresher;", "getTokenRefresher", "tokenExchanger", "Lcom/vk/id/exchangetoken/VKIDTokenExchanger;", "getTokenExchanger", "userRefresher", "Lcom/vk/id/refreshuser/VKIDUserRefresher;", "getUserRefresher", "loggerOut", "Lcom/vk/id/logout/VKIDLoggerOut;", "getLoggerOut", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "getTokenStorage", "()Lcom/vk/id/storage/InternalVKIDTokenStorage;", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "getDeviceIdStorage", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "getPrefsStore", "encryptedSharedPreferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getEncryptedSharedPreferencesStorage", "statTracker", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "getStatTracker", "()Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "trackingTracker", "getTrackingTracker", "vkidPackageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "getVkidPackageManager", "()Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "getActivityStarter", "()Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "isFlutter", "", "()Z", "appContext", "getAppContext", "groupSubscriptionApiService", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "getGroupSubscriptionApiService", "groupSubscriptionLimit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "getGroupSubscriptionLimit", "()Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface VKIDDeps {
    InternalVKIDActivityStarter getActivityStarter();

    Lazy<InternalVKIDApiContract> getApi();

    Context getAppContext();

    AuthCallbacksHolder getAuthCallbacksHolder();

    AuthOptionsCreator getAuthOptionsCreator();

    Lazy<AuthProvidersChooser> getAuthProvidersChooser();

    Lazy<AuthResultHandler> getAuthResultHandler();

    Context getContext();

    CrashReporter getCrashReporter();

    Lazy<InternalVKIDDeviceIdProvider.DeviceIdStorage> getDeviceIdStorage();

    VKIDCoroutinesDispatchers getDispatchers();

    Lazy<InternalVKIDPreferencesStorage> getEncryptedSharedPreferencesStorage();

    Lazy<InternalVKIDGroupSubscriptionApiContract> getGroupSubscriptionApiService();

    GroupSubscriptionLimit getGroupSubscriptionLimit();

    Lazy<VKIDLoggerOut> getLoggerOut();

    PerformanceTracker getPerformanceTracker();

    Lazy<InternalVKIDPrefsStore> getPrefsStore();

    Lazy<ServiceCredentials> getServiceCredentials();

    VKIDAnalytics.Tracker getStatTracker();

    Lazy<VKIDTokenExchanger> getTokenExchanger();

    Lazy<VKIDTokenRefresher> getTokenRefresher();

    InternalVKIDTokenStorage getTokenStorage();

    VKIDAnalytics.Tracker getTrackingTracker();

    Lazy<UserDataFetcher> getUserDataFetcher();

    Lazy<VKIDUserRefresher> getUserRefresher();

    Lazy<SilentAuthInfoProvider> getVkSilentAuthInfoProvider();

    InternalVKIDPackageManager getVkidPackageManager();

    /* JADX INFO: renamed from: isFlutter */
    boolean getIsFlutter();
}
