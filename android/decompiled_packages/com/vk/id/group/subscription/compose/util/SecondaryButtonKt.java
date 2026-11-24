package com.vk.id.group.subscription.compose.util;

import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.material3.ButtonColors;
import androidx.compose.material3.ButtonDefaults;
import androidx.compose.material3.ButtonKt;
import androidx.compose.material3.TextKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.text.PlatformTextStyle;
import androidx.compose.ui.text.TextLayoutResult;
import androidx.compose.ui.text.TextStyle;
import androidx.compose.ui.text.font.FontFamily;
import androidx.compose.ui.text.font.FontStyle;
import androidx.compose.ui.text.font.FontSynthesis;
import androidx.compose.ui.text.font.FontWeight;
import androidx.compose.ui.text.intl.LocaleList;
import androidx.compose.ui.text.style.BaselineShift;
import androidx.compose.ui.text.style.LineHeightStyle;
import androidx.compose.ui.text.style.TextAlign;
import androidx.compose.ui.text.style.TextDecoration;
import androidx.compose.ui.text.style.TextGeometricTransform;
import androidx.compose.ui.text.style.TextIndent;
import androidx.compose.ui.text.style.TextMotion;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.TextUnitKt;
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SecondaryButton.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a3\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00010\bH\u0001¢\u0006\u0002\u0010\t¨\u0006\n"}, d2 = {"SecondaryButton", "", "style", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "testTag", "", "text", "onClick", "Lkotlin/Function0;", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class SecondaryButtonKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SecondaryButton$lambda$0(GroupSubscriptionStyle groupSubscriptionStyle, String str, String str2, Function0 function0, int i, Composer composer, int i2) {
        SecondaryButton(groupSubscriptionStyle, str, str2, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void SecondaryButton(final GroupSubscriptionStyle style, final String testTag, final String text, final Function0<Unit> onClick, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(testTag, "testTag");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        Composer composerStartRestartGroup = composer.startRestartGroup(1583742968);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(testTag) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(text) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onClick) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1583742968, i2, -1, "com.vk.id.group.subscription.compose.util.SecondaryButton (SecondaryButton.kt:29)");
            }
            ButtonKt.FilledTonalButton(onClick, SizeKt.m752height3ABfNKs(SizeKt.fillMaxWidth$default(TestTagKt.testTag(Modifier.INSTANCE, testTag), 0.0f, 1, null), Dp.m6850constructorimpl(style.getButtonsSizeStyle().getHeightDp())), false, RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(style.getButtonsCornersStyle().getRadiusDp())), ButtonColors.m1520copyjRlVdoo$default(ButtonDefaults.INSTANCE.filledTonalButtonColors(composerStartRestartGroup, ButtonDefaults.$stable), StylingUtilKt.textSecondaryButtonBackgroundColor(style, composerStartRestartGroup, i2 & 14), 0L, 0L, 0L, 14, null), null, null, null, null, ComposableLambdaKt.rememberComposableLambda(660799562, true, new Function3<RowScope, Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.util.SecondaryButtonKt.SecondaryButton.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(RowScope rowScope, Composer composer2, Integer num) {
                    invoke(rowScope, composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(RowScope FilledTonalButton, Composer composer2, int i3) {
                    long jM4170getWhite0d7_KjU;
                    Intrinsics.checkNotNullParameter(FilledTonalButton, "$this$FilledTonalButton");
                    if ((i3 & 17) != 16 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(660799562, i3, -1, "com.vk.id.group.subscription.compose.util.SecondaryButton.<anonymous> (SecondaryButton.kt:41)");
                        }
                        String str = text;
                        Modifier.Companion companion = Modifier.INSTANCE;
                        int iM6734getCentere0LSkKk = TextAlign.INSTANCE.m6734getCentere0LSkKk();
                        GroupSubscriptionStyle groupSubscriptionStyle = style;
                        composer2.startReplaceGroup(-1489233681);
                        if (groupSubscriptionStyle instanceof GroupSubscriptionStyle.Light) {
                            jM4170getWhite0d7_KjU = ColorResources_androidKt.colorResource(R.color.vkid_azure_300, composer2, 0);
                        } else {
                            if (!(groupSubscriptionStyle instanceof GroupSubscriptionStyle.Dark)) {
                                throw new NoWhenBranchMatchedException();
                            }
                            jM4170getWhite0d7_KjU = Color.INSTANCE.m4170getWhite0d7_KjU();
                        }
                        long j = jM4170getWhite0d7_KjU;
                        composer2.endReplaceGroup();
                        TextKt.m2413Text4IGK_g(str, (Modifier) companion, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(j, TextUnitKt.getSp(style.getButtonsSizeStyle().getTextSizeSp()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, iM6734getCentere0LSkKk, 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer2, 48, 0, 65532);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer2.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, ((i2 >> 9) & 14) | 805306368, 484);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.util.SecondaryButtonKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SecondaryButtonKt.SecondaryButton$lambda$0(style, testTag, text, onClick, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
