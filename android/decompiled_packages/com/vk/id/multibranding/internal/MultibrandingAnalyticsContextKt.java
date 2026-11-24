package com.vk.id.multibranding.internal;

import androidx.compose.runtime.CompositionLocalKt;
import androidx.compose.runtime.ProvidableCompositionLocal;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;

/* JADX INFO: compiled from: MultibrandingAnalyticsContext.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\"\"\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00018\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"LocalMultibrandingAnalyticsContext", "Landroidx/compose/runtime/ProvidableCompositionLocal;", "Lcom/vk/id/multibranding/internal/MultibrandingAnalyticsContext;", "getLocalMultibrandingAnalyticsContext$annotations", "()V", "getLocalMultibrandingAnalyticsContext", "()Landroidx/compose/runtime/ProvidableCompositionLocal;", "multibranding-internal_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class MultibrandingAnalyticsContextKt {
    private static final ProvidableCompositionLocal<MultibrandingAnalyticsContext> LocalMultibrandingAnalyticsContext = CompositionLocalKt.staticCompositionLocalOf(new Function0() { // from class: com.vk.id.multibranding.internal.MultibrandingAnalyticsContextKt$$ExternalSyntheticLambda0
        @Override // kotlin.jvm.functions.Function0
        public final Object invoke() {
            return MultibrandingAnalyticsContextKt.LocalMultibrandingAnalyticsContext$lambda$0();
        }
    });

    @InternalVKIDApi
    public static /* synthetic */ void getLocalMultibrandingAnalyticsContext$annotations() {
    }

    public static final ProvidableCompositionLocal<MultibrandingAnalyticsContext> getLocalMultibrandingAnalyticsContext() {
        return LocalMultibrandingAnalyticsContext;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MultibrandingAnalyticsContext LocalMultibrandingAnalyticsContext$lambda$0() {
        return new MultibrandingAnalyticsContext("multibranding_widget", false);
    }
}
