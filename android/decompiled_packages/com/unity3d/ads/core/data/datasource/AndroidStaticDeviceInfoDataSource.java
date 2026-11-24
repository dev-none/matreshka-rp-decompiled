package com.unity3d.ads.core.data.datasource;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.content.res.Resources;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.os.Build;
import android.os.SystemClock;
import android.os.ext.SdkExtensions;
import android.telephony.TelephonyManager;
import android.util.DisplayMetrics;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputMethodManager;
import android.view.inputmethod.InputMethodSubtype;
import android.webkit.WebSettings;
import com.google.firebase.remoteconfig.RemoteConfigComponent;
import com.unity3d.ads.core.data.model.StorageType;
import com.unity3d.ads.core.log.Logger;
import com.unity3d.ads.core.utils.GetMemoryValueFromStringKt;
import com.unity3d.ads.datastore.ByteStringStoreOuterClass;
import com.unity3d.services.UnityAdsConstants;
import com.unity3d.services.core.device.AdvertisingId;
import com.unity3d.services.core.device.Device;
import com.unity3d.services.core.device.OpenAdvertisingId;
import com.unity3d.services.core.misc.Utilities;
import com.unity3d.services.core.preferences.AndroidPreferences;
import com.unity3d.services.core.properties.ClientProperties;
import com.unity3d.services.core.properties.MadeWithUnityDetector;
import com.unity3d.services.core.properties.SdkProperties;
import gatewayprotocol.v1.StaticDeviceInfoKt;
import gatewayprotocol.v1.StaticDeviceInfoOuterClass;
import io.appmetrica.analytics.BuildConfig;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.sentry.SentryEvent;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.security.MessageDigest;
import java.security.cert.Certificate;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.ListIterator;
import java.util.Locale;
import java.util.UUID;
import javax.security.auth.x500.X500Principal;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.math.MathKt;
import kotlin.text.Charsets;
import kotlin.text.Regex;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: AndroidStaticDeviceInfoDataSource.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\n\u0018\u0000 t2\u00020\u0001:\u0001tB9\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fJ\u001c\u0010\u0016\u001a\u00020\u00152\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0096@¢\u0006\u0002\u0010\u001aJ\b\u0010\u001b\u001a\u00020\u0015H\u0016J\b\u0010\u001c\u001a\u00020\u001dH\u0002J\b\u0010\u001e\u001a\u00020\u001fH\u0002J\b\u0010 \u001a\u00020\u0019H\u0016J\b\u0010!\u001a\u00020\u0019H\u0016J\b\u0010\"\u001a\u00020\u0019H\u0016J\b\u0010#\u001a\u00020\u001fH\u0002J\u0006\u0010$\u001a\u00020\u0019J\b\u0010%\u001a\u00020\u0019H\u0002J\u0006\u0010&\u001a\u00020'J\u000e\u0010(\u001a\u00020\u0019H\u0096@¢\u0006\u0002\u0010)J\b\u0010-\u001a\u00020.H\u0016J\u0010\u0010/\u001a\u0004\u0018\u00010\u0019H\u0096@¢\u0006\u0002\u0010)J\u0010\u00100\u001a\u0004\u0018\u00010\u0019H\u0096@¢\u0006\u0002\u0010)J\b\u00101\u001a\u000202H\u0002J\b\u00103\u001a\u00020\u001fH\u0002J\b\u00104\u001a\u00020\u001fH\u0002J\b\u00105\u001a\u00020\u001fH\u0002J\b\u00106\u001a\u00020'H\u0002J\u0010\u00107\u001a\u00020'2\u0006\u00108\u001a\u00020\u0019H\u0002J\b\u00109\u001a\u00020\u0019H\u0003J\u0006\u0010:\u001a\u00020\u0019J\u0006\u0010;\u001a\u00020\u0019J\u0006\u0010<\u001a\u00020\u0019J\u0006\u0010=\u001a\u00020\u0019J\u0006\u0010>\u001a\u00020\u0019J\u0006\u0010?\u001a\u00020\u0019J\u0006\u0010@\u001a\u00020\u0019J\u0006\u0010A\u001a\u00020\u0019J\b\u0010B\u001a\u00020\u0019H\u0002J\b\u0010C\u001a\u00020\u0019H\u0003J\f\u0010D\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018J\f\u0010E\u001a\b\u0012\u0004\u0012\u00020F0\u0018J\b\u0010G\u001a\u00020\u0019H\u0002J\b\u0010H\u001a\u00020.H\u0002J\b\u0010I\u001a\u00020.H\u0002J\u0010\u0010J\u001a\u0004\u0018\u00010\u0019H\u0082@¢\u0006\u0002\u0010)J\b\u0010K\u001a\u0004\u0018\u00010\u0019J\b\u0010L\u001a\u0004\u0018\u00010\u0019J\u000e\u0010M\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0002J\u000e\u0010N\u001a\b\u0012\u0004\u0012\u00020\u00190OH\u0003J\b\u0010P\u001a\u00020\u0019H\u0002J\b\u0010Q\u001a\u00020\u001fH\u0002J\u001e\u0010R\u001a\b\u0012\u0004\u0012\u00020\u00190\u00182\u000e\b\u0002\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0002J\b\u0010S\u001a\u00020.H\u0002J\b\u0010T\u001a\u00020\u0019H\u0002J\b\u0010U\u001a\u00020'H\u0002J\b\u0010V\u001a\u00020\u0019H\u0002J\b\u0010W\u001a\u00020\u0019H\u0002J\u0006\u0010X\u001a\u00020.J\u0010\u0010Y\u001a\u00020.2\u0006\u0010Z\u001a\u00020[H\u0002J\u0010\u0010\\\u001a\u00020.2\b\u0010]\u001a\u0004\u0018\u00010^J\u0012\u0010_\u001a\u00020.2\b\u0010]\u001a\u0004\u0018\u00010^H\u0002J\u000e\u0010`\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0002J\u0012\u0010a\u001a\u0004\u0018\u00010^2\u0006\u0010b\u001a\u00020cH\u0002J\b\u0010d\u001a\u00020\u0019H\u0016J\b\u0010e\u001a\u00020\u0019H\u0002J\b\u0010f\u001a\u00020'H\u0002J\b\u0010g\u001a\u00020\u001fH\u0002J\u0006\u0010h\u001a\u00020'J\u0006\u0010i\u001a\u00020'J\u0018\u0010j\u001a\b\u0012\u0004\u0012\u00020k0\u00182\b\u0010l\u001a\u0004\u0018\u00010\u0019H\u0002J\u001a\u0010m\u001a\u00020'2\u0006\u0010n\u001a\u00020k2\b\u0010l\u001a\u0004\u0018\u00010\u0019H\u0002J\u0010\u0010o\u001a\u00020'2\u0006\u0010n\u001a\u00020kH\u0003J\u001a\u0010p\u001a\u00020'2\u0006\u0010n\u001a\u00020k2\b\u0010l\u001a\u0004\u0018\u00010\u0019H\u0002J\u0010\u0010q\u001a\u00020'2\u0006\u0010n\u001a\u00020kH\u0003J\b\u0010r\u001a\u00020\u001fH\u0002J\b\u0010s\u001a\u00020\u0019H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010*\u001a\u0004\u0018\u00010\u00198VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b+\u0010,¨\u0006u"}, d2 = {"Lcom/unity3d/ads/core/data/datasource/AndroidStaticDeviceInfoDataSource;", "Lcom/unity3d/ads/core/data/datasource/StaticDeviceInfoDataSource;", "context", "Landroid/content/Context;", "glInfoStore", "Lcom/unity3d/ads/core/data/datasource/ByteStringDataSource;", "analyticsDataSource", "Lcom/unity3d/ads/core/data/datasource/AnalyticsDataSource;", "storeDataSource", "Lcom/unity3d/ads/core/data/datasource/StoreDataSource;", "unityBootConfigDataSource", "Lcom/unity3d/ads/core/data/datasource/UnityBootConfigDataSource;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "<init>", "(Landroid/content/Context;Lcom/unity3d/ads/core/data/datasource/ByteStringDataSource;Lcom/unity3d/ads/core/data/datasource/AnalyticsDataSource;Lcom/unity3d/ads/core/data/datasource/StoreDataSource;Lcom/unity3d/ads/core/data/datasource/UnityBootConfigDataSource;Lcom/unity3d/ads/core/log/Logger;)V", "getContext", "()Landroid/content/Context;", "DEBUG_CERT", "Ljavax/security/auth/x500/X500Principal;", "staticDeviceInfo", "Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;", RemoteConfigComponent.FETCH_FILE_NAME, "additionalStores", "", "", "(Ljava/util/List;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "fetchCached", "fetchAndroidStaticDeviceInfo", "Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo$Android;", "getApiLevel", "", "getOsVersion", "getManufacturer", "getModel", "getScreenLayout", "getAdvertisingTrackingId", "getOpenAdvertisingTrackingId", "isLimitOpenAdTrackingEnabled", "", "getIdfi", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "analyticsUserId", "getAnalyticsUserId", "()Ljava/lang/String;", "getSystemBootTime", "", "getAuid", "getUnityBuildGuid", "getDisplayMetricDensity", "", "getScreenDensity", "getScreenWidth", "getScreenHeight", "isRooted", "searchPathForBinary", BuildConfig.SDK_DEPENDENCY, "getCertificateFingerprint", "getBoard", "getBootloader", "getBrand", "getDisplay", "getDevice", "getHardware", "getHost", "getProduct", "getFingerprint", "getInstallerPackageName", "getSupportedAbis", "getSensorList", "Landroid/hardware/Sensor;", "getCPUModel", "getCPUCount", "getJvmMaxMemory", "getGPUModel", "getBuildId", "getBuildVersionIncremental", "getOldAbiList", "getNewAbiList", "Ljava/util/ArrayList;", "getWebViewUserAgent", "getVersionCode", "getStores", "getAppStartTime", "getVersionName", "isTestMode", "getPlatform", "getGameId", "getTotalMemory", "getMemoryInfo", "infoType", "Lcom/unity3d/services/core/device/Device$MemoryInfoType;", "getTotalSpace", "file", "Ljava/io/File;", "getTotalSpaceBytes", "getKeyboardLanguages", "getFileForStorageType", "storageType", "Lcom/unity3d/ads/core/data/model/StorageType;", "getAppName", "getAppVersion", "isAppDebuggable", "getExtensionVersion", "hasX264Decoder", "hasX265Decoder", "selectAllDecodeCodecs", "Landroid/media/MediaCodecInfo;", "mimeType", "isHardwareAccelerated", "codecInfo", "isHardwareAcceleratedV29", "isSoftwareOnly", "isSoftwareOnlyV29", "getPhoneType", "getSimOperator", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidStaticDeviceInfoDataSource implements StaticDeviceInfoDataSource {
    public static final String ALGORITHM_SHA1 = "SHA-1";
    public static final String APP_VERSION_FAKE = "FakeVersionName";
    public static final String BINARY_SU = "su";
    public static final String CERTIFICATE_TYPE_X509 = "X.509";
    public static final String ENVIRONMENT_VARIABLE_PATH = "PATH";
    public static final String PLATFORM_ANDROID = "android";
    public static final String STORE_GOOGLE = "google";
    private final X500Principal DEBUG_CERT;
    private final AnalyticsDataSource analyticsDataSource;
    private final Context context;
    private final ByteStringDataSource glInfoStore;
    private final Logger logger;
    private StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo;
    private final StoreDataSource storeDataSource;
    private final UnityBootConfigDataSource unityBootConfigDataSource;

    /* JADX INFO: compiled from: AndroidStaticDeviceInfoDataSource.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[Device.MemoryInfoType.values().length];
            try {
                iArr[Device.MemoryInfoType.TOTAL_MEMORY.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[Device.MemoryInfoType.FREE_MEMORY.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[StorageType.values().length];
            try {
                iArr2[StorageType.INTERNAL.ordinal()] = 1;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr2[StorageType.EXTERNAL.ordinal()] = 2;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource$fetch$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidStaticDeviceInfoDataSource.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource", f = "AndroidStaticDeviceInfoDataSource.kt", i = {0}, l = {105}, m = RemoteConfigComponent.FETCH_FILE_NAME, n = {"additionalStores"}, s = {"L$0"})
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
            return AndroidStaticDeviceInfoDataSource.this.fetch(null, this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource$getGPUModel$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidStaticDeviceInfoDataSource.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource", f = "AndroidStaticDeviceInfoDataSource.kt", i = {}, l = {508}, m = "getGPUModel", n = {}, s = {})
    static final class C18371 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C18371(Continuation<? super C18371> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidStaticDeviceInfoDataSource.this.getGPUModel(this);
        }
    }

    private final int getVersionCode() {
        return 42000;
    }

    public AndroidStaticDeviceInfoDataSource(Context context, ByteStringDataSource glInfoStore, AnalyticsDataSource analyticsDataSource, StoreDataSource storeDataSource, UnityBootConfigDataSource unityBootConfigDataSource, Logger logger) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(glInfoStore, "glInfoStore");
        Intrinsics.checkNotNullParameter(analyticsDataSource, "analyticsDataSource");
        Intrinsics.checkNotNullParameter(storeDataSource, "storeDataSource");
        Intrinsics.checkNotNullParameter(unityBootConfigDataSource, "unityBootConfigDataSource");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.context = context;
        this.glInfoStore = glInfoStore;
        this.analyticsDataSource = analyticsDataSource;
        this.storeDataSource = storeDataSource;
        this.unityBootConfigDataSource = unityBootConfigDataSource;
        this.logger = logger;
        this.DEBUG_CERT = new X500Principal("CN=Android Debug,O=Android,C=US");
        StaticDeviceInfoKt.Dsl.Companion companion = StaticDeviceInfoKt.Dsl.INSTANCE;
        StaticDeviceInfoOuterClass.StaticDeviceInfo.Builder builderNewBuilder = StaticDeviceInfoOuterClass.StaticDeviceInfo.newBuilder();
        Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
        StaticDeviceInfoKt.Dsl dsl_create = companion._create(builderNewBuilder);
        dsl_create.setBundleId(getAppName());
        dsl_create.setBundleVersion(getAppVersion());
        dsl_create.setAppDebuggable(isAppDebuggable());
        dsl_create.setRooted(isRooted());
        dsl_create.setOsVersion(getOsVersion());
        dsl_create.setDeviceMake(getManufacturer());
        dsl_create.setDeviceModel(getModel());
        dsl_create.setWebviewUa(getWebViewUserAgent());
        dsl_create.setScreenDensity(getScreenDensity());
        dsl_create.setScreenWidth(getScreenWidth());
        dsl_create.setScreenHeight(getScreenHeight());
        dsl_create.setScreenSize(getScreenLayout());
        dsl_create.addAllStores(dsl_create.getStores(), getStores$default(this, null, 1, null));
        dsl_create.setTotalDiskSpace(getTotalSpace(getFileForStorageType(StorageType.EXTERNAL)));
        dsl_create.setTotalDiskSpaceBytes(getTotalSpaceBytes(getFileForStorageType(StorageType.EXTERNAL)));
        dsl_create.addAllKeyboardLanguages(dsl_create.getKeyboardLanguages(), getKeyboardLanguages());
        dsl_create.setTotalRamMemory(getTotalMemory());
        dsl_create.setCpuModel(getCPUModel());
        dsl_create.setCpuCount(getCPUCount());
        dsl_create.setAndroid(fetchAndroidStaticDeviceInfo());
        dsl_create.setMadeWithUnity(MadeWithUnityDetector.isMadeWithUnity());
        this.staticDeviceInfo = dsl_create._build();
    }

    public final Context getContext() {
        return this.context;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public Object fetch(List<String> list, Continuation<? super StaticDeviceInfoOuterClass.StaticDeviceInfo> continuation) {
        AnonymousClass1 anonymousClass1;
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
        Object gPUModel = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(gPUModel);
            String gpuModel = this.staticDeviceInfo.getGpuModel();
            if (gpuModel != null && gpuModel.length() != 0) {
                return this.staticDeviceInfo;
            }
            anonymousClass1.L$0 = list;
            anonymousClass1.label = 1;
            gPUModel = getGPUModel(anonymousClass1);
            if (gPUModel == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            list = (List) anonymousClass1.L$0;
            ResultKt.throwOnFailure(gPUModel);
        }
        String str = (String) gPUModel;
        String str2 = str;
        if (str2 == null || str2.length() == 0) {
            return this.staticDeviceInfo;
        }
        StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo = this.staticDeviceInfo;
        StaticDeviceInfoKt.Dsl.Companion companion = StaticDeviceInfoKt.Dsl.INSTANCE;
        StaticDeviceInfoOuterClass.StaticDeviceInfo.Builder builder = staticDeviceInfo.toBuilder();
        Intrinsics.checkNotNullExpressionValue(builder, "toBuilder(...)");
        StaticDeviceInfoKt.Dsl dsl_create = companion._create(builder);
        dsl_create.setGpuModel(str);
        dsl_create.clearStores(dsl_create.getStores());
        dsl_create.addAllStores(dsl_create.getStores(), getStores(list));
        StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo_build = dsl_create._build();
        this.staticDeviceInfo = staticDeviceInfo_build;
        return staticDeviceInfo_build;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    /* JADX INFO: renamed from: fetchCached, reason: from getter */
    public StaticDeviceInfoOuterClass.StaticDeviceInfo getStaticDeviceInfo() {
        return this.staticDeviceInfo;
    }

    private final StaticDeviceInfoOuterClass.StaticDeviceInfo.Android fetchAndroidStaticDeviceInfo() {
        StaticDeviceInfoKt staticDeviceInfoKt = StaticDeviceInfoKt.INSTANCE;
        StaticDeviceInfoKt.AndroidKt.Dsl.Companion companion = StaticDeviceInfoKt.AndroidKt.Dsl.INSTANCE;
        StaticDeviceInfoOuterClass.StaticDeviceInfo.Android.Builder builderNewBuilder = StaticDeviceInfoOuterClass.StaticDeviceInfo.Android.newBuilder();
        Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
        StaticDeviceInfoKt.AndroidKt.Dsl dsl_create = companion._create(builderNewBuilder);
        dsl_create.setApiLevel(getApiLevel());
        dsl_create.setVersionCode(getVersionCode());
        dsl_create.setAndroidFingerprint(getFingerprint());
        dsl_create.setAppInstaller(getInstallerPackageName());
        dsl_create.setApkDeveloperSigningCertificateHash(getCertificateFingerprint());
        dsl_create.setBuildBoard(getBoard());
        dsl_create.setBuildBrand(getBrand());
        dsl_create.setBuildDevice(getDevice());
        dsl_create.setBuildDisplay(getDisplay());
        dsl_create.setBuildFingerprint(getFingerprint());
        dsl_create.setBuildHardware(getHardware());
        dsl_create.setBuildHost(getHost());
        dsl_create.setBuildBootloader(getBootloader());
        dsl_create.setBuildProduct(getProduct());
        dsl_create.setExtensionVersion(getExtensionVersion());
        String buildId = getBuildId();
        if (buildId != null) {
            dsl_create.setBuildId(buildId);
        }
        dsl_create.setPhoneType(getPhoneType());
        dsl_create.setSimOperator(getSimOperator());
        dsl_create.setJvmMaxMemory(getJvmMaxMemory());
        return dsl_create._build();
    }

    private final int getApiLevel() {
        return Build.VERSION.SDK_INT;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public String getOsVersion() {
        String str = Build.VERSION.RELEASE;
        return str == null ? "" : str;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public String getManufacturer() {
        String str = Build.MANUFACTURER;
        return str == null ? "" : str;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public String getModel() {
        String str = Build.MODEL;
        return str == null ? "" : str;
    }

    private final int getScreenLayout() {
        return this.context.getResources().getConfiguration().screenLayout;
    }

    public final String getAdvertisingTrackingId() {
        String advertisingTrackingId = AdvertisingId.getAdvertisingTrackingId();
        return advertisingTrackingId == null ? "" : advertisingTrackingId;
    }

    private final String getOpenAdvertisingTrackingId() {
        String openAdvertisingTrackingId = OpenAdvertisingId.getOpenAdvertisingTrackingId();
        return openAdvertisingTrackingId == null ? "" : openAdvertisingTrackingId;
    }

    public final boolean isLimitOpenAdTrackingEnabled() {
        return OpenAdvertisingId.getLimitedOpenAdTracking();
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public Object getIdfi(Continuation<? super String> continuation) {
        String string = AndroidPreferences.getString(UnityAdsConstants.Preferences.PREF_NAME_IDFI, UnityAdsConstants.Preferences.PREF_KEY_IDFI);
        if (string == null) {
            string = null;
        }
        if (string != null) {
            return string;
        }
        String string2 = UUID.randomUUID().toString();
        AndroidPreferences.setString(UnityAdsConstants.Preferences.PREF_NAME_IDFI, UnityAdsConstants.Preferences.PREF_KEY_IDFI, string2);
        return string2;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public String getAnalyticsUserId() {
        return this.analyticsDataSource.getUserId();
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public long getSystemBootTime() {
        return (System.currentTimeMillis() - SystemClock.elapsedRealtime()) / ((long) 1000);
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public Object getAuid(Continuation<? super String> continuation) {
        String string = AndroidPreferences.getString(UnityAdsConstants.Preferences.PREF_NAME_AUID, UnityAdsConstants.Preferences.PREF_KEY_AUID);
        if (string == null) {
            return null;
        }
        return string;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public Object getUnityBuildGuid(Continuation<? super String> continuation) {
        return this.unityBootConfigDataSource.getValue("build-guid");
    }

    private final float getDisplayMetricDensity() {
        DisplayMetrics displayMetrics;
        Resources resources = this.context.getResources();
        if (resources == null || (displayMetrics = resources.getDisplayMetrics()) == null) {
            return 0.0f;
        }
        return displayMetrics.density;
    }

    private final int getScreenDensity() {
        DisplayMetrics displayMetrics;
        Resources resources = this.context.getResources();
        if (resources == null || (displayMetrics = resources.getDisplayMetrics()) == null) {
            return -1;
        }
        return displayMetrics.densityDpi;
    }

    private final int getScreenWidth() {
        DisplayMetrics displayMetrics;
        Resources resources = this.context.getResources();
        if (resources == null || (displayMetrics = resources.getDisplayMetrics()) == null) {
            return -1;
        }
        return displayMetrics.widthPixels;
    }

    private final int getScreenHeight() {
        DisplayMetrics displayMetrics;
        Resources resources = this.context.getResources();
        if (resources == null || (displayMetrics = resources.getDisplayMetrics()) == null) {
            return -1;
        }
        return displayMetrics.heightPixels;
    }

    private final boolean isRooted() {
        try {
            return searchPathForBinary("su");
        } catch (Exception e) {
            this.logger.error("Rooted check failed", e);
            return false;
        }
    }

    private final boolean searchPathForBinary(String binary) {
        List listEmptyList;
        String[] strArr;
        File[] fileArrListFiles;
        String str = System.getenv(ENVIRONMENT_VARIABLE_PATH);
        if (str != null) {
            List<String> listSplit = new Regex(StringUtils.PROCESS_POSTFIX_DELIMITER).split(str, 0);
            if (listSplit != null) {
                if (!listSplit.isEmpty()) {
                    ListIterator<String> listIterator = listSplit.listIterator(listSplit.size());
                    while (true) {
                        if (listIterator.hasPrevious()) {
                            if (listIterator.previous().length() != 0) {
                                listEmptyList = CollectionsKt.take(listSplit, listIterator.nextIndex() + 1);
                                break;
                            }
                        } else {
                            listEmptyList = CollectionsKt.emptyList();
                            break;
                        }
                    }
                } else {
                    listEmptyList = CollectionsKt.emptyList();
                    break;
                }
                if (listEmptyList != null && (strArr = (String[]) listEmptyList.toArray(new String[0])) != null) {
                    for (String str2 : strArr) {
                        File file = new File(str2);
                        if (file.exists() && file.isDirectory() && (fileArrListFiles = file.listFiles()) != null) {
                            Iterator it = ArrayIteratorKt.iterator(fileArrListFiles);
                            while (it.hasNext()) {
                                if (Intrinsics.areEqual(((File) it.next()).getName(), binary)) {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    @Deprecated(message = "This constant was deprecated in API level 28. Use GET_SIGNING_CERTIFICATES instead")
    private final String getCertificateFingerprint() {
        try {
            Signature[] signatureArr = this.context.getPackageManager().getPackageInfo(this.context.getPackageName(), 64).signatures;
            if (signatureArr != null) {
                if (!(signatureArr.length == 0)) {
                    Certificate certificateGenerateCertificate = CertificateFactory.getInstance(CERTIFICATE_TYPE_X509).generateCertificate(new ByteArrayInputStream(signatureArr[0].toByteArray()));
                    Intrinsics.checkNotNull(certificateGenerateCertificate, "null cannot be cast to non-null type java.security.cert.X509Certificate");
                    String hexString = Utilities.toHexString(MessageDigest.getInstance(ALGORITHM_SHA1).digest(((X509Certificate) certificateGenerateCertificate).getEncoded()));
                    Intrinsics.checkNotNullExpressionValue(hexString, "toHexString(...)");
                    return hexString;
                }
                return "";
            }
            return "";
        } catch (Exception e) {
            this.logger.error("Exception when signing certificate fingerprint", e);
            return "";
        }
    }

    public final String getBoard() {
        String str = Build.BOARD;
        return str == null ? "" : str;
    }

    public final String getBootloader() {
        String str = Build.BOOTLOADER;
        return str == null ? "" : str;
    }

    public final String getBrand() {
        String str = Build.BRAND;
        return str == null ? "" : str;
    }

    public final String getDisplay() {
        String str = Build.DISPLAY;
        return str == null ? "" : str;
    }

    public final String getDevice() {
        String str = Build.DEVICE;
        return str == null ? "" : str;
    }

    public final String getHardware() {
        String str = Build.HARDWARE;
        return str == null ? "" : str;
    }

    public final String getHost() {
        String str = Build.HOST;
        return str == null ? "" : str;
    }

    public final String getProduct() {
        String str = Build.PRODUCT;
        return str == null ? "" : str;
    }

    private final String getFingerprint() {
        String str = Build.FINGERPRINT;
        return str == null ? "" : str;
    }

    @Deprecated(message = "This method was deprecated in API level 30. use getInstallSourceInfo")
    private final String getInstallerPackageName() {
        String installerPackageName = this.context.getPackageManager().getInstallerPackageName(this.context.getPackageName());
        return installerPackageName == null ? "" : installerPackageName;
    }

    public final List<String> getSupportedAbis() {
        if (getApiLevel() < 21) {
            return getOldAbiList();
        }
        return getNewAbiList();
    }

    public final List<Sensor> getSensorList() {
        Object systemService = this.context.getSystemService("sensor");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.hardware.SensorManager");
        List<Sensor> sensorList = ((SensorManager) systemService).getSensorList(-1);
        Intrinsics.checkNotNullExpressionValue(sensorList, "getSensorList(...)");
        return sensorList;
    }

    private final String getCPUModel() {
        if (Build.VERSION.SDK_INT >= 31) {
            String str = Build.SOC_MODEL;
            Intrinsics.checkNotNull(str);
            return str;
        }
        try {
            return (String) CollectionsKt.last(FilesKt.readLines$default(new File("/proc/cpuinfo"), null, 1, null));
        } catch (FileNotFoundException e) {
            this.logger.error("Error reading CPU model", e);
            return "";
        }
    }

    private final long getCPUCount() {
        return Runtime.getRuntime().availableProcessors();
    }

    private final long getJvmMaxMemory() {
        return Runtime.getRuntime().maxMemory();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object getGPUModel(Continuation<? super String> continuation) {
        C18371 c18371;
        if (continuation instanceof C18371) {
            c18371 = (C18371) continuation;
            if ((c18371.label & Integer.MIN_VALUE) != 0) {
                c18371.label -= Integer.MIN_VALUE;
            } else {
                c18371 = new C18371(continuation);
            }
        } else {
            c18371 = new C18371(continuation);
        }
        Object obj = c18371.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c18371.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            ByteStringDataSource byteStringDataSource = this.glInfoStore;
            c18371.label = 1;
            obj = byteStringDataSource.get(c18371);
            if (obj == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        return ((ByteStringStoreOuterClass.ByteStringStore) obj).getData().toString(Charsets.UTF_8);
    }

    public final String getBuildId() {
        return Build.ID;
    }

    public final String getBuildVersionIncremental() {
        return Build.VERSION.INCREMENTAL;
    }

    private final List<String> getOldAbiList() {
        ArrayList arrayList = new ArrayList();
        String CPU_ABI = Build.CPU_ABI;
        Intrinsics.checkNotNullExpressionValue(CPU_ABI, "CPU_ABI");
        arrayList.add(CPU_ABI);
        String CPU_ABI2 = Build.CPU_ABI2;
        Intrinsics.checkNotNullExpressionValue(CPU_ABI2, "CPU_ABI2");
        arrayList.add(CPU_ABI2);
        return arrayList;
    }

    private final ArrayList<String> getNewAbiList() {
        ArrayList<String> arrayList = new ArrayList<>();
        String[] strArr = Build.SUPPORTED_ABIS;
        arrayList.addAll(CollectionsKt.listOf(Arrays.copyOf(strArr, strArr.length)));
        return arrayList;
    }

    private final String getWebViewUserAgent() {
        try {
            String defaultUserAgent = WebSettings.getDefaultUserAgent(this.context);
            Intrinsics.checkNotNull(defaultUserAgent);
            return defaultUserAgent;
        } catch (Exception e) {
            this.logger.error("Exception getting webview user agent", e);
            return "";
        }
    }

    private final List<String> getStores(List<String> additionalStores) {
        return this.storeDataSource.fetchStores(additionalStores);
    }

    /* JADX WARN: Multi-variable type inference failed */
    static /* synthetic */ List getStores$default(AndroidStaticDeviceInfoDataSource androidStaticDeviceInfoDataSource, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            list = CollectionsKt.emptyList();
        }
        return androidStaticDeviceInfoDataSource.getStores(list);
    }

    private final long getAppStartTime() {
        return SdkProperties.getInitializationTimeEpoch();
    }

    private final String getVersionName() {
        return "4.20.0";
    }

    private final boolean isTestMode() {
        return SdkProperties.isTestMode();
    }

    private final String getPlatform() {
        return "android";
    }

    private final String getGameId() {
        String gameId = ClientProperties.getGameId();
        return gameId == null ? "" : gameId;
    }

    public final long getTotalMemory() {
        return getMemoryInfo(Device.MemoryInfoType.TOTAL_MEMORY);
    }

    private final long getMemoryInfo(Device.MemoryInfoType infoType) throws IOException {
        String line;
        FileNotFoundException e;
        Throwable th;
        int i = WhenMappings.$EnumSwitchMapping$0[infoType.ordinal()];
        int i2 = 1;
        if (i != 1) {
            i2 = 2;
            if (i != 2) {
                throw new NoWhenBranchMatchedException();
            }
        }
        try {
            try {
                RandomAccessFile randomAccessFile = new RandomAccessFile(AndroidDynamicDeviceInfoDataSource.DIRECTORY_MEM_INFO, AndroidDynamicDeviceInfoDataSource.DIRECTORY_MODE_READ);
                try {
                    RandomAccessFile randomAccessFile2 = randomAccessFile;
                    line = null;
                    for (int i3 = 0; i3 < i2; i3++) {
                        try {
                            line = randomAccessFile2.readLine();
                        } catch (Throwable th2) {
                            th = th2;
                            try {
                                throw th;
                            } catch (Throwable th3) {
                                CloseableKt.closeFinally(randomAccessFile, th);
                                throw th3;
                            }
                        }
                    }
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(randomAccessFile, null);
                    return GetMemoryValueFromStringKt.getMemoryValueFromString(line);
                } catch (Throwable th4) {
                    line = null;
                    th = th4;
                }
            } catch (FileNotFoundException e2) {
                e = e2;
                this.logger.error("Error reading memory info", e);
            }
        } catch (FileNotFoundException e3) {
            line = null;
            e = e3;
            this.logger.error("Error reading memory info", e);
        }
    }

    public final long getTotalSpace(File file) {
        if (file == null || !file.exists()) {
            return -1L;
        }
        return MathKt.roundToInt(file.getTotalSpace() / ((long) 1024));
    }

    private final long getTotalSpaceBytes(File file) {
        if (file == null || !file.exists()) {
            return -1L;
        }
        return file.getTotalSpace();
    }

    private final List<String> getKeyboardLanguages() {
        try {
            Object systemService = this.context.getSystemService("input_method");
            InputMethodManager inputMethodManager = systemService instanceof InputMethodManager ? (InputMethodManager) systemService : null;
            if (inputMethodManager != null) {
                LinkedHashSet linkedHashSet = new LinkedHashSet();
                List<InputMethodInfo> inputMethodList = inputMethodManager.getInputMethodList();
                Intrinsics.checkNotNullExpressionValue(inputMethodList, "getInputMethodList(...)");
                Iterator<T> it = inputMethodList.iterator();
                while (it.hasNext()) {
                    List<InputMethodSubtype> enabledInputMethodSubtypeList = inputMethodManager.getEnabledInputMethodSubtypeList((InputMethodInfo) it.next(), true);
                    Intrinsics.checkNotNull(enabledInputMethodSubtypeList);
                    Iterator<T> it2 = enabledInputMethodSubtypeList.iterator();
                    while (it2.hasNext()) {
                        String locale = ((InputMethodSubtype) it2.next()).getLocale();
                        Intrinsics.checkNotNullExpressionValue(locale, "getLocale(...)");
                        if (locale.length() > 0) {
                            linkedHashSet.add(locale);
                        }
                    }
                }
                return CollectionsKt.toList(linkedHashSet);
            }
            return CollectionsKt.emptyList();
        } catch (Exception e) {
            this.logger.error("Error getting keyboard languages", e);
            return CollectionsKt.emptyList();
        }
    }

    private final File getFileForStorageType(StorageType storageType) {
        int i = WhenMappings.$EnumSwitchMapping$1[storageType.ordinal()];
        if (i == 1) {
            return this.context.getCacheDir();
        }
        if (i == 2) {
            return this.context.getExternalCacheDir();
        }
        Logger.DefaultImpls.error$default(this.logger, "Unhandled storagetype: " + storageType, null, 2, null);
        return null;
    }

    @Override // com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource
    public String getAppName() {
        String packageName = this.context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
        return packageName;
    }

    private final String getAppVersion() {
        String str;
        String packageName = this.context.getPackageName();
        PackageManager packageManager = this.context.getPackageManager();
        try {
            if (packageManager.getPackageInfo(packageName, 0).versionName == null) {
                str = APP_VERSION_FAKE;
            } else {
                str = packageManager.getPackageInfo(packageName, 0).versionName;
            }
            Intrinsics.checkNotNull(str);
            return str;
        } catch (PackageManager.NameNotFoundException e) {
            this.logger.error("Error getting package info", e);
            return "";
        }
    }

    private final boolean isAppDebuggable() {
        PackageManager packageManager = this.context.getPackageManager();
        Intrinsics.checkNotNullExpressionValue(packageManager, "getPackageManager(...)");
        String packageName = this.context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
        boolean z = true;
        boolean zAreEqual = false;
        try {
            ApplicationInfo applicationInfo = packageManager.getApplicationInfo(packageName, 0);
            Intrinsics.checkNotNullExpressionValue(applicationInfo, "getApplicationInfo(...)");
            applicationInfo.flags &= 2;
            if (applicationInfo.flags != 0) {
                zAreEqual = true;
                z = false;
            } else {
                z = false;
            }
        } catch (PackageManager.NameNotFoundException e) {
            this.logger.error("Could not find name", e);
        }
        if (z) {
            try {
                Iterator it = ArrayIteratorKt.iterator(packageManager.getPackageInfo(packageName, 64).signatures);
                while (it.hasNext()) {
                    Certificate certificateGenerateCertificate = CertificateFactory.getInstance(CERTIFICATE_TYPE_X509).generateCertificate(new ByteArrayInputStream(((Signature) it.next()).toByteArray()));
                    Intrinsics.checkNotNull(certificateGenerateCertificate, "null cannot be cast to non-null type java.security.cert.X509Certificate");
                    zAreEqual = Intrinsics.areEqual(((X509Certificate) certificateGenerateCertificate).getSubjectX500Principal(), this.DEBUG_CERT);
                    if (zAreEqual) {
                        break;
                    }
                }
            } catch (PackageManager.NameNotFoundException e2) {
                this.logger.error("Could not find name", e2);
            } catch (CertificateException e3) {
                this.logger.error("Certificate exception", e3);
            }
        }
        return zAreEqual;
    }

    private final int getExtensionVersion() {
        if (Build.VERSION.SDK_INT >= 30) {
            return SdkExtensions.getExtensionVersion(30);
        }
        return -1;
    }

    public final boolean hasX264Decoder() {
        return !selectAllDecodeCodecs("video/avc").isEmpty();
    }

    public final boolean hasX265Decoder() {
        return !selectAllDecodeCodecs("video/hevc").isEmpty();
    }

    private final List<MediaCodecInfo> selectAllDecodeCodecs(String mimeType) {
        ArrayList arrayList = new ArrayList();
        int codecCount = MediaCodecList.getCodecCount();
        for (int i = 0; i < codecCount; i++) {
            MediaCodecInfo codecInfoAt = MediaCodecList.getCodecInfoAt(i);
            if (!codecInfoAt.isEncoder()) {
                for (String str : codecInfoAt.getSupportedTypes()) {
                    if (StringsKt.equals(str, mimeType, true)) {
                        Intrinsics.checkNotNull(codecInfoAt);
                        if (isHardwareAccelerated(codecInfoAt, mimeType)) {
                            arrayList.add(codecInfoAt);
                        }
                    }
                }
            }
        }
        return arrayList;
    }

    private final boolean isHardwareAccelerated(MediaCodecInfo codecInfo, String mimeType) {
        if (getApiLevel() >= 29) {
            return isHardwareAcceleratedV29(codecInfo);
        }
        return !isSoftwareOnly(codecInfo, mimeType);
    }

    private final boolean isHardwareAcceleratedV29(MediaCodecInfo codecInfo) {
        return codecInfo.isHardwareAccelerated();
    }

    private final boolean isSoftwareOnly(MediaCodecInfo codecInfo, String mimeType) {
        if (getApiLevel() >= 29) {
            return isSoftwareOnlyV29(codecInfo);
        }
        String name = codecInfo.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        String lowerCase = name.toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        if (StringsKt.startsWith$default(lowerCase, "arc.", false, 2, (Object) null)) {
            return false;
        }
        if (StringsKt.startsWith$default(lowerCase, "omx.google.", false, 2, (Object) null) || StringsKt.startsWith$default(lowerCase, "omx.ffmpeg.", false, 2, (Object) null)) {
            return true;
        }
        if ((StringsKt.startsWith$default(lowerCase, "omx.sec.", false, 2, (Object) null) && StringsKt.contains$default((CharSequence) lowerCase, (CharSequence) ".sw.", false, 2, (Object) null)) || Intrinsics.areEqual(lowerCase, "omx.qcom.video.decoder.hevcswvdec") || StringsKt.startsWith$default(lowerCase, "c2.android.", false, 2, (Object) null) || StringsKt.startsWith$default(lowerCase, "c2.google.", false, 2, (Object) null)) {
            return true;
        }
        return (StringsKt.startsWith$default(lowerCase, "omx.", false, 2, (Object) null) || StringsKt.startsWith$default(lowerCase, "c2.", false, 2, (Object) null)) ? false : true;
    }

    private final boolean isSoftwareOnlyV29(MediaCodecInfo codecInfo) {
        return codecInfo.isSoftwareOnly();
    }

    private final int getPhoneType() {
        Object systemService = this.context.getSystemService("phone");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.telephony.TelephonyManager");
        return ((TelephonyManager) systemService).getPhoneType();
    }

    private final String getSimOperator() {
        Object systemService = this.context.getSystemService("phone");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.telephony.TelephonyManager");
        String simOperator = ((TelephonyManager) systemService).getSimOperator();
        Intrinsics.checkNotNullExpressionValue(simOperator, "getSimOperator(...)");
        return simOperator;
    }
}
