package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentBoxKt$lambda-1$1, reason: invalid class name */
/* JADX INFO: compiled from: SheetContentBox.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
final class ComposableSingletons$SheetContentBoxKt$lambda1$1 implements Function3<RowScope, Composer, Integer, Unit> {
    public static final ComposableSingletons$SheetContentBoxKt$lambda1$1 INSTANCE = new ComposableSingletons$SheetContentBoxKt$lambda1$1();

    ComposableSingletons$SheetContentBoxKt$lambda1$1() {
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Unit invoke(RowScope rowScope, Composer composer, Integer num) {
        invoke(rowScope, composer, num.intValue());
        return Unit.INSTANCE;
    }

    public final void invoke(RowScope SheetContentBox, Composer composer, int i) {
        int i2;
        Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
        if ((i & 6) == 0) {
            i2 = i | (composer.changed(SheetContentBox) ? 4 : 2);
        } else {
            i2 = i;
        }
        if ((i2 & 19) != 18 || !composer.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1910473884, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentBoxKt.lambda-1.<anonymous> (SheetContentBox.kt:115)");
            }
            SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composer, 6);
            SpacerKt.Spacer(RowScope.weight$default(SheetContentBox, Modifier.INSTANCE, 1.0f, false, 2, null), composer, 0);
            ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_sheet_logo_light, composer, 0), (String) null, PaddingKt.m725paddingqDBjuR0$default(SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(120)), 0.0f, Dp.m6850constructorimpl(8), 0.0f, 0.0f, 13, null), (Alignment) null, ContentScale.INSTANCE.getCrop(), 0.0f, (ColorFilter) null, composer, 25008, 104);
            SpacerKt.Spacer(RowScope.weight$default(SheetContentBox, Modifier.INSTANCE, 1.0f, false, 2, null), composer, 0);
            composer.startReplaceGroup(676748640);
            Object objRememberedValue = composer.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentBoxKt$lambda-1$1$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composer.updateRememberedValue(objRememberedValue);
            }
            composer.endReplaceGroup();
            SheetContentBoxKt.CloseIcon((Function0) objRememberedValue, composer, 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
                return;
            }
            return;
        }
        composer.skipToGroupEnd();
    }
}
