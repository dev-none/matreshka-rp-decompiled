package com.vk.id.onetap.compose.button.alternate.style;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import com.vk.id.onetap.common.alternate.style.InternalVKIDAlternateAccountButtonTextStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AlternateAccountButtonTextStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0001¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asColorResource", "Landroidx/compose/ui/graphics/Color;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonTextStyle;", "(Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonTextStyle;Landroidx/compose/runtime/Composer;I)J", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class AlternateAccountButtonTextStyleKt {

    /* JADX INFO: compiled from: AlternateAccountButtonTextStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalVKIDAlternateAccountButtonTextStyle.values().length];
            try {
                iArr[InternalVKIDAlternateAccountButtonTextStyle.LIGHT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalVKIDAlternateAccountButtonTextStyle.DARK.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[InternalVKIDAlternateAccountButtonTextStyle.TRANSPARENT_DARK.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final long asColorResource(InternalVKIDAlternateAccountButtonTextStyle internalVKIDAlternateAccountButtonTextStyle, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(internalVKIDAlternateAccountButtonTextStyle, "<this>");
        composer.startReplaceGroup(-737216866);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-737216866, i, -1, "com.vk.id.onetap.compose.button.alternate.style.asColorResource (AlternateAccountButtonTextStyle.kt:10)");
        }
        int i2 = WhenMappings.$EnumSwitchMapping$0[internalVKIDAlternateAccountButtonTextStyle.ordinal()];
        if (i2 == 1) {
            composer.startReplaceGroup(-1935491326);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_azure_300, composer, 0);
            composer.endReplaceGroup();
        } else if (i2 == 2) {
            composer.startReplaceGroup(-1935488162);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_white, composer, 0);
            composer.endReplaceGroup();
        } else {
            if (i2 != 3) {
                composer.startReplaceGroup(-1935493323);
                composer.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer.startReplaceGroup(-1935484738);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_black, composer, 0);
            composer.endReplaceGroup();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }
}
