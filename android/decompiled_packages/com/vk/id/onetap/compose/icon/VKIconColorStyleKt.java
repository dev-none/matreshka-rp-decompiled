package com.vk.id.onetap.compose.icon;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import com.vk.id.onetap.common.icon.style.InternalVKIconColorStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIconColorStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0011\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0001¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"asPainterResource", "", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconColorStyle;", "(Lcom/vk/id/onetap/common/icon/style/InternalVKIconColorStyle;Landroidx/compose/runtime/Composer;I)I", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIconColorStyleKt {

    /* JADX INFO: compiled from: VKIconColorStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[InternalVKIconColorStyle.values().length];
            try {
                iArr[InternalVKIconColorStyle.WHITE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[InternalVKIconColorStyle.BLUE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final int asPainterResource(InternalVKIconColorStyle internalVKIconColorStyle, Composer composer, int i) {
        int i2;
        Intrinsics.checkNotNullParameter(internalVKIconColorStyle, "<this>");
        composer.startReplaceGroup(-549135140);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-549135140, i, -1, "com.vk.id.onetap.compose.icon.asPainterResource (VKIconColorStyle.kt:12)");
        }
        int i3 = WhenMappings.$EnumSwitchMapping$0[internalVKIconColorStyle.ordinal()];
        if (i3 == 1) {
            i2 = R.drawable.vkid_icon_white;
        } else {
            if (i3 != 2) {
                throw new NoWhenBranchMatchedException();
            }
            i2 = R.drawable.vkid_icon_blue;
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return i2;
    }
}
