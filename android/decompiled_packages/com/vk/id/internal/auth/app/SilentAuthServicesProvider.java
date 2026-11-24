package com.vk.id.internal.auth.app;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import com.vk.id.internal.auth.AuthOptionsKt;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.collections.CollectionsKt;
import kotlin.comparisons.ComparisonsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlin.sequences.SequencesKt;

/* JADX INFO: compiled from: SilentAuthServicesProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u0000 \u00192\u00020\u0001:\u0001\u0019B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0014\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000bH\u0086@¢\u0006\u0002\u0010\rJ\u0018\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00100\u000f*\b\u0012\u0004\u0012\u00020\u00100\u000fH\u0002J\f\u0010\u0011\u001a\u00020\u0012*\u00020\u0010H\u0002J\u001c\u0010\u0013\u001a\u0004\u0018\u00010\u0010*\u00020\u00142\f\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u000bH\u0002J\u000e\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u000bH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;", "", "packageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "currentPackageName", "", "cache", "Lcom/vk/id/internal/auth/app/TrustedProvidersCache;", "<init>", "(Lcom/vk/id/internal/context/InternalVKIDPackageManager;Ljava/lang/String;Lcom/vk/id/internal/auth/app/TrustedProvidersCache;)V", "getSilentAuthServices", "", "Lcom/vk/id/internal/auth/app/SilentAuthProviderData;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "excludeCurrentApp", "Lkotlin/sequences/Sequence;", "Lcom/vk/id/internal/auth/app/VkAuthProviderInfo;", "isAllowedToOpenWebAuth", "", "mapToProviderInfo", "Landroid/content/pm/ServiceInfo;", "trustedProviders", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "getAppsWithSilentAuthServices", "Landroid/content/pm/ResolveInfo;", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class SilentAuthServicesProvider {
    public static final String ACTION_GET_INFO = "com.vk.silentauth.action.GET_INFO";
    private final TrustedProvidersCache cache;
    private final String currentPackageName;
    private final InternalVKIDPackageManager packageManager;
    public static final int $stable = 8;

    /* JADX INFO: renamed from: com.vk.id.internal.auth.app.SilentAuthServicesProvider$getSilentAuthServices$1, reason: invalid class name */
    /* JADX INFO: compiled from: SilentAuthServicesProvider.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.auth.app.SilentAuthServicesProvider", f = "SilentAuthServicesProvider.kt", i = {0}, l = {19}, m = "getSilentAuthServices", n = {"this"}, s = {"L$0"})
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
            return SilentAuthServicesProvider.this.getSilentAuthServices(this);
        }
    }

    public SilentAuthServicesProvider(InternalVKIDPackageManager packageManager, String currentPackageName, TrustedProvidersCache cache) {
        Intrinsics.checkNotNullParameter(packageManager, "packageManager");
        Intrinsics.checkNotNullParameter(currentPackageName, "currentPackageName");
        Intrinsics.checkNotNullParameter(cache, "cache");
        this.packageManager = packageManager;
        this.currentPackageName = currentPackageName;
        this.cache = cache;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object getSilentAuthServices(Continuation<? super List<SilentAuthProviderData>> continuation) {
        AnonymousClass1 anonymousClass1;
        final SilentAuthServicesProvider silentAuthServicesProvider;
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
        Object silentAuthProviders = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(silentAuthProviders);
            TrustedProvidersCache trustedProvidersCache = this.cache;
            anonymousClass1.L$0 = this;
            anonymousClass1.label = 1;
            silentAuthProviders = trustedProvidersCache.getSilentAuthProviders(anonymousClass1);
            if (silentAuthProviders == coroutine_suspended) {
                return coroutine_suspended;
            }
            silentAuthServicesProvider = this;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            silentAuthServicesProvider = (SilentAuthServicesProvider) anonymousClass1.L$0;
            ResultKt.throwOnFailure(silentAuthProviders);
        }
        final List list = (List) silentAuthProviders;
        return SequencesKt.toList(SequencesKt.map(SequencesKt.sortedWith(SequencesKt.filter(silentAuthServicesProvider.excludeCurrentApp(SequencesKt.mapNotNull(CollectionsKt.asSequence(silentAuthServicesProvider.getAppsWithSilentAuthServices()), new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthServicesProvider$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SilentAuthServicesProvider.getSilentAuthServices$lambda$0(this.f$0, list, (ResolveInfo) obj);
            }
        })), new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthServicesProvider$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return Boolean.valueOf(SilentAuthServicesProvider.getSilentAuthServices$lambda$1(this.f$0, (VkAuthProviderInfo) obj));
            }
        }), new Comparator() { // from class: com.vk.id.internal.auth.app.SilentAuthServicesProvider$getSilentAuthServices$$inlined$sortedByDescending$1
            /* JADX WARN: Multi-variable type inference failed */
            @Override // java.util.Comparator
            public final int compare(T t, T t2) {
                return ComparisonsKt.compareValues(Integer.valueOf(((VkAuthProviderInfo) t2).getWeight()), Integer.valueOf(((VkAuthProviderInfo) t).getWeight()));
            }
        }), new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthServicesProvider$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SilentAuthServicesProvider.getSilentAuthServices$lambda$3((VkAuthProviderInfo) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VkAuthProviderInfo getSilentAuthServices$lambda$0(SilentAuthServicesProvider silentAuthServicesProvider, List list, ResolveInfo it) {
        Intrinsics.checkNotNullParameter(it, "it");
        ServiceInfo serviceInfo = it.serviceInfo;
        Intrinsics.checkNotNullExpressionValue(serviceInfo, "serviceInfo");
        return silentAuthServicesProvider.mapToProviderInfo(serviceInfo, list);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean getSilentAuthServices$lambda$1(SilentAuthServicesProvider silentAuthServicesProvider, VkAuthProviderInfo it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return silentAuthServicesProvider.isAllowedToOpenWebAuth(it);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SilentAuthProviderData getSilentAuthServices$lambda$3(VkAuthProviderInfo it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new SilentAuthProviderData(it.getComponentName(), it.getWeight());
    }

    private final Sequence<VkAuthProviderInfo> excludeCurrentApp(Sequence<VkAuthProviderInfo> sequence) {
        return SequencesKt.filter(sequence, new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthServicesProvider$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return Boolean.valueOf(SilentAuthServicesProvider.excludeCurrentApp$lambda$4(this.f$0, (VkAuthProviderInfo) obj));
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean excludeCurrentApp$lambda$4(SilentAuthServicesProvider silentAuthServicesProvider, VkAuthProviderInfo it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return !Intrinsics.areEqual(it.getComponentName().getPackageName(), silentAuthServicesProvider.currentPackageName);
    }

    private final boolean isAllowedToOpenWebAuth(VkAuthProviderInfo vkAuthProviderInfo) {
        String packageName = vkAuthProviderInfo.getComponentName().getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
        ResolveInfo resolveInfoResolveActivity = this.packageManager.resolveActivity(new Intent("android.intent.action.VIEW", AuthOptionsKt.basicCodeFlowUri(packageName)), 0);
        ActivityInfo activityInfo = resolveInfoResolveActivity != null ? resolveInfoResolveActivity.activityInfo : null;
        return activityInfo != null && Intrinsics.areEqual(activityInfo.packageName, vkAuthProviderInfo.getComponentName().getPackageName());
    }

    private final VkAuthProviderInfo mapToProviderInfo(ServiceInfo serviceInfo, List<VkAuthSilentAuthProvider> list) {
        Object next;
        SilentAuthInfoUtils silentAuthInfoUtils = SilentAuthInfoUtils.INSTANCE;
        InternalVKIDPackageManager internalVKIDPackageManager = this.packageManager;
        String packageName = serviceInfo.packageName;
        Intrinsics.checkNotNullExpressionValue(packageName, "packageName");
        String strCalculateDigestHex = silentAuthInfoUtils.calculateDigestHex(internalVKIDPackageManager, packageName);
        Iterator<T> it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
            VkAuthSilentAuthProvider vkAuthSilentAuthProvider = (VkAuthSilentAuthProvider) next;
            if (Intrinsics.areEqual(serviceInfo.packageName, vkAuthSilentAuthProvider.getAppPackage()) && Intrinsics.areEqual(strCalculateDigestHex, vkAuthSilentAuthProvider.getAppSha())) {
                break;
            }
        }
        VkAuthSilentAuthProvider vkAuthSilentAuthProvider2 = (VkAuthSilentAuthProvider) next;
        if (vkAuthSilentAuthProvider2 != null) {
            return new VkAuthProviderInfo(new ComponentName(serviceInfo.packageName, serviceInfo.name), vkAuthSilentAuthProvider2.getWeight());
        }
        return null;
    }

    private final List<ResolveInfo> getAppsWithSilentAuthServices() {
        return this.packageManager.queryIntentServices(new Intent(ACTION_GET_INFO), 0);
    }
}
