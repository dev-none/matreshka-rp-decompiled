package ru.innim.my_target_flutter;

import android.content.Context;
import androidx.core.app.NotificationCompat;
import com.my.target.ads.InterstitialAd;
import com.my.target.common.MyTargetConfig;
import com.my.target.common.MyTargetManager;
import com.my.target.common.menu.MenuActionType;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* JADX INFO: compiled from: MethodCallHandler.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u0000 %2\u00020\u0001:\u0003%&'B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J*\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u001f\u0010\u0016\u001a\u00020\f2\b\u0010\u0017\u001a\u0004\u0018\u00010\u00182\u0006\u0010\u000f\u001a\u00020\u0010H\u0002¢\u0006\u0002\u0010\u0019J\u001a\u0010\u001a\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u00102\b\u0010\u001b\u001a\u0004\u0018\u00010\u0015H\u0002J\u001a\u0010\u001c\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u00102\b\u0010\u001b\u001a\u0004\u0018\u00010\u0015H\u0002J\u0010\u0010\u001d\u001a\u00020\f2\u0006\u0010\u001b\u001a\u00020\u0015H\u0002J=\u0010\u001e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u00102\b\u0010\u001b\u001a\u0004\u0018\u00010\u00152!\u0010\u001f\u001a\u001d\u0012\u0013\u0012\u00110!¢\u0006\f\b\"\u0012\b\b#\u0012\u0004\b\b($\u0012\u0004\u0012\u00020\f0 H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006("}, d2 = {"Lru/innim/my_target_flutter/MethodCallHandler;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "context", "Landroid/content/Context;", "adEventHandler", "Lru/innim/my_target_flutter/AdEventHandler;", "<init>", "(Landroid/content/Context;Lru/innim/my_target_flutter/AdEventHandler;)V", "ads", "", "Lru/innim/my_target_flutter/MethodCallHandler$AdWithId;", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "initAd", "useDebugMode", "", "testDevices", "", MethodCallHandler.METHOD_CREATE_INTERSTITIAL_AD, "slotId", "", "(Ljava/lang/Integer;Lio/flutter/plugin/common/MethodChannel$Result;)V", "load", "id", "show", "clear", "findAdById", HandleInvocationsFromAdViewer.KEY_ACTION, "Lkotlin/Function1;", "Lcom/my/target/ads/InterstitialAd;", "Lkotlin/ParameterName;", "name", "ad", "Companion", "InitialData", "AdWithId", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MethodCallHandler implements MethodChannel.MethodCallHandler {
    private static final String ERROR_CODE_INVALID_ARGS = "INVALID_ARGS";
    private static final String ERROR_CODE_NOT_FOUND = "ADS_NOT_FOUND";
    private static final String ERROR_MESSAGE_INVALID_ARGS = "value cant be null";
    private static final String METHOD_CREATE_INTERSTITIAL_AD = "createInterstitialAd";
    private static final String METHOD_INITIAL = "initialize";
    private static final String METHOD_LOAD = "load";
    private static final String METHOD_SHOW = "show";
    private final AdEventHandler adEventHandler;
    private final List<AdWithId> ads;
    private final Context context;

    public MethodCallHandler(Context context, AdEventHandler adEventHandler) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(adEventHandler, "adEventHandler");
        this.context = context;
        this.adEventHandler = adEventHandler;
        this.ads = new ArrayList();
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (str != null) {
            switch (str.hashCode()) {
                case 3327206:
                    if (str.equals("load")) {
                        load(result, call.arguments.toString());
                        break;
                    }
                    break;
                case 3529469:
                    if (str.equals("show")) {
                        show(result, call.arguments.toString());
                        break;
                    }
                    break;
                case 69163147:
                    if (str.equals(METHOD_CREATE_INTERSTITIAL_AD)) {
                        Integer num = (Integer) call.argument("slotId");
                        if (num != null) {
                            num.intValue();
                        } else {
                            num = null;
                        }
                        createInterstitialAd(num, result);
                        break;
                    }
                    break;
                case 871091088:
                    if (str.equals(METHOD_INITIAL)) {
                        InitialData initialDataFromArgs = InitialData.INSTANCE.fromArgs(call);
                        initAd(this.context, initialDataFromArgs.getUseDebugMode(), initialDataFromArgs.getTestDevices(), result);
                    }
                    break;
            }
        }
    }

    private final void initAd(Context context, boolean useDebugMode, String testDevices, MethodChannel.Result result) {
        MyTargetManager.initSdk(context);
        MyTargetManager.setDebugMode(useDebugMode);
        if (testDevices != null && testDevices.length() > 0) {
            MyTargetConfig myTargetConfigBuild = new MyTargetConfig.Builder().withTestDevices(testDevices).build();
            Intrinsics.checkNotNullExpressionValue(myTargetConfigBuild, "build(...)");
            MyTargetManager.setSdkConfig(myTargetConfigBuild);
        }
        result.success(true);
    }

    private final void createInterstitialAd(Integer slotId, MethodChannel.Result result) {
        if (slotId == null) {
            result.error(ERROR_CODE_INVALID_ARGS, ERROR_MESSAGE_INVALID_ARGS, "slotId: " + slotId);
            return;
        }
        InterstitialAd interstitialAd = new InterstitialAd(slotId.intValue(), this.context);
        String str = slotId + "_" + UUID.randomUUID();
        interstitialAd.setListener(new AdListener(this.adEventHandler, str, new Function1() { // from class: ru.innim.my_target_flutter.MethodCallHandler$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MethodCallHandler.createInterstitialAd$lambda$0(this.f$0, (String) obj);
            }
        }));
        this.ads.add(new AdWithId(interstitialAd, str));
        result.success(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createInterstitialAd$lambda$0(MethodCallHandler methodCallHandler, String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        methodCallHandler.clear(it);
        return Unit.INSTANCE;
    }

    private final void load(MethodChannel.Result result, String id) {
        findAdById(result, id, new Function1() { // from class: ru.innim.my_target_flutter.MethodCallHandler$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MethodCallHandler.load$lambda$0((InterstitialAd) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit load$lambda$0(InterstitialAd it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.load();
        return Unit.INSTANCE;
    }

    private final void show(MethodChannel.Result result, String id) {
        findAdById(result, id, new Function1() { // from class: ru.innim.my_target_flutter.MethodCallHandler$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MethodCallHandler.show$lambda$0((InterstitialAd) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit show$lambda$0(InterstitialAd it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.show();
        return Unit.INSTANCE;
    }

    private final void clear(String id) {
        Object next;
        InterstitialAd ad;
        Iterator<T> it = this.ads.iterator();
        do {
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
        } while (!Intrinsics.areEqual(((AdWithId) next).getId(), id));
        AdWithId adWithId = (AdWithId) next;
        if (adWithId != null && (ad = adWithId.getAd()) != null) {
            ad.setListener(null);
        }
        TypeIntrinsics.asMutableCollection(this.ads).remove(adWithId);
    }

    private final void findAdById(MethodChannel.Result result, String id, Function1<? super InterstitialAd, Unit> action) {
        Object next;
        if (id == null) {
            result.error(ERROR_CODE_INVALID_ARGS, ERROR_MESSAGE_INVALID_ARGS, "id: " + id);
            return;
        }
        Iterator<T> it = this.ads.iterator();
        do {
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
        } while (!Intrinsics.areEqual(((AdWithId) next).getId(), id));
        AdWithId adWithId = (AdWithId) next;
        InterstitialAd ad = adWithId != null ? adWithId.getAd() : null;
        if (ad == null) {
            result.error(ERROR_CODE_NOT_FOUND, "ads not found", "id: " + id);
            return;
        }
        action.invoke(ad);
    }

    /* JADX INFO: compiled from: MethodCallHandler.kt */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00032\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0015"}, d2 = {"Lru/innim/my_target_flutter/MethodCallHandler$InitialData;", "", "useDebugMode", "", "testDevices", "", "<init>", "(ZLjava/lang/String;)V", "getUseDebugMode", "()Z", "getTestDevices", "()Ljava/lang/String;", "component1", "component2", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final /* data */ class InitialData {

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        private final String testDevices;
        private final boolean useDebugMode;

        public static /* synthetic */ InitialData copy$default(InitialData initialData, boolean z, String str, int i, Object obj) {
            if ((i & 1) != 0) {
                z = initialData.useDebugMode;
            }
            if ((i & 2) != 0) {
                str = initialData.testDevices;
            }
            return initialData.copy(z, str);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final boolean getUseDebugMode() {
            return this.useDebugMode;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final String getTestDevices() {
            return this.testDevices;
        }

        public final InitialData copy(boolean useDebugMode, String testDevices) {
            return new InitialData(useDebugMode, testDevices);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof InitialData)) {
                return false;
            }
            InitialData initialData = (InitialData) other;
            return this.useDebugMode == initialData.useDebugMode && Intrinsics.areEqual(this.testDevices, initialData.testDevices);
        }

        public int hashCode() {
            int iHashCode = Boolean.hashCode(this.useDebugMode) * 31;
            String str = this.testDevices;
            return iHashCode + (str == null ? 0 : str.hashCode());
        }

        public String toString() {
            return "InitialData(useDebugMode=" + this.useDebugMode + ", testDevices=" + this.testDevices + ")";
        }

        public InitialData(boolean z, String str) {
            this.useDebugMode = z;
            this.testDevices = str;
        }

        public final boolean getUseDebugMode() {
            return this.useDebugMode;
        }

        public final String getTestDevices() {
            return this.testDevices;
        }

        /* JADX INFO: compiled from: MethodCallHandler.kt */
        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lru/innim/my_target_flutter/MethodCallHandler$InitialData$Companion;", "", "<init>", "()V", "fromArgs", "Lru/innim/my_target_flutter/MethodCallHandler$InitialData;", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final InitialData fromArgs(MethodCall call) {
                Intrinsics.checkNotNullParameter(call, "call");
                Boolean bool = (Boolean) call.argument("useDebugMode");
                return new InitialData(bool != null ? bool.booleanValue() : false, (String) call.argument("testDevices"));
            }
        }
    }

    /* JADX INFO: compiled from: MethodCallHandler.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0010\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001J\t\u0010\u0016\u001a\u00020\u0005HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0017"}, d2 = {"Lru/innim/my_target_flutter/MethodCallHandler$AdWithId;", "", "ad", "Lcom/my/target/ads/InterstitialAd;", "id", "", "<init>", "(Lcom/my/target/ads/InterstitialAd;Ljava/lang/String;)V", "getAd", "()Lcom/my/target/ads/InterstitialAd;", "setAd", "(Lcom/my/target/ads/InterstitialAd;)V", "getId", "()Ljava/lang/String;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final /* data */ class AdWithId {
        private InterstitialAd ad;
        private final String id;

        public static /* synthetic */ AdWithId copy$default(AdWithId adWithId, InterstitialAd interstitialAd, String str, int i, Object obj) {
            if ((i & 1) != 0) {
                interstitialAd = adWithId.ad;
            }
            if ((i & 2) != 0) {
                str = adWithId.id;
            }
            return adWithId.copy(interstitialAd, str);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final InterstitialAd getAd() {
            return this.ad;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final String getId() {
            return this.id;
        }

        public final AdWithId copy(InterstitialAd ad, String id) {
            Intrinsics.checkNotNullParameter(ad, "ad");
            Intrinsics.checkNotNullParameter(id, "id");
            return new AdWithId(ad, id);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof AdWithId)) {
                return false;
            }
            AdWithId adWithId = (AdWithId) other;
            return Intrinsics.areEqual(this.ad, adWithId.ad) && Intrinsics.areEqual(this.id, adWithId.id);
        }

        public int hashCode() {
            return (this.ad.hashCode() * 31) + this.id.hashCode();
        }

        public String toString() {
            return "AdWithId(ad=" + this.ad + ", id=" + this.id + ")";
        }

        public AdWithId(InterstitialAd ad, String id) {
            Intrinsics.checkNotNullParameter(ad, "ad");
            Intrinsics.checkNotNullParameter(id, "id");
            this.ad = ad;
            this.id = id;
        }

        public final InterstitialAd getAd() {
            return this.ad;
        }

        public final void setAd(InterstitialAd interstitialAd) {
            Intrinsics.checkNotNullParameter(interstitialAd, "<set-?>");
            this.ad = interstitialAd;
        }

        public final String getId() {
            return this.id;
        }
    }
}
