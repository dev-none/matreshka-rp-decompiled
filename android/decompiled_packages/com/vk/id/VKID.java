package com.vk.id;

import android.content.Context;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.LifecycleOwnerKt;
import com.vk.id.analytics.LogcatTracker;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.captcha.api.VKCaptcha;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.exchangetoken.VKIDExchangeTokenCallback;
import com.vk.id.exchangetoken.VKIDExchangeTokenParams;
import com.vk.id.exchangetoken.VKIDTokenExchanger;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.auth.AuthCallbacksHolder;
import com.vk.id.internal.auth.AuthProvidersChooser;
import com.vk.id.internal.auth.VKIDAuthProvider;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.internal.di.VKIDDeps;
import com.vk.id.internal.di.VKIDDepsProd;
import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.internal.user.UserDataFetcher;
import com.vk.id.logger.InternalVKIDAndroidLogcatLogEngine;
import com.vk.id.logger.InternalVKIDFakeLogEngine;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.logger.LogEngine;
import com.vk.id.logout.VKIDLoggerOut;
import com.vk.id.logout.VKIDLogoutCallback;
import com.vk.id.logout.VKIDLogoutParams;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.refresh.VKIDRefreshTokenCallback;
import com.vk.id.refresh.VKIDRefreshTokenParams;
import com.vk.id.refresh.VKIDTokenRefresher;
import com.vk.id.refreshuser.VKIDGetUserCallback;
import com.vk.id.refreshuser.VKIDGetUserParams;
import com.vk.id.refreshuser.VKIDUserRefresher;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
import com.vk.id.storage.InternalVKIDTokenStorage;
import com.vk.id.tracking.core.CrashReporter;
import com.vk.id.tracking.core.PerformanceTracker;
import io.appmetrica.analytics.plugins.PluginErrorDetails;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.SentryEvent;
import io.sentry.protocol.Message;
import java.util.Locale;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.sync.Mutex;
import kotlinx.coroutines.sync.MutexKt;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u009a\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0007\u0018\u0000 {2\u00020\u0001:\u0001{B\u0011\b\u0011\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010R\u001a\u00020S2\b\u0010T\u001a\u0004\u0018\u00010DJ \u0010U\u001a\u00020S2\u0006\u0010V\u001a\u00020W2\u0006\u0010X\u001a\u00020Y2\b\b\u0002\u0010Z\u001a\u00020[J \u0010U\u001a\u00020S2\u0006\u0010X\u001a\u00020Y2\b\b\u0002\u0010Z\u001a\u00020[H\u0086@¢\u0006\u0002\u0010\\J \u0010]\u001a\u00020S2\u0006\u0010V\u001a\u00020W2\u0006\u0010X\u001a\u00020^2\b\b\u0002\u0010Z\u001a\u00020_J \u0010]\u001a\u00020S2\u0006\u0010X\u001a\u00020^2\b\b\u0002\u0010Z\u001a\u00020_H\u0086@¢\u0006\u0002\u0010`J(\u0010a\u001a\u00020S2\u0006\u0010V\u001a\u00020W2\u0006\u0010b\u001a\u0002082\u0006\u0010X\u001a\u00020c2\b\b\u0002\u0010Z\u001a\u00020dJ(\u0010a\u001a\u00020S2\u0006\u0010b\u001a\u0002082\u0006\u0010X\u001a\u00020c2\b\b\u0002\u0010Z\u001a\u00020dH\u0086@¢\u0006\u0002\u0010eJ \u0010f\u001a\u00020S2\u0006\u0010V\u001a\u00020W2\u0006\u0010X\u001a\u00020g2\b\b\u0002\u0010Z\u001a\u00020hJ \u0010f\u001a\u00020S2\u0006\u0010X\u001a\u00020g2\b\b\u0002\u0010Z\u001a\u00020hH\u0086@¢\u0006\u0002\u0010iJ \u0010j\u001a\u00020S2\u0006\u0010X\u001a\u00020k2\u0006\u0010V\u001a\u00020W2\b\b\u0002\u0010Z\u001a\u00020lJ \u0010j\u001a\u00020S2\u0006\u0010X\u001a\u00020k2\b\b\u0002\u0010Z\u001a\u00020lH\u0086@¢\u0006\u0002\u0010mJ\b\u0010r\u001a\u00020SH\u0007J\u0018\u0010v\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010x0wH\u0086@¢\u0006\u0004\by\u0010zR\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00120\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u001a0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001c0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u001e0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020 0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010!\u001a\u00020\"X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u0014\u0010%\u001a\b\u0012\u0004\u0012\u00020&0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010'\u001a\u00020(8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b)\u0010*\u001a\u0004\b+\u0010,R\u001c\u0010-\u001a\u00020.8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b/\u0010*\u001a\u0004\b0\u00101R\u001a\u00102\u001a\u00020&8FX\u0087\u0004¢\u0006\f\u0012\u0004\b3\u0010*\u001a\u0004\b4\u00105R\u0014\u00106\u001a\b\u0012\u0004\u0012\u00020807X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u00109\u001a\u0002088FX\u0087\u0004¢\u0006\f\u0012\u0004\b:\u0010*\u001a\u0004\b;\u0010<R\u001c\u0010=\u001a\u00020>8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b?\u0010*\u001a\u0004\b@\u0010AR$\u0010B\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010D0C8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bE\u0010*\u001a\u0004\bF\u0010GR\u001e\u0010H\u001a\u0004\u0018\u00010I8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bJ\u0010*\u001a\u0004\bK\u0010LR\u001c\u0010M\u001a\u00020N8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bO\u0010*\u001a\u0004\bP\u0010QR\u0013\u0010n\u001a\u0004\u0018\u00010o8F¢\u0006\u0006\u001a\u0004\bp\u0010qR\u0013\u0010]\u001a\u0004\u0018\u00010s8F¢\u0006\u0006\u001a\u0004\bt\u0010u¨\u0006|"}, d2 = {"Lcom/vk/id/VKID;", "", "deps", "Lcom/vk/id/internal/di/VKIDDeps;", "<init>", "(Lcom/vk/id/internal/di/VKIDDeps;)V", "requestMutex", "Lkotlinx/coroutines/sync/Mutex;", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "authProvidersChooser", "Lkotlin/Lazy;", "Lcom/vk/id/internal/auth/AuthProvidersChooser;", "authOptionsCreator", "Lcom/vk/id/AuthOptionsCreator;", "authCallbacksHolder", "Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "authResultHandler", "Lcom/vk/id/AuthResultHandler;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "vkSilentAuthInfoProvider", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "userDataFetcher", "Lcom/vk/id/internal/user/UserDataFetcher;", "tokenRefresher", "Lcom/vk/id/refresh/VKIDTokenRefresher;", "tokenExchanger", "Lcom/vk/id/exchangetoken/VKIDTokenExchanger;", "userRefresher", "Lcom/vk/id/refreshuser/VKIDUserRefresher;", "loggerOut", "Lcom/vk/id/logout/VKIDLoggerOut;", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker$vkid_release", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "groupSubscriptionApiServiceInternal", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "getTokenStorage$annotations", "()V", "getTokenStorage", "()Lcom/vk/id/storage/InternalVKIDTokenStorage;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter$annotations", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "groupSubscriptionApiService", "getGroupSubscriptionApiService$annotations", "getGroupSubscriptionApiService", "()Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "clientIdProvider", "Lkotlin/Function0;", "", "clientId", "getClientId$annotations", "getClientId", "()Ljava/lang/String;", "context", "Landroid/content/Context;", "getContext$annotations", "getContext", "()Landroid/content/Context;", "internalVKIDLocale", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/Locale;", "getInternalVKIDLocale$annotations", "getInternalVKIDLocale", "()Ljava/util/concurrent/atomic/AtomicReference;", "groupSubscriptionLimit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "getGroupSubscriptionLimit$annotations", "getGroupSubscriptionLimit", "()Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "prefsStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getPrefsStorage$annotations", "getPrefsStorage", "()Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "setLocale", "", "locale", "authorize", "lifecycleOwner", "Landroidx/lifecycle/LifecycleOwner;", "callback", "Lcom/vk/id/auth/VKIDAuthCallback;", Message.JsonKeys.PARAMS, "Lcom/vk/id/auth/VKIDAuthParams;", "(Lcom/vk/id/auth/VKIDAuthCallback;Lcom/vk/id/auth/VKIDAuthParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "refreshToken", "Lcom/vk/id/refresh/VKIDRefreshTokenCallback;", "Lcom/vk/id/refresh/VKIDRefreshTokenParams;", "(Lcom/vk/id/refresh/VKIDRefreshTokenCallback;Lcom/vk/id/refresh/VKIDRefreshTokenParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "exchangeTokenToV2", "v1Token", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenCallback;", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;", "(Ljava/lang/String;Lcom/vk/id/exchangetoken/VKIDExchangeTokenCallback;Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getUserData", "Lcom/vk/id/refreshuser/VKIDGetUserCallback;", "Lcom/vk/id/refreshuser/VKIDGetUserParams;", "(Lcom/vk/id/refreshuser/VKIDGetUserCallback;Lcom/vk/id/refreshuser/VKIDGetUserParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "logout", "Lcom/vk/id/logout/VKIDLogoutCallback;", "Lcom/vk/id/logout/VKIDLogoutParams;", "(Lcom/vk/id/logout/VKIDLogoutCallback;Lcom/vk/id/logout/VKIDLogoutParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", Constants.ACCESS_TOKEN, "Lcom/vk/id/AccessToken;", "getAccessToken", "()Lcom/vk/id/AccessToken;", "mockAuthorized", "Lcom/vk/id/RefreshToken;", "getRefreshToken", "()Lcom/vk/id/RefreshToken;", "fetchUserData", "Lkotlin/Result;", "Lcom/vk/id/VKIDUser;", "fetchUserData-IoAF18A", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKID {
    private static volatile VKID _instance;
    private static LogcatTracker analyticsDebugTracker;
    private static boolean logsEnabled;
    private final AuthCallbacksHolder authCallbacksHolder;
    private final AuthOptionsCreator authOptionsCreator;
    private final Lazy<AuthProvidersChooser> authProvidersChooser;
    private final Lazy<AuthResultHandler> authResultHandler;
    private final Function0<String> clientIdProvider;
    private final Context context;
    private final CrashReporter crashReporter;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final Lazy<InternalVKIDGroupSubscriptionApiContract> groupSubscriptionApiServiceInternal;
    private final GroupSubscriptionLimit groupSubscriptionLimit;
    private final AtomicReference<Locale> internalVKIDLocale;
    private final InternalVKIDLogger logger;
    private final Lazy<VKIDLoggerOut> loggerOut;
    private final PerformanceTracker performanceTracker;
    private final InternalVKIDPreferencesStorage prefsStorage;
    private final Mutex requestMutex;
    private final Lazy<VKIDTokenExchanger> tokenExchanger;
    private final Lazy<VKIDTokenRefresher> tokenRefresher;
    private final InternalVKIDTokenStorage tokenStorage;
    private final Lazy<UserDataFetcher> userDataFetcher;
    private final Lazy<VKIDUserRefresher> userRefresher;
    private final Lazy<SilentAuthInfoProvider> vkSilentAuthInfoProvider;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;
    private static LogEngine logEngine = new InternalVKIDAndroidLogcatLogEngine();

    /* JADX INFO: Access modifiers changed from: private */
    public static final AccessToken _get_accessToken_$lambda$14(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final RefreshToken _get_refreshToken_$lambda$16(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return null;
    }

    @InternalVKIDApi
    public static /* synthetic */ void getClientId$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getContext$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getCrashReporter$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getGroupSubscriptionApiService$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getGroupSubscriptionLimit$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getInternalVKIDLocale$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getPrefsStorage$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getTokenStorage$annotations() {
    }

    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0005H\u0002J\u001c\u0010\u0006\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0007J<\u0010\u0006\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\u000e2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0007Jc\u0010\u0006\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n2\b\u0010\u0013\u001a\u0004\u0018\u00010\u00142\u0006\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001e2\b\u0010\u001f\u001a\u0004\u0018\u00010 2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0000¢\u0006\u0002\b!J\u0010\u0010\"\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\nH\u0007R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010#\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b$\u0010%R*\u0010(\u001a\u00020'2\u0006\u0010&\u001a\u00020'@FX\u0086\u000e¢\u0006\u0014\n\u0000\u0012\u0004\b)\u0010\u0003\u001a\u0004\b*\u0010+\"\u0004\b,\u0010-R$\u0010.\u001a\u00020\u000e2\u0006\u0010&\u001a\u00020\u000e@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b/\u00100\"\u0004\b1\u00102R\u0010\u00103\u001a\u0004\u0018\u000104X\u0082\u000e¢\u0006\u0002\n\u0000¨\u00065"}, d2 = {"Lcom/vk/id/VKID$Companion;", "", "<init>", "()V", "_instance", "Lcom/vk/id/VKID;", "init", "", "vkid", "context", "Landroid/content/Context;", "groupSubscriptionLimit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "isFlutter", "", "captchaRedirectUri", "", "forceError14", "forceHitmanChallenge", "apiOverride", "Lcom/vk/id/network/InternalVKIDApiContract;", "groupSubscriptionApiContract", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "encryptedSharedPreferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "packageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "init$vkid_release", "initForScreenshotTests", "instance", com.unity3d.services.core.fid.Constants.GET_INSTANCE, "()Lcom/vk/id/VKID;", "value", "Lcom/vk/id/logger/LogEngine;", "logEngine", "getLogEngine$annotations", "getLogEngine", "()Lcom/vk/id/logger/LogEngine;", "setLogEngine", "(Lcom/vk/id/logger/LogEngine;)V", "logsEnabled", "getLogsEnabled", "()Z", "setLogsEnabled", "(Z)V", "analyticsDebugTracker", "Lcom/vk/id/analytics/LogcatTracker;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public static /* synthetic */ void getLogEngine$annotations() {
        }

        public final void init(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            init$default(this, context, null, 2, null);
        }

        private Companion() {
        }

        private final void init(VKID vkid) {
            synchronized (this) {
                if (VKID._instance != null) {
                    throw new IllegalStateException("You've already initialized VKID".toString());
                }
                Companion companion = VKID.INSTANCE;
                VKID._instance = vkid;
                Unit unit = Unit.INSTANCE;
            }
        }

        public static /* synthetic */ void init$default(Companion companion, Context context, GroupSubscriptionLimit groupSubscriptionLimit, int i, Object obj) {
            if ((i & 2) != 0) {
                groupSubscriptionLimit = new GroupSubscriptionLimit(0, 0, 3, null);
            }
            companion.init(context, groupSubscriptionLimit);
        }

        public final void init(Context context, GroupSubscriptionLimit groupSubscriptionLimit) {
            Intrinsics.checkNotNullParameter(context, "context");
            init(context, false, null, false, false, groupSubscriptionLimit);
        }

        @InternalVKIDApi
        public final void init(Context context, boolean isFlutter, String captchaRedirectUri, boolean forceError14, boolean forceHitmanChallenge, GroupSubscriptionLimit groupSubscriptionLimit) {
            Intrinsics.checkNotNullParameter(context, "context");
            init(new VKID(new VKIDDepsProd(context, isFlutter, captchaRedirectUri, forceError14, forceHitmanChallenge, groupSubscriptionLimit, null, 64, null)));
        }

        public final void init$vkid_release(Context context, InternalVKIDApiContract apiOverride, InternalVKIDGroupSubscriptionApiContract groupSubscriptionApiContract, InternalVKIDDeviceIdProvider.DeviceIdStorage deviceIdStorage, InternalVKIDPrefsStore prefsStore, InternalVKIDPreferencesStorage encryptedSharedPreferencesStorage, InternalVKIDPackageManager packageManager, InternalVKIDActivityStarter activityStarter, GroupSubscriptionLimit groupSubscriptionLimit) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(groupSubscriptionApiContract, "groupSubscriptionApiContract");
            init(new VKID(new VKID$Companion$init$2(packageManager, activityStarter, context, groupSubscriptionLimit, apiOverride, groupSubscriptionApiContract, deviceIdStorage, prefsStore, encryptedSharedPreferencesStorage)));
        }

        @InternalVKIDApi
        public final void initForScreenshotTests(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            init(new VKID(new VKID$Companion$initForScreenshotTests$1(context, new GroupSubscriptionLimit(0, 0, 3, null))));
        }

        public final VKID getInstance() {
            VKID vkid;
            VKID vkid2 = VKID._instance;
            if (vkid2 != null) {
                return vkid2;
            }
            synchronized (this) {
                vkid = VKID._instance;
            }
            if (vkid != null) {
                return vkid;
            }
            throw new IllegalStateException("VKID is not initialized".toString());
        }

        public final LogEngine getLogEngine() {
            return VKID.logEngine;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit _set_logEngine_$lambda$3(Throwable it) {
            Intrinsics.checkNotNullParameter(it, "it");
            return Unit.INSTANCE;
        }

        public final void setLogEngine(final LogEngine value) {
            Intrinsics.checkNotNullParameter(value, "value");
            VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.VKID$Companion$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return VKID.Companion._set_logEngine_$lambda$3((Throwable) obj);
                }
            }, new Function0() { // from class: com.vk.id.VKID$Companion$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return VKID.Companion._set_logEngine_$lambda$4(value);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit _set_logEngine_$lambda$4(LogEngine logEngine) {
            VKID.logEngine = logEngine;
            InternalVKIDLog.INSTANCE.setLogEngine(logEngine);
            return Unit.INSTANCE;
        }

        public final boolean getLogsEnabled() {
            return VKID.logsEnabled;
        }

        public final void setLogsEnabled(boolean z) {
            VKID.logsEnabled = z;
            if (z) {
                InternalVKIDLog.INSTANCE.setLogEngine(getLogEngine());
                LogcatTracker logcatTracker = new LogcatTracker(null, 1, null);
                Companion companion = VKID.INSTANCE;
                VKID.analyticsDebugTracker = logcatTracker;
                VKIDAnalytics.INSTANCE.addTracker(logcatTracker);
                return;
            }
            InternalVKIDLog.INSTANCE.setLogEngine(new InternalVKIDFakeLogEngine());
            LogcatTracker logcatTracker2 = VKID.analyticsDebugTracker;
            if (logcatTracker2 != null) {
                VKIDAnalytics.INSTANCE.removeTracker(logcatTracker2);
            }
        }
    }

    @InternalVKIDApi
    public VKID(final VKIDDeps deps) {
        Intrinsics.checkNotNullParameter(deps, "deps");
        this.requestMutex = MutexKt.Mutex$default(false, 1, null);
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("VKID", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("VKID");
        this.internalVKIDLocale = new AtomicReference<>(null);
        this.authProvidersChooser = deps.getAuthProvidersChooser();
        this.authOptionsCreator = deps.getAuthOptionsCreator();
        this.authCallbacksHolder = deps.getAuthCallbacksHolder();
        this.authResultHandler = deps.getAuthResultHandler();
        this.dispatchers = deps.getDispatchers();
        this.vkSilentAuthInfoProvider = deps.getVkSilentAuthInfoProvider();
        this.userDataFetcher = deps.getUserDataFetcher();
        this.tokenRefresher = deps.getTokenRefresher();
        this.tokenExchanger = deps.getTokenExchanger();
        this.userRefresher = deps.getUserRefresher();
        this.loggerOut = deps.getLoggerOut();
        this.tokenStorage = deps.getTokenStorage();
        CrashReporter crashReporter = deps.getCrashReporter();
        this.crashReporter = crashReporter;
        this.performanceTracker = deps.getPerformanceTracker();
        this.groupSubscriptionApiServiceInternal = deps.getGroupSubscriptionApiService();
        this.clientIdProvider = new Function0() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID._init_$lambda$0(deps);
            }
        };
        this.context = deps.getContext();
        this.groupSubscriptionLimit = deps.getGroupSubscriptionLimit();
        this.prefsStorage = deps.getEncryptedSharedPreferencesStorage().getValue();
        crashReporter.runReportingCrashes(new Function1() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKID._init_$lambda$1((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID._init_$lambda$3(deps, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String _init_$lambda$0(VKIDDeps vKIDDeps) {
        return vKIDDeps.getServiceCredentials().getValue().getClientID();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$1(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$3(VKIDDeps vKIDDeps, VKID vkid) {
        VKIDAnalytics.INSTANCE.addTracker(vKIDDeps.getStatTracker());
        VKIDAnalytics.INSTANCE.addTracker(vKIDDeps.getTrackingTracker());
        String str = null;
        vkid.logger.info(StringsKt.trimMargin$default("\n                    |VKID initialized\n                    |Version name: 2.7.0\n                    |CI build: " + BuildConfig.CI_BUILD_NUMBER + " \n                ", null, 1, null));
        GroupSubscriptionLimit groupSubscriptionLimit = vKIDDeps.getGroupSubscriptionLimit();
        if (groupSubscriptionLimit != null) {
            str = groupSubscriptionLimit.getMaxSubscriptionsToShow() + ";" + groupSubscriptionLimit.getPeriodInDays();
        }
        String str2 = str;
        VKIDAnalytics.Companion companion = VKIDAnalytics.INSTANCE;
        VKIDAnalytics.EventParam[] eventParamArr = new VKIDAnalytics.EventParam[2];
        eventParamArr[0] = new VKIDAnalytics.EventParam("wrapper_sdk_type", vKIDDeps.getIsFlutter() ? PluginErrorDetails.Platform.FLUTTER : "none", null, 4, null);
        eventParamArr[1] = new VKIDAnalytics.EventParam("limit_settings", str2, null, 4, null);
        companion.trackEvent("vkid_sdk_init", eventParamArr);
        VKCaptcha.INSTANCE.init(vKIDDeps.getAppContext());
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: getPerformanceTracker$vkid_release, reason: from getter */
    public final PerformanceTracker getPerformanceTracker() {
        return this.performanceTracker;
    }

    public final InternalVKIDTokenStorage getTokenStorage() {
        return this.tokenStorage;
    }

    public final CrashReporter getCrashReporter() {
        return this.crashReporter;
    }

    public final InternalVKIDGroupSubscriptionApiContract getGroupSubscriptionApiService() {
        return this.groupSubscriptionApiServiceInternal.getValue();
    }

    public final String getClientId() {
        return this.clientIdProvider.invoke();
    }

    public final Context getContext() {
        return this.context;
    }

    public final AtomicReference<Locale> getInternalVKIDLocale() {
        return this.internalVKIDLocale;
    }

    public final GroupSubscriptionLimit getGroupSubscriptionLimit() {
        return this.groupSubscriptionLimit;
    }

    public final InternalVKIDPreferencesStorage getPrefsStorage() {
        return this.prefsStorage;
    }

    public final void setLocale(Locale locale) {
        this.internalVKIDLocale.set(locale);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$authorize$2, reason: invalid class name */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$authorize$2", f = "VKID.kt", i = {}, l = {424}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDAuthCallback $callback;
        final /* synthetic */ VKIDAuthParams $params;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(VKIDAuthCallback vKIDAuthCallback, VKIDAuthParams vKIDAuthParams, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$callback = vKIDAuthCallback;
            this.$params = vKIDAuthParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKID.this.new AnonymousClass2(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (VKID.this.authorize(this.$callback, this.$params, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public final void authorize(LifecycleOwner lifecycleOwner, VKIDAuthCallback callback, VKIDAuthParams params) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(lifecycleOwner), null, null, new AnonymousClass2(callback, params, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$authorize$5, reason: invalid class name */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$authorize$5", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass5 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        AnonymousClass5(Continuation<? super AnonymousClass5> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass5(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((AnonymousClass5) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$authorize$6, reason: invalid class name */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$authorize$6", f = "VKID.kt", i = {0}, l = {455, 486}, m = "invokeSuspend", n = {"actualParams"}, s = {"L$0"})
    static final class AnonymousClass6 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDAuthCallback $callback;
        final /* synthetic */ VKIDAuthParams $params;
        Object L$0;
        int label;
        final /* synthetic */ VKID this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass6(VKIDAuthParams vKIDAuthParams, VKID vkid, VKIDAuthCallback vKIDAuthCallback, Continuation<? super AnonymousClass6> continuation) {
            super(1, continuation);
            this.$params = vKIDAuthParams;
            this.this$0 = vkid;
            this.$callback = vKIDAuthCallback;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return new AnonymousClass6(this.$params, this.this$0, this.$callback, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((AnonymousClass6) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code restructure failed: missing block: B:30:0x00cc, code lost:
        
            if (kotlinx.coroutines.BuildersKt.withContext(r11.this$0.dispatchers.getIo(), new com.vk.id.VKID.AnonymousClass6.AnonymousClass2(r11.this$0, r9, r10, null), r11) == r0) goto L31;
         */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r12) {
            /*
                Method dump skipped, instruction units count: 210
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.vk.id.VKID.AnonymousClass6.invokeSuspend(java.lang.Object):java.lang.Object");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit invokeSuspend$lambda$0(VKIDAuthParams vKIDAuthParams, VKID vkid, VKIDAuthParams.Builder builder) {
            VKIDAuthParams.Locale locale = vKIDAuthParams.getLocale();
            if (locale == null) {
                locale = VKIDAuthParams.Locale.INSTANCE.fromLocale(vkid.getInternalVKIDLocale().get());
            }
            builder.setLocale(locale);
            return Unit.INSTANCE;
        }

        /* JADX INFO: renamed from: com.vk.id.VKID$authorize$6$2, reason: invalid class name */
        /* JADX INFO: compiled from: VKID.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.VKID$authorize$6$2", f = "VKID.kt", i = {}, l = {487}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ VKIDAuthParams $actualParams;
            final /* synthetic */ StatParams $statParams;
            int label;
            final /* synthetic */ VKID this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass2(VKID vkid, VKIDAuthParams vKIDAuthParams, StatParams statParams, Continuation<? super AnonymousClass2> continuation) {
                super(2, continuation);
                this.this$0 = vkid;
                this.$actualParams = vKIDAuthParams;
                this.$statParams = statParams;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass2(this.this$0, this.$actualParams, this.$statParams, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    this.label = 1;
                    obj = ((AuthProvidersChooser) this.this$0.authProvidersChooser.getValue()).chooseBest(this.$actualParams, this);
                    if (obj == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                ((VKIDAuthProvider) obj).auth(this.this$0.authOptionsCreator.create$vkid_release(this.$actualParams, this.$statParams));
                return Unit.INSTANCE;
            }
        }
    }

    public final Object authorize(VKIDAuthCallback vKIDAuthCallback, VKIDAuthParams vKIDAuthParams, Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = this.crashReporter.runReportingCrashesSuspend(new AnonymousClass5(null), new AnonymousClass6(vKIDAuthParams, this, vKIDAuthCallback, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$refreshToken$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$refreshToken$2", f = "VKID.kt", i = {}, l = {508}, m = "invokeSuspend", n = {}, s = {})
    static final class C19482 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDRefreshTokenCallback $callback;
        final /* synthetic */ VKIDRefreshTokenParams $params;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19482(VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation<? super C19482> continuation) {
            super(2, continuation);
            this.$callback = vKIDRefreshTokenCallback;
            this.$params = vKIDRefreshTokenParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKID.this.new C19482(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19482) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (VKID.this.refreshToken(this.$callback, this.$params, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public final void refreshToken(LifecycleOwner lifecycleOwner, VKIDRefreshTokenCallback callback, VKIDRefreshTokenParams params) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(lifecycleOwner), null, null, new C19482(callback, params, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$refreshToken$5, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$refreshToken$5", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19495 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        C19495(Continuation<? super C19495> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19495(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((C19495) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$refreshToken$6, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$refreshToken$6", f = "VKID.kt", i = {0, 1}, l = {699, 525}, m = "invokeSuspend", n = {"$this$withLock_u24default$iv", "$this$withLock_u24default$iv"}, s = {"L$0", "L$0"})
    static final class C19506 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDRefreshTokenCallback $callback;
        final /* synthetic */ VKIDRefreshTokenParams $params;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19506(VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation<? super C19506> continuation) {
            super(1, continuation);
            this.$callback = vKIDRefreshTokenCallback;
            this.$params = vKIDRefreshTokenParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return VKID.this.new C19506(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((C19506) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Throwable {
            Mutex mutex;
            VKID vkid;
            VKIDRefreshTokenCallback vKIDRefreshTokenCallback;
            VKIDRefreshTokenParams vKIDRefreshTokenParams;
            Mutex mutex2;
            Throwable th;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    mutex = VKID.this.requestMutex;
                    vkid = VKID.this;
                    VKIDRefreshTokenCallback vKIDRefreshTokenCallback2 = this.$callback;
                    VKIDRefreshTokenParams vKIDRefreshTokenParams2 = this.$params;
                    this.L$0 = mutex;
                    this.L$1 = vkid;
                    this.L$2 = vKIDRefreshTokenCallback2;
                    this.L$3 = vKIDRefreshTokenParams2;
                    this.label = 1;
                    if (mutex.lock(null, this) != coroutine_suspended) {
                        vKIDRefreshTokenCallback = vKIDRefreshTokenCallback2;
                        vKIDRefreshTokenParams = vKIDRefreshTokenParams2;
                    }
                    return coroutine_suspended;
                }
                if (i != 1) {
                    if (i != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    mutex2 = (Mutex) this.L$0;
                    try {
                        ResultKt.throwOnFailure(obj);
                        Unit unit = Unit.INSTANCE;
                        mutex2.unlock(null);
                        return Unit.INSTANCE;
                    } catch (Throwable th2) {
                        th = th2;
                        mutex2.unlock(null);
                        throw th;
                    }
                }
                vKIDRefreshTokenParams = (VKIDRefreshTokenParams) this.L$3;
                vKIDRefreshTokenCallback = (VKIDRefreshTokenCallback) this.L$2;
                vkid = (VKID) this.L$1;
                Mutex mutex3 = (Mutex) this.L$0;
                ResultKt.throwOnFailure(obj);
                mutex = mutex3;
                PerformanceTracker performanceTracker = vkid.getPerformanceTracker();
                VKID$refreshToken$6$1$1 vKID$refreshToken$6$1$1 = new VKID$refreshToken$6$1$1(vkid, vKIDRefreshTokenCallback, vKIDRefreshTokenParams, null);
                this.L$0 = mutex;
                this.L$1 = null;
                this.L$2 = null;
                this.L$3 = null;
                this.label = 2;
                if (performanceTracker.runTrackingSuspend("RefreshToken", vKID$refreshToken$6$1$1, this) != coroutine_suspended) {
                    mutex2 = mutex;
                    Unit unit2 = Unit.INSTANCE;
                    mutex2.unlock(null);
                    return Unit.INSTANCE;
                }
                return coroutine_suspended;
            } catch (Throwable th3) {
                mutex2 = mutex;
                th = th3;
                mutex2.unlock(null);
                throw th;
            }
        }
    }

    public final Object refreshToken(VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = this.crashReporter.runReportingCrashesSuspend(new C19495(null), new C19506(vKIDRefreshTokenCallback, vKIDRefreshTokenParams, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$exchangeTokenToV2$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$exchangeTokenToV2$2", f = "VKID.kt", i = {}, l = {548}, m = "invokeSuspend", n = {}, s = {})
    static final class C19392 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDExchangeTokenCallback $callback;
        final /* synthetic */ VKIDExchangeTokenParams $params;
        final /* synthetic */ String $v1Token;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19392(String str, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, VKIDExchangeTokenParams vKIDExchangeTokenParams, Continuation<? super C19392> continuation) {
            super(2, continuation);
            this.$v1Token = str;
            this.$callback = vKIDExchangeTokenCallback;
            this.$params = vKIDExchangeTokenParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKID.this.new C19392(this.$v1Token, this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19392) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (VKID.this.exchangeTokenToV2(this.$v1Token, this.$callback, this.$params, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public final void exchangeTokenToV2(LifecycleOwner lifecycleOwner, String v1Token, VKIDExchangeTokenCallback callback, VKIDExchangeTokenParams params) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(v1Token, "v1Token");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(lifecycleOwner), null, null, new C19392(v1Token, callback, params, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$exchangeTokenToV2$5, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$exchangeTokenToV2$5", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19405 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        C19405(Continuation<? super C19405> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19405(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((C19405) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$exchangeTokenToV2$6, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$exchangeTokenToV2$6", f = "VKID.kt", i = {0, 1}, l = {699, 567}, m = "invokeSuspend", n = {"$this$withLock_u24default$iv", "$this$withLock_u24default$iv"}, s = {"L$0", "L$0"})
    static final class C19416 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDExchangeTokenCallback $callback;
        final /* synthetic */ VKIDExchangeTokenParams $params;
        final /* synthetic */ String $v1Token;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19416(String str, VKIDExchangeTokenParams vKIDExchangeTokenParams, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, Continuation<? super C19416> continuation) {
            super(1, continuation);
            this.$v1Token = str;
            this.$params = vKIDExchangeTokenParams;
            this.$callback = vKIDExchangeTokenCallback;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return VKID.this.new C19416(this.$v1Token, this.$params, this.$callback, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((C19416) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code restructure failed: missing block: B:20:0x008a, code lost:
        
            if (r15.runTrackingSuspend("ExchangeTokenToV2", r8, r14) == r0) goto L21;
         */
        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v0, types: [int] */
        /* JADX WARN: Type inference failed for: r1v1, types: [kotlinx.coroutines.sync.Mutex] */
        /* JADX WARN: Type inference failed for: r1v11 */
        /* JADX WARN: Type inference failed for: r1v12 */
        /* JADX WARN: Type inference failed for: r1v5, types: [kotlinx.coroutines.sync.Mutex] */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r15) {
            /*
                r14 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r14.label
                r2 = 2
                r3 = 1
                r4 = 0
                if (r1 == 0) goto L40
                if (r1 == r3) goto L25
                if (r1 != r2) goto L1d
                java.lang.Object r0 = r14.L$0
                r1 = r0
                kotlinx.coroutines.sync.Mutex r1 = (kotlinx.coroutines.sync.Mutex) r1
                kotlin.ResultKt.throwOnFailure(r15)     // Catch: java.lang.Throwable -> L19
                goto L8d
            L19:
                r0 = move-exception
                r15 = r0
                goto L95
            L1d:
                java.lang.IllegalStateException r15 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r15.<init>(r0)
                throw r15
            L25:
                java.lang.Object r1 = r14.L$4
                com.vk.id.exchangetoken.VKIDExchangeTokenCallback r1 = (com.vk.id.exchangetoken.VKIDExchangeTokenCallback) r1
                java.lang.Object r3 = r14.L$3
                com.vk.id.exchangetoken.VKIDExchangeTokenParams r3 = (com.vk.id.exchangetoken.VKIDExchangeTokenParams) r3
                java.lang.Object r5 = r14.L$2
                java.lang.String r5 = (java.lang.String) r5
                java.lang.Object r6 = r14.L$1
                com.vk.id.VKID r6 = (com.vk.id.VKID) r6
                java.lang.Object r7 = r14.L$0
                kotlinx.coroutines.sync.Mutex r7 = (kotlinx.coroutines.sync.Mutex) r7
                kotlin.ResultKt.throwOnFailure(r15)
                r12 = r1
                r11 = r3
                r1 = r7
                goto L6a
            L40:
                kotlin.ResultKt.throwOnFailure(r15)
                com.vk.id.VKID r15 = com.vk.id.VKID.this
                kotlinx.coroutines.sync.Mutex r15 = com.vk.id.VKID.access$getRequestMutex$p(r15)
                com.vk.id.VKID r6 = com.vk.id.VKID.this
                java.lang.String r5 = r14.$v1Token
                com.vk.id.exchangetoken.VKIDExchangeTokenParams r1 = r14.$params
                com.vk.id.exchangetoken.VKIDExchangeTokenCallback r7 = r14.$callback
                r8 = r14
                kotlin.coroutines.Continuation r8 = (kotlin.coroutines.Continuation) r8
                r14.L$0 = r15
                r14.L$1 = r6
                r14.L$2 = r5
                r14.L$3 = r1
                r14.L$4 = r7
                r14.label = r3
                java.lang.Object r3 = r15.lock(r4, r8)
                if (r3 != r0) goto L67
                goto L8c
            L67:
                r11 = r1
                r12 = r7
                r1 = r15
            L6a:
                r10 = r5
                r9 = r6
                com.vk.id.tracking.core.PerformanceTracker r15 = r9.getPerformanceTracker()     // Catch: java.lang.Throwable -> L19
                java.lang.String r3 = "ExchangeTokenToV2"
                com.vk.id.VKID$exchangeTokenToV2$6$1$1 r8 = new com.vk.id.VKID$exchangeTokenToV2$6$1$1     // Catch: java.lang.Throwable -> L19
                r13 = 0
                r8.<init>(r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L19
                kotlin.jvm.functions.Function1 r8 = (kotlin.jvm.functions.Function1) r8     // Catch: java.lang.Throwable -> L19
                r14.L$0 = r1     // Catch: java.lang.Throwable -> L19
                r14.L$1 = r4     // Catch: java.lang.Throwable -> L19
                r14.L$2 = r4     // Catch: java.lang.Throwable -> L19
                r14.L$3 = r4     // Catch: java.lang.Throwable -> L19
                r14.L$4 = r4     // Catch: java.lang.Throwable -> L19
                r14.label = r2     // Catch: java.lang.Throwable -> L19
                java.lang.Object r15 = r15.runTrackingSuspend(r3, r8, r14)     // Catch: java.lang.Throwable -> L19
                if (r15 != r0) goto L8d
            L8c:
                return r0
            L8d:
                kotlin.Unit r15 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L19
                r1.unlock(r4)
                kotlin.Unit r15 = kotlin.Unit.INSTANCE
                return r15
            L95:
                r1.unlock(r4)
                throw r15
            */
            throw new UnsupportedOperationException("Method not decompiled: com.vk.id.VKID.C19416.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    public final Object exchangeTokenToV2(String str, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, VKIDExchangeTokenParams vKIDExchangeTokenParams, Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = this.crashReporter.runReportingCrashesSuspend(new C19405(null), new C19416(str, vKIDExchangeTokenParams, vKIDExchangeTokenCallback, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$getUserData$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$getUserData$2", f = "VKID.kt", i = {}, l = {588}, m = "invokeSuspend", n = {}, s = {})
    static final class C19422 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDGetUserCallback $callback;
        final /* synthetic */ VKIDGetUserParams $params;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19422(VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation<? super C19422> continuation) {
            super(2, continuation);
            this.$callback = vKIDGetUserCallback;
            this.$params = vKIDGetUserParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKID.this.new C19422(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19422) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (VKID.this.getUserData(this.$callback, this.$params, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public final void getUserData(LifecycleOwner lifecycleOwner, VKIDGetUserCallback callback, VKIDGetUserParams params) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(lifecycleOwner), null, null, new C19422(callback, params, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$getUserData$5, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$getUserData$5", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19435 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        C19435(Continuation<? super C19435> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19435(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((C19435) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$getUserData$6, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$getUserData$6", f = "VKID.kt", i = {0, 1}, l = {699, 605}, m = "invokeSuspend", n = {"$this$withLock_u24default$iv", "$this$withLock_u24default$iv"}, s = {"L$0", "L$0"})
    static final class C19446 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDGetUserCallback $callback;
        final /* synthetic */ VKIDGetUserParams $params;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19446(VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation<? super C19446> continuation) {
            super(1, continuation);
            this.$callback = vKIDGetUserCallback;
            this.$params = vKIDGetUserParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return VKID.this.new C19446(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((C19446) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Throwable {
            Mutex mutex;
            VKID vkid;
            VKIDGetUserCallback vKIDGetUserCallback;
            VKIDGetUserParams vKIDGetUserParams;
            Mutex mutex2;
            Throwable th;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    mutex = VKID.this.requestMutex;
                    vkid = VKID.this;
                    VKIDGetUserCallback vKIDGetUserCallback2 = this.$callback;
                    VKIDGetUserParams vKIDGetUserParams2 = this.$params;
                    this.L$0 = mutex;
                    this.L$1 = vkid;
                    this.L$2 = vKIDGetUserCallback2;
                    this.L$3 = vKIDGetUserParams2;
                    this.label = 1;
                    if (mutex.lock(null, this) != coroutine_suspended) {
                        vKIDGetUserCallback = vKIDGetUserCallback2;
                        vKIDGetUserParams = vKIDGetUserParams2;
                    }
                    return coroutine_suspended;
                }
                if (i != 1) {
                    if (i != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    mutex2 = (Mutex) this.L$0;
                    try {
                        ResultKt.throwOnFailure(obj);
                        Unit unit = Unit.INSTANCE;
                        mutex2.unlock(null);
                        return Unit.INSTANCE;
                    } catch (Throwable th2) {
                        th = th2;
                        mutex2.unlock(null);
                        throw th;
                    }
                }
                vKIDGetUserParams = (VKIDGetUserParams) this.L$3;
                vKIDGetUserCallback = (VKIDGetUserCallback) this.L$2;
                vkid = (VKID) this.L$1;
                Mutex mutex3 = (Mutex) this.L$0;
                ResultKt.throwOnFailure(obj);
                mutex = mutex3;
                PerformanceTracker performanceTracker = vkid.getPerformanceTracker();
                VKID$getUserData$6$1$1 vKID$getUserData$6$1$1 = new VKID$getUserData$6$1$1(vkid, vKIDGetUserCallback, vKIDGetUserParams, null);
                this.L$0 = mutex;
                this.L$1 = null;
                this.L$2 = null;
                this.L$3 = null;
                this.label = 2;
                if (performanceTracker.runTrackingSuspend("GetUserData", vKID$getUserData$6$1$1, this) != coroutine_suspended) {
                    mutex2 = mutex;
                    Unit unit2 = Unit.INSTANCE;
                    mutex2.unlock(null);
                    return Unit.INSTANCE;
                }
                return coroutine_suspended;
            } catch (Throwable th3) {
                mutex2 = mutex;
                th = th3;
                mutex2.unlock(null);
                throw th;
            }
        }
    }

    public final Object getUserData(VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = this.crashReporter.runReportingCrashesSuspend(new C19435(null), new C19446(vKIDGetUserCallback, vKIDGetUserParams, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$logout$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$logout$2", f = "VKID.kt", i = {}, l = {626}, m = "invokeSuspend", n = {}, s = {})
    static final class C19452 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDLogoutCallback $callback;
        final /* synthetic */ VKIDLogoutParams $params;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19452(VKIDLogoutCallback vKIDLogoutCallback, VKIDLogoutParams vKIDLogoutParams, Continuation<? super C19452> continuation) {
            super(2, continuation);
            this.$callback = vKIDLogoutCallback;
            this.$params = vKIDLogoutParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKID.this.new C19452(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19452) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (VKID.this.logout(this.$callback, this.$params, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public final void logout(VKIDLogoutCallback callback, LifecycleOwner lifecycleOwner, VKIDLogoutParams params) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(params, "params");
        BuildersKt__Builders_commonKt.launch$default(LifecycleOwnerKt.getLifecycleScope(lifecycleOwner), null, null, new C19452(callback, params, null), 3, null);
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$logout$5, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$logout$5", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19465 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        C19465(Continuation<? super C19465> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19465(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((C19465) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.VKID$logout$6, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKID.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.VKID$logout$6", f = "VKID.kt", i = {0, 1}, l = {699, 643}, m = "invokeSuspend", n = {"$this$withLock_u24default$iv", "$this$withLock_u24default$iv"}, s = {"L$0", "L$0"})
    static final class C19476 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ VKIDLogoutCallback $callback;
        final /* synthetic */ VKIDLogoutParams $params;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19476(VKIDLogoutCallback vKIDLogoutCallback, VKIDLogoutParams vKIDLogoutParams, Continuation<? super C19476> continuation) {
            super(1, continuation);
            this.$callback = vKIDLogoutCallback;
            this.$params = vKIDLogoutParams;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return VKID.this.new C19476(this.$callback, this.$params, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((C19476) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Throwable {
            Mutex mutex;
            VKID vkid;
            VKIDLogoutCallback vKIDLogoutCallback;
            VKIDLogoutParams vKIDLogoutParams;
            Mutex mutex2;
            Throwable th;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    mutex = VKID.this.requestMutex;
                    vkid = VKID.this;
                    VKIDLogoutCallback vKIDLogoutCallback2 = this.$callback;
                    VKIDLogoutParams vKIDLogoutParams2 = this.$params;
                    this.L$0 = mutex;
                    this.L$1 = vkid;
                    this.L$2 = vKIDLogoutCallback2;
                    this.L$3 = vKIDLogoutParams2;
                    this.label = 1;
                    if (mutex.lock(null, this) != coroutine_suspended) {
                        vKIDLogoutCallback = vKIDLogoutCallback2;
                        vKIDLogoutParams = vKIDLogoutParams2;
                    }
                    return coroutine_suspended;
                }
                if (i != 1) {
                    if (i != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    mutex2 = (Mutex) this.L$0;
                    try {
                        ResultKt.throwOnFailure(obj);
                        Unit unit = Unit.INSTANCE;
                        mutex2.unlock(null);
                        return Unit.INSTANCE;
                    } catch (Throwable th2) {
                        th = th2;
                        mutex2.unlock(null);
                        throw th;
                    }
                }
                vKIDLogoutParams = (VKIDLogoutParams) this.L$3;
                vKIDLogoutCallback = (VKIDLogoutCallback) this.L$2;
                vkid = (VKID) this.L$1;
                Mutex mutex3 = (Mutex) this.L$0;
                ResultKt.throwOnFailure(obj);
                mutex = mutex3;
                PerformanceTracker performanceTracker = vkid.getPerformanceTracker();
                VKID$logout$6$1$1 vKID$logout$6$1$1 = new VKID$logout$6$1$1(vkid, vKIDLogoutCallback, vKIDLogoutParams, null);
                this.L$0 = mutex;
                this.L$1 = null;
                this.L$2 = null;
                this.L$3 = null;
                this.label = 2;
                if (performanceTracker.runTrackingSuspend("Logout", vKID$logout$6$1$1, this) != coroutine_suspended) {
                    mutex2 = mutex;
                    Unit unit2 = Unit.INSTANCE;
                    mutex2.unlock(null);
                    return Unit.INSTANCE;
                }
                return coroutine_suspended;
            } catch (Throwable th3) {
                mutex2 = mutex;
                th = th3;
                mutex2.unlock(null);
                throw th;
            }
        }
    }

    public final Object logout(VKIDLogoutCallback vKIDLogoutCallback, VKIDLogoutParams vKIDLogoutParams, Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = this.crashReporter.runReportingCrashesSuspend(new C19465(null), new C19476(vKIDLogoutCallback, vKIDLogoutParams, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final AccessToken _get_accessToken_$lambda$15(VKID vkid) {
        return vkid.tokenStorage.getAccessToken$vkid_release();
    }

    public final AccessToken getAccessToken() {
        return (AccessToken) this.crashReporter.runReportingCrashes(new Function1() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKID._get_accessToken_$lambda$14((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID._get_accessToken_$lambda$15(this.f$0);
            }
        });
    }

    @InternalVKIDApi
    public final void mockAuthorized() {
        this.tokenStorage.setAccessToken$vkid_release(new AccessToken("", null, 0L, 0L, new VKIDUser("", "", null, null, null, null, null, 124, null), null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final RefreshToken _get_refreshToken_$lambda$17(VKID vkid) {
        return vkid.tokenStorage.getRefreshToken$vkid_release();
    }

    public final RefreshToken getRefreshToken() {
        return (RefreshToken) this.crashReporter.runReportingCrashes(new Function1() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKID._get_refreshToken_$lambda$16((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.VKID$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return VKID._get_refreshToken_$lambda$17(this.f$0);
            }
        });
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX INFO: renamed from: fetchUserData-IoAF18A, reason: not valid java name */
    public final Object m9258fetchUserDataIoAF18A(Continuation<? super Result<VKIDUser>> continuation) {
        VKID$fetchUserData$1 vKID$fetchUserData$1;
        if (continuation instanceof VKID$fetchUserData$1) {
            vKID$fetchUserData$1 = (VKID$fetchUserData$1) continuation;
            if ((vKID$fetchUserData$1.label & Integer.MIN_VALUE) != 0) {
                vKID$fetchUserData$1.label -= Integer.MIN_VALUE;
            } else {
                vKID$fetchUserData$1 = new VKID$fetchUserData$1(this, continuation);
            }
        } else {
            vKID$fetchUserData$1 = new VKID$fetchUserData$1(this, continuation);
        }
        Object objRunReportingCrashesSuspend = vKID$fetchUserData$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = vKID$fetchUserData$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objRunReportingCrashesSuspend);
            CrashReporter crashReporter = this.crashReporter;
            VKID$fetchUserData$2 vKID$fetchUserData$2 = new VKID$fetchUserData$2(null);
            VKID$fetchUserData$3 vKID$fetchUserData$3 = new VKID$fetchUserData$3(this, null);
            vKID$fetchUserData$1.label = 1;
            objRunReportingCrashesSuspend = crashReporter.runReportingCrashesSuspend(vKID$fetchUserData$2, vKID$fetchUserData$3, vKID$fetchUserData$1);
            if (objRunReportingCrashesSuspend == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objRunReportingCrashesSuspend);
        }
        return ((Result) objRunReportingCrashesSuspend).getValue();
    }

    public static /* synthetic */ void authorize$default(VKID vkid, LifecycleOwner lifecycleOwner, VKIDAuthCallback vKIDAuthCallback, VKIDAuthParams vKIDAuthParams, int i, Object obj) {
        if ((i & 4) != 0) {
            vKIDAuthParams = new VKIDAuthParams.Builder().build();
        }
        vkid.authorize(lifecycleOwner, vKIDAuthCallback, vKIDAuthParams);
    }

    public static /* synthetic */ Object authorize$default(VKID vkid, VKIDAuthCallback vKIDAuthCallback, VKIDAuthParams vKIDAuthParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDAuthParams = new VKIDAuthParams.Builder().build();
        }
        return vkid.authorize(vKIDAuthCallback, vKIDAuthParams, (Continuation<? super Unit>) continuation);
    }

    public static /* synthetic */ void refreshToken$default(VKID vkid, LifecycleOwner lifecycleOwner, VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, int i, Object obj) {
        if ((i & 4) != 0) {
            vKIDRefreshTokenParams = new VKIDRefreshTokenParams.Builder().build();
        }
        vkid.refreshToken(lifecycleOwner, vKIDRefreshTokenCallback, vKIDRefreshTokenParams);
    }

    public static /* synthetic */ Object refreshToken$default(VKID vkid, VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDRefreshTokenParams = new VKIDRefreshTokenParams.Builder().build();
        }
        return vkid.refreshToken(vKIDRefreshTokenCallback, vKIDRefreshTokenParams, (Continuation<? super Unit>) continuation);
    }

    public static /* synthetic */ void exchangeTokenToV2$default(VKID vkid, LifecycleOwner lifecycleOwner, String str, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, VKIDExchangeTokenParams vKIDExchangeTokenParams, int i, Object obj) {
        if ((i & 8) != 0) {
            vKIDExchangeTokenParams = new VKIDExchangeTokenParams.Builder().build();
        }
        vkid.exchangeTokenToV2(lifecycleOwner, str, vKIDExchangeTokenCallback, vKIDExchangeTokenParams);
    }

    public static /* synthetic */ Object exchangeTokenToV2$default(VKID vkid, String str, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, VKIDExchangeTokenParams vKIDExchangeTokenParams, Continuation continuation, int i, Object obj) {
        if ((i & 4) != 0) {
            vKIDExchangeTokenParams = new VKIDExchangeTokenParams.Builder().build();
        }
        return vkid.exchangeTokenToV2(str, vKIDExchangeTokenCallback, vKIDExchangeTokenParams, (Continuation<? super Unit>) continuation);
    }

    public static /* synthetic */ void getUserData$default(VKID vkid, LifecycleOwner lifecycleOwner, VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, int i, Object obj) {
        if ((i & 4) != 0) {
            vKIDGetUserParams = new VKIDGetUserParams.Builder().build();
        }
        vkid.getUserData(lifecycleOwner, vKIDGetUserCallback, vKIDGetUserParams);
    }

    public static /* synthetic */ Object getUserData$default(VKID vkid, VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDGetUserParams = new VKIDGetUserParams.Builder().build();
        }
        return vkid.getUserData(vKIDGetUserCallback, vKIDGetUserParams, (Continuation<? super Unit>) continuation);
    }

    public static /* synthetic */ void logout$default(VKID vkid, VKIDLogoutCallback vKIDLogoutCallback, LifecycleOwner lifecycleOwner, VKIDLogoutParams vKIDLogoutParams, int i, Object obj) {
        if ((i & 4) != 0) {
            vKIDLogoutParams = new VKIDLogoutParams.Builder().build();
        }
        vkid.logout(vKIDLogoutCallback, lifecycleOwner, vKIDLogoutParams);
    }

    public static /* synthetic */ Object logout$default(VKID vkid, VKIDLogoutCallback vKIDLogoutCallback, VKIDLogoutParams vKIDLogoutParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDLogoutParams = new VKIDLogoutParams.Builder().build();
        }
        return vkid.logout(vKIDLogoutCallback, vKIDLogoutParams, (Continuation<? super Unit>) continuation);
    }
}
