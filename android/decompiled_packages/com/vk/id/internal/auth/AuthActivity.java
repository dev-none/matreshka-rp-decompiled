package com.vk.id.internal.auth;

import android.R;
import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import androidx.browser.customtabs.CustomTabsCallback;
import androidx.browser.customtabs.CustomTabsClient;
import androidx.browser.customtabs.CustomTabsIntent;
import androidx.browser.customtabs.CustomTabsServiceConnection;
import androidx.browser.customtabs.CustomTabsSession;
import androidx.core.app.ActivityOptionsCompat;
import com.vk.id.VKID;
import com.vk.id.internal.auth.web.ContextUtils;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.tracking.core.CrashReporter;
import io.sentry.SentryEvent;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthActivity.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000S\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b*\u0001\u0011\b\u0001\u0018\u0000 +2\u00020\u0001:\u0001+B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u0013\u001a\u00020\u0014H\u0014J\u0012\u0010\u0015\u001a\u00020\u00142\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0014J\u0012\u0010\u0018\u001a\u00020\u00142\b\u0010\u0019\u001a\u0004\u0018\u00010\bH\u0014J\b\u0010\u001a\u001a\u00020\u0014H\u0014J\u0012\u0010\u001b\u001a\u00020\u00142\b\u0010\u0019\u001a\u0004\u0018\u00010\bH\u0002J\u0012\u0010\u001c\u001a\u00020\u00142\b\u0010\u001d\u001a\u0004\u0018\u00010\bH\u0002J\u0012\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!H\u0002J\u0010\u0010\"\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020!H\u0002J\b\u0010#\u001a\u00020\u0014H\u0014J\u0010\u0010$\u001a\u00020\u00142\u0006\u0010%\u001a\u00020\u0017H\u0014J\b\u0010&\u001a\u00020\u0014H\u0016J#\u0010'\u001a\u00020\u00052\b\u0010\u0019\u001a\u0004\u0018\u00010\bH\u0002\u0082\u0002\u000e\n\f\b\u0000\u0012\u0002\u0018\u0000\u001a\u0004\b\u0003\u0010\u0001J#\u0010(\u001a\u00020\u00052\b\u0010\u0019\u001a\u0004\u0018\u00010\bH\u0002\u0082\u0002\u000e\n\f\b\u0000\u0012\u0002\u0018\u0000\u001a\u0004\b\u0003\u0010\u0001J\u0010\u0010)\u001a\u00020\u00052\u0006\u0010\u0019\u001a\u00020\bH\u0002J\u0010\u0010*\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\bH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0012¨\u0006,"}, d2 = {"Lcom/vk/id/internal/auth/AuthActivity;", "Landroid/app/Activity;", "<init>", "()V", "authWasStarted", "", "isWaitingForAuthResult", "authIntent", "Landroid/content/Intent;", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "shouldReportCustomTabsPerformance", "customTabsServiceConnection", "Landroidx/browser/customtabs/CustomTabsServiceConnection;", "customTabsSession", "Landroidx/browser/customtabs/CustomTabsSession;", "callback", "com/vk/id/internal/auth/AuthActivity$callback$1", "Lcom/vk/id/internal/auth/AuthActivity$callback$1;", "onStop", "", "onCreate", "savedInstanceState", "Landroid/os/Bundle;", "onNewIntent", "intent", "onResume", "processIntent", "onOauthResult", "data", "parseOAuthResult", "Lcom/vk/id/internal/auth/AuthResult;", "uri", "Landroid/net/Uri;", "handlePayload", "onPause", "onSaveInstanceState", "outState", "finish", "isIntentWithAuthRequest", "isIntentWithAuthResult", "handleStartAuth", "launchAuth", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthActivity extends Activity {
    private static final String KEY_AUTH_INTENT = "KEY_AUTH_INTENT";
    private static final String KEY_START_AUTH = "KEY_START_AUTH";
    private static final String KEY_WAITING_FOR_AUTH_RESULT = "KEY_WAITING_FOR_AUTH_RESULT";
    private static final String PERFORMANCE_KEY_CUSTOM_TABS = "CustomTabsAuth";
    private Intent authIntent;
    private boolean authWasStarted;
    private final AuthActivity$callback$1 callback;
    private CustomTabsServiceConnection customTabsServiceConnection;
    private CustomTabsSession customTabsSession;
    private boolean isWaitingForAuthResult;
    private final InternalVKIDLogger logger;
    private boolean shouldReportCustomTabsPerformance;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    /* JADX WARN: Type inference failed for: r0v3, types: [com.vk.id.internal.auth.AuthActivity$callback$1] */
    public AuthActivity() {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("AuthActivity", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("AuthActivity");
        this.shouldReportCustomTabsPerformance = true;
        this.callback = new CustomTabsCallback() { // from class: com.vk.id.internal.auth.AuthActivity$callback$1
            @Override // androidx.browser.customtabs.CustomTabsCallback
            public void onNavigationEvent(int navigationEvent, Bundle extras) {
                super.onNavigationEvent(navigationEvent, extras);
                if (navigationEvent == 2 && this.this$0.shouldReportCustomTabsPerformance) {
                    VKID.INSTANCE.getInstance().getPerformanceTracker().endTracking("CustomTabsAuth");
                    this.this$0.shouldReportCustomTabsPerformance = false;
                }
            }
        };
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda10
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onStop$lambda$0((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda11
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onStop$lambda$1(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onStop$lambda$0(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onStop$lambda$1(AuthActivity authActivity) {
        CustomTabsServiceConnection customTabsServiceConnection = authActivity.customTabsServiceConnection;
        if (customTabsServiceConnection == null) {
            return Unit.INSTANCE;
        }
        Intrinsics.checkNotNull(customTabsServiceConnection);
        authActivity.unbindService(customTabsServiceConnection);
        authActivity.customTabsServiceConnection = null;
        return Unit.INSTANCE;
    }

    @Override // android.app.Activity
    protected void onCreate(final Bundle savedInstanceState) {
        overridePendingTransition(0, 0);
        super.onCreate(savedInstanceState);
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onCreate$lambda$2((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onCreate$lambda$3(this.f$0, savedInstanceState);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onCreate$lambda$2(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onCreate$lambda$3(AuthActivity authActivity, Bundle bundle) {
        authActivity.shouldReportCustomTabsPerformance = true;
        Intent intent = null;
        if (Build.VERSION.SDK_INT >= 33) {
            if (bundle != null) {
                intent = (Intent) bundle.getParcelable(KEY_AUTH_INTENT, Intent.class);
            }
        } else if (bundle != null) {
            intent = (Intent) bundle.getParcelable(KEY_AUTH_INTENT);
        }
        authActivity.authIntent = intent;
        authActivity.isWaitingForAuthResult = bundle != null ? bundle.getBoolean(KEY_WAITING_FOR_AUTH_RESULT, false) : false;
        authActivity.processIntent(authActivity.getIntent());
        return Unit.INSTANCE;
    }

    @Override // android.app.Activity
    protected void onNewIntent(final Intent intent) {
        super.onNewIntent(intent);
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onNewIntent$lambda$4((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onNewIntent$lambda$5(this.f$0, intent);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onNewIntent$lambda$4(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onNewIntent$lambda$5(AuthActivity authActivity, Intent intent) {
        authActivity.processIntent(intent);
        return Unit.INSTANCE;
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onResume$lambda$6((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onResume$lambda$7(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onResume$lambda$6(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onResume$lambda$7(AuthActivity authActivity) {
        if (authActivity.isWaitingForAuthResult && !authActivity.authWasStarted) {
            AuthEventBridge.INSTANCE.onAuthResult$vkid_release(new AuthResult.Canceled("User returns to auth activity without auth"));
            authActivity.finish();
        }
        return Unit.INSTANCE;
    }

    private final void processIntent(Intent intent) {
        if (!this.isWaitingForAuthResult && isIntentWithAuthRequest(intent)) {
            if (handleStartAuth(intent)) {
                this.isWaitingForAuthResult = true;
                this.authWasStarted = true;
                return;
            } else {
                finish();
                return;
            }
        }
        if (isIntentWithAuthResult(intent)) {
            onOauthResult(intent);
            finish();
            this.isWaitingForAuthResult = false;
        }
    }

    private final void onOauthResult(Intent data) {
        if (data == null) {
            return;
        }
        AuthEventBridge.INSTANCE.onAuthResult$vkid_release(parseOAuthResult(data.getData()));
    }

    private final AuthResult parseOAuthResult(Uri uri) {
        if (uri == null) {
            return new AuthResult.AuthActiviyResultFailed("AuthActivity opened with null uri", null);
        }
        try {
            return handlePayload(uri);
        } catch (UnsupportedOperationException e) {
            return new AuthResult.AuthActiviyResultFailed("AuthActivity opened with invalid url: " + uri, e);
        }
    }

    private final AuthResult handlePayload(Uri uri) {
        String queryParameter = uri.getQueryParameter("code");
        String queryParameter2 = uri.getQueryParameter("state");
        String queryParameter3 = uri.getQueryParameter("device_id");
        AuthResult.OAuth oAuth = null;
        if (queryParameter3 == null) {
            return new AuthResult.AuthActiviyResultFailed("No device id", null);
        }
        if (queryParameter != null && queryParameter2 != null) {
            oAuth = new AuthResult.OAuth(queryParameter, queryParameter2);
        }
        return new AuthResult.Success(oAuth, queryParameter3);
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda12
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onPause$lambda$8((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda13
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onPause$lambda$9(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onPause$lambda$8(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onPause$lambda$9(AuthActivity authActivity) {
        authActivity.authWasStarted = false;
        return Unit.INSTANCE;
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(final Bundle outState) {
        Intrinsics.checkNotNullParameter(outState, "outState");
        super.onSaveInstanceState(outState);
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.onSaveInstanceState$lambda$10((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.onSaveInstanceState$lambda$11(outState, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onSaveInstanceState$lambda$10(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onSaveInstanceState$lambda$11(Bundle bundle, AuthActivity authActivity) {
        bundle.putBoolean(KEY_WAITING_FOR_AUTH_RESULT, authActivity.isWaitingForAuthResult);
        bundle.putParcelable(KEY_AUTH_INTENT, authActivity.authIntent);
        return Unit.INSTANCE;
    }

    @Override // android.app.Activity
    public void finish() {
        super.finish();
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return AuthActivity.finish$lambda$12((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return AuthActivity.finish$lambda$13(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit finish$lambda$12(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit finish$lambda$13(AuthActivity authActivity) {
        authActivity.setResult(-1);
        authActivity.overridePendingTransition(0, 0);
        return Unit.INSTANCE;
    }

    /* JADX INFO: compiled from: AuthActivity.kt */
    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001d\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0000¢\u0006\u0002\b\u000fJ\u001d\u0010\u0010\u001a\u00020\u000e2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0011\u001a\u00020\u0012H\u0000¢\u0006\u0002\b\u0013R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lcom/vk/id/internal/auth/AuthActivity$Companion;", "", "<init>", "()V", "PERFORMANCE_KEY_CUSTOM_TABS", "", AuthActivity.KEY_AUTH_INTENT, AuthActivity.KEY_START_AUTH, AuthActivity.KEY_WAITING_FOR_AUTH_RESULT, "startForAuth", "", "context", "Landroid/content/Context;", "authIntent", "Landroid/content/Intent;", "startForAuth$vkid_release", "createRedirectUriHandlingIntent", "responseUri", "Landroid/net/Uri;", "createRedirectUriHandlingIntent$vkid_release", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final void startForAuth$vkid_release(Context context, Intent authIntent) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(authIntent, "authIntent");
            Intent intentPutExtra = new Intent(context, (Class<?>) AuthActivity.class).putExtra(AuthActivity.KEY_AUTH_INTENT, authIntent).putExtra(AuthActivity.KEY_START_AUTH, true);
            Intrinsics.checkNotNullExpressionValue(intentPutExtra, "putExtra(...)");
            ContextUtils.INSTANCE.addNewTaskFlag(intentPutExtra, context);
            intentPutExtra.addFlags(65536);
            context.startActivity(intentPutExtra);
        }

        public final Intent createRedirectUriHandlingIntent$vkid_release(Context context, Uri responseUri) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(responseUri, "responseUri");
            Intent intent = new Intent(context, (Class<?>) AuthActivity.class);
            intent.setData(responseUri);
            intent.addFlags(0);
            return intent;
        }
    }

    private final boolean isIntentWithAuthRequest(Intent intent) {
        return intent != null && intent.getBooleanExtra(KEY_START_AUTH, false);
    }

    private final boolean isIntentWithAuthResult(Intent intent) {
        Uri data;
        return ((intent == null || (data = intent.getData()) == null) ? null : data.getScheme()) != null;
    }

    private final boolean handleStartAuth(Intent intent) {
        Intent intent2;
        if (Build.VERSION.SDK_INT >= 33) {
            intent2 = (Intent) intent.getParcelableExtra(KEY_AUTH_INTENT, Intent.class);
        } else {
            intent2 = (Intent) intent.getParcelableExtra(KEY_AUTH_INTENT);
        }
        this.authIntent = intent2;
        try {
            String packageName = CustomTabsClient.getPackageName(this, null);
            if (packageName != null) {
                Intent intent3 = this.authIntent;
                Intrinsics.checkNotNull(intent3);
                if (Intrinsics.areEqual(intent3.getPackage(), packageName)) {
                    VKID.INSTANCE.getInstance().getPerformanceTracker().startTracking(PERFORMANCE_KEY_CUSTOM_TABS);
                    AnonymousClass1 anonymousClass1 = new AnonymousClass1();
                    this.customTabsServiceConnection = anonymousClass1;
                    Intrinsics.checkNotNull(anonymousClass1);
                    CustomTabsClient.bindCustomTabsService(this, packageName, anonymousClass1);
                    return true;
                }
            }
            Intent intent4 = this.authIntent;
            Intrinsics.checkNotNull(intent4);
            launchAuth(intent4);
            return true;
        } catch (ActivityNotFoundException e) {
            this.logger.error("Can't start auth", e);
            return false;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.internal.auth.AuthActivity$handleStartAuth$1, reason: invalid class name */
    /* JADX INFO: compiled from: AuthActivity.kt */
    @Metadata(d1 = {"\u0000\u001f\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0016J\u0012\u0010\b\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005H\u0016¨\u0006\t"}, d2 = {"com/vk/id/internal/auth/AuthActivity$handleStartAuth$1", "Landroidx/browser/customtabs/CustomTabsServiceConnection;", "onCustomTabsServiceConnected", "", "name", "Landroid/content/ComponentName;", "client", "Landroidx/browser/customtabs/CustomTabsClient;", "onServiceDisconnected", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class AnonymousClass1 extends CustomTabsServiceConnection {
        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName name) {
        }

        AnonymousClass1() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit onCustomTabsServiceConnected$lambda$0(Throwable it) {
            Intrinsics.checkNotNullParameter(it, "it");
            return Unit.INSTANCE;
        }

        @Override // androidx.browser.customtabs.CustomTabsServiceConnection
        public void onCustomTabsServiceConnected(ComponentName name, final CustomTabsClient client) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(client, "client");
            CrashReporter crashReporter = VKID.INSTANCE.getInstance().getCrashReporter();
            Function1 function1 = new Function1() { // from class: com.vk.id.internal.auth.AuthActivity$handleStartAuth$1$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return AuthActivity.AnonymousClass1.onCustomTabsServiceConnected$lambda$0((Throwable) obj);
                }
            };
            final AuthActivity authActivity = AuthActivity.this;
            crashReporter.runReportingCrashes(function1, new Function0() { // from class: com.vk.id.internal.auth.AuthActivity$handleStartAuth$1$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return AuthActivity.AnonymousClass1.onCustomTabsServiceConnected$lambda$2(authActivity, client);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit onCustomTabsServiceConnected$lambda$2(AuthActivity authActivity, CustomTabsClient customTabsClient) {
            authActivity.customTabsSession = customTabsClient.newSession(authActivity.callback);
            customTabsClient.warmup(0L);
            Intent intent = new CustomTabsIntent.Builder(authActivity.customTabsSession).setShowTitle(true).addDefaultShareMenuItem().enableUrlBarHiding().build().intent;
            Intent intent2 = authActivity.authIntent;
            Intrinsics.checkNotNull(intent2);
            intent.setData(intent2.getData());
            Intrinsics.checkNotNullExpressionValue(intent, "apply(...)");
            authActivity.launchAuth(intent);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void launchAuth(Intent intent) {
        startActivity(intent, ActivityOptionsCompat.makeCustomAnimation(this, R.anim.fade_in, R.anim.fade_out).toBundle());
    }
}
