package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.unit.Dp;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SheetContentAuthInProgress.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
public final class ComposableSingletons$SheetContentAuthInProgressKt {
    public static final ComposableSingletons$SheetContentAuthInProgressKt INSTANCE = new ComposableSingletons$SheetContentAuthInProgressKt();

    /* JADX INFO: renamed from: lambda-1, reason: not valid java name */
    public static Function3<ColumnScope, Composer, Integer, Unit> f4110lambda1 = ComposableLambdaKt.composableLambdaInstance(-52141179, false, new Function3<ColumnScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentAuthInProgressKt$lambda-1$1
        @Override // kotlin.jvm.functions.Function3
        public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer, Integer num) {
            invoke(columnScope, composer, num.intValue());
            return Unit.INSTANCE;
        }

        public final void invoke(ColumnScope SheetContentBox, Composer composer, int i) {
            Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
            if ((i & 17) != 16 || !composer.getSkipping()) {
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-52141179, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.ComposableSingletons$SheetContentAuthInProgressKt.lambda-1.<anonymous> (SheetContentAuthInProgress.kt:30)");
                }
                SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(76)), composer, 6);
                SheetContentAuthInProgressKt.CircleProgress(R.drawable.vkid_sheet_spinner, composer, 0);
                SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(88)), composer, 6);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                    return;
                }
                return;
            }
            composer.skipToGroupEnd();
        }
    });

    /* JADX INFO: renamed from: getLambda-1$onetap_compose_release, reason: not valid java name */
    public final Function3<ColumnScope, Composer, Integer, Unit> m9364getLambda1$onetap_compose_release() {
        return f4110lambda1;
    }
}
