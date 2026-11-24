package com.vk.id.multibranding;

import androidx.compose.foundation.BorderKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.unit.Dp;
import com.vk.id.multibranding.common.style.InternalVKIDOAuthListWidgetBorderStyle;
import com.vk.id.multibranding.common.style.OAuthListWidgetCornersStyle;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthListWidgetBorderStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001c\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0000¨\u0006\u0006"}, d2 = {"border", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetBorderStyle;", "cornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "multibranding-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OAuthListWidgetBorderStyleKt {
    public static final Modifier border(Modifier modifier, final InternalVKIDOAuthListWidgetBorderStyle style, final OAuthListWidgetCornersStyle cornersStyle) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
        return ComposedModifierKt.composed$default(modifier, null, new Function3<Modifier, Composer, Integer, Modifier>() { // from class: com.vk.id.multibranding.OAuthListWidgetBorderStyleKt.border.1

            /* JADX INFO: renamed from: com.vk.id.multibranding.OAuthListWidgetBorderStyleKt$border$1$WhenMappings */
            /* JADX INFO: compiled from: OAuthListWidgetBorderStyle.kt */
            @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
            public /* synthetic */ class WhenMappings {
                public static final /* synthetic */ int[] $EnumSwitchMapping$0;

                static {
                    int[] iArr = new int[InternalVKIDOAuthListWidgetBorderStyle.values().length];
                    try {
                        iArr[InternalVKIDOAuthListWidgetBorderStyle.DARK.ordinal()] = 1;
                    } catch (NoSuchFieldError unused) {
                    }
                    try {
                        iArr[InternalVKIDOAuthListWidgetBorderStyle.LIGHT.ordinal()] = 2;
                    } catch (NoSuchFieldError unused2) {
                    }
                    $EnumSwitchMapping$0 = iArr;
                }
            }

            @Override // kotlin.jvm.functions.Function3
            public /* bridge */ /* synthetic */ Modifier invoke(Modifier modifier2, Composer composer, Integer num) {
                return invoke(modifier2, composer, num.intValue());
            }

            public final Modifier invoke(Modifier composed, Composer composer, int i) {
                Modifier modifierM287borderxT4_qwU;
                Intrinsics.checkNotNullParameter(composed, "$this$composed");
                composer.startReplaceGroup(-1853023936);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1853023936, i, -1, "com.vk.id.multibranding.border.<anonymous> (OAuthListWidgetBorderStyle.kt:20)");
                }
                int i2 = WhenMappings.$EnumSwitchMapping$0[style.ordinal()];
                if (i2 == 1) {
                    composer.startReplaceGroup(-1356183773);
                    modifierM287borderxT4_qwU = BorderKt.m287borderxT4_qwU(composed, Dp.m6850constructorimpl(1), ColorResources_androidKt.colorResource(R.color.vkid_black_alpha12, composer, 0), RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(cornersStyle.getRadiusDp())));
                    composer.endReplaceGroup();
                } else {
                    if (i2 != 2) {
                        composer.startReplaceGroup(-1356185697);
                        composer.endReplaceGroup();
                        throw new NoWhenBranchMatchedException();
                    }
                    composer.startReplaceGroup(-1356176093);
                    modifierM287borderxT4_qwU = BorderKt.m287borderxT4_qwU(composed, Dp.m6850constructorimpl(1), ColorResources_androidKt.colorResource(R.color.vkid_white_alpha12, composer, 0), RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(cornersStyle.getRadiusDp())));
                    composer.endReplaceGroup();
                }
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                composer.endReplaceGroup();
                return modifierM287borderxT4_qwU;
            }
        }, 1, null);
    }
}
