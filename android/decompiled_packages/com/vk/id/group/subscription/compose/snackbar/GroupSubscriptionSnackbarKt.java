package com.vk.id.group.subscription.compose.snackbar;

import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.material3.IconKt;
import androidx.compose.material3.ShapeDefaults;
import androidx.compose.material3.SnackbarKt;
import androidx.compose.material3.TextKt;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.Updater;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.res.PainterResources_androidKt;
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
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.R;
import com.vk.id.group.subscription.compose.util.StylingUtilKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GroupSubscriptionSnackbar.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\u001a\u001d\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0001¢\u0006\u0002\u0010\u0006¨\u0006\u0007"}, d2 = {"GroupSubscriptionSnackbar", "", "style", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "message", "", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Ljava/lang/String;Landroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionSnackbarKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSnackbar$lambda$0(GroupSubscriptionStyle groupSubscriptionStyle, String str, int i, Composer composer, int i2) {
        GroupSubscriptionSnackbar(groupSubscriptionStyle, str, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void GroupSubscriptionSnackbar(final GroupSubscriptionStyle style, final String message, Composer composer, final int i) {
        int i2;
        Composer composer2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(message, "message");
        Composer composerStartRestartGroup = composer.startRestartGroup(-1779598434);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(message) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1779598434, i2, -1, "com.vk.id.group.subscription.compose.snackbar.GroupSubscriptionSnackbar (GroupSubscriptionSnackbar.kt:27)");
            }
            composer2 = composerStartRestartGroup;
            SnackbarKt.m2248SnackbareQBnUkQ(TestTagKt.testTag(Modifier.INSTANCE, "group_subscription_snackbar"), ComposableSingletons$GroupSubscriptionSnackbarKt.INSTANCE.m9267getLambda1$group_subscription_compose_release(), null, false, ShapeDefaults.INSTANCE.getSmall(), StylingUtilKt.backgroundColor(style, composerStartRestartGroup, i2 & 14), 0L, 0L, 0L, ComposableLambdaKt.rememberComposableLambda(656028067, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.snackbar.GroupSubscriptionSnackbarKt.GroupSubscriptionSnackbar.1
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer3, Integer num) {
                    invoke(composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer3, int i3) {
                    if ((i3 & 3) != 2 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(656028067, i3, -1, "com.vk.id.group.subscription.compose.snackbar.GroupSubscriptionSnackbar.<anonymous> (GroupSubscriptionSnackbar.kt:36)");
                        }
                        Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
                        GroupSubscriptionStyle groupSubscriptionStyle = style;
                        String str = message;
                        ComposerKt.sourceInformationMarkerStart(composer3, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                        Modifier.Companion companion = Modifier.INSTANCE;
                        MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), centerVertically, composer3, 48);
                        ComposerKt.sourceInformationMarkerStart(composer3, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                        int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer3, 0);
                        CompositionLocalMap currentCompositionLocalMap = composer3.getCurrentCompositionLocalMap();
                        Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer3, companion);
                        Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
                        ComposerKt.sourceInformationMarkerStart(composer3, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                        if (!(composer3.getApplier() instanceof Applier)) {
                            ComposablesKt.invalidApplier();
                        }
                        composer3.startReusableNode();
                        if (composer3.getInserting()) {
                            composer3.createNode(constructor);
                        } else {
                            composer3.useNode();
                        }
                        Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composer3);
                        Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyRowMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                        Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                        if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                            composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                            composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                        }
                        Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                        ComposerKt.sourceInformationMarkerStart(composer3, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                        RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
                        IconKt.m1869Iconww6aTOc(PainterResources_androidKt.painterResource(R.drawable.vkid_check_circle_outline, composer3, 0), (String) null, Modifier.INSTANCE, ColorResources_androidKt.colorResource(R.color.vkid_green, composer3, 0), composer3, 432, 0);
                        TextKt.m2413Text4IGK_g(str, PaddingKt.m723paddingVpY3zN4$default(Modifier.INSTANCE, Dp.m6850constructorimpl(12), 0.0f, 2, null), 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textPrimaryColor(groupSubscriptionStyle, composer3, 0), 0L, (FontWeight) null, (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, 0, 0, 0L, (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16777214, (DefaultConstructorMarker) null), composer3, 48, 0, 65532);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        composer3.endNode();
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composer2, 805306422, 460);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.snackbar.GroupSubscriptionSnackbarKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSnackbarKt.GroupSubscriptionSnackbar$lambda$0(style, message, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
