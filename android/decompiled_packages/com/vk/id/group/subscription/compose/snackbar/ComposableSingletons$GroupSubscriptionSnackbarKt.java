package com.vk.id.group.subscription.compose.snackbar;

import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.unit.Dp;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: GroupSubscriptionSnackbar.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
public final class ComposableSingletons$GroupSubscriptionSnackbarKt {
    public static final ComposableSingletons$GroupSubscriptionSnackbarKt INSTANCE = new ComposableSingletons$GroupSubscriptionSnackbarKt();

    /* JADX INFO: renamed from: lambda-1, reason: not valid java name */
    public static Function2<Composer, Integer, Unit> f4108lambda1 = ComposableLambdaKt.composableLambdaInstance(-1035473237, false, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.snackbar.ComposableSingletons$GroupSubscriptionSnackbarKt$lambda-1$1
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
                ComposerKt.traceEventStart(-1035473237, i, -1, "com.vk.id.group.subscription.compose.snackbar.ComposableSingletons$GroupSubscriptionSnackbarKt.lambda-1.<anonymous> (GroupSubscriptionSnackbar.kt:33)");
            }
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(56)), composer, 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
    });

    /* JADX INFO: renamed from: getLambda-1$group_subscription_compose_release, reason: not valid java name */
    public final Function2<Composer, Integer, Unit> m9267getLambda1$group_subscription_compose_release() {
        return f4108lambda1;
    }
}
