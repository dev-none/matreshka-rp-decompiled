package com.google.firebase.messaging;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.google.android.gms.cloudmessaging.CloudMessaging;
import com.google.android.gms.cloudmessaging.CloudMessagingClient;
import com.google.android.gms.cloudmessaging.RegisterRequest;
import com.google.android.gms.cloudmessaging.UnregisterRequest;
import com.google.android.gms.tasks.Continuation;
import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.FirebaseApp;
import com.google.firebase.installations.FirebaseInstallationsApi;
import com.google.firebase.installations.InstallationTokenResult;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes4.dex */
class GmsRegistrationClient {
    private static final int GMS_VERSION_Y2026W12 = 261200000;
    static final String MANIFEST_METADATA_FIREBASE_MESSAGING_INSTALLATION_ID_ENABLED = "firebase_messaging_installation_id_enabled";
    private final FirebaseApp app;
    private final CloudMessagingClient client;
    private final FirebaseInstallationsApi firebaseInstallations;
    private final GmsRpc gmsRpc;
    private final Metadata metadata;

    GmsRegistrationClient(Context context, FirebaseApp firebaseApp, FirebaseInstallationsApi firebaseInstallationsApi, GmsRpc gmsRpc, Metadata metadata) {
        this(firebaseApp, firebaseInstallationsApi, gmsRpc, CloudMessaging.getClient(context), metadata);
    }

    GmsRegistrationClient(FirebaseApp firebaseApp, FirebaseInstallationsApi firebaseInstallationsApi, GmsRpc gmsRpc, CloudMessagingClient cloudMessagingClient, Metadata metadata) {
        this.client = cloudMessagingClient;
        this.app = firebaseApp;
        this.firebaseInstallations = firebaseInstallationsApi;
        this.gmsRpc = gmsRpc;
        this.metadata = metadata;
    }

    private boolean haveV1RegistrationSupport() {
        return this.metadata.getGmsVersionCode() >= GMS_VERSION_Y2026W12;
    }

    public boolean isV1RegistrationEnabled() {
        Context applicationContext = this.app.getApplicationContext();
        try {
            PackageManager packageManager = applicationContext.getPackageManager();
            if (packageManager == null) {
                return false;
            }
            ApplicationInfo applicationInfo = packageManager.getApplicationInfo(applicationContext.getPackageName(), 128);
            if (applicationInfo.metaData == null || !applicationInfo.metaData.containsKey(MANIFEST_METADATA_FIREBASE_MESSAGING_INSTALLATION_ID_ENABLED)) {
                return false;
            }
            return applicationInfo.metaData.getBoolean(MANIFEST_METADATA_FIREBASE_MESSAGING_INSTALLATION_ID_ENABLED);
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    public Task<String> register() {
        boolean zIsV1RegistrationEnabled = isV1RegistrationEnabled();
        if (!zIsV1RegistrationEnabled || !haveV1RegistrationSupport()) {
            return this.gmsRpc.getToken(zIsV1RegistrationEnabled);
        }
        final ExecutorService executorServiceNewNetworkIOExecutor = FcmExecutors.newNetworkIOExecutor();
        return this.firebaseInstallations.getId().continueWithTask(executorServiceNewNetworkIOExecutor, new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda0
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task) {
                return this.f$0.m8238x90f9c833(executorServiceNewNetworkIOExecutor, task);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$register$1$com-google-firebase-messaging-GmsRegistrationClient, reason: not valid java name */
    /* synthetic */ Task m8238x90f9c833(ExecutorService executorService, Task task) throws Exception {
        if (!task.isSuccessful()) {
            return Tasks.forException(getException(task));
        }
        final String str = (String) task.getResult();
        return registerOverV1Async(str).continueWith(executorService, new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda4
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task2) {
                return GmsRegistrationClient.lambda$register$0(str, task2);
            }
        });
    }

    static /* synthetic */ String lambda$register$0(String str, Task task) throws Exception {
        if (!task.isSuccessful()) {
            throw new ExecutionException(task.getException());
        }
        String str2 = (String) task.getResult();
        if (TextUtils.isEmpty(str2) || !str2.endsWith(str)) {
            throw new ExecutionException(new IllegalArgumentException("Unexpected Error: FID NOT matching!"));
        }
        return str;
    }

    private Exception getException(Task<?> task) {
        if (task.getException() != null) {
            return task.getException();
        }
        return new ExecutionException(new RuntimeException("Unexpected Error"));
    }

    private Task<String> registerOverV1Async(final String str) {
        return this.firebaseInstallations.getToken(false).continueWithTask(FcmExecutors.newNetworkIOExecutor(), new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda5
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task) {
                return this.f$0.m8239xab147161(str, task);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$registerOverV1Async$2$com-google-firebase-messaging-GmsRegistrationClient, reason: not valid java name */
    /* synthetic */ Task m8239xab147161(String str, Task task) throws Exception {
        if (!task.isSuccessful()) {
            return Tasks.forException(getException(task));
        }
        String token = ((InstallationTokenResult) task.getResult()).getToken();
        String apiKey = this.app.getOptions().getApiKey();
        return this.client.register(new RegisterRequest(Metadata.getDefaultSenderId(this.app), this.app.getOptions().getApplicationId(), apiKey, str, token, "22.0.1"));
    }

    public Task<?> unregister() {
        boolean zIsV1RegistrationEnabled = isV1RegistrationEnabled();
        if (!zIsV1RegistrationEnabled || !haveV1RegistrationSupport()) {
            return this.gmsRpc.deleteToken(zIsV1RegistrationEnabled);
        }
        return unregisterOverV1Async().continueWithTask(FcmExecutors.newNetworkIOExecutor(), new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda2
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task) {
                return this.f$0.m8240x4fd898ce(task);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$unregister$3$com-google-firebase-messaging-GmsRegistrationClient, reason: not valid java name */
    /* synthetic */ Task m8240x4fd898ce(Task task) throws Exception {
        if (!task.isSuccessful()) {
            return Tasks.forException(getException(task));
        }
        return Tasks.forResult(null);
    }

    private Task<Void> unregisterOverV1Async() {
        final ExecutorService executorServiceNewNetworkIOExecutor = FcmExecutors.newNetworkIOExecutor();
        return this.firebaseInstallations.getId().continueWithTask(executorServiceNewNetworkIOExecutor, new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda1
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task) {
                return this.f$0.m8242x3f50ceab(executorServiceNewNetworkIOExecutor, task);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$unregisterOverV1Async$5$com-google-firebase-messaging-GmsRegistrationClient, reason: not valid java name */
    /* synthetic */ Task m8242x3f50ceab(ExecutorService executorService, Task task) throws Exception {
        if (!task.isSuccessful()) {
            return Tasks.forException(getException(task));
        }
        final String str = (String) task.getResult();
        return this.firebaseInstallations.getToken(false).continueWithTask(executorService, new Continuation() { // from class: com.google.firebase.messaging.GmsRegistrationClient$$ExternalSyntheticLambda3
            @Override // com.google.android.gms.tasks.Continuation
            public final Object then(Task task2) {
                return this.f$0.m8241xb2161d2a(str, task2);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$unregisterOverV1Async$4$com-google-firebase-messaging-GmsRegistrationClient, reason: not valid java name */
    /* synthetic */ Task m8241xb2161d2a(String str, Task task) throws Exception {
        if (!task.isSuccessful()) {
            return Tasks.forException(getException(task));
        }
        String token = ((InstallationTokenResult) task.getResult()).getToken();
        return this.client.unregister(new UnregisterRequest(Metadata.getDefaultSenderId(this.app), this.app.getOptions().getApiKey(), str, token));
    }
}
