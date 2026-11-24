package ru.ok.tracer.lite;

import android.content.Context;
import android.util.Log;
import io.sentry.protocol.OperatingSystem;
import java.util.concurrent.Executor;
import javax.inject.Provider;
import kotlin.Deprecated;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.inject.ProviderUtils;
import ru.ok.tracer.base.manifest.TracerLiteManifestUtils;
import ru.ok.tracer.base.sessionuuuid.SessionUuidUtils;
import ru.ok.tracer.lite.limits.TracerLiteLimits;
import ru.ok.tracer.lite.upload.TracerDropHolder;
import ru.ok.tracer.lite.upload.TracerLiteHttpClientHolder;
import ru.ok.tracer.lite.utils.TracerExecutorsHolder;
import ru.ok.tracer.manifest.TracerLiteManifest;

/* JADX INFO: compiled from: TracerLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001:\u0001=B!\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u0006\u00108\u001a\u000209J\u0018\u0010:\u001a\u0002092\u0006\u0010;\u001a\u00020\u00052\b\u0010<\u001a\u0004\u0018\u00010\u0005R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0014\u0010\r\u001a\u00020\u000eX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0011\u001a\u00020\u0012X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0015\u001a\u00020\u0016X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0011\u0010\u0019\u001a\u00020\u001a8F¢\u0006\u0006\u001a\u0004\b\u0019\u0010\u001bR\u000e\u0010\u001c\u001a\u00020\u001aX\u0082\u000e¢\u0006\u0002\n\u0000R\u0013\u0010\u001d\u001a\u0004\u0018\u00010\u00058F¢\u0006\u0006\u001a\u0004\b\u001e\u0010\u001fR\u001b\u0010 \u001a\u00020!8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b$\u0010%\u001a\u0004\b\"\u0010#R\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b&\u0010'\u001a\u0004\b(\u0010\u001fR\u0014\u0010)\u001a\u00020*X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b+\u0010,R\u001d\u0010-\u001a\u0004\u0018\u00010.8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b1\u0010%\u001a\u0004\b/\u00100R\u0011\u00102\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b3\u0010\u001fR\u0014\u00104\u001a\u000205X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b6\u00107¨\u0006>"}, d2 = {"Lru/ok/tracer/lite/TracerLite;", "", "context", "Landroid/content/Context;", "libraryPackageName", "", "configuration", "Lru/ok/tracer/lite/TracerLite$Configuration;", "(Landroid/content/Context;Ljava/lang/String;Lru/ok/tracer/lite/TracerLite$Configuration;)V", "getConfiguration", "()Lru/ok/tracer/lite/TracerLite$Configuration;", "getContext", "()Landroid/content/Context;", "dropHolder", "Lru/ok/tracer/lite/upload/TracerDropHolder;", "getDropHolder$tracer_lite_commons_release", "()Lru/ok/tracer/lite/upload/TracerDropHolder;", "executorHolder", "Lru/ok/tracer/lite/utils/TracerExecutorsHolder;", "getExecutorHolder$tracer_lite_commons_release", "()Lru/ok/tracer/lite/utils/TracerExecutorsHolder;", "httpClientHolder", "Lru/ok/tracer/lite/upload/TracerLiteHttpClientHolder;", "getHttpClientHolder$tracer_lite_commons_release", "()Lru/ok/tracer/lite/upload/TracerLiteHttpClientHolder;", "isDisabled", "", "()Z", "isExplicitlyDisabled", "libToken", "getLibToken", "()Ljava/lang/String;", "libraryInfo", "Lru/ok/tracer/lite/TracerLibraryInfo;", "getLibraryInfo", "()Lru/ok/tracer/lite/TracerLibraryInfo;", "libraryInfo$delegate", "Lkotlin/Lazy;", "getLibraryPackageName$annotations", "()V", "getLibraryPackageName", "limits", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "getLimits$tracer_lite_commons_release", "()Lru/ok/tracer/lite/limits/TracerLiteLimits;", "manifest", "Lru/ok/tracer/manifest/TracerLiteManifest;", "getManifest", "()Lru/ok/tracer/manifest/TracerLiteManifest;", "manifest$delegate", "sessionUuid", "getSessionUuid", "tagsStorage", "Lru/ok/tracer/lite/TagsStorageLite;", "getTagsStorage$tracer_lite_commons_release", "()Lru/ok/tracer/lite/TagsStorageLite;", "disable", "", "setKey", "key", "value", "Configuration", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerLite {
    private final Configuration configuration;
    private final Context context;
    private final TracerDropHolder dropHolder;
    private final TracerExecutorsHolder executorHolder;
    private final TracerLiteHttpClientHolder httpClientHolder;
    private volatile boolean isExplicitlyDisabled;

    /* JADX INFO: renamed from: libraryInfo$delegate, reason: from kotlin metadata */
    private final Lazy libraryInfo;
    private final String libraryPackageName;
    private final TracerLiteLimits limits;

    /* JADX INFO: renamed from: manifest$delegate, reason: from kotlin metadata */
    private final Lazy manifest;
    private final TagsStorageLite tagsStorage;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public TracerLite(Context context, String libraryPackageName) {
        this(context, libraryPackageName, null, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
    }

    @Deprecated(message = "Will be internal")
    public static /* synthetic */ void getLibraryPackageName$annotations() {
    }

    public TracerLite(Context context, String libraryPackageName, Configuration configuration) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        this.libraryPackageName = libraryPackageName;
        this.configuration = configuration;
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
        this.context = applicationContext;
        this.manifest = LazyKt.lazy(LazyThreadSafetyMode.PUBLICATION, (Function0) new Function0<TracerLiteManifest>() { // from class: ru.ok.tracer.lite.TracerLite$manifest$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final TracerLiteManifest invoke() {
                try {
                    return TracerLiteManifestUtils.requireTracerLiteManifest(this.this$0.getLibraryPackageName());
                } catch (Exception unused) {
                    Log.e("Tracer", "Could not find manifest for library " + this.this$0.getLibraryPackageName());
                    return null;
                }
            }
        });
        this.libraryInfo = LazyKt.lazy(LazyThreadSafetyMode.PUBLICATION, (Function0) new Function0<TracerLibraryInfo>() { // from class: ru.ok.tracer.lite.TracerLite$libraryInfo$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final TracerLibraryInfo invoke() {
                String strVersionName;
                String libraryPackageName2 = this.this$0.getLibraryPackageName();
                TracerLiteManifest manifest = this.this$0.getManifest();
                if (manifest == null || (strVersionName = manifest.versionName()) == null) {
                    strVersionName = "NA";
                }
                TracerLiteManifest manifest2 = this.this$0.getManifest();
                String strBuildUuid = manifest2 != null ? manifest2.buildUuid() : null;
                TracerLiteManifest manifest3 = this.this$0.getManifest();
                return new TracerLibraryInfo(libraryPackageName2, strVersionName, strBuildUuid, manifest3 != null ? manifest3.environment() : null);
            }
        });
        this.tagsStorage = new TagsStorageLite(configuration.getMaxKeysCount());
        this.dropHolder = new TracerDropHolder(context, libraryPackageName);
        this.httpClientHolder = new TracerLiteHttpClientHolder(context, libraryPackageName, configuration.getTrafficStatsTag());
        this.executorHolder = new TracerExecutorsHolder(configuration.getIoExecutor(), libraryPackageName);
        this.limits = new TracerLiteLimits(context, libraryPackageName);
    }

    public final String getLibraryPackageName() {
        return this.libraryPackageName;
    }

    public /* synthetic */ TracerLite(Context context, String str, Configuration configuration, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, str, (i & 4) != 0 ? new Configuration.Builder().build() : configuration);
    }

    public final Configuration getConfiguration() {
        return this.configuration;
    }

    public final boolean isDisabled() {
        if (this.isExplicitlyDisabled) {
            return true;
        }
        TracerLiteManifest manifest = getManifest();
        if (manifest != null && !manifest.isDisabled()) {
            return false;
        }
        this.isExplicitlyDisabled = true;
        return true;
    }

    public final Context getContext() {
        return this.context;
    }

    public final String getSessionUuid() {
        return SessionUuidUtils.getCurrentSessionUuid();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final TracerLiteManifest getManifest() {
        return (TracerLiteManifest) this.manifest.getValue();
    }

    public final String getLibToken() {
        String str = this.configuration.getOverrideLibToken$tracer_lite_commons_release().get();
        if (str != null) {
            return str;
        }
        TracerLiteManifest manifest = getManifest();
        if (manifest != null) {
            if (manifest.isDisabled()) {
                manifest = null;
            }
            if (manifest != null) {
                return manifest.appToken();
            }
        }
        return null;
    }

    public final TracerLibraryInfo getLibraryInfo() {
        return (TracerLibraryInfo) this.libraryInfo.getValue();
    }

    /* JADX INFO: renamed from: getTagsStorage$tracer_lite_commons_release, reason: from getter */
    public final TagsStorageLite getTagsStorage() {
        return this.tagsStorage;
    }

    /* JADX INFO: renamed from: getDropHolder$tracer_lite_commons_release, reason: from getter */
    public final TracerDropHolder getDropHolder() {
        return this.dropHolder;
    }

    /* JADX INFO: renamed from: getHttpClientHolder$tracer_lite_commons_release, reason: from getter */
    public final TracerLiteHttpClientHolder getHttpClientHolder() {
        return this.httpClientHolder;
    }

    /* JADX INFO: renamed from: getExecutorHolder$tracer_lite_commons_release, reason: from getter */
    public final TracerExecutorsHolder getExecutorHolder() {
        return this.executorHolder;
    }

    /* JADX INFO: renamed from: getLimits$tracer_lite_commons_release, reason: from getter */
    public final TracerLiteLimits getLimits() {
        return this.limits;
    }

    public final void disable() {
        this.isExplicitlyDisabled = true;
    }

    public final void setKey(String key, String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        if (this.isExplicitlyDisabled) {
            Log.d("Tracer", "Tracer is disabled");
        } else {
            this.tagsStorage.setKey(key, value);
        }
    }

    /* JADX INFO: compiled from: TracerLite.kt */
    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\n\u0018\u0000 \u00192\u00020\u0001:\u0002\u0018\u0019B\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0011\u0010\u0005\u001a\u00020\u00068F¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bR\u0016\u0010\t\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00060\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0014\u0010\u000f\u001a\u00020\u0010X\u0080D¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u001e\u0010\u0013\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010\u00060\nX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0014\u0010\u0016\u001a\u00020\u0010X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0012¨\u0006\u001a"}, d2 = {"Lru/ok/tracer/lite/TracerLite$Configuration;", "", "builder", "Lru/ok/tracer/lite/TracerLite$Configuration$Builder;", "(Lru/ok/tracer/lite/TracerLite$Configuration$Builder;)V", "apiUrl", "", "getApiUrl", "()Ljava/lang/String;", "apiUrlProvider", "Ljavax/inject/Provider;", "ioExecutor", "Ljava/util/concurrent/Executor;", "getIoExecutor$tracer_lite_commons_release", "()Ljava/util/concurrent/Executor;", "maxKeysCount", "", "getMaxKeysCount$tracer_lite_commons_release", "()I", "overrideLibToken", "getOverrideLibToken$tracer_lite_commons_release", "()Ljavax/inject/Provider;", "trafficStatsTag", "getTrafficStatsTag$tracer_lite_commons_release", "Builder", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Configuration {

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        public static final String DEFAULT_API_URL = "https://sdk-api.apptracer.ru";
        private final Provider<? extends String> apiUrlProvider;
        private final Executor ioExecutor;
        private final int maxKeysCount;
        private final Provider<? extends String> overrideLibToken;
        private final int trafficStatsTag;

        public /* synthetic */ Configuration(Builder builder, DefaultConstructorMarker defaultConstructorMarker) {
            this(builder);
        }

        private Configuration(Builder builder) {
            this.apiUrlProvider = builder.getApiUrlProvider();
            this.trafficStatsTag = builder.getTrafficStatsTag();
            this.overrideLibToken = builder.getOverrideLibTokenProvider();
            this.maxKeysCount = builder.getExperimentalMaxKeysCount();
            this.ioExecutor = builder.getIoExecutor();
        }

        public final String getApiUrl() {
            String str = this.apiUrlProvider.get();
            Intrinsics.checkNotNullExpressionValue(str, "apiUrlProvider.get()");
            return str;
        }

        /* JADX INFO: renamed from: getTrafficStatsTag$tracer_lite_commons_release, reason: from getter */
        public final int getTrafficStatsTag() {
            return this.trafficStatsTag;
        }

        public final Provider<? extends String> getOverrideLibToken$tracer_lite_commons_release() {
            return this.overrideLibToken;
        }

        /* JADX INFO: renamed from: getMaxKeysCount$tracer_lite_commons_release, reason: from getter */
        public final int getMaxKeysCount() {
            return this.maxKeysCount;
        }

        /* JADX INFO: renamed from: getIoExecutor$tracer_lite_commons_release, reason: from getter */
        public final Executor getIoExecutor() {
            return this.ioExecutor;
        }

        /* JADX INFO: compiled from: TracerLite.kt */
        @Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0006\u0010$\u001a\u00020%R$\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0003\u001a\u00020\u00048F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR \u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0010\u001a\u00020\u0011X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u001c\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R(\u0010\u001a\u001a\u0004\u0018\u00010\u00042\b\u0010\u0003\u001a\u0004\u0018\u00010\u00048F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u001b\u0010\u0007\"\u0004\b\u001c\u0010\tR$\u0010\u001d\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010\u00040\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\r\"\u0004\b\u001f\u0010\u000fR\u001a\u0010 \u001a\u00020\u0011X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\u0013\"\u0004\b\"\u0010#¨\u0006&"}, d2 = {"Lru/ok/tracer/lite/TracerLite$Configuration$Builder;", "", "()V", "value", "", "apiUrl", "getApiUrl", "()Ljava/lang/String;", "setApiUrl", "(Ljava/lang/String;)V", "apiUrlProvider", "Ljavax/inject/Provider;", "getApiUrlProvider", "()Ljavax/inject/Provider;", "setApiUrlProvider", "(Ljavax/inject/Provider;)V", "experimentalMaxKeysCount", "", "getExperimentalMaxKeysCount", "()I", "ioExecutor", "Ljava/util/concurrent/Executor;", "getIoExecutor", "()Ljava/util/concurrent/Executor;", "setIoExecutor", "(Ljava/util/concurrent/Executor;)V", "overrideLibToken", "getOverrideLibToken", "setOverrideLibToken", "overrideLibTokenProvider", "getOverrideLibTokenProvider", "setOverrideLibTokenProvider", "trafficStatsTag", "getTrafficStatsTag", "setTrafficStatsTag", "(I)V", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/lite/TracerLite$Configuration;", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Builder {
            private Executor ioExecutor;
            private Provider<String> apiUrlProvider = ProviderUtils.providerOf(Configuration.DEFAULT_API_URL);
            private Provider<? extends String> overrideLibTokenProvider = ProviderUtils.providerOf(null);
            private int trafficStatsTag = -1;
            private final int experimentalMaxKeysCount = 30;

            public final String getApiUrl() {
                String str = this.apiUrlProvider.get();
                Intrinsics.checkNotNullExpressionValue(str, "apiUrlProvider.get()");
                return str;
            }

            public final void setApiUrl(String value) {
                Intrinsics.checkNotNullParameter(value, "value");
                this.apiUrlProvider = ProviderUtils.providerOf(value);
            }

            public final Provider<String> getApiUrlProvider() {
                return this.apiUrlProvider;
            }

            public final void setApiUrlProvider(Provider<String> provider) {
                Intrinsics.checkNotNullParameter(provider, "<set-?>");
                this.apiUrlProvider = provider;
            }

            public final String getOverrideLibToken() {
                return this.overrideLibTokenProvider.get();
            }

            public final void setOverrideLibToken(String str) {
                this.overrideLibTokenProvider = ProviderUtils.providerOf(str);
            }

            public final Provider<? extends String> getOverrideLibTokenProvider() {
                return this.overrideLibTokenProvider;
            }

            public final void setOverrideLibTokenProvider(Provider<? extends String> provider) {
                Intrinsics.checkNotNullParameter(provider, "<set-?>");
                this.overrideLibTokenProvider = provider;
            }

            public final int getTrafficStatsTag() {
                return this.trafficStatsTag;
            }

            public final void setTrafficStatsTag(int i) {
                this.trafficStatsTag = i;
            }

            public final int getExperimentalMaxKeysCount() {
                return this.experimentalMaxKeysCount;
            }

            public final Executor getIoExecutor() {
                return this.ioExecutor;
            }

            public final void setIoExecutor(Executor executor) {
                this.ioExecutor = executor;
            }

            public final Configuration build() {
                return new Configuration(this, null);
            }
        }

        /* JADX INFO: compiled from: TracerLite.kt */
        @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001f\u0010\u0005\u001a\u00020\u00062\u0017\u0010\u0007\u001a\u0013\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\n0\b¢\u0006\u0002\b\u000bR\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lru/ok/tracer/lite/TracerLite$Configuration$Companion;", "", "()V", "DEFAULT_API_URL", "", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/lite/TracerLite$Configuration;", "block", "Lkotlin/Function1;", "Lru/ok/tracer/lite/TracerLite$Configuration$Builder;", "", "Lkotlin/ExtensionFunctionType;", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final Configuration build(Function1<? super Builder, Unit> block) {
                Intrinsics.checkNotNullParameter(block, "block");
                Builder builder = new Builder();
                block.invoke(builder);
                return builder.build();
            }
        }
    }
}
