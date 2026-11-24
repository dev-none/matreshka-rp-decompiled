package com.vk.id.onetap.compose.button.auth.style;

import androidx.compose.ui.graphics.Color;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonRippleStyle;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDButtonRippleStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0000¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asColor", "Landroidx/compose/ui/graphics/Color;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;", "(Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;)J", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonRippleStyleKt {

    /* JADX INFO: compiled from: VKIDButtonRippleStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalVKIDButtonRippleStyle.values().length];
            try {
                iArr[InternalVKIDButtonRippleStyle.DARK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalVKIDButtonRippleStyle.LIGHT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final long asColor(InternalVKIDButtonRippleStyle internalVKIDButtonRippleStyle) {
        Intrinsics.checkNotNullParameter(internalVKIDButtonRippleStyle, "<this>");
        int i = WhenMappings.$EnumSwitchMapping$0[internalVKIDButtonRippleStyle.ordinal()];
        if (i == 1) {
            return Color.INSTANCE.m4159getBlack0d7_KjU();
        }
        if (i != 2) {
            throw new NoWhenBranchMatchedException();
        }
        return Color.INSTANCE.m4170getWhite0d7_KjU();
    }
}
