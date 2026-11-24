package com.vk.id.onetap.compose.onetap.style;

import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.draw.ClipKt;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapButtonCornersStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¨\u0006\u0004"}, d2 = {"clip", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapButtonCornersStyleKt {
    public static final Modifier clip(Modifier modifier, OneTapButtonCornersStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return ClipKt.clip(modifier, RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(style.getRadiusDp())));
    }
}
