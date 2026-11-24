package com.vk.id.onetap.compose.onetap.sheet.style;

import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
/* synthetic */ class OneTapBottomSheetStyle$Companion$system$1 extends FunctionReferenceImpl implements Function3<OneTapSheetCornersStyle, OneTapButtonCornersStyle, OneTapButtonSizeStyle, OneTapBottomSheetStyle.Dark> {
    public static final OneTapBottomSheetStyle$Companion$system$1 INSTANCE = new OneTapBottomSheetStyle$Companion$system$1();

    OneTapBottomSheetStyle$Companion$system$1() {
        super(3, OneTapBottomSheetStyle.Dark.class, "<init>", "<init>(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public final OneTapBottomSheetStyle.Dark invoke(OneTapSheetCornersStyle p0, OneTapButtonCornersStyle p1, OneTapButtonSizeStyle p2) {
        Intrinsics.checkNotNullParameter(p0, "p0");
        Intrinsics.checkNotNullParameter(p1, "p1");
        Intrinsics.checkNotNullParameter(p2, "p2");
        return new OneTapBottomSheetStyle.Dark(p0, p1, p2);
    }
}
