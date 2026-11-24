package com.vk.id.multibranding;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.multibranding.common.style.InternalVKIDOAuthListWidgetTextStyle;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthListWidgetTextStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0001¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asColorResource", "Landroidx/compose/ui/graphics/Color;", "Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetTextStyle;", "(Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetTextStyle;Landroidx/compose/runtime/Composer;I)J", "multibranding-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OAuthListWidgetTextStyleKt {
    public static final long asColorResource(InternalVKIDOAuthListWidgetTextStyle internalVKIDOAuthListWidgetTextStyle, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(internalVKIDOAuthListWidgetTextStyle, "<this>");
        composer.startReplaceGroup(-1257799198);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-1257799198, i, -1, "com.vk.id.multibranding.asColorResource (OAuthListWidgetTextStyle.kt:10)");
        }
        if (internalVKIDOAuthListWidgetTextStyle == InternalVKIDOAuthListWidgetTextStyle.DARK) {
            jColorResource = Color.INSTANCE.m4159getBlack0d7_KjU();
        } else {
            if (internalVKIDOAuthListWidgetTextStyle != InternalVKIDOAuthListWidgetTextStyle.LIGHT) {
                throw new NoWhenBranchMatchedException();
            }
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_text_dark_primary, composer, 0);
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }
}
