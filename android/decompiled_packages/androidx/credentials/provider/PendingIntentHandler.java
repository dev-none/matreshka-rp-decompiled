package androidx.credentials.provider;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.SigningInfo;
import android.credentials.CredentialOption;
import android.os.Bundle;
import android.service.credentials.CreateCredentialRequest;
import android.service.credentials.GetCredentialRequest;
import android.util.Log;
import androidx.credentials.CreateCredentialResponse;
import androidx.credentials.GetCredentialResponse;
import androidx.credentials.exceptions.CreateCredentialException;
import androidx.credentials.exceptions.GetCredentialException;
import androidx.credentials.provider.utils.BeginGetCredentialUtil;
import androidx.media3.common.util.Util$$ExternalSyntheticApiModelOutline0;
import io.sentry.SentryEvent;
import io.sentry.protocol.Response;
import java.util.List;
import java.util.Set;
import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PendingIntentHandler.kt */
/* JADX INFO: loaded from: classes3.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0007\u0018\u0000 \u00032\u00020\u0001:\u0001\u0003B\u0005¢\u0006\u0002\u0010\u0002¨\u0006\u0004"}, d2 = {"Landroidx/credentials/provider/PendingIntentHandler;", "", "()V", "Companion", "credentials_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class PendingIntentHandler {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String TAG = "PendingIntentHandler";

    @JvmStatic
    public static final BeginGetCredentialRequest retrieveBeginGetCredentialRequest(Intent intent) {
        return INSTANCE.retrieveBeginGetCredentialRequest(intent);
    }

    @JvmStatic
    public static final ProviderCreateCredentialRequest retrieveProviderCreateCredentialRequest(Intent intent) {
        return INSTANCE.retrieveProviderCreateCredentialRequest(intent);
    }

    @JvmStatic
    public static final ProviderGetCredentialRequest retrieveProviderGetCredentialRequest(Intent intent) {
        return INSTANCE.retrieveProviderGetCredentialRequest(intent);
    }

    @JvmStatic
    public static final void setBeginGetCredentialResponse(Intent intent, BeginGetCredentialResponse beginGetCredentialResponse) {
        INSTANCE.setBeginGetCredentialResponse(intent, beginGetCredentialResponse);
    }

    @JvmStatic
    public static final void setCreateCredentialException(Intent intent, CreateCredentialException createCredentialException) {
        INSTANCE.setCreateCredentialException(intent, createCredentialException);
    }

    @JvmStatic
    public static final void setCreateCredentialResponse(Intent intent, CreateCredentialResponse createCredentialResponse) {
        INSTANCE.setCreateCredentialResponse(intent, createCredentialResponse);
    }

    @JvmStatic
    public static final void setGetCredentialException(Intent intent, GetCredentialException getCredentialException) {
        INSTANCE.setGetCredentialException(intent, getCredentialException);
    }

    @JvmStatic
    public static final void setGetCredentialResponse(Intent intent, GetCredentialResponse getCredentialResponse) {
        INSTANCE.setGetCredentialResponse(intent, getCredentialResponse);
    }

    /* JADX INFO: compiled from: PendingIntentHandler.kt */
    @Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0012\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0007J\u0012\u0010\t\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0007\u001a\u00020\bH\u0007J\u0012\u0010\u000b\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0007\u001a\u00020\bH\u0007J\u0018\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u000f\u001a\u00020\u0010H\u0007J\u0018\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\u0013H\u0007J\u0018\u0010\u0014\u001a\u00020\u000e2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u000f\u001a\u00020\u0015H\u0007J\u0018\u0010\u0016\u001a\u00020\u000e2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\u0017H\u0007J\u0018\u0010\u0018\u001a\u00020\u000e2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u000f\u001a\u00020\u0019H\u0007R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Landroidx/credentials/provider/PendingIntentHandler$Companion;", "", "()V", "TAG", "", "retrieveBeginGetCredentialRequest", "Landroidx/credentials/provider/BeginGetCredentialRequest;", "intent", "Landroid/content/Intent;", "retrieveProviderCreateCredentialRequest", "Landroidx/credentials/provider/ProviderCreateCredentialRequest;", "retrieveProviderGetCredentialRequest", "Landroidx/credentials/provider/ProviderGetCredentialRequest;", "setBeginGetCredentialResponse", "", Response.TYPE, "Landroidx/credentials/provider/BeginGetCredentialResponse;", "setCreateCredentialException", SentryEvent.JsonKeys.EXCEPTION, "Landroidx/credentials/exceptions/CreateCredentialException;", "setCreateCredentialResponse", "Landroidx/credentials/CreateCredentialResponse;", "setGetCredentialException", "Landroidx/credentials/exceptions/GetCredentialException;", "setGetCredentialResponse", "Landroidx/credentials/GetCredentialResponse;", "credentials_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Multi-variable type inference failed */
        @JvmStatic
        public final ProviderCreateCredentialRequest retrieveProviderCreateCredentialRequest(Intent intent) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            CreateCredentialRequest createCredentialRequestM7252m = Action$Companion$$ExternalSyntheticApiModelOutline0.m7252m(intent.getParcelableExtra("android.service.credentials.extra.CREATE_CREDENTIAL_REQUEST", Action$Companion$$ExternalSyntheticApiModelOutline0.m$6()));
            if (createCredentialRequestM7252m == 0) {
                Log.i(PendingIntentHandler.TAG, "Request not found in pendingIntent");
                return (ProviderCreateCredentialRequest) createCredentialRequestM7252m;
            }
            androidx.credentials.CreateCredentialRequest.Companion companion = androidx.credentials.CreateCredentialRequest.INSTANCE;
            String type = createCredentialRequestM7252m.getType();
            Intrinsics.checkNotNullExpressionValue(type, "frameworkReq.type");
            Bundle data = createCredentialRequestM7252m.getData();
            Intrinsics.checkNotNullExpressionValue(data, "frameworkReq.data");
            Bundle data2 = createCredentialRequestM7252m.getData();
            Intrinsics.checkNotNullExpressionValue(data2, "frameworkReq.data");
            androidx.credentials.CreateCredentialRequest createCredentialRequestCreateFrom = companion.createFrom(type, data, data2, false, createCredentialRequestM7252m.getCallingAppInfo().getOrigin());
            if (createCredentialRequestCreateFrom == null) {
                return null;
            }
            String packageName = createCredentialRequestM7252m.getCallingAppInfo().getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "frameworkReq.callingAppInfo.packageName");
            SigningInfo signingInfo = createCredentialRequestM7252m.getCallingAppInfo().getSigningInfo();
            Intrinsics.checkNotNullExpressionValue(signingInfo, "frameworkReq.callingAppInfo.signingInfo");
            return new ProviderCreateCredentialRequest(createCredentialRequestCreateFrom, new CallingAppInfo(packageName, signingInfo, createCredentialRequestM7252m.getCallingAppInfo().getOrigin()));
        }

        @JvmStatic
        public final BeginGetCredentialRequest retrieveBeginGetCredentialRequest(Intent intent) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            android.service.credentials.BeginGetCredentialRequest beginGetCredentialRequestM7249m = Action$Companion$$ExternalSyntheticApiModelOutline0.m7249m(intent.getParcelableExtra("android.service.credentials.extra.BEGIN_GET_CREDENTIAL_REQUEST", Action$Companion$$ExternalSyntheticApiModelOutline0.m$7()));
            if (beginGetCredentialRequestM7249m != null) {
                return BeginGetCredentialUtil.INSTANCE.convertToJetpackRequest$credentials_release(beginGetCredentialRequestM7249m);
            }
            return null;
        }

        @JvmStatic
        public final void setCreateCredentialResponse(Intent intent, CreateCredentialResponse response) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Intrinsics.checkNotNullParameter(response, "response");
            Action$Companion$$ExternalSyntheticApiModelOutline0.m$11();
            intent.putExtra("android.service.credentials.extra.CREATE_CREDENTIAL_RESPONSE", Action$Companion$$ExternalSyntheticApiModelOutline0.m7239m(response.getData()));
        }

        @JvmStatic
        public final ProviderGetCredentialRequest retrieveProviderGetCredentialRequest(Intent intent) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            GetCredentialRequest getCredentialRequestM7253m = Action$Companion$$ExternalSyntheticApiModelOutline0.m7253m(intent.getParcelableExtra("android.service.credentials.extra.GET_CREDENTIAL_REQUEST", Action$Companion$$ExternalSyntheticApiModelOutline0.m$5()));
            if (getCredentialRequestM7253m == null) {
                Log.i(PendingIntentHandler.TAG, "Get request from framework is null");
                return null;
            }
            ProviderGetCredentialRequest.Companion companion = ProviderGetCredentialRequest.INSTANCE;
            Stream stream = getCredentialRequestM7253m.getCredentialOptions().stream();
            final PendingIntentHandler$Companion$retrieveProviderGetCredentialRequest$1 pendingIntentHandler$Companion$retrieveProviderGetCredentialRequest$1 = new Function1<CredentialOption, androidx.credentials.CredentialOption>() { // from class: androidx.credentials.provider.PendingIntentHandler$Companion$retrieveProviderGetCredentialRequest$1
                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ androidx.credentials.CredentialOption invoke(CredentialOption credentialOption) {
                    return invoke2(Util$$ExternalSyntheticApiModelOutline0.m((Object) credentialOption));
                }

                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final androidx.credentials.CredentialOption invoke2(CredentialOption credentialOption) {
                    androidx.credentials.CredentialOption.Companion companion2 = androidx.credentials.CredentialOption.INSTANCE;
                    String type = credentialOption.getType();
                    Intrinsics.checkNotNullExpressionValue(type, "option.type");
                    Bundle credentialRetrievalData = credentialOption.getCredentialRetrievalData();
                    Intrinsics.checkNotNullExpressionValue(credentialRetrievalData, "option.credentialRetrievalData");
                    Bundle candidateQueryData = credentialOption.getCandidateQueryData();
                    Intrinsics.checkNotNullExpressionValue(candidateQueryData, "option.candidateQueryData");
                    boolean zIsSystemProviderRequired = credentialOption.isSystemProviderRequired();
                    Set<ComponentName> allowedProviders = credentialOption.getAllowedProviders();
                    Intrinsics.checkNotNullExpressionValue(allowedProviders, "option.allowedProviders");
                    return companion2.createFrom(type, credentialRetrievalData, candidateQueryData, zIsSystemProviderRequired, allowedProviders);
                }
            };
            Object objCollect = stream.map(new Function() { // from class: androidx.credentials.provider.PendingIntentHandler$Companion$$ExternalSyntheticLambda20
                @Override // java.util.function.Function
                public final Object apply(Object obj) {
                    return PendingIntentHandler.Companion.retrieveProviderGetCredentialRequest$lambda$1(pendingIntentHandler$Companion$retrieveProviderGetCredentialRequest$1, obj);
                }
            }).collect(Collectors.toList());
            Intrinsics.checkNotNullExpressionValue(objCollect, "frameworkReq.credentialO…lect(Collectors.toList())");
            String packageName = getCredentialRequestM7253m.getCallingAppInfo().getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "frameworkReq.callingAppInfo.packageName");
            SigningInfo signingInfo = getCredentialRequestM7253m.getCallingAppInfo().getSigningInfo();
            Intrinsics.checkNotNullExpressionValue(signingInfo, "frameworkReq.callingAppInfo.signingInfo");
            return companion.createFrom$credentials_release((List) objCollect, new CallingAppInfo(packageName, signingInfo, getCredentialRequestM7253m.getCallingAppInfo().getOrigin()));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final androidx.credentials.CredentialOption retrieveProviderGetCredentialRequest$lambda$1(Function1 tmp0, Object obj) {
            Intrinsics.checkNotNullParameter(tmp0, "$tmp0");
            return (androidx.credentials.CredentialOption) tmp0.invoke(obj);
        }

        @JvmStatic
        public final void setGetCredentialResponse(Intent intent, GetCredentialResponse response) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Intrinsics.checkNotNullParameter(response, "response");
            Action$Companion$$ExternalSyntheticApiModelOutline0.m$9();
            Action$Companion$$ExternalSyntheticApiModelOutline0.m$10();
            intent.putExtra("android.service.credentials.extra.GET_CREDENTIAL_RESPONSE", Action$Companion$$ExternalSyntheticApiModelOutline0.m(Action$Companion$$ExternalSyntheticApiModelOutline0.m(response.getCredential().getType(), response.getCredential().getData())));
        }

        @JvmStatic
        public final void setBeginGetCredentialResponse(Intent intent, BeginGetCredentialResponse response) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Intrinsics.checkNotNullParameter(response, "response");
            intent.putExtra("android.service.credentials.extra.BEGIN_GET_CREDENTIAL_RESPONSE", BeginGetCredentialUtil.INSTANCE.convertToFrameworkResponse(response));
        }

        @JvmStatic
        public final void setGetCredentialException(Intent intent, GetCredentialException exception) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Intrinsics.checkNotNullParameter(exception, "exception");
            Action$Companion$$ExternalSyntheticApiModelOutline0.m7270m$7();
            intent.putExtra("android.service.credentials.extra.GET_CREDENTIAL_EXCEPTION", Action$Companion$$ExternalSyntheticApiModelOutline0.m7244m(exception.getType(), exception.getMessage()));
        }

        @JvmStatic
        public final void setCreateCredentialException(Intent intent, CreateCredentialException exception) {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Intrinsics.checkNotNullParameter(exception, "exception");
            Action$Companion$$ExternalSyntheticApiModelOutline0.m7269m$6();
            intent.putExtra("android.service.credentials.extra.CREATE_CREDENTIAL_EXCEPTION", Action$Companion$$ExternalSyntheticApiModelOutline0.m7238m(exception.getType(), exception.getMessage()));
        }
    }
}
