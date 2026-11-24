package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.material3.TextKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.text.TextLayoutResult;
import androidx.compose.ui.text.TextStyle;
import androidx.compose.ui.text.font.FontFamily;
import androidx.compose.ui.text.font.FontStyle;
import androidx.compose.ui.text.font.FontWeight;
import androidx.compose.ui.text.style.TextAlign;
import androidx.compose.ui.text.style.TextDecoration;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SheetContentBox.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
public final class ComposableSingletons$SheetContentBoxKt {
    public static final ComposableSingletons$SheetContentBoxKt INSTANCE = new ComposableSingletons$SheetContentBoxKt();

    /* JADX INFO: renamed from: lambda-1, reason: not valid java name */
    public static Function3<RowScope, Composer, Integer, Unit> f4111lambda1 = ComposableLambdaKt.composableLambdaInstance(-1910473884, false, ComposableSingletons$SheetContentBoxKt$lambda1$1.INSTANCE);

    /* JADX INFO: renamed from: lambda-2, reason: not valid java name */
    public static Function3<ColumnScope, Composer, Integer, Unit> f4112lambda2 = ComposableLambdaKt.composableLambdaInstance(1618808653, false, new Function3<ColumnScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentBoxKt$lambda-2$1
        @Override // kotlin.jvm.functions.Function3
        public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer, Integer num) {
            invoke(columnScope, composer, num.intValue());
            return Unit.INSTANCE;
        }

        public final void invoke(ColumnScope SheetContentBox, Composer composer, int i) {
            Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
            if ((i & 17) == 16 && composer.getSkipping()) {
                composer.skipToGroupEnd();
                return;
            }
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1618808653, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentBoxKt.lambda-2.<anonymous> (SheetContentBox.kt:129)");
            }
            TextKt.m2413Text4IGK_g("1 2 3", (Modifier) null, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, (TextStyle) null, composer, 6, 0, 131070);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
    });

    /* JADX INFO: renamed from: getLambda-1$onetap_compose_release, reason: not valid java name */
    public final Function3<RowScope, Composer, Integer, Unit> m9365getLambda1$onetap_compose_release() {
        return f4111lambda1;
    }

    /* JADX INFO: renamed from: getLambda-2$onetap_compose_release, reason: not valid java name */
    public final Function3<ColumnScope, Composer, Integer, Unit> m9366getLambda2$onetap_compose_release() {
        return f4112lambda2;
    }
}
