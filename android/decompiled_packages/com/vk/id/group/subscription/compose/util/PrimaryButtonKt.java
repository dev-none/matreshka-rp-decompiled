package com.vk.id.group.subscription.compose.util;

import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.material3.ButtonDefaults;
import androidx.compose.material3.ButtonKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.unit.Dp;
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PrimaryButton.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a>\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u00072\u0011\u0010\b\u001a\r\u0012\u0004\u0012\u00020\u00010\u0007¢\u0006\u0002\b\tH\u0001¢\u0006\u0002\u0010\n¨\u0006\u000b"}, d2 = {"PrimaryButton", "", "style", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "testTag", "", "onClick", "Lkotlin/Function0;", "content", "Landroidx/compose/runtime/Composable;", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function2;Landroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class PrimaryButtonKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PrimaryButton$lambda$0(GroupSubscriptionStyle groupSubscriptionStyle, String str, Function0 function0, Function2 function2, int i, Composer composer, int i2) {
        PrimaryButton(groupSubscriptionStyle, str, function0, function2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void PrimaryButton(final GroupSubscriptionStyle style, final String testTag, final Function0<Unit> onClick, final Function2<? super Composer, ? super Integer, Unit> content, Composer composer, final int i) {
        int i2;
        Composer composer2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(testTag, "testTag");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        Intrinsics.checkNotNullParameter(content, "content");
        Composer composerStartRestartGroup = composer.startRestartGroup(2122988682);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(testTag) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onClick) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(content) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2122988682, i2, -1, "com.vk.id.group.subscription.compose.util.PrimaryButton (PrimaryButton.kt:22)");
            }
            int i3 = i2;
            ButtonKt.Button(onClick, SizeKt.m752height3ABfNKs(SizeKt.fillMaxWidth$default(TestTagKt.testTag(Modifier.INSTANCE, testTag), 0.0f, 1, null), Dp.m6850constructorimpl(style.getButtonsSizeStyle().getHeightDp())), false, RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(style.getButtonsCornersStyle().getRadiusDp())), ButtonDefaults.INSTANCE.m1528buttonColorsro_MJ88(StylingUtilKt.textPrimaryButtonBackgroundColor(style, composerStartRestartGroup, i3 & 14), 0L, 0L, 0L, composerStartRestartGroup, ButtonDefaults.$stable << 12, 14), null, null, null, null, ComposableLambdaKt.rememberComposableLambda(404994714, true, new Function3<RowScope, Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.util.PrimaryButtonKt.PrimaryButton.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(RowScope rowScope, Composer composer3, Integer num) {
                    invoke(rowScope, composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(RowScope Button, Composer composer3, int i4) {
                    Intrinsics.checkNotNullParameter(Button, "$this$Button");
                    if ((i4 & 17) == 16 && composer3.getSkipping()) {
                        composer3.skipToGroupEnd();
                        return;
                    }
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(404994714, i4, -1, "com.vk.id.group.subscription.compose.util.PrimaryButton.<anonymous> (PrimaryButton.kt:32)");
                    }
                    content.invoke(composer3, 0);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, ((i3 >> 6) & 14) | 805306368, 484);
            composer2 = composerStartRestartGroup;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.util.PrimaryButtonKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return PrimaryButtonKt.PrimaryButton$lambda$0(style, testTag, onClick, content, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
