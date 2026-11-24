package com.vk.id.onetap.common;

import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonElevationStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
/* synthetic */ class OneTapStyle$Companion$system$1 extends FunctionReferenceImpl implements Function3<OneTapButtonCornersStyle, OneTapButtonSizeStyle, OneTapButtonElevationStyle, OneTapStyle.Dark> {
    public static final OneTapStyle$Companion$system$1 INSTANCE = new OneTapStyle$Companion$system$1();

    OneTapStyle$Companion$system$1() {
        super(3, OneTapStyle.Dark.class, "<init>", "<init>(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public final OneTapStyle.Dark invoke(OneTapButtonCornersStyle p0, OneTapButtonSizeStyle p1, OneTapButtonElevationStyle p2) {
        Intrinsics.checkNotNullParameter(p0, "p0");
        Intrinsics.checkNotNullParameter(p1, "p1");
        Intrinsics.checkNotNullParameter(p2, "p2");
        return new OneTapStyle.Dark(p0, p1, p2);
    }
}
