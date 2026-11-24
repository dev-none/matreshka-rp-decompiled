package com.unity3d.ads.core.domain.coherence;

import android.content.Context;
import com.google.protobuf.ByteString;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import com.unity3d.ads.core.extensions.TimeExtensionsKt;
import com.unity3d.ads.core.log.Logger;
import com.unity3d.coherence.CoherenceInitConfig;
import com.unity3d.coherence.CoherenceLibrary;
import com.unity3d.coherence.CommonAttributesConfig;
import io.sentry.SentryEvent;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.time.TimeSource;

/* JADX INFO: compiled from: AndroidCoherenceLibraryManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\b\u0010\u000e\u001a\u00020\u000fH\u0002J\n\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u0016R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\n\u001a\n \u000b*\u0004\u0018\u00010\u00030\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/unity3d/ads/core/domain/coherence/AndroidCoherenceLibraryManager;", "Lcom/unity3d/ads/core/domain/coherence/CoherenceLibraryManager;", "context", "Landroid/content/Context;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "<init>", "(Landroid/content/Context;Lcom/unity3d/ads/core/log/Logger;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;)V", "appContext", "kotlin.jvm.PlatformType", "initialized", "Ljava/util/concurrent/atomic/AtomicBoolean;", "initialize", "", "getCommonAttributes", "", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidCoherenceLibraryManager implements CoherenceLibraryManager {
    private final Context appContext;
    private final AtomicBoolean initialized;
    private final Logger logger;
    private final SendDiagnosticEvent sendDiagnosticEvent;

    public AndroidCoherenceLibraryManager(Context context, Logger logger, SendDiagnosticEvent sendDiagnosticEvent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(logger, "logger");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        this.logger = logger;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.appContext = context.getApplicationContext();
        this.initialized = new AtomicBoolean(false);
    }

    private final void initialize() {
        if (this.initialized.get()) {
            return;
        }
        synchronized (this) {
            if (this.initialized.get()) {
                return;
            }
            CoherenceInitConfig coherenceInitConfigBuild = new CoherenceInitConfig.Builder(this.appContext).setSource(2).build();
            Intrinsics.checkNotNullExpressionValue(coherenceInitConfigBuild, "build(...)");
            long jM11326markNowz9LOYto = TimeSource.Monotonic.INSTANCE.m11326markNowz9LOYto();
            CoherenceLibrary.init(coherenceInitConfigBuild);
            this.initialized.set(true);
            Unit unit = Unit.INSTANCE;
            SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, "native_coherence_init_time", Double.valueOf(TimeExtensionsKt.elapsedMillis(TimeSource.Monotonic.ValueTimeMark.m11327boximpl(jM11326markNowz9LOYto))), (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 124, (Object) null);
        }
    }

    @Override // com.unity3d.ads.core.domain.coherence.CoherenceLibraryManager
    public byte[] getCommonAttributes() {
        try {
            initialize();
            CommonAttributesConfig commonAttributesConfigBuild = new CommonAttributesConfig.Builder().build();
            Intrinsics.checkNotNullExpressionValue(commonAttributesConfigBuild, "build(...)");
            long jM11326markNowz9LOYto = TimeSource.Monotonic.INSTANCE.m11326markNowz9LOYto();
            byte[] commonAttributes = CoherenceLibrary.getInstance().getAttributesProvider().getCommonAttributes(commonAttributesConfigBuild);
            if (commonAttributes != null) {
                SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, "native_coherence_get_common_attributes_time", Double.valueOf(TimeExtensionsKt.elapsedMillis(TimeSource.Monotonic.ValueTimeMark.m11327boximpl(jM11326markNowz9LOYto))), (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 124, (Object) null);
            }
            return commonAttributes;
        } catch (Throwable th) {
            this.logger.error("CoherenceLibrary fetching payload failed", th);
            return null;
        }
    }
}
