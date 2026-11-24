package com.vk.id.internal.ipc;

import android.content.Context;
import android.content.pm.Signature;
import android.os.IBinder;
import androidx.core.app.NotificationCompat;
import com.google.firebase.remoteconfig.RemoteConfigConstants;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.internal.auth.app.SilentAuthInfoUtils;
import com.vk.id.internal.auth.app.SilentAuthProviderData;
import com.vk.id.internal.auth.app.SilentAuthServicesProvider;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.silentauth.ISilentAuthInfoProvider;
import com.vk.silentauth.SilentAuthInfo;
import com.vk.silentauth.SilentAuthInfoWithProviderWeight;
import io.sentry.SentryEvent;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VkSilentAuthInfoProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0001\u0018\u0000 32\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u0002:\u000223B)\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\"\u0010\u0016\u001a\u00020\u00172\u000e\u0010\u0018\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bH\u0016J\u001c\u0010$\u001a\b\u0012\u0004\u0012\u00020&0%2\u0006\u0010'\u001a\u00020\u000bH\u0096@¢\u0006\u0002\u0010(J\u0010\u0010)\u001a\u00020\u00172\u0006\u0010!\u001a\u00020\"H\u0016J\u0010\u0010*\u001a\u00020\u00172\u0006\u0010#\u001a\u00020\u0013H\u0016J \u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020.2\u0006\u0010/\u001a\u00020\u000b2\u0006\u0010'\u001a\u00020\u000bH\u0002J\u001a\u00100\u001a\u00020,2\b\u00101\u001a\u0004\u0018\u00010\u00032\u0006\u0010-\u001a\u00020.H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\n\u001a\u00020\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0012\u001a\u00020\u00138VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u0015R\u001a\u0010\u001c\u001a\u00020\u0005X\u0096\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001d\u0010\u001e\"\u0004\b\u001f\u0010 R\u000e\u0010!\u001a\u00020\"X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010#\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000¨\u00064"}, d2 = {"Lcom/vk/id/internal/ipc/VkSilentAuthInfoProvider;", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "Lcom/vk/id/internal/ipc/IPCClientBaseProvider;", "Lcom/vk/silentauth/ISilentAuthInfoProvider;", "context", "Landroid/content/Context;", "servicesProvider", "Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "defaultTimeout", "", "<init>", "(Landroid/content/Context;Lcom/vk/id/internal/auth/app/SilentAuthServicesProvider;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;J)V", "getDefaultTimeout", "()J", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "intentName", "", "getIntentName", "()Ljava/lang/String;", "setProvider", "", "connectionInfo", "Lcom/vk/id/internal/ipc/ConnectionInfo;", NotificationCompat.CATEGORY_SERVICE, "Landroid/os/IBinder;", "appContext", "getAppContext", "()Landroid/content/Context;", "setAppContext", "(Landroid/content/Context;)V", RemoteConfigConstants.RequestFieldKey.APP_ID, "", "apiVersion", "getSilentAuthInfos", "", "Lcom/vk/silentauth/SilentAuthInfo;", "timeout", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "setAppId", "setApiVersion", "getSpecificAppSilentAuthInfos", "Lcom/vk/id/internal/ipc/VkSilentAuthInfoProvider$SilentAuthResult;", "component", "Lcom/vk/id/internal/auth/app/SilentAuthProviderData;", "startTime", "getInfosFromAidl", "provider", "SilentAuthResult", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VkSilentAuthInfoProvider extends IPCClientBaseProvider<ISilentAuthInfoProvider> implements SilentAuthInfoProvider {
    public static final long DEFAULT_BINDING_TIMEOUT_SECONDS = 30;
    public static final String SILENT_AUTH_API_VERSION = "5.219";
    private String apiVersion;
    private Context appContext;
    private int appId;
    private final long defaultTimeout;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final InternalVKIDLogger logger;
    private final SilentAuthServicesProvider servicesProvider;
    public static final int $stable = 8;

    /* JADX INFO: renamed from: com.vk.id.internal.ipc.VkSilentAuthInfoProvider$getSilentAuthInfos$1, reason: invalid class name */
    /* JADX INFO: compiled from: VkSilentAuthInfoProvider.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.ipc.VkSilentAuthInfoProvider", f = "VkSilentAuthInfoProvider.kt", i = {0, 0, 0}, l = {90}, m = "getSilentAuthInfos", n = {"this", "timeout", "startTime"}, s = {"L$0", "J$0", "J$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
        long J$0;
        long J$1;
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
            return VkSilentAuthInfoProvider.this.getSilentAuthInfos(0L, this);
        }
    }

    public /* synthetic */ VkSilentAuthInfoProvider(Context context, SilentAuthServicesProvider silentAuthServicesProvider, InternalVKIDDeviceIdProvider internalVKIDDeviceIdProvider, long j, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, silentAuthServicesProvider, internalVKIDDeviceIdProvider, (i & 8) != 0 ? TimeUnit.SECONDS.toMillis(30L) : j);
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public long getDefaultTimeout() {
        return this.defaultTimeout;
    }

    public VkSilentAuthInfoProvider(Context context, SilentAuthServicesProvider servicesProvider, InternalVKIDDeviceIdProvider deviceIdProvider, long j) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(servicesProvider, "servicesProvider");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        this.servicesProvider = servicesProvider;
        this.deviceIdProvider = deviceIdProvider;
        this.defaultTimeout = j;
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("VkSilentAuthInfoProvider", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("VkSilentAuthInfoProvider");
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this.appContext = applicationContext;
        this.apiVersion = SILENT_AUTH_API_VERSION;
    }

    @Override // com.vk.id.internal.ipc.IPCClientBaseProvider
    public String getIntentName() {
        return SilentAuthServicesProvider.ACTION_GET_INFO;
    }

    @Override // com.vk.id.internal.ipc.IPCClientBaseProvider
    public void setProvider(ConnectionInfo<ISilentAuthInfoProvider> connectionInfo, IBinder service) {
        if (connectionInfo != null) {
            connectionInfo.setProvider(ISilentAuthInfoProvider.Stub.asInterface(service));
        }
    }

    @Override // com.vk.id.internal.ipc.IPCClientBaseProvider
    public Context getAppContext() {
        return this.appContext;
    }

    @Override // com.vk.id.internal.ipc.IPCClientBaseProvider
    public void setAppContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.appContext = context;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public Object getSilentAuthInfos(long j, Continuation<? super List<SilentAuthInfo>> continuation) {
        AnonymousClass1 anonymousClass1;
        VkSilentAuthInfoProvider vkSilentAuthInfoProvider;
        long j2;
        long j3;
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
            if (this.appId == 0) {
                return CollectionsKt.emptyList();
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            SilentAuthServicesProvider silentAuthServicesProvider = this.servicesProvider;
            anonymousClass1.L$0 = this;
            anonymousClass1.J$0 = j;
            anonymousClass1.J$1 = jCurrentTimeMillis;
            anonymousClass1.label = 1;
            silentAuthServices = silentAuthServicesProvider.getSilentAuthServices(anonymousClass1);
            if (silentAuthServices == coroutine_suspended) {
                return coroutine_suspended;
            }
            vkSilentAuthInfoProvider = this;
            j2 = j;
            j3 = jCurrentTimeMillis;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            long j4 = anonymousClass1.J$1;
            long j5 = anonymousClass1.J$0;
            VkSilentAuthInfoProvider vkSilentAuthInfoProvider2 = (VkSilentAuthInfoProvider) anonymousClass1.L$0;
            ResultKt.throwOnFailure(silentAuthServices);
            j3 = j4;
            vkSilentAuthInfoProvider = vkSilentAuthInfoProvider2;
            j2 = j5;
        }
        Iterable iterable = (Iterable) silentAuthServices;
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            vkSilentAuthInfoProvider.prepareSpecificApp(((SilentAuthProviderData) it.next()).getComponentName());
        }
        List list = (List) iterable;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator it2 = list.iterator();
        while (it2.hasNext()) {
            arrayList.add(vkSilentAuthInfoProvider.getSpecificAppSilentAuthInfos((SilentAuthProviderData) it2.next(), j3, j2));
        }
        VkSilentInfoItemsGrouper vkSilentInfoItemsGrouper = VkSilentInfoItemsGrouper.INSTANCE;
        ArrayList<SilentAuthResult> arrayList2 = arrayList;
        ArrayList arrayList3 = new ArrayList(CollectionsKt.collectionSizeOrDefault(arrayList2, 10));
        for (SilentAuthResult silentAuthResult : arrayList2) {
            if (silentAuthResult.getException() != null) {
                vkSilentAuthInfoProvider.logger.error("Exception while fetching silent auth info: " + silentAuthResult.getException().getMessage(), silentAuthResult.getException());
            }
            arrayList3.add(silentAuthResult.getInfoItems());
        }
        List<SilentAuthInfoWithProviderWeight> listGroupByWeightAndUserHash = vkSilentInfoItemsGrouper.groupByWeightAndUserHash(CollectionsKt.flatten(arrayList3));
        ArrayList arrayList4 = new ArrayList(CollectionsKt.collectionSizeOrDefault(listGroupByWeightAndUserHash, 10));
        Iterator<T> it3 = listGroupByWeightAndUserHash.iterator();
        while (it3.hasNext()) {
            arrayList4.add(((SilentAuthInfoWithProviderWeight) it3.next()).getInfo());
        }
        return arrayList4;
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public void setAppId(int appId) {
        this.appId = appId;
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public void setApiVersion(String apiVersion) {
        Intrinsics.checkNotNullParameter(apiVersion, "apiVersion");
        this.apiVersion = apiVersion;
    }

    private final SilentAuthResult getSpecificAppSilentAuthInfos(SilentAuthProviderData component, long startTime, long timeout) {
        return getInfosFromAidl(getProvider(component.getComponentName(), startTime, timeout), component);
    }

    private final SilentAuthResult getInfosFromAidl(ISilentAuthInfoProvider provider, SilentAuthProviderData component) {
        if (provider == null) {
            return new SilentAuthResult(new NullPointerException("Provider is null"));
        }
        Signature signature = getSignature();
        if (signature != null) {
            try {
                List<SilentAuthInfo> silentAuthInfos = provider.getSilentAuthInfos(this.appId, getAppContext().getPackageName(), SilentAuthInfoUtils.INSTANCE.calculateDigestBase64(signature), UUID.randomUUID().toString(), this.apiVersion, this.deviceIdProvider.getDeviceId$vkid_release(), null);
                Intrinsics.checkNotNullExpressionValue(silentAuthInfos, "getSilentAuthInfos(...)");
                List<SilentAuthInfo> list = silentAuthInfos;
                ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
                Iterator<T> it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(new SilentAuthInfoWithProviderWeight(SilentAuthInfo.copy$default((SilentAuthInfo) it.next(), null, null, null, 0L, null, null, null, null, null, null, null, null, 0, null, component.getComponentName().getPackageName(), null, 0, 114687, null), component.getWeight()));
                }
                return new SilentAuthResult(arrayList);
            } catch (Exception e) {
                return new SilentAuthResult(e);
            }
        }
        return new SilentAuthResult(new NullPointerException("Signature is null"));
    }

    /* JADX INFO: compiled from: VkSilentAuthInfoProvider.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0081\b\u0018\u00002\u00020\u0001B%\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u000e\u0010\u0005\u001a\n\u0018\u00010\u0006j\u0004\u0018\u0001`\u0007¢\u0006\u0004\b\b\u0010\tB\u0017\b\u0016\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\b\u0010\nB\u0015\b\u0016\u0012\n\u0010\u0005\u001a\u00060\u0006j\u0002`\u0007¢\u0006\u0004\b\b\u0010\u000bJ\u000f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u0011\u0010\u0011\u001a\n\u0018\u00010\u0006j\u0004\u0018\u0001`\u0007HÆ\u0003J+\u0010\u0012\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0010\b\u0002\u0010\u0005\u001a\n\u0018\u00010\u0006j\u0004\u0018\u0001`\u0007HÇ\u0001J\u0013\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0016\u001a\u00020\u0017H×\u0001J\t\u0010\u0018\u001a\u00020\u0019H×\u0001R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0019\u0010\u0005\u001a\n\u0018\u00010\u0006j\u0004\u0018\u0001`\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000f¨\u0006\u001a"}, d2 = {"Lcom/vk/id/internal/ipc/VkSilentAuthInfoProvider$SilentAuthResult;", "", "infoItems", "", "Lcom/vk/silentauth/SilentAuthInfoWithProviderWeight;", SentryEvent.JsonKeys.EXCEPTION, "Ljava/lang/Exception;", "Lkotlin/Exception;", "<init>", "(Ljava/util/List;Ljava/lang/Exception;)V", "(Ljava/util/List;)V", "(Ljava/lang/Exception;)V", "getInfoItems", "()Ljava/util/List;", "getException", "()Ljava/lang/Exception;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class SilentAuthResult {
        public static final int $stable = 8;
        private final Exception exception;
        private final List<SilentAuthInfoWithProviderWeight> infoItems;

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ SilentAuthResult copy$default(SilentAuthResult silentAuthResult, List list, Exception exc, int i, Object obj) {
            if ((i & 1) != 0) {
                list = silentAuthResult.infoItems;
            }
            if ((i & 2) != 0) {
                exc = silentAuthResult.exception;
            }
            return silentAuthResult.copy(list, exc);
        }

        public final List<SilentAuthInfoWithProviderWeight> component1() {
            return this.infoItems;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final Exception getException() {
            return this.exception;
        }

        public final SilentAuthResult copy(List<SilentAuthInfoWithProviderWeight> infoItems, Exception exception) {
            Intrinsics.checkNotNullParameter(infoItems, "infoItems");
            return new SilentAuthResult(infoItems, exception);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof SilentAuthResult)) {
                return false;
            }
            SilentAuthResult silentAuthResult = (SilentAuthResult) other;
            return Intrinsics.areEqual(this.infoItems, silentAuthResult.infoItems) && Intrinsics.areEqual(this.exception, silentAuthResult.exception);
        }

        public int hashCode() {
            int iHashCode = this.infoItems.hashCode() * 31;
            Exception exc = this.exception;
            return iHashCode + (exc == null ? 0 : exc.hashCode());
        }

        public String toString() {
            return "SilentAuthResult(infoItems=" + this.infoItems + ", exception=" + this.exception + ")";
        }

        public SilentAuthResult(List<SilentAuthInfoWithProviderWeight> infoItems, Exception exc) {
            Intrinsics.checkNotNullParameter(infoItems, "infoItems");
            this.infoItems = infoItems;
            this.exception = exc;
        }

        public final List<SilentAuthInfoWithProviderWeight> getInfoItems() {
            return this.infoItems;
        }

        public final Exception getException() {
            return this.exception;
        }

        /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
        public SilentAuthResult(List<SilentAuthInfoWithProviderWeight> infoItems) {
            this(infoItems, null);
            Intrinsics.checkNotNullParameter(infoItems, "infoItems");
        }

        /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
        public SilentAuthResult(Exception exception) {
            this(CollectionsKt.emptyList(), exception);
            Intrinsics.checkNotNullParameter(exception, "exception");
        }
    }
}
