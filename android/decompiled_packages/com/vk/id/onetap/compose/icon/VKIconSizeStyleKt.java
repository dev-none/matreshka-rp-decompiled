package com.vk.id.onetap.compose.icon;

import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.common.icon.style.InternalVKIconSizeStyle;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIconSizeStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\f\u0010\u0003\u001a\u00020\u0001*\u00020\u0004H\u0000\u001a\u0014\u0010\u0005\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u0004H\u0000\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"VK_ICON_SMALL_SIZE_DP", "", "VK_ICON_NORMAL_SIZE_DP", "asIconSize", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconSizeStyle;", RRWebVideoEvent.JsonKeys.SIZE, "Landroidx/compose/ui/Modifier;", "style", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIconSizeStyleKt {
    private static final int VK_ICON_NORMAL_SIZE_DP = 28;
    private static final int VK_ICON_SMALL_SIZE_DP = 24;

    /* JADX INFO: compiled from: VKIconSizeStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalVKIconSizeStyle.values().length];
            try {
                iArr[InternalVKIconSizeStyle.SMALL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalVKIconSizeStyle.NORMAL.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final int asIconSize(InternalVKIconSizeStyle internalVKIconSizeStyle) {
        Intrinsics.checkNotNullParameter(internalVKIconSizeStyle, "<this>");
        int i = WhenMappings.$EnumSwitchMapping$0[internalVKIconSizeStyle.ordinal()];
        if (i == 1) {
            return 24;
        }
        if (i == 2) {
            return 28;
        }
        throw new NoWhenBranchMatchedException();
    }

    public static final Modifier size(Modifier modifier, InternalVKIconSizeStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return SizeKt.m766size3ABfNKs(modifier, Dp.m6850constructorimpl(asIconSize(style)));
    }
}
