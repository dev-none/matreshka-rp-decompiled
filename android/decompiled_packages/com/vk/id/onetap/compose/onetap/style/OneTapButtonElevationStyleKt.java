package com.vk.id.onetap.compose.onetap.style;

import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.draw.ShadowKt;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonStyle;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapButtonElevationStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¨\u0006\u0004"}, d2 = {"shadow", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapButtonElevationStyleKt {
    public static final Modifier shadow(Modifier modifier, InternalVKIDButtonStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return ShadowKt.m3716shadows4CzXII$default(modifier, Dp.m6850constructorimpl(((style instanceof InternalVKIDButtonStyle.TransparentLight) || (style instanceof InternalVKIDButtonStyle.TransparentDark)) ? 0.0f : style.getElevationStyle().getElevationDp()), RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(style.getCornersStyle().getRadiusDp())), false, 0L, 0L, 28, null);
    }
}
