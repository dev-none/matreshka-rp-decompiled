package com.vk.id.multibranding.common.style;

import kotlin.Metadata;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthListWidgetStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
/* synthetic */ class OAuthListWidgetStyle$Companion$system$1 extends FunctionReferenceImpl implements Function2<OAuthListWidgetCornersStyle, OAuthListWidgetSizeStyle, OAuthListWidgetStyle.Dark> {
    public static final OAuthListWidgetStyle$Companion$system$1 INSTANCE = new OAuthListWidgetStyle$Companion$system$1();

    OAuthListWidgetStyle$Companion$system$1() {
        super(2, OAuthListWidgetStyle.Dark.class, "<init>", "<init>(Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public final OAuthListWidgetStyle.Dark invoke(OAuthListWidgetCornersStyle p0, OAuthListWidgetSizeStyle p1) {
        Intrinsics.checkNotNullParameter(p0, "p0");
        Intrinsics.checkNotNullParameter(p1, "p1");
        return new OAuthListWidgetStyle.Dark(p0, p1);
    }
}
