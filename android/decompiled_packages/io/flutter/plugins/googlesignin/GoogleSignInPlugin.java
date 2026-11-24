package io.flutter.plugins.googlesignin;

import android.accounts.Account;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.google.android.gms.auth.GoogleAuthUtil;
import com.google.android.gms.auth.UserRecoverableAuthException;
import com.google.android.gms.auth.api.signin.GoogleSignIn;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.auth.api.signin.GoogleSignInClient;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.common.api.ApiException;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.RuntimeExecutionException;
import com.google.android.gms.tasks.Task;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.PluginRegistry;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public class GoogleSignInPlugin implements FlutterPlugin, ActivityAware {
    private ActivityPluginBinding activityPluginBinding;
    private Delegate delegate;
    private BinaryMessenger messenger;

    public void initInstance(BinaryMessenger binaryMessenger, Context context, GoogleSignInWrapper googleSignInWrapper) {
        this.messenger = binaryMessenger;
        Delegate delegate = new Delegate(context, googleSignInWrapper);
        this.delegate = delegate;
        Messages.GoogleSignInApi.setUp(binaryMessenger, delegate);
    }

    private void dispose() {
        this.delegate = null;
        BinaryMessenger binaryMessenger = this.messenger;
        if (binaryMessenger != null) {
            Messages.GoogleSignInApi.setUp(binaryMessenger, null);
            this.messenger = null;
        }
    }

    private void attachToActivity(ActivityPluginBinding activityPluginBinding) {
        this.activityPluginBinding = activityPluginBinding;
        activityPluginBinding.addActivityResultListener(this.delegate);
        this.delegate.setActivity(activityPluginBinding.getActivity());
    }

    private void disposeActivity() {
        this.activityPluginBinding.removeActivityResultListener(this.delegate);
        this.delegate.setActivity(null);
        this.activityPluginBinding = null;
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        initInstance(flutterPluginBinding.getBinaryMessenger(), flutterPluginBinding.getApplicationContext(), new GoogleSignInWrapper());
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        dispose();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding activityPluginBinding) {
        attachToActivity(activityPluginBinding);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
        disposeActivity();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding activityPluginBinding) {
        attachToActivity(activityPluginBinding);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
        disposeActivity();
    }

    public static class Delegate implements PluginRegistry.ActivityResultListener, Messages.GoogleSignInApi {
        private static final String ERROR_FAILURE_TO_RECOVER_AUTH = "failed_to_recover_auth";
        private static final String ERROR_REASON_EXCEPTION = "exception";
        private static final String ERROR_REASON_NETWORK_ERROR = "network_error";
        private static final String ERROR_REASON_SIGN_IN_CANCELED = "sign_in_canceled";
        private static final String ERROR_REASON_SIGN_IN_FAILED = "sign_in_failed";
        private static final String ERROR_REASON_SIGN_IN_REQUIRED = "sign_in_required";
        private static final String ERROR_REASON_STATUS = "status";
        private static final String ERROR_USER_RECOVERABLE_AUTH = "user_recoverable_auth";
        private static final int REQUEST_CODE_RECOVER_AUTH = 53294;
        static final int REQUEST_CODE_REQUEST_SCOPE = 53295;
        private static final int REQUEST_CODE_SIGNIN = 53293;
        private Activity activity;
        private final Context context;
        private final GoogleSignInWrapper googleSignInWrapper;
        private PendingOperation pendingOperation;
        private List<String> requestedScopes;
        private GoogleSignInClient signInClient;

        public Delegate(Context context, GoogleSignInWrapper googleSignInWrapper) {
            this.context = context;
            this.googleSignInWrapper = googleSignInWrapper;
        }

        public void setActivity(Activity activity) {
            this.activity = activity;
        }

        public Activity getActivity() {
            return this.activity;
        }

        private void checkAndSetPendingOperation(String str, Messages.Result<Messages.UserData> result, Messages.VoidResult voidResult, Messages.Result<Boolean> result2, Messages.Result<String> result3, Object obj) {
            if (this.pendingOperation != null) {
                throw new IllegalStateException("Concurrent operations detected: " + this.pendingOperation.method + ", " + str);
            }
            this.pendingOperation = new PendingOperation(str, result, voidResult, result2, result3, obj);
        }

        private void checkAndSetPendingSignInOperation(String str, Messages.Result<Messages.UserData> result) {
            checkAndSetPendingOperation(str, result, null, null, null, null);
        }

        private void checkAndSetPendingVoidOperation(String str, Messages.VoidResult voidResult) {
            checkAndSetPendingOperation(str, null, voidResult, null, null, null);
        }

        private void checkAndSetPendingBoolOperation(String str, Messages.Result<Boolean> result) {
            checkAndSetPendingOperation(str, null, null, result, null, null);
        }

        private void checkAndSetPendingStringOperation(String str, Messages.Result<String> result, Object obj) {
            checkAndSetPendingOperation(str, null, null, null, result, obj);
        }

        private void checkAndSetPendingAccessTokenOperation(String str, Messages.Result<String> result, Object obj) {
            checkAndSetPendingStringOperation(str, result, obj);
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void init(Messages.InitParams initParams) {
            GoogleSignInOptions.Builder builder;
            int identifier;
            try {
                int i = AnonymousClass1.$SwitchMap$io$flutter$plugins$googlesignin$Messages$SignInType[initParams.getSignInType().ordinal()];
                if (i == 1) {
                    builder = new GoogleSignInOptions.Builder(GoogleSignInOptions.DEFAULT_GAMES_SIGN_IN);
                } else if (i == 2) {
                    builder = new GoogleSignInOptions.Builder(GoogleSignInOptions.DEFAULT_SIGN_IN).requestEmail();
                } else {
                    throw new IllegalStateException("Unknown signInOption");
                }
                String serverClientId = initParams.getServerClientId();
                if (!isNullOrEmpty(initParams.getClientId()) && isNullOrEmpty(serverClientId)) {
                    Log.w("google_sign_in", "clientId is not supported on Android and is interpreted as serverClientId. Use serverClientId instead to suppress this warning.");
                    serverClientId = initParams.getClientId();
                }
                if (isNullOrEmpty(serverClientId) && (identifier = this.context.getResources().getIdentifier("default_web_client_id", "string", this.context.getPackageName())) != 0) {
                    serverClientId = this.context.getString(identifier);
                }
                if (!isNullOrEmpty(serverClientId)) {
                    builder.requestIdToken(serverClientId);
                    builder.requestServerAuthCode(serverClientId, initParams.getForceCodeForRefreshToken().booleanValue());
                }
                List<String> scopes = initParams.getScopes();
                this.requestedScopes = scopes;
                Iterator<String> it = scopes.iterator();
                while (it.hasNext()) {
                    builder.requestScopes(new Scope(it.next()), new Scope[0]);
                }
                if (!isNullOrEmpty(initParams.getHostedDomain())) {
                    builder.setHostedDomain(initParams.getHostedDomain());
                }
                String forceAccountName = initParams.getForceAccountName();
                if (!isNullOrEmpty(forceAccountName)) {
                    builder.setAccountName(forceAccountName);
                }
                this.signInClient = this.googleSignInWrapper.getClient(this.context, builder.build());
            } catch (Exception e) {
                throw new Messages.FlutterError("exception", e.getMessage(), null);
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void signInSilently(Messages.Result<Messages.UserData> result) {
            checkAndSetPendingSignInOperation("signInSilently", result);
            Task<GoogleSignInAccount> taskSilentSignIn = this.signInClient.silentSignIn();
            if (taskSilentSignIn.isComplete()) {
                onSignInResult(taskSilentSignIn);
            } else {
                taskSilentSignIn.addOnCompleteListener(new OnCompleteListener() { // from class: io.flutter.plugins.googlesignin.GoogleSignInPlugin$Delegate$$ExternalSyntheticLambda3
                    @Override // com.google.android.gms.tasks.OnCompleteListener
                    public final void onComplete(Task task) {
                        this.f$0.onSignInResult(task);
                    }
                });
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void signIn(Messages.Result<Messages.UserData> result) {
            if (getActivity() == null) {
                throw new IllegalStateException("signIn needs a foreground activity");
            }
            checkAndSetPendingSignInOperation("signIn", result);
            getActivity().startActivityForResult(this.signInClient.getSignInIntent(), REQUEST_CODE_SIGNIN);
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void signOut(Messages.VoidResult voidResult) {
            checkAndSetPendingVoidOperation("signOut", voidResult);
            this.signInClient.signOut().addOnCompleteListener(new OnCompleteListener() { // from class: io.flutter.plugins.googlesignin.GoogleSignInPlugin$Delegate$$ExternalSyntheticLambda1
                @Override // com.google.android.gms.tasks.OnCompleteListener
                public final void onComplete(Task task) {
                    this.f$0.m9591xaad89c8a(task);
                }
            });
        }

        /* JADX INFO: renamed from: lambda$signOut$0$io-flutter-plugins-googlesignin-GoogleSignInPlugin$Delegate, reason: not valid java name */
        /* synthetic */ void m9591xaad89c8a(Task task) {
            if (task.isSuccessful()) {
                finishWithSuccess();
            } else {
                finishWithError("status", "Failed to signout.");
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void disconnect(Messages.VoidResult voidResult) {
            checkAndSetPendingVoidOperation("disconnect", voidResult);
            this.signInClient.revokeAccess().addOnCompleteListener(new OnCompleteListener() { // from class: io.flutter.plugins.googlesignin.GoogleSignInPlugin$Delegate$$ExternalSyntheticLambda2
                @Override // com.google.android.gms.tasks.OnCompleteListener
                public final void onComplete(Task task) {
                    this.f$0.m9589xd9f15f70(task);
                }
            });
        }

        /* JADX INFO: renamed from: lambda$disconnect$1$io-flutter-plugins-googlesignin-GoogleSignInPlugin$Delegate, reason: not valid java name */
        /* synthetic */ void m9589xd9f15f70(Task task) {
            if (task.isSuccessful()) {
                finishWithSuccess();
            } else {
                finishWithError("status", "Failed to disconnect.");
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public Boolean isSignedIn() {
            return Boolean.valueOf(GoogleSignIn.getLastSignedInAccount(this.context) != null);
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void requestScopes(List<String> list, Messages.Result<Boolean> result) {
            checkAndSetPendingBoolOperation("requestScopes", result);
            GoogleSignInAccount lastSignedInAccount = this.googleSignInWrapper.getLastSignedInAccount(this.context);
            if (lastSignedInAccount == null) {
                finishWithError(ERROR_REASON_SIGN_IN_REQUIRED, "No account to grant scopes.");
                return;
            }
            ArrayList arrayList = new ArrayList();
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                Scope scope = new Scope(it.next());
                if (!this.googleSignInWrapper.hasPermissions(lastSignedInAccount, scope)) {
                    arrayList.add(scope);
                }
            }
            if (arrayList.isEmpty()) {
                finishWithBoolean(true);
            } else {
                this.googleSignInWrapper.requestPermissions(getActivity(), REQUEST_CODE_REQUEST_SCOPE, lastSignedInAccount, (Scope[]) arrayList.toArray(new Scope[0]));
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void onSignInResult(Task<GoogleSignInAccount> task) {
            try {
                onSignInAccount(task.getResult(ApiException.class));
            } catch (ApiException e) {
                finishWithError(errorCodeForStatus(e.getStatusCode()), e.toString());
            } catch (RuntimeExecutionException e2) {
                finishWithError("exception", e2.toString());
            }
        }

        private void onSignInAccount(GoogleSignInAccount googleSignInAccount) {
            Messages.UserData.Builder displayName = new Messages.UserData.Builder().setEmail(googleSignInAccount.getEmail()).setId(googleSignInAccount.getId()).setIdToken(googleSignInAccount.getIdToken()).setServerAuthCode(googleSignInAccount.getServerAuthCode()).setDisplayName(googleSignInAccount.getDisplayName());
            if (googleSignInAccount.getPhotoUrl() != null) {
                displayName.setPhotoUrl(googleSignInAccount.getPhotoUrl().toString());
            }
            finishWithUserData(displayName.build());
        }

        private String errorCodeForStatus(int i) {
            if (i == 4) {
                return ERROR_REASON_SIGN_IN_REQUIRED;
            }
            if (i == 7) {
                return ERROR_REASON_NETWORK_ERROR;
            }
            if (i == 12501) {
                return ERROR_REASON_SIGN_IN_CANCELED;
            }
            return ERROR_REASON_SIGN_IN_FAILED;
        }

        private void finishWithSuccess() {
            ((Messages.VoidResult) Objects.requireNonNull(this.pendingOperation.voidResult)).success();
            this.pendingOperation = null;
        }

        private void finishWithBoolean(Boolean bool) {
            ((Messages.Result) Objects.requireNonNull(this.pendingOperation.boolResult)).success(bool);
            this.pendingOperation = null;
        }

        private void finishWithUserData(Messages.UserData userData) {
            ((Messages.Result) Objects.requireNonNull(this.pendingOperation.userDataResult)).success(userData);
            this.pendingOperation = null;
        }

        private void finishWithError(String str, String str2) {
            Object obj;
            if (this.pendingOperation.voidResult != null) {
                ((Messages.VoidResult) Objects.requireNonNull(this.pendingOperation.voidResult)).error(new Messages.FlutterError(str, str2, null));
            } else {
                if (this.pendingOperation.userDataResult != null) {
                    obj = this.pendingOperation.userDataResult;
                } else if (this.pendingOperation.boolResult != null) {
                    obj = this.pendingOperation.boolResult;
                } else {
                    obj = this.pendingOperation.stringResult;
                }
                ((Messages.Result) Objects.requireNonNull(obj)).error(new Messages.FlutterError(str, str2, null));
            }
            this.pendingOperation = null;
        }

        private static boolean isNullOrEmpty(String str) {
            return str == null || str.isEmpty();
        }

        private static class PendingOperation {
            static final /* synthetic */ boolean $assertionsDisabled = false;
            final Messages.Result<Boolean> boolResult;
            final Object data;
            final String method;
            final Messages.Result<String> stringResult;
            final Messages.Result<Messages.UserData> userDataResult;
            final Messages.VoidResult voidResult;

            PendingOperation(String str, Messages.Result<Messages.UserData> result, Messages.VoidResult voidResult, Messages.Result<Boolean> result2, Messages.Result<String> result3, Object obj) {
                this.method = str;
                this.userDataResult = result;
                this.voidResult = voidResult;
                this.boolResult = result2;
                this.stringResult = result3;
                this.data = obj;
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void clearAuthCache(String str) {
            try {
                GoogleAuthUtil.clearToken(this.context, str);
            } catch (Exception e) {
                throw new Messages.FlutterError("exception", e.getMessage(), null);
            }
        }

        @Override // io.flutter.plugins.googlesignin.Messages.GoogleSignInApi
        public void getAccessToken(final String str, final Boolean bool, final Messages.Result<String> result) {
            try {
                result.success(GoogleAuthUtil.getToken(this.context, new Account(str, "com.google"), "oauth2:" + String.join(" ", this.requestedScopes)));
            } catch (UserRecoverableAuthException e) {
                new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.flutter.plugins.googlesignin.GoogleSignInPlugin$Delegate$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.m9590xcd10af54(bool, result, e, str);
                    }
                });
            } catch (Exception e2) {
                result.error(new Messages.FlutterError("exception", e2.getMessage(), null));
            }
        }

        /* JADX INFO: renamed from: lambda$getAccessToken$2$io-flutter-plugins-googlesignin-GoogleSignInPlugin$Delegate, reason: not valid java name */
        /* synthetic */ void m9590xcd10af54(Boolean bool, Messages.Result result, UserRecoverableAuthException userRecoverableAuthException, String str) {
            if (bool.booleanValue() && this.pendingOperation == null) {
                Activity activity = getActivity();
                if (activity == null) {
                    result.error(new Messages.FlutterError(ERROR_USER_RECOVERABLE_AUTH, "Cannot recover auth because app is not in foreground. " + userRecoverableAuthException.getLocalizedMessage(), null));
                    return;
                } else {
                    checkAndSetPendingAccessTokenOperation("getTokens", result, str);
                    activity.startActivityForResult(userRecoverableAuthException.getIntent(), REQUEST_CODE_RECOVER_AUTH);
                    return;
                }
            }
            result.error(new Messages.FlutterError(ERROR_USER_RECOVERABLE_AUTH, userRecoverableAuthException.getLocalizedMessage(), null));
        }

        @Override // io.flutter.plugin.common.PluginRegistry.ActivityResultListener
        public boolean onActivityResult(int i, int i2, Intent intent) {
            PendingOperation pendingOperation = this.pendingOperation;
            if (pendingOperation == null) {
                return false;
            }
            switch (i) {
                case REQUEST_CODE_SIGNIN /* 53293 */:
                    if (intent != null) {
                        onSignInResult(GoogleSignIn.getSignedInAccountFromIntent(intent));
                    } else {
                        finishWithError(ERROR_REASON_SIGN_IN_FAILED, "Signin failed");
                    }
                    return true;
                case REQUEST_CODE_RECOVER_AUTH /* 53294 */:
                    if (i2 == -1) {
                        Messages.Result<String> result = (Messages.Result) Objects.requireNonNull(pendingOperation.stringResult);
                        String str = (String) Objects.requireNonNull(this.pendingOperation.data);
                        this.pendingOperation = null;
                        getAccessToken(str, false, result);
                    } else {
                        finishWithError(ERROR_FAILURE_TO_RECOVER_AUTH, "Failed attempt to recover authentication");
                    }
                    return true;
                case REQUEST_CODE_REQUEST_SCOPE /* 53295 */:
                    finishWithBoolean(Boolean.valueOf(i2 == -1));
                    return true;
                default:
                    return false;
            }
        }
    }

    /* JADX INFO: renamed from: io.flutter.plugins.googlesignin.GoogleSignInPlugin$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$io$flutter$plugins$googlesignin$Messages$SignInType;

        static {
            int[] iArr = new int[Messages.SignInType.values().length];
            $SwitchMap$io$flutter$plugins$googlesignin$Messages$SignInType = iArr;
            try {
                iArr[Messages.SignInType.GAMES.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$io$flutter$plugins$googlesignin$Messages$SignInType[Messages.SignInType.STANDARD.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }
}
