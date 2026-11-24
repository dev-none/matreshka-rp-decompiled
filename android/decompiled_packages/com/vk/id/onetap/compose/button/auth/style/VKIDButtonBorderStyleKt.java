package com.vk.id.onetap.compose.button.auth.style;

import androidx.compose.foundation.BorderKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonBorderStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDButtonBorderStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001c\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0000¨\u0006\u0006"}, d2 = {"border", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonBorderStyleKt {
    public static final Modifier border(final Modifier modifier, final InternalVKIDButtonBorderStyle style, final OneTapButtonCornersStyle cornersStyle) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
        return ComposedModifierKt.composed$default(modifier, null, new Function3<Modifier, Composer, Integer, Modifier>() { // from class: com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt.border.1

            /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt$border$1$WhenMappings */
            /* JADX INFO: compiled from: VKIDButtonBorderStyle.kt */
            @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
            public /* synthetic */ class WhenMappings {
                public static final /* synthetic */ int[] $EnumSwitchMapping$0;

                static {
                    int[] iArr = new int[InternalVKIDButtonBorderStyle.values().length];
                    try {
                        iArr[InternalVKIDButtonBorderStyle.NONE.ordinal()] = 1;
                    } catch (NoSuchFieldError unused) {
                    }
                    try {
                        iArr[InternalVKIDButtonBorderStyle.DARK.ordinal()] = 2;
                    } catch (NoSuchFieldError unused2) {
                    }
                    try {
                        iArr[InternalVKIDButtonBorderStyle.LIGHT.ordinal()] = 3;
                    } catch (NoSuchFieldError unused3) {
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
                composer.startReplaceGroup(-2103869014);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-2103869014, i, -1, "com.vk.id.onetap.compose.button.auth.style.border.<anonymous> (VKIDButtonBorderStyle.kt:20)");
                }
                int i2 = WhenMappings.$EnumSwitchMapping$0[style.ordinal()];
                if (i2 == 1) {
                    composer.startReplaceGroup(1223520451);
                    composer.endReplaceGroup();
                    modifierM287borderxT4_qwU = modifier;
                } else if (i2 == 2) {
                    composer.startReplaceGroup(1223522479);
                    modifierM287borderxT4_qwU = BorderKt.m287borderxT4_qwU(composed, Dp.m6850constructorimpl(1), ColorResources_androidKt.colorResource(R.color.vkid_black_alpha12, composer, 0), RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(cornersStyle.getRadiusDp())));
                    composer.endReplaceGroup();
                } else {
                    if (i2 != 3) {
                        composer.startReplaceGroup(1223519027);
                        composer.endReplaceGroup();
                        throw new NoWhenBranchMatchedException();
                    }
                    composer.startReplaceGroup(1223529871);
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
