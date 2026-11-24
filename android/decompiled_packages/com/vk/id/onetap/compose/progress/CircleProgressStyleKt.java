package com.vk.id.onetap.compose.progress;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.onetap.common.progress.style.InternalCircleProgressStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: CircleProgressStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0001¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asColorFilter", "Landroidx/compose/ui/graphics/ColorFilter;", "Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;", "(Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;Landroidx/compose/runtime/Composer;I)Landroidx/compose/ui/graphics/ColorFilter;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CircleProgressStyleKt {

    /* JADX INFO: compiled from: CircleProgressStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalCircleProgressStyle.values().length];
            try {
                iArr[InternalCircleProgressStyle.LIGHT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalCircleProgressStyle.DARK.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final ColorFilter asColorFilter(InternalCircleProgressStyle internalCircleProgressStyle, Composer composer, int i) {
        int i2;
        Intrinsics.checkNotNullParameter(internalCircleProgressStyle, "<this>");
        composer.startReplaceGroup(2032458110);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(2032458110, i, -1, "com.vk.id.onetap.compose.progress.asColorFilter (CircleProgressStyle.kt:12)");
        }
        int i3 = WhenMappings.$EnumSwitchMapping$0[internalCircleProgressStyle.ordinal()];
        if (i3 == 1) {
            i2 = R.color.vkid_white;
        } else {
            if (i3 != 2) {
                throw new NoWhenBranchMatchedException();
            }
            i2 = R.color.vkid_black;
        }
        ColorFilter colorFilterM4174tintxETnrds$default = ColorFilter.Companion.m4174tintxETnrds$default(ColorFilter.INSTANCE, ColorResources_androidKt.colorResource(i2, composer, 0), 0, 2, null);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return colorFilterM4174tintxETnrds$default;
    }
}
