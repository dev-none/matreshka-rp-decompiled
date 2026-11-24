package com.vk.id.multibranding;

import androidx.compose.foundation.BackgroundKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.multibranding.common.style.OAuthListWidgetStyle;
import io.appmetrica.analytics.impl.H2;
import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthListWidgetBackgroundStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¨\u0006\u0004"}, d2 = {H2.g, "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "multibranding-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OAuthListWidgetBackgroundStyleKt {
    public static final Modifier background(Modifier modifier, final OAuthListWidgetStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return ComposedModifierKt.composed$default(modifier, null, new Function3<Modifier, Composer, Integer, Modifier>() { // from class: com.vk.id.multibranding.OAuthListWidgetBackgroundStyleKt.background.1
            @Override // kotlin.jvm.functions.Function3
            public /* bridge */ /* synthetic */ Modifier invoke(Modifier modifier2, Composer composer, Integer num) {
                return invoke(modifier2, composer, num.intValue());
            }

            public final Modifier invoke(Modifier composed, Composer composer, int i) {
                Intrinsics.checkNotNullParameter(composed, "$this$composed");
                composer.startReplaceGroup(-1988635233);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1988635233, i, -1, "com.vk.id.multibranding.background.<anonymous> (OAuthListWidgetBackgroundStyle.kt:12)");
                }
                Modifier modifierM276backgroundbw27NRU$default = BackgroundKt.m276backgroundbw27NRU$default(composed, ColorResources_androidKt.colorResource(style instanceof OAuthListWidgetStyle.Light ? R.color.vkid_white : R.color.vkid_transparent, composer, 0), null, 2, null);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                composer.endReplaceGroup();
                return modifierM276backgroundbw27NRU$default;
            }
        }, 1, null);
    }
}
