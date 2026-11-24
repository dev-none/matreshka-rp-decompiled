package com.vk.id.onetap.compose.button.auth.style;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonTextStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDButtonTextStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0001¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asColorResource", "Landroidx/compose/ui/graphics/Color;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonTextStyle;", "(Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonTextStyle;Landroidx/compose/runtime/Composer;I)J", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonTextStyleKt {

    /* JADX INFO: compiled from: VKIDButtonTextStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalVKIDButtonTextStyle.values().length];
            try {
                iArr[InternalVKIDButtonTextStyle.DARK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalVKIDButtonTextStyle.LIGHT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final long asColorResource(InternalVKIDButtonTextStyle internalVKIDButtonTextStyle, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(internalVKIDButtonTextStyle, "<this>");
        composer.startReplaceGroup(871920206);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(871920206, i, -1, "com.vk.id.onetap.compose.button.auth.style.asColorResource (VKIDButtonTextStyle.kt:11)");
        }
        int i2 = WhenMappings.$EnumSwitchMapping$0[internalVKIDButtonTextStyle.ordinal()];
        if (i2 == 1) {
            composer.startReplaceGroup(96847800);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_black, composer, 0);
            composer.endReplaceGroup();
        } else {
            if (i2 != 2) {
                composer.startReplaceGroup(96846208);
                composer.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer.startReplaceGroup(96850360);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_white, composer, 0);
            composer.endReplaceGroup();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }
}
