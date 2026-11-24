package com.vk.id.internal.auth;

import android.content.ComponentName;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.internal.auth.app.AppAuthProvider;
import com.vk.id.internal.auth.app.SilentAuthProviderData;
import com.vk.id.internal.auth.app.SilentAuthServicesProvider;
import com.vk.id.internal.auth.web.WebAuthProvider;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import io.sentry.protocol.Message;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthProvidersChooserDefault.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0016\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0096@¢\u0006\u0002\u0010\u0010R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/vk/id/internal/auth/AuthProvidersChooserDefault;", "Lcom/vk/id/internal/auth/AuthProvidersChooser;", "packageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "silentAuthServicesProvider", "Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "<init>", "(Lcom/vk/id/internal/context/InternalVKIDPackageManager;Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;Lcom/vk/id/internal/context/InternalVKIDActivityStarter;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "chooseBest", "Lcom/vk/id/internal/auth/VKIDAuthProvider;", Message.JsonKeys.PARAMS, "Lcom/vk/id/auth/VKIDAuthParams;", "(Lcom/vk/id/auth/VKIDAuthParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthProvidersChooserDefault implements AuthProvidersChooser {
    public static final int $stable = 8;
    private final InternalVKIDActivityStarter activityStarter;
    private final InternalVKIDLogger logger;
    private final InternalVKIDPackageManager packageManager;
    private final SilentAuthServicesProvider silentAuthServicesProvider;

    /* JADX INFO: renamed from: com.vk.id.internal.auth.AuthProvidersChooserDefault$chooseBest$1, reason: invalid class name */
    /* JADX INFO: compiled from: AuthProvidersChooserDefault.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.auth.AuthProvidersChooserDefault", f = "AuthProvidersChooserDefault.kt", i = {0}, l = {27}, m = "chooseBest", n = {"this"}, s = {"L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AuthProvidersChooserDefault.this.chooseBest(null, this);
        }
    }

    public AuthProvidersChooserDefault(InternalVKIDPackageManager packageManager, SilentAuthServicesProvider silentAuthServicesProvider, InternalVKIDActivityStarter activityStarter) {
        Intrinsics.checkNotNullParameter(packageManager, "packageManager");
        Intrinsics.checkNotNullParameter(silentAuthServicesProvider, "silentAuthServicesProvider");
        Intrinsics.checkNotNullParameter(activityStarter, "activityStarter");
        this.packageManager = packageManager;
        this.silentAuthServicesProvider = silentAuthServicesProvider;
        this.activityStarter = activityStarter;
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("AuthProvidersChooserDefault", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("AuthProvidersChooserDefault");
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.internal.auth.AuthProvidersChooser
    public Object chooseBest(VKIDAuthParams vKIDAuthParams, Continuation<? super VKIDAuthProvider> continuation) {
        AnonymousClass1 anonymousClass1;
        AuthProvidersChooserDefault authProvidersChooserDefault;
        Object next;
        ComponentName componentName;
        String packageName;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object silentAuthServices = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(silentAuthServices);
            if (!vKIDAuthParams.getUseOAuthProviderIfPossible() || vKIDAuthParams.getOAuth() != null) {
                VKIDAnalytics.INSTANCE.trackEvent("no_auth_provider", new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null));
                return new WebAuthProvider(this.packageManager, this.activityStarter);
            }
            SilentAuthServicesProvider silentAuthServicesProvider = this.silentAuthServicesProvider;
            anonymousClass1.L$0 = this;
            anonymousClass1.label = 1;
            silentAuthServices = silentAuthServicesProvider.getSilentAuthServices(anonymousClass1);
            if (silentAuthServices == coroutine_suspended) {
                return coroutine_suspended;
            }
            authProvidersChooserDefault = this;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            authProvidersChooserDefault = (AuthProvidersChooserDefault) anonymousClass1.L$0;
            ResultKt.throwOnFailure(silentAuthServices);
        }
        Iterator it = ((Iterable) silentAuthServices).iterator();
        AppAuthProvider appAuthProvider = null;
        if (it.hasNext()) {
            next = it.next();
            if (it.hasNext()) {
                int weight = ((SilentAuthProviderData) next).getWeight();
                do {
                    Object next2 = it.next();
                    int weight2 = ((SilentAuthProviderData) next2).getWeight();
                    if (weight < weight2) {
                        next = next2;
                        weight = weight2;
                    }
                } while (it.hasNext());
            }
        } else {
            next = null;
        }
        SilentAuthProviderData silentAuthProviderData = (SilentAuthProviderData) next;
        if (silentAuthProviderData != null && (componentName = silentAuthProviderData.getComponentName()) != null && (packageName = componentName.getPackageName()) != null) {
            authProvidersChooserDefault.logger.debug("Silent auth provider found: " + packageName);
            appAuthProvider = new AppAuthProvider(authProvidersChooserDefault.activityStarter, packageName);
        }
        if (appAuthProvider == null) {
            VKIDAnalytics.INSTANCE.trackEvent("no_auth_provider", new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null));
            return new WebAuthProvider(authProvidersChooserDefault.packageManager, authProvidersChooserDefault.activityStarter);
        }
        VKIDAnalytics.INSTANCE.trackEvent("auth_provider_used", new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null));
        return appAuthProvider;
    }
}
