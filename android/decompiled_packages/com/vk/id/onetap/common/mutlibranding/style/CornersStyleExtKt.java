package com.vk.id.onetap.common.mutlibranding.style;

import com.vk.id.multibranding.common.style.OAuthListWidgetCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: CornersStyleExt.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0000¨\u0006\u0003"}, d2 = {"toOAuthListWidgetStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "onetap-common_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CornersStyleExtKt {
    public static final OAuthListWidgetCornersStyle toOAuthListWidgetStyle(OneTapButtonCornersStyle oneTapButtonCornersStyle) {
        Intrinsics.checkNotNullParameter(oneTapButtonCornersStyle, "<this>");
        if (oneTapButtonCornersStyle instanceof OneTapButtonCornersStyle.Custom) {
            return new OAuthListWidgetCornersStyle.Custom(oneTapButtonCornersStyle.getRadiusDp());
        }
        if (oneTapButtonCornersStyle instanceof OneTapButtonCornersStyle.Default) {
            return OAuthListWidgetCornersStyle.Default.INSTANCE;
        }
        if (oneTapButtonCornersStyle instanceof OneTapButtonCornersStyle.None) {
            return OAuthListWidgetCornersStyle.None.INSTANCE;
        }
        if (oneTapButtonCornersStyle instanceof OneTapButtonCornersStyle.Round) {
            return OAuthListWidgetCornersStyle.Round.INSTANCE;
        }
        if (oneTapButtonCornersStyle instanceof OneTapButtonCornersStyle.Rounded) {
            return OAuthListWidgetCornersStyle.Rounded.INSTANCE;
        }
        throw new NoWhenBranchMatchedException();
    }
}
