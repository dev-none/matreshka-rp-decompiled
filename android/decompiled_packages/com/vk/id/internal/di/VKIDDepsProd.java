package com.vk.id.internal.di;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import androidx.media3.extractor.ts.TsExtractor;
import com.vk.id.AuthOptionsCreator;
import com.vk.id.AuthResultHandler;
import com.vk.id.TokensHandler;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.analytics.stat.StatTracker;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.exchangetoken.VKIDTokenExchanger;
import com.vk.id.fetchuser.VKIDUserInfoFetcher;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.AuthActivity;
import com.vk.id.internal.auth.AuthCallbacksHolder;
import com.vk.id.internal.auth.AuthProvidersChooser;
import com.vk.id.internal.auth.AuthProvidersChooserDefault;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.app.SilentAuthServicesProvider;
import com.vk.id.internal.auth.app.TrustedProvidersCache;
import com.vk.id.internal.auth.device.DeviceIdPrefs;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.auth.pkce.PkceGeneratorSHA256;
import com.vk.id.internal.captcha.ForceError14Interceptor;
import com.vk.id.internal.captcha.HitmanChallengeInterceptor;
import com.vk.id.internal.concurrent.CoroutinesDispatchersProd;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.context.AndroidPackageManager;
import com.vk.id.internal.context.DefaultActivityStarter;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.id.internal.ipc.VkSilentAuthInfoProvider;
import com.vk.id.internal.state.StateGenerator;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.internal.user.UserDataFetcher;
import com.vk.id.logout.VKIDLoggerOut;
import com.vk.id.network.HttpClientProvider;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.InternalVKIDRealApi;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApi;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService;
import com.vk.id.network.http.HttpClient;
import com.vk.id.network.http.Interceptor;
import com.vk.id.refresh.VKIDTokenRefresher;
import com.vk.id.refreshuser.VKIDUserRefresher;
import com.vk.id.storage.InternalVKIDEncryptedSharedPreferencesStorage;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
import com.vk.id.storage.InternalVKIDTokenStorage;
import com.vk.id.tracking.core.CrashReporter;
import com.vk.id.tracking.core.PerformanceTracker;
import com.vk.id.tracking.tracer.TrackingDeps;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDDepsProd.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000À\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0011\u0018\u00002\u00020\u0001BM\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\u0005\u0012\b\b\u0002\u0010\t\u001a\u00020\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\u000e\u0010\u000fJ\u0010\u0010.\u001a\u00020/2\u0006\u00100\u001a\u000201H\u0003R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0012R\u0016\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0016\u0010\f\u001a\u0004\u0018\u00010\rX\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0014\u0010\u0017\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0011R\u001a\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u001b0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u001b\u0010\u001e\u001a\u00020\u001f8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\"\u0010#\u001a\u0004\b \u0010!R\u001b\u0010$\u001a\u00020%8VX\u0096\u0084\u0002¢\u0006\f\n\u0004\b(\u0010#\u001a\u0004\b&\u0010'R\u001b\u0010)\u001a\u00020*8VX\u0096\u0084\u0002¢\u0006\f\n\u0004\b-\u0010#\u001a\u0004\b+\u0010,R\u0014\u00102\u001a\b\u0012\u0004\u0012\u0002030\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u00104\u001a\u000205X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b6\u00107R\u0014\u00108\u001a\u000209X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b:\u0010;R\u0014\u0010<\u001a\b\u0012\u0004\u0012\u00020>0=X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010?\u001a\u00020@8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\bC\u0010#\u001a\u0004\bA\u0010BR\u001a\u0010D\u001a\b\u0012\u0004\u0012\u00020\r0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bE\u0010\u001dR\u0014\u0010F\u001a\b\u0012\u0004\u0012\u00020G0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010H\u001a\b\u0012\u0004\u0012\u00020I0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010J\u001a\b\u0012\u0004\u0012\u00020K0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bL\u0010\u001dR\u001a\u0010M\u001a\b\u0012\u0004\u0012\u00020N0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bO\u0010\u001dR\u001a\u0010P\u001a\b\u0012\u0004\u0012\u00020Q0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bR\u0010\u001dR\u001b\u0010S\u001a\u00020T8VX\u0096\u0084\u0002¢\u0006\f\n\u0004\bW\u0010#\u001a\u0004\bU\u0010VR\u0014\u0010X\u001a\u00020YX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010[R\u001a\u0010\\\u001a\b\u0012\u0004\u0012\u00020]0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u0010\u001dR\u001a\u0010_\u001a\b\u0012\u0004\u0012\u00020`0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\ba\u0010\u001dR\u001a\u0010b\u001a\b\u0012\u0004\u0012\u00020c0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bd\u0010\u001dR\u001a\u0010e\u001a\b\u0012\u0004\u0012\u00020f0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bg\u0010\u001dR\u001a\u0010h\u001a\b\u0012\u0004\u0012\u00020i0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bj\u0010\u001dR\u001a\u0010k\u001a\b\u0012\u0004\u0012\u00020l0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bm\u0010\u001dR\u001b\u0010n\u001a\u00020o8VX\u0096\u0084\u0002¢\u0006\f\n\u0004\br\u0010#\u001a\u0004\bp\u0010qR\u0014\u0010s\u001a\b\u0012\u0004\u0012\u00020t0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010u\u001a\b\u0012\u0004\u0012\u00020v0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010w\u001a\u00020x8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b{\u0010#\u001a\u0004\by\u0010zR\u001a\u0010|\u001a\b\u0012\u0004\u0012\u00020}0\u001aX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b~\u0010\u001dR\u001c\u0010\u007f\u001a\t\u0012\u0005\u0012\u00030\u0080\u00010\u001aX\u0096\u0004¢\u0006\t\n\u0000\u001a\u0005\b\u0081\u0001\u0010\u001dR\u0016\u0010\u0082\u0001\u001a\t\u0012\u0005\u0012\u00030\u0083\u00010\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0084\u0001\u001a\t\u0012\u0005\u0012\u00030\u0085\u00010\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0018\u0010\u0086\u0001\u001a\u00030\u0087\u00018VX\u0096\u0004¢\u0006\b\u001a\u0006\b\u0088\u0001\u0010\u0089\u0001R\u0018\u0010\u008a\u0001\u001a\u00030\u008b\u00018VX\u0096\u0004¢\u0006\b\u001a\u0006\b\u008c\u0001\u0010\u008d\u0001R\u0018\u0010\u008e\u0001\u001a\u00030\u008b\u00018VX\u0096\u0004¢\u0006\b\u001a\u0006\b\u008f\u0001\u0010\u008d\u0001R \u0010\u0090\u0001\u001a\u00030\u0091\u00018BX\u0082\u0084\u0002¢\u0006\u000f\n\u0005\b\u0094\u0001\u0010#\u001a\u0006\b\u0092\u0001\u0010\u0093\u0001R\u001d\u0010\u0095\u0001\u001a\t\u0012\u0005\u0012\u00030\u0096\u00010\u001aX\u0096\u0004¢\u0006\t\n\u0000\u001a\u0005\b\u0097\u0001\u0010\u001d¨\u0006\u0098\u0001"}, d2 = {"Lcom/vk/id/internal/di/VKIDDepsProd;", "Lcom/vk/id/internal/di/VKIDDeps;", "appContext", "Landroid/content/Context;", "isFlutter", "", "captchaRedirectUri", "", "forceError14", "forceHitmanChallenge", "groupSubscriptionLimit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "apiOverride", "Lcom/vk/id/network/InternalVKIDApiContract;", "<init>", "(Landroid/content/Context;ZLjava/lang/String;ZZLcom/vk/id/groupsubscription/GroupSubscriptionLimit;Lcom/vk/id/network/InternalVKIDApiContract;)V", "getAppContext", "()Landroid/content/Context;", "()Z", "getGroupSubscriptionLimit", "()Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "getApiOverride", "()Lcom/vk/id/network/InternalVKIDApiContract;", "context", "getContext", "serviceCredentials", "Lkotlin/Lazy;", "Lcom/vk/id/internal/auth/ServiceCredentials;", "getServiceCredentials", "()Lkotlin/Lazy;", "trackingDeps", "Lcom/vk/id/tracking/tracer/TrackingDeps;", "getTrackingDeps", "()Lcom/vk/id/tracking/tracer/TrackingDeps;", "trackingDeps$delegate", "Lkotlin/Lazy;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "crashReporter$delegate", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "performanceTracker$delegate", "getActivityInfo", "Landroid/content/pm/ActivityInfo;", "componentName", "Landroid/content/ComponentName;", "silentAuthServicesProvider", "Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;", "vkidPackageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "getVkidPackageManager", "()Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "getActivityStarter", "()Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "additionalInterceptors", "", "Lcom/vk/id/network/http/Interceptor;", "httpClient", "Lcom/vk/id/network/http/HttpClient;", "getHttpClient", "()Lcom/vk/id/network/http/HttpClient;", "httpClient$delegate", "api", "getApi", "apiService", "Lcom/vk/id/internal/api/VKIDApiService;", "trustedProvidersCache", "Lcom/vk/id/internal/auth/app/TrustedProvidersCache;", "vkSilentAuthInfoProvider", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "getVkSilentAuthInfoProvider", "userDataFetcher", "Lcom/vk/id/internal/user/UserDataFetcher;", "getUserDataFetcher", "authProvidersChooser", "Lcom/vk/id/internal/auth/AuthProvidersChooser;", "getAuthProvidersChooser", "authOptionsCreator", "Lcom/vk/id/AuthOptionsCreator;", "getAuthOptionsCreator", "()Lcom/vk/id/AuthOptionsCreator;", "authOptionsCreator$delegate", "authCallbacksHolder", "Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "getAuthCallbacksHolder", "()Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "authResultHandler", "Lcom/vk/id/AuthResultHandler;", "getAuthResultHandler", "tokenRefresher", "Lcom/vk/id/refresh/VKIDTokenRefresher;", "getTokenRefresher", "tokenExchanger", "Lcom/vk/id/exchangetoken/VKIDTokenExchanger;", "getTokenExchanger", "userRefresher", "Lcom/vk/id/refreshuser/VKIDUserRefresher;", "getUserRefresher", "loggerOut", "Lcom/vk/id/logout/VKIDLoggerOut;", "getLoggerOut", "encryptedSharedPreferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getEncryptedSharedPreferencesStorage", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "getTokenStorage", "()Lcom/vk/id/storage/InternalVKIDTokenStorage;", "tokenStorage$delegate", "userInfoFetcher", "Lcom/vk/id/fetchuser/VKIDUserInfoFetcher;", "tokensHandler", "Lcom/vk/id/TokensHandler;", "stateGenerator", "Lcom/vk/id/internal/state/StateGenerator;", "getStateGenerator", "()Lcom/vk/id/internal/state/StateGenerator;", "stateGenerator$delegate", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "getPrefsStore", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "getDeviceIdStorage", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "pkceGenerator", "Lcom/vk/id/internal/auth/pkce/PkceGeneratorSHA256;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "getDispatchers", "()Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "statTracker", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "getStatTracker", "()Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "trackingTracker", "getTrackingTracker", "groupSubscriptionApi", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi;", "getGroupSubscriptionApi", "()Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi;", "groupSubscriptionApi$delegate", "groupSubscriptionApiService", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "getGroupSubscriptionApiService", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public class VKIDDepsProd implements VKIDDeps {
    public static final int $stable = 8;
    private final InternalVKIDActivityStarter activityStarter;
    private final List<Interceptor> additionalInterceptors;
    private final Lazy<InternalVKIDApiContract> api;
    private final InternalVKIDApiContract apiOverride;
    private final Lazy<VKIDApiService> apiService;
    private final Context appContext;
    private final AuthCallbacksHolder authCallbacksHolder;

    /* JADX INFO: renamed from: authOptionsCreator$delegate, reason: from kotlin metadata */
    private final Lazy authOptionsCreator;
    private final Lazy<AuthProvidersChooser> authProvidersChooser;
    private final Lazy<AuthResultHandler> authResultHandler;
    private final Context context;

    /* JADX INFO: renamed from: crashReporter$delegate, reason: from kotlin metadata */
    private final Lazy crashReporter;
    private final Lazy<InternalVKIDDeviceIdProvider> deviceIdProvider;
    private final Lazy<InternalVKIDDeviceIdProvider.DeviceIdStorage> deviceIdStorage;
    private final Lazy<InternalVKIDPreferencesStorage> encryptedSharedPreferencesStorage;

    /* JADX INFO: renamed from: groupSubscriptionApi$delegate, reason: from kotlin metadata */
    private final Lazy groupSubscriptionApi;
    private final Lazy<InternalVKIDGroupSubscriptionApiContract> groupSubscriptionApiService;
    private final GroupSubscriptionLimit groupSubscriptionLimit;

    /* JADX INFO: renamed from: httpClient$delegate, reason: from kotlin metadata */
    private final Lazy httpClient;
    private final boolean isFlutter;
    private final Lazy<VKIDLoggerOut> loggerOut;

    /* JADX INFO: renamed from: performanceTracker$delegate, reason: from kotlin metadata */
    private final Lazy performanceTracker;
    private final Lazy<PkceGeneratorSHA256> pkceGenerator;
    private final Lazy<InternalVKIDPrefsStore> prefsStore;
    private final Lazy<ServiceCredentials> serviceCredentials;
    private final Lazy<SilentAuthServicesProvider> silentAuthServicesProvider;

    /* JADX INFO: renamed from: stateGenerator$delegate, reason: from kotlin metadata */
    private final Lazy stateGenerator;
    private final Lazy<VKIDTokenExchanger> tokenExchanger;
    private final Lazy<VKIDTokenRefresher> tokenRefresher;

    /* JADX INFO: renamed from: tokenStorage$delegate, reason: from kotlin metadata */
    private final Lazy tokenStorage;
    private final Lazy<TokensHandler> tokensHandler;

    /* JADX INFO: renamed from: trackingDeps$delegate, reason: from kotlin metadata */
    private final Lazy trackingDeps;
    private final Lazy<TrustedProvidersCache> trustedProvidersCache;
    private final Lazy<UserDataFetcher> userDataFetcher;
    private final Lazy<VKIDUserInfoFetcher> userInfoFetcher;
    private final Lazy<VKIDUserRefresher> userRefresher;
    private final Lazy<SilentAuthInfoProvider> vkSilentAuthInfoProvider;
    private final InternalVKIDPackageManager vkidPackageManager;

    public VKIDDepsProd(Context appContext, boolean z, String str, boolean z2, boolean z3, GroupSubscriptionLimit groupSubscriptionLimit, InternalVKIDApiContract internalVKIDApiContract) {
        Intrinsics.checkNotNullParameter(appContext, "appContext");
        this.appContext = appContext;
        this.isFlutter = z;
        this.groupSubscriptionLimit = groupSubscriptionLimit;
        this.apiOverride = internalVKIDApiContract;
        this.context = getAppContext();
        this.serviceCredentials = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda21
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.serviceCredentials$lambda$0(this.f$0);
            }
        });
        this.trackingDeps = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.trackingDeps_delegate$lambda$1(this.f$0);
            }
        });
        this.crashReporter = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda14
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.crashReporter_delegate$lambda$2(this.f$0);
            }
        });
        this.performanceTracker = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda15
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.performanceTracker_delegate$lambda$3(this.f$0);
            }
        });
        this.silentAuthServicesProvider = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda16
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.silentAuthServicesProvider$lambda$4(this.f$0);
            }
        });
        PackageManager packageManager = getAppContext().getPackageManager();
        Intrinsics.checkNotNullExpressionValue(packageManager, "getPackageManager(...)");
        this.vkidPackageManager = new AndroidPackageManager(packageManager);
        this.activityStarter = new DefaultActivityStarter(getAppContext());
        Interceptor[] interceptorArr = new Interceptor[2];
        interceptorArr[0] = z3 ? new HitmanChallengeInterceptor() : null;
        interceptorArr[1] = z2 ? new ForceError14Interceptor(str) : null;
        this.additionalInterceptors = CollectionsKt.listOfNotNull((Object[]) interceptorArr);
        this.httpClient = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda17
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.httpClient_delegate$lambda$7(this.f$0);
            }
        });
        this.api = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda18
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.api$lambda$8(this.f$0);
            }
        });
        this.apiService = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda19
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.apiService$lambda$9(this.f$0);
            }
        });
        this.trustedProvidersCache = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda20
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.trustedProvidersCache$lambda$10(this.f$0);
            }
        });
        this.vkSilentAuthInfoProvider = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda22
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.vkSilentAuthInfoProvider$lambda$11(this.f$0);
            }
        });
        this.userDataFetcher = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda23
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.userDataFetcher$lambda$12(this.f$0);
            }
        });
        this.authProvidersChooser = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda24
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.authProvidersChooser$lambda$13(this.f$0);
            }
        });
        this.authOptionsCreator = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda25
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.authOptionsCreator_delegate$lambda$14(this.f$0);
            }
        });
        this.authCallbacksHolder = new AuthCallbacksHolder();
        this.authResultHandler = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda26
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.authResultHandler$lambda$15(this.f$0);
            }
        });
        this.tokenRefresher = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda27
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.tokenRefresher$lambda$16(this.f$0);
            }
        });
        this.tokenExchanger = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda28
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.tokenExchanger$lambda$17(this.f$0);
            }
        });
        this.userRefresher = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda29
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.userRefresher$lambda$18(this.f$0);
            }
        });
        this.loggerOut = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.loggerOut$lambda$19(this.f$0);
            }
        });
        this.encryptedSharedPreferencesStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.encryptedSharedPreferencesStorage$lambda$20(this.f$0);
            }
        });
        this.tokenStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.tokenStorage_delegate$lambda$21(this.f$0);
            }
        });
        this.userInfoFetcher = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.userInfoFetcher$lambda$22(this.f$0);
            }
        });
        this.tokensHandler = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.tokensHandler$lambda$23(this.f$0);
            }
        });
        this.stateGenerator = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.stateGenerator_delegate$lambda$24(this.f$0);
            }
        });
        this.prefsStore = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.prefsStore$lambda$25(this.f$0);
            }
        });
        this.deviceIdStorage = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.deviceIdStorage$lambda$26(this.f$0);
            }
        });
        this.deviceIdProvider = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda10
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.deviceIdProvider$lambda$27(this.f$0);
            }
        });
        this.pkceGenerator = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda11
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.pkceGenerator$lambda$28();
            }
        });
        this.groupSubscriptionApi = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda12
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.groupSubscriptionApi_delegate$lambda$30(this.f$0);
            }
        });
        this.groupSubscriptionApiService = LazyKt.lazy(new Function0() { // from class: com.vk.id.internal.di.VKIDDepsProd$$ExternalSyntheticLambda13
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKIDDepsProd.groupSubscriptionApiService$lambda$31(this.f$0);
            }
        });
    }

    public /* synthetic */ VKIDDepsProd(Context context, boolean z, String str, boolean z2, boolean z3, GroupSubscriptionLimit groupSubscriptionLimit, InternalVKIDApiContract internalVKIDApiContract, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, z, (i & 4) != 0 ? null : str, (i & 8) != 0 ? false : z2, (i & 16) != 0 ? false : z3, groupSubscriptionLimit, (i & 64) != 0 ? null : internalVKIDApiContract);
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Context getAppContext() {
        return this.appContext;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    /* JADX INFO: renamed from: isFlutter, reason: from getter */
    public boolean getIsFlutter() {
        return this.isFlutter;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public GroupSubscriptionLimit getGroupSubscriptionLimit() {
        return this.groupSubscriptionLimit;
    }

    protected final InternalVKIDApiContract getApiOverride() {
        return this.apiOverride;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Context getContext() {
        return this.context;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<ServiceCredentials> getServiceCredentials() {
        return this.serviceCredentials;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ServiceCredentials serviceCredentials$lambda$0(VKIDDepsProd vKIDDepsProd) throws PackageManager.NameNotFoundException {
        ActivityInfo activityInfo = vKIDDepsProd.getActivityInfo(new ComponentName(vKIDDepsProd.getAppContext(), (Class<?>) AuthActivity.class));
        Bundle metaData = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData, "metaData");
        String strValueOf = String.valueOf(VKIDDepsProdKt.getIntOrThrow(metaData, "VKIDClientID"));
        Bundle metaData2 = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData2, "metaData");
        String stringOrThrow = VKIDDepsProdKt.getStringOrThrow(metaData2, "VKIDClientSecret");
        Bundle metaData3 = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData3, "metaData");
        String stringOrThrow2 = VKIDDepsProdKt.getStringOrThrow(metaData3, "VKIDRedirectScheme");
        Bundle metaData4 = activityInfo.metaData;
        Intrinsics.checkNotNullExpressionValue(metaData4, "metaData");
        return new ServiceCredentials(strValueOf, stringOrThrow, stringOrThrow2 + "://" + VKIDDepsProdKt.getStringOrThrow(metaData4, "VKIDRedirectHost") + "/blank.html");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final TrackingDeps getTrackingDeps() {
        return (TrackingDeps) this.trackingDeps.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TrackingDeps trackingDeps_delegate$lambda$1(VKIDDepsProd vKIDDepsProd) {
        return new TrackingDeps(vKIDDepsProd.getAppContext(), vKIDDepsProd.getServiceCredentials().getValue().getClientID());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CrashReporter crashReporter_delegate$lambda$2(VKIDDepsProd vKIDDepsProd) {
        return vKIDDepsProd.getTrackingDeps().getCrashReporter();
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public CrashReporter getCrashReporter() {
        return (CrashReporter) this.crashReporter.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final PerformanceTracker performanceTracker_delegate$lambda$3(VKIDDepsProd vKIDDepsProd) {
        return vKIDDepsProd.getTrackingDeps().getPerformanceTracker();
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public PerformanceTracker getPerformanceTracker() {
        return (PerformanceTracker) this.performanceTracker.getValue();
    }

    private final ActivityInfo getActivityInfo(ComponentName componentName) throws PackageManager.NameNotFoundException {
        if (Build.VERSION.SDK_INT >= 33) {
            try {
                return getAppContext().getPackageManager().getActivityInfo(componentName, PackageManager.ComponentInfoFlags.of(TsExtractor.TS_STREAM_TYPE_AC3));
            } catch (Throwable unused) {
                return getAppContext().getPackageManager().getActivityInfo(componentName, TsExtractor.TS_STREAM_TYPE_AC3);
            }
        }
        ActivityInfo activityInfo = getAppContext().getPackageManager().getActivityInfo(componentName, TsExtractor.TS_STREAM_TYPE_AC3);
        Intrinsics.checkNotNull(activityInfo);
        return activityInfo;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SilentAuthServicesProvider silentAuthServicesProvider$lambda$4(VKIDDepsProd vKIDDepsProd) {
        InternalVKIDPackageManager vkidPackageManager = vKIDDepsProd.getVkidPackageManager();
        String packageName = vKIDDepsProd.getAppContext().getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
        return new SilentAuthServicesProvider(vkidPackageManager, packageName, vKIDDepsProd.trustedProvidersCache.getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public InternalVKIDPackageManager getVkidPackageManager() {
        return this.vkidPackageManager;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public InternalVKIDActivityStarter getActivityStarter() {
        return this.activityStarter;
    }

    private final HttpClient getHttpClient() {
        return (HttpClient) this.httpClient.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final HttpClient httpClient_delegate$lambda$7(VKIDDepsProd vKIDDepsProd) {
        return new HttpClientProvider(vKIDDepsProd.getAppContext()).provide(vKIDDepsProd.additionalInterceptors);
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDApiContract> getApi() {
        return this.api;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDApiContract api$lambda$8(VKIDDepsProd vKIDDepsProd) {
        InternalVKIDApiContract internalVKIDApiContract = vKIDDepsProd.apiOverride;
        return internalVKIDApiContract == null ? new InternalVKIDRealApi(vKIDDepsProd.getHttpClient()) : internalVKIDApiContract;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDApiService apiService$lambda$9(VKIDDepsProd vKIDDepsProd) {
        return new VKIDApiService(vKIDDepsProd.getApi().getValue());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TrustedProvidersCache trustedProvidersCache$lambda$10(VKIDDepsProd vKIDDepsProd) {
        ServiceCredentials value = vKIDDepsProd.getServiceCredentials().getValue();
        return new TrustedProvidersCache(vKIDDepsProd.apiService, value.getClientID(), value.getClientSecret(), vKIDDepsProd.getDispatchers());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<SilentAuthInfoProvider> getVkSilentAuthInfoProvider() {
        return this.vkSilentAuthInfoProvider;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VkSilentAuthInfoProvider vkSilentAuthInfoProvider$lambda$11(VKIDDepsProd vKIDDepsProd) {
        return new VkSilentAuthInfoProvider(vKIDDepsProd.getAppContext(), vKIDDepsProd.silentAuthServicesProvider.getValue(), vKIDDepsProd.deviceIdProvider.getValue(), 0L, 8, null);
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<UserDataFetcher> getUserDataFetcher() {
        return this.userDataFetcher;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final UserDataFetcher userDataFetcher$lambda$12(VKIDDepsProd vKIDDepsProd) {
        return new UserDataFetcher(vKIDDepsProd.getDispatchers(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getVkSilentAuthInfoProvider().getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<AuthProvidersChooser> getAuthProvidersChooser() {
        return this.authProvidersChooser;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final AuthProvidersChooserDefault authProvidersChooser$lambda$13(VKIDDepsProd vKIDDepsProd) {
        return new AuthProvidersChooserDefault(vKIDDepsProd.getVkidPackageManager(), vKIDDepsProd.silentAuthServicesProvider.getValue(), vKIDDepsProd.getActivityStarter());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public AuthOptionsCreator getAuthOptionsCreator() {
        return (AuthOptionsCreator) this.authOptionsCreator.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final AuthOptionsCreator authOptionsCreator_delegate$lambda$14(VKIDDepsProd vKIDDepsProd) {
        return new AuthOptionsCreator(vKIDDepsProd.getAppContext(), vKIDDepsProd.pkceGenerator, vKIDDepsProd.getPrefsStore(), vKIDDepsProd.getServiceCredentials(), vKIDDepsProd.getStateGenerator());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public AuthCallbacksHolder getAuthCallbacksHolder() {
        return this.authCallbacksHolder;
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<AuthResultHandler> getAuthResultHandler() {
        return this.authResultHandler;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final AuthResultHandler authResultHandler$lambda$15(VKIDDepsProd vKIDDepsProd) {
        return new AuthResultHandler(vKIDDepsProd.getDispatchers(), vKIDDepsProd.getAuthCallbacksHolder(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getPrefsStore().getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.apiService.getValue(), vKIDDepsProd.tokensHandler.getValue(), vKIDDepsProd.getLoggerOut().getValue(), vKIDDepsProd.getTokenStorage());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<VKIDTokenRefresher> getTokenRefresher() {
        return this.tokenRefresher;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDTokenRefresher tokenRefresher$lambda$16(VKIDDepsProd vKIDDepsProd) {
        return new VKIDTokenRefresher(vKIDDepsProd.apiService.getValue(), vKIDDepsProd.getTokenStorage(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getStateGenerator(), vKIDDepsProd.tokensHandler.getValue(), vKIDDepsProd.getDispatchers(), vKIDDepsProd.getPrefsStore().getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<VKIDTokenExchanger> getTokenExchanger() {
        return this.tokenExchanger;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDTokenExchanger tokenExchanger$lambda$17(VKIDDepsProd vKIDDepsProd) {
        return new VKIDTokenExchanger(vKIDDepsProd.apiService.getValue(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getStateGenerator(), vKIDDepsProd.tokensHandler.getValue(), vKIDDepsProd.getDispatchers(), vKIDDepsProd.getPrefsStore().getValue(), vKIDDepsProd.pkceGenerator.getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<VKIDUserRefresher> getUserRefresher() {
        return this.userRefresher;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDUserRefresher userRefresher$lambda$18(VKIDDepsProd vKIDDepsProd) {
        return new VKIDUserRefresher(vKIDDepsProd.apiService.getValue(), vKIDDepsProd.getTokenStorage(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getDispatchers(), vKIDDepsProd.getTokenRefresher().getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<VKIDLoggerOut> getLoggerOut() {
        return this.loggerOut;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDLoggerOut loggerOut$lambda$19(VKIDDepsProd vKIDDepsProd) {
        return new VKIDLoggerOut(vKIDDepsProd.apiService.getValue(), vKIDDepsProd.getTokenStorage(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getDispatchers());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDPreferencesStorage> getEncryptedSharedPreferencesStorage() {
        return this.encryptedSharedPreferencesStorage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDEncryptedSharedPreferencesStorage encryptedSharedPreferencesStorage$lambda$20(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDEncryptedSharedPreferencesStorage(vKIDDepsProd.getAppContext());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDTokenStorage tokenStorage_delegate$lambda$21(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDTokenStorage(vKIDDepsProd.getEncryptedSharedPreferencesStorage().getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public InternalVKIDTokenStorage getTokenStorage() {
        return (InternalVKIDTokenStorage) this.tokenStorage.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDUserInfoFetcher userInfoFetcher$lambda$22(VKIDDepsProd vKIDDepsProd) {
        return new VKIDUserInfoFetcher(vKIDDepsProd.apiService.getValue(), vKIDDepsProd.deviceIdProvider.getValue(), vKIDDepsProd.getServiceCredentials().getValue(), vKIDDepsProd.getDispatchers());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TokensHandler tokensHandler$lambda$23(VKIDDepsProd vKIDDepsProd) {
        return new TokensHandler(vKIDDepsProd.userInfoFetcher.getValue(), vKIDDepsProd.getTokenStorage(), vKIDDepsProd.getDispatchers());
    }

    private final StateGenerator getStateGenerator() {
        return (StateGenerator) this.stateGenerator.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StateGenerator stateGenerator_delegate$lambda$24(VKIDDepsProd vKIDDepsProd) {
        return new StateGenerator(vKIDDepsProd.getPrefsStore().getValue());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDPrefsStore> getPrefsStore() {
        return this.prefsStore;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDPrefsStore prefsStore$lambda$25(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDPrefsStore(vKIDDepsProd.getAppContext());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDDeviceIdProvider.DeviceIdStorage> getDeviceIdStorage() {
        return this.deviceIdStorage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DeviceIdPrefs deviceIdStorage$lambda$26(VKIDDepsProd vKIDDepsProd) {
        return new DeviceIdPrefs(vKIDDepsProd.getAppContext());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDDeviceIdProvider deviceIdProvider$lambda$27(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDDeviceIdProvider(vKIDDepsProd.getAppContext(), vKIDDepsProd.getDeviceIdStorage().getValue());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final PkceGeneratorSHA256 pkceGenerator$lambda$28() {
        return new PkceGeneratorSHA256();
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public VKIDCoroutinesDispatchers getDispatchers() {
        return new CoroutinesDispatchersProd();
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public VKIDAnalytics.Tracker getStatTracker() {
        ServiceCredentials value = getServiceCredentials().getValue();
        return new StatTracker(value.getClientID(), value.getClientSecret(), getApi(), getDispatchers().getIo(), getAppContext());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public VKIDAnalytics.Tracker getTrackingTracker() {
        return new VKIDAnalytics.Tracker() { // from class: com.vk.id.internal.di.VKIDDepsProd$trackingTracker$1
            @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
            @InternalVKIDApi
            public void trackEvent(String str, VKIDAnalytics.EventParam... eventParamArr) {
                VKIDAnalytics.Tracker.DefaultImpls.trackEvent(this, str, eventParamArr);
            }

            @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
            public void trackEvent(String accessToken, String name, VKIDAnalytics.EventParam... params) {
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(params, "params");
                this.this$0.getTrackingDeps().getAnalyticsTracking().log(name + " " + ArraysKt.joinToString$default(params, (CharSequence) null, (CharSequence) null, (CharSequence) null, 0, (CharSequence) null, (Function1) null, 63, (Object) null));
            }
        };
    }

    private final InternalVKIDGroupSubscriptionApi getGroupSubscriptionApi() {
        return (InternalVKIDGroupSubscriptionApi) this.groupSubscriptionApi.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDGroupSubscriptionApi groupSubscriptionApi_delegate$lambda$30(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDGroupSubscriptionApi(vKIDDepsProd.getHttpClient());
    }

    @Override // com.vk.id.internal.di.VKIDDeps
    public Lazy<InternalVKIDGroupSubscriptionApiContract> getGroupSubscriptionApiService() {
        return this.groupSubscriptionApiService;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDGroupSubscriptionApiService groupSubscriptionApiService$lambda$31(VKIDDepsProd vKIDDepsProd) {
        return new InternalVKIDGroupSubscriptionApiService(vKIDDepsProd.getGroupSubscriptionApi());
    }
}
