package com.vk.id.group.subscription.compose.ui;

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
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
public final class ComposableSingletons$GroupSubscriptionSheetKt {
    public static final ComposableSingletons$GroupSubscriptionSheetKt INSTANCE = new ComposableSingletons$GroupSubscriptionSheetKt();

    /* JADX INFO: renamed from: lambda-1, reason: not valid java name */
    public static Function2<Composer, Integer, Unit> f4109lambda1 = ComposableLambdaKt.composableLambdaInstance(-1557845574, false, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.ComposableSingletons$GroupSubscriptionSheetKt$lambda-1$1
        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Unit invoke(Composer composer, Integer num) {
            invoke(composer, num.intValue());
            return Unit.INSTANCE;
        }

        public final void invoke(Composer composer, int i) {
            if ((i & 3) == 2 && composer.getSkipping()) {
                composer.skipToGroupEnd();
                return;
            }
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1557845574, i, -1, "com.vk.id.group.subscription.compose.ui.ComposableSingletons$GroupSubscriptionSheetKt.lambda-1.<anonymous> (GroupSubscriptionSheet.kt:770)");
            }
            TextKt.m2413Text4IGK_g("button text", (Modifier) null, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, (TextStyle) null, composer, 6, 0, 131070);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
    });

    /* JADX INFO: renamed from: getLambda-1$group_subscription_compose_release, reason: not valid java name */
    public final Function2<Composer, Integer, Unit> m9268getLambda1$group_subscription_compose_release() {
        return f4109lambda1;
    }
}
