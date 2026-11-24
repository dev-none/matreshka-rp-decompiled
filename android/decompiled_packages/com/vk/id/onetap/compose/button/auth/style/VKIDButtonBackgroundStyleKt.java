package com.vk.id.onetap.compose.button.auth.style;

import androidx.compose.foundation.BackgroundKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonBackgroundStyle;
import com.vk.id.onetap.compose.R;
import io.appmetrica.analytics.impl.H2;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDButtonBackgroundStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¨\u0006\u0004"}, d2 = {H2.g, "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBackgroundStyle;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonBackgroundStyleKt {
    public static final Modifier background(Modifier modifier, final InternalVKIDButtonBackgroundStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return ComposedModifierKt.composed$default(modifier, null, new Function3<Modifier, Composer, Integer, Modifier>() { // from class: com.vk.id.onetap.compose.button.auth.style.VKIDButtonBackgroundStyleKt.background.1

            /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.style.VKIDButtonBackgroundStyleKt$background$1$WhenMappings */
            /* JADX INFO: compiled from: VKIDButtonBackgroundStyle.kt */
            @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
            public /* synthetic */ class WhenMappings {
                public static final /* synthetic */ int[] $EnumSwitchMapping$0;

                static {
                    int[] iArr = new int[InternalVKIDButtonBackgroundStyle.values().length];
                    try {
                        iArr[InternalVKIDButtonBackgroundStyle.BLUE.ordinal()] = 1;
                    } catch (NoSuchFieldError unused) {
                    }
                    try {
                        iArr[InternalVKIDButtonBackgroundStyle.WHITE.ordinal()] = 2;
                    } catch (NoSuchFieldError unused2) {
                    }
                    try {
                        iArr[InternalVKIDButtonBackgroundStyle.TRANSPARENT.ordinal()] = 3;
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
                int i2;
                Intrinsics.checkNotNullParameter(composed, "$this$composed");
                composer.startReplaceGroup(490222836);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(490222836, i, -1, "com.vk.id.onetap.compose.button.auth.style.background.<anonymous> (VKIDButtonBackgroundStyle.kt:14)");
                }
                int i3 = WhenMappings.$EnumSwitchMapping$0[style.ordinal()];
                if (i3 == 1) {
                    i2 = R.color.vkid_azure_A100;
                } else if (i3 == 2) {
                    i2 = R.color.vkid_white;
                } else {
                    if (i3 != 3) {
                        throw new NoWhenBranchMatchedException();
                    }
                    i2 = R.color.vkid_transparent;
                }
                Modifier modifierM276backgroundbw27NRU$default = BackgroundKt.m276backgroundbw27NRU$default(composed, ColorResources_androidKt.colorResource(i2, composer, 0), null, 2, null);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                composer.endReplaceGroup();
                return modifierM276backgroundbw27NRU$default;
            }
        }, 1, null);
    }
}
