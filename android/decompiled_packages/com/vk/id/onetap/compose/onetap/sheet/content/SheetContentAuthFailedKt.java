package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.foundation.ClickableKt;
import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.interaction.InteractionSourceKt;
import androidx.compose.foundation.interaction.MutableInteractionSource;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.material3.RippleKt;
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
import androidx.compose.ui.draw.ClipKt;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.compose.ui.res.StringResources_androidKt;
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
import com.vk.id.onetap.common.alternate.style.InternalVKIDAlternateAccountButtonStyle;
import com.vk.id.onetap.compose.R;
import com.vk.id.onetap.compose.button.alternate.style.AlternateAccountButtonBackgroundStyleKt;
import com.vk.id.onetap.compose.button.alternate.style.AlternateAccountButtonTextStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonRippleStyleKt;
import com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonCornersStyleKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonSizeStyleKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SheetContentAuthFailed.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a1\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00010\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005H\u0001¢\u0006\u0002\u0010\u0007\u001a#\u0010\b\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\t2\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005H\u0003¢\u0006\u0002\u0010\n\u001a\r\u0010\u000b\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\f¨\u0006\r"}, d2 = {"SheetContentAuthFailed", "", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "dismissSheet", "Lkotlin/Function0;", "repeatClicked", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "RepeatButton", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "(Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "OneTapBottomSheetProgressPreview", "(Landroidx/compose/runtime/Composer;I)V", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class SheetContentAuthFailedKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapBottomSheetProgressPreview$lambda$8(int i, Composer composer, int i2) {
        OneTapBottomSheetProgressPreview(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit RepeatButton$lambda$3(InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, Function0 function0, int i, Composer composer, int i2) {
        RepeatButton(internalVKIDAlternateAccountButtonStyle, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetContentAuthFailed$lambda$0(OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, Function0 function1, int i, Composer composer, int i2) {
        SheetContentAuthFailed(oneTapBottomSheetStyle, function0, function1, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void SheetContentAuthFailed(final OneTapBottomSheetStyle style, final Function0<Unit> dismissSheet, final Function0<Unit> repeatClicked, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(dismissSheet, "dismissSheet");
        Intrinsics.checkNotNullParameter(repeatClicked, "repeatClicked");
        Composer composerStartRestartGroup = composer.startRestartGroup(-1128237273);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(dismissSheet) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(repeatClicked) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1128237273, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailed (SheetContentAuthFailed.kt:45)");
            }
            OneTapBottomSheetAnalytics.INSTANCE.BottomSheetErrorShown$onetap_compose_release(composerStartRestartGroup, 0);
            SheetContentBoxKt.SheetContentBox(style, dismissSheet, ComposableLambdaKt.rememberComposableLambda(-1734198533, true, new Function3<ColumnScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt.SheetContentAuthFailed.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer2, Integer num) {
                    invoke(columnScope, composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(ColumnScope SheetContentBox, Composer composer2, int i3) {
                    Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
                    if ((i3 & 17) != 16 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(-1734198533, i3, -1, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailed.<anonymous> (SheetContentAuthFailed.kt:51)");
                        }
                        SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(34)), composer2, 6);
                        ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_sheet_content_error, composer2, 0), (String) null, (Modifier) null, (Alignment) null, (ContentScale) null, 0.0f, (ColorFilter) null, composer2, 48, 124);
                        BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(R.string.vkid_sheet_state_auth_failed, composer2, 0), PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(12), 0.0f, 0.0f, 13, null), new TextStyle(ColorResources_androidKt.colorResource(style.getContentTextColor(), composer2, 0), TextUnitKt.getSp(15), FontWeight.INSTANCE.getW400(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, TextUnitKt.getSp(0.15d), (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, 0, 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16646008, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composer2, 48, 504);
                        SheetContentAuthFailedKt.RepeatButton(style.getOneTapStyle().getAlternateAccountButtonStyle(), repeatClicked, composer2, 0);
                        SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(46)), composer2, 6);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer2.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, (i2 & 112) | (i2 & 14) | RendererCapabilities.DECODER_SUPPORT_MASK);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthFailedKt.SheetContentAuthFailed$lambda$0(style, dismissSheet, repeatClicked, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void RepeatButton(final InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, final Function0<Unit> function0, Composer composer, final int i) {
        int i2;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(267300824);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(internalVKIDAlternateAccountButtonStyle) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function0) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(267300824, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.RepeatButton (SheetContentAuthFailed.kt:73)");
            }
            Modifier modifierBackground = AlternateAccountButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(12), 0.0f, 0.0f, 13, null), internalVKIDAlternateAccountButtonStyle.getBorderStyle(), internalVKIDAlternateAccountButtonStyle.getCornersStyle()), internalVKIDAlternateAccountButtonStyle.getCornersStyle())), internalVKIDAlternateAccountButtonStyle.getBackgroundStyle());
            composerStartRestartGroup.startReplaceGroup(1385327651);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierTestTag = TestTagKt.testTag(ClickableKt.m307clickableO2vRcR0$default(modifierBackground, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(internalVKIDAlternateAccountButtonStyle.getRippleStyle()), 3, null), false, null, null, function0, 28, null), "vkid_retry_btn");
            Alignment center = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierTestTag);
            Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor);
            } else {
                composerStartRestartGroup.useNode();
            }
            Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
            float f = 16;
            composer2 = composerStartRestartGroup;
            BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(R.string.vkid_sheet_state_auth_failed_retry, composerStartRestartGroup, 0), PaddingKt.m724paddingqDBjuR0(Modifier.INSTANCE, Dp.m6850constructorimpl(f), Dp.m6850constructorimpl((float) 7.5d), Dp.m6850constructorimpl(f), Dp.m6850constructorimpl((float) 8.5d)), new TextStyle(AlternateAccountButtonTextStyleKt.asColorResource(internalVKIDAlternateAccountButtonStyle.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(internalVKIDAlternateAccountButtonStyle.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composer2, 0, 504);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            composer2.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthFailedKt.RepeatButton$lambda$3(internalVKIDAlternateAccountButtonStyle, function0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void OneTapBottomSheetProgressPreview(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-1852164176);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1852164176, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.OneTapBottomSheetProgressPreview (SheetContentAuthFailed.kt:108)");
            }
            OneTapBottomSheetStyle.Light light = new OneTapBottomSheetStyle.Light(null, null, null, 7, null);
            composerStartRestartGroup.startReplaceGroup(-1965334827);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function0 function0 = (Function0) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1965333931);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetContentAuthFailed(light, function0, (Function0) objRememberedValue2, composerStartRestartGroup, 432);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthFailedKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthFailedKt.OneTapBottomSheetProgressPreview$lambda$8(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
