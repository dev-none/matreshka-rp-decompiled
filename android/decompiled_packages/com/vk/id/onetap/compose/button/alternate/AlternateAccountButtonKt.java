package com.vk.id.onetap.compose.button.alternate;

import androidx.compose.animation.AnimatedVisibilityKt;
import androidx.compose.animation.AnimatedVisibilityScope;
import androidx.compose.animation.EnterTransition;
import androidx.compose.animation.ExitTransition;
import androidx.compose.foundation.ClickableKt;
import androidx.compose.foundation.interaction.InteractionSourceKt;
import androidx.compose.foundation.interaction.MutableInteractionSource;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.SizeKt;
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
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.TestTagKt;
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
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.onetap.common.alternate.style.InternalVKIDAlternateAccountButtonStyle;
import com.vk.id.onetap.compose.R;
import com.vk.id.onetap.compose.button.alternate.style.AlternateAccountButtonBackgroundStyleKt;
import com.vk.id.onetap.compose.button.alternate.style.AlternateAccountButtonTextStyleKt;
import com.vk.id.onetap.compose.button.auth.VKIDButtonState;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonRippleStyleKt;
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

/* JADX INFO: compiled from: AlternateAccountButton.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\u001a5\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u00072\u0006\u0010\b\u001a\u00020\tH\u0001¢\u0006\u0002\u0010\n\u001a9\u0010\u000b\u001a\u00020\u00012\b\b\u0002\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0001\u0010\u000e\u001a\u00020\u000f2\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u0007H\u0003¢\u0006\u0002\u0010\u0010\u001a\r\u0010\u0011\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u0012¨\u0006\u0013"}, d2 = {"AdaptiveAlternateAccountButton", "", "vkidButtonState", "Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;", "style", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "onClick", "Lkotlin/Function0;", "largeText", "", "(Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;Lkotlin/jvm/functions/Function0;ZLandroidx/compose/runtime/Composer;II)V", "AlternateAccountButton", "modifier", "Landroidx/compose/ui/Modifier;", "textResId", "", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;ILkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;II)V", "AlternateAccountButtonPreview", "(Landroidx/compose/runtime/Composer;I)V", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class AlternateAccountButtonKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit AdaptiveAlternateAccountButton$lambda$0(VKIDButtonState vKIDButtonState, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, Function0 function0, boolean z, int i, int i2, Composer composer, int i3) {
        AdaptiveAlternateAccountButton(vKIDButtonState, internalVKIDAlternateAccountButtonStyle, function0, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit AlternateAccountButton$lambda$3(Modifier modifier, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, int i, Function0 function0, int i2, int i3, Composer composer, int i4) {
        AlternateAccountButton(modifier, internalVKIDAlternateAccountButtonStyle, i, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i2 | 1), i3);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit AlternateAccountButtonPreview$lambda$6(int i, Composer composer, int i2) {
        AlternateAccountButtonPreview(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void AdaptiveAlternateAccountButton(final VKIDButtonState vkidButtonState, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, final Function0<Unit> onClick, final boolean z, Composer composer, final int i, final int i2) {
        int i3;
        InternalVKIDAlternateAccountButtonStyle.Light light;
        final InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle2;
        Intrinsics.checkNotNullParameter(vkidButtonState, "vkidButtonState");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        Composer composerStartRestartGroup = composer.startRestartGroup(1128749082);
        if ((i2 & 1) != 0) {
            i3 = i | 6;
        } else if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(vkidButtonState) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            if ((i2 & 2) == 0) {
                light = internalVKIDAlternateAccountButtonStyle;
                int i4 = composerStartRestartGroup.changed(light) ? 32 : 16;
                i3 |= i4;
            } else {
                light = internalVKIDAlternateAccountButtonStyle;
            }
            i3 |= i4;
        } else {
            light = internalVKIDAlternateAccountButtonStyle;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onClick) ? 256 : 128;
        }
        if ((i2 & 8) != 0) {
            i3 |= 3072;
        } else if ((i & 3072) == 0) {
            i3 |= composerStartRestartGroup.changed(z) ? 2048 : 1024;
        }
        if ((i3 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0 && !composerStartRestartGroup.getDefaultsInvalid()) {
                composerStartRestartGroup.skipToGroupEnd();
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                }
            } else if ((i2 & 2) != 0) {
                light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                i3 &= -113;
            }
            InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle3 = light;
            int i5 = i3;
            internalVKIDAlternateAccountButtonStyle2 = internalVKIDAlternateAccountButtonStyle3;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1128749082, i5, -1, "com.vk.id.onetap.compose.button.alternate.AdaptiveAlternateAccountButton (AlternateAccountButton.kt:44)");
            }
            AnimatedVisibilityKt.AnimatedVisibility(!vkidButtonState.getUserLoadFailed$onetap_compose_release(), PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(12), 0.0f, 0.0f, 13, null), (EnterTransition) null, (ExitTransition) null, (String) null, ComposableLambdaKt.rememberComposableLambda(1414193730, true, new Function3<AnimatedVisibilityScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt.AdaptiveAlternateAccountButton.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(AnimatedVisibilityScope animatedVisibilityScope, Composer composer2, Integer num) {
                    invoke(animatedVisibilityScope, composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(AnimatedVisibilityScope AnimatedVisibility, Composer composer2, int i6) {
                    Intrinsics.checkNotNullParameter(AnimatedVisibility, "$this$AnimatedVisibility");
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(1414193730, i6, -1, "com.vk.id.onetap.compose.button.alternate.AdaptiveAlternateAccountButton.<anonymous> (AlternateAccountButton.kt:49)");
                    }
                    if (z) {
                        composer2.startReplaceGroup(-907439940);
                        AlternateAccountButtonKt.AlternateAccountButton(null, internalVKIDAlternateAccountButtonStyle2, R.string.vkid_auth_use_another_account, onClick, composer2, 0, 1);
                        composer2.endReplaceGroup();
                    } else {
                        composer2.startReplaceGroup(-907241354);
                        AlternateAccountButtonKt.AlternateAccountButton(null, internalVKIDAlternateAccountButtonStyle2, R.string.vkid_auth_use_another_account_short, onClick, composer2, 0, 1);
                        composer2.endReplaceGroup();
                    }
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, 196656, 28);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            internalVKIDAlternateAccountButtonStyle2 = light;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return AlternateAccountButtonKt.AdaptiveAlternateAccountButton$lambda$0(vkidButtonState, internalVKIDAlternateAccountButtonStyle2, onClick, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:51:0x008d  */
    /* JADX WARN: Code duplicated, block: B:53:0x0095  */
    /* JADX WARN: Code duplicated, block: B:60:0x00a7 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:61:0x00a9  */
    /* JADX WARN: Code duplicated, block: B:62:0x00ae  */
    /* JADX WARN: Code duplicated, block: B:65:0x00b3  */
    /* JADX WARN: Code duplicated, block: B:66:0x00be A[PHI: r1 r4
  0x00be: PHI (r1v7 androidx.compose.ui.Modifier) = (r1v3 androidx.compose.ui.Modifier), (r1v9 androidx.compose.ui.Modifier) binds: [B:64:0x00b1, B:59:0x00a5] A[DONT_GENERATE, DONT_INLINE]
  0x00be: PHI (r4v14 int) = (r4v11 int), (r4v15 int) binds: [B:64:0x00b1, B:59:0x00a5] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:69:0x00c8  */
    /* JADX WARN: Code duplicated, block: B:72:0x0115  */
    /* JADX WARN: Code duplicated, block: B:75:0x0184  */
    /* JADX WARN: Code duplicated, block: B:78:0x0190  */
    /* JADX WARN: Code duplicated, block: B:79:0x0194  */
    /* JADX WARN: Code duplicated, block: B:82:0x01b9  */
    /* JADX WARN: Code duplicated, block: B:84:0x01c7  */
    /* JADX WARN: Code duplicated, block: B:87:0x026c  */
    /* JADX WARN: Code duplicated, block: B:90:0x0275  */
    /* JADX WARN: Code duplicated, block: B:92:? A[RETURN, SYNTHETIC] */
    public static final void AlternateAccountButton(Modifier modifier, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, final int i, final Function0<Unit> function0, Composer composer, final int i2, final int i3) {
        Modifier modifier2;
        int i4;
        InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle2;
        Function0<Unit> function1;
        final Modifier.Companion companion;
        final InternalVKIDAlternateAccountButtonStyle.Light light;
        Object objRememberedValue;
        int currentCompositeKeyHash;
        Function0<ComposeUiNode> constructor;
        Composer composerM3432constructorimpl;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Composer composerStartRestartGroup = composer.startRestartGroup(979903613);
        int i5 = i3 & 1;
        if (i5 != 0) {
            i4 = i2 | 6;
            modifier2 = modifier;
        } else if ((i2 & 6) == 0) {
            modifier2 = modifier;
            i4 = (composerStartRestartGroup.changed(modifier2) ? 4 : 2) | i2;
        } else {
            modifier2 = modifier;
            i4 = i2;
        }
        if ((i2 & 48) == 0) {
            if ((i3 & 2) == 0) {
                internalVKIDAlternateAccountButtonStyle2 = internalVKIDAlternateAccountButtonStyle;
                int i6 = composerStartRestartGroup.changed(internalVKIDAlternateAccountButtonStyle2) ? 32 : 16;
                i4 |= i6;
            } else {
                internalVKIDAlternateAccountButtonStyle2 = internalVKIDAlternateAccountButtonStyle;
            }
            i4 |= i6;
        } else {
            internalVKIDAlternateAccountButtonStyle2 = internalVKIDAlternateAccountButtonStyle;
        }
        if ((i3 & 4) != 0) {
            i4 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i2 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(i) ? 256 : 128;
        }
        if ((i3 & 8) == 0) {
            if ((i2 & 3072) == 0) {
                function1 = function0;
                i4 |= composerStartRestartGroup.changedInstance(function1) ? 2048 : 1024;
            }
            if ((i4 & 1171) == 1170 || !composerStartRestartGroup.getSkipping()) {
                composerStartRestartGroup.startDefaults();
                if ((i2 & 1) == 0 && !composerStartRestartGroup.getDefaultsInvalid()) {
                    composerStartRestartGroup.skipToGroupEnd();
                    if ((i3 & 2) != 0) {
                        i4 &= -113;
                    }
                    companion = modifier2;
                } else {
                    if (i5 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                        i4 &= -113;
                    }
                    composerStartRestartGroup.endDefaults();
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(979903613, i4, -1, "com.vk.id.onetap.compose.button.alternate.AlternateAccountButton (AlternateAccountButton.kt:71)");
                    }
                    Modifier modifierBackground = AlternateAccountButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(OneTapButtonSizeStyleKt.height(VKIDButtonBorderStyleKt.border(SizeKt.fillMaxWidth$default(TestTagKt.testTag(companion, "sign_in_to_another_account"), 0.0f, 1, null), light.getBorderStyle(), light.getCornersStyle()), light.getSizeStyle()), light.getCornersStyle())), light.getBackgroundStyle());
                    composerStartRestartGroup.startReplaceGroup(-447176618);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    Modifier modifierM307clickableO2vRcR0$default = ClickableKt.m307clickableO2vRcR0$default(modifierBackground, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(light.getRippleStyle()), 3, null), false, null, null, function1, 28, null);
                    Alignment center = Alignment.INSTANCE.getCenter();
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                    MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                    currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                    CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
                    Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM307clickableO2vRcR0$default);
                    constructor = ComposeUiNode.INSTANCE.getConstructor();
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
                    composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                    Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                    Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                    setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                    if (!composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                        composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                        composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                    }
                    Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                    BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
                    BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(i, composerStartRestartGroup, (i4 >> 6) & 14), (Modifier) null, new TextStyle(AlternateAccountButtonTextStyleKt.asColorResource(light.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(light.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OneTapButtonSizeStyleKt.asLineHeight(light.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    composerStartRestartGroup.endNode();
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
                light = internalVKIDAlternateAccountButtonStyle2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(979903613, i4, -1, "com.vk.id.onetap.compose.button.alternate.AlternateAccountButton (AlternateAccountButton.kt:71)");
                }
                Modifier modifierBackground2 = AlternateAccountButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(OneTapButtonSizeStyleKt.height(VKIDButtonBorderStyleKt.border(SizeKt.fillMaxWidth$default(TestTagKt.testTag(companion, "sign_in_to_another_account"), 0.0f, 1, null), light.getBorderStyle(), light.getCornersStyle()), light.getSizeStyle()), light.getCornersStyle())), light.getBackgroundStyle());
                composerStartRestartGroup.startReplaceGroup(-447176618);
                objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                }
                composerStartRestartGroup.endReplaceGroup();
                Modifier modifierM307clickableO2vRcR0$default2 = ClickableKt.m307clickableO2vRcR0$default(modifierBackground2, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(light.getRippleStyle()), 3, null), false, null, null, function1, 28, null);
                Alignment center2 = Alignment.INSTANCE.getCenter();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy2 = BoxKt.maybeCachedBoxMeasurePolicy(center2, false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap2 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM307clickableO2vRcR0$default2);
                constructor = ComposeUiNode.INSTANCE.getConstructor();
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
                composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting()) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                } else {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance2 = BoxScopeInstance.INSTANCE;
                BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(i, composerStartRestartGroup, (i4 >> 6) & 14), (Modifier) null, new TextStyle(AlternateAccountButtonTextStyleKt.asColorResource(light.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(light.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OneTapButtonSizeStyleKt.asLineHeight(light.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
            } else {
                composerStartRestartGroup.skipToGroupEnd();
                companion = modifier2;
                light = internalVKIDAlternateAccountButtonStyle2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return AlternateAccountButtonKt.AlternateAccountButton$lambda$3(companion, light, i, function0, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i4 |= 3072;
        function1 = function0;
        if ((i4 & 1171) == 1170) {
            composerStartRestartGroup.startDefaults();
            if ((i2 & 1) == 0) {
                if (i5 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                    i4 &= -113;
                } else {
                    light = internalVKIDAlternateAccountButtonStyle2;
                }
            } else {
                if (i5 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                    i4 &= -113;
                } else {
                    light = internalVKIDAlternateAccountButtonStyle2;
                }
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(979903613, i4, -1, "com.vk.id.onetap.compose.button.alternate.AlternateAccountButton (AlternateAccountButton.kt:71)");
            }
            Modifier modifierBackground3 = AlternateAccountButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(OneTapButtonSizeStyleKt.height(VKIDButtonBorderStyleKt.border(SizeKt.fillMaxWidth$default(TestTagKt.testTag(companion, "sign_in_to_another_account"), 0.0f, 1, null), light.getBorderStyle(), light.getCornersStyle()), light.getSizeStyle()), light.getCornersStyle())), light.getBackgroundStyle());
            composerStartRestartGroup.startReplaceGroup(-447176618);
            objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierM307clickableO2vRcR0$default3 = ClickableKt.m307clickableO2vRcR0$default(modifierBackground3, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(light.getRippleStyle()), 3, null), false, null, null, function1, 28, null);
            Alignment center3 = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy3 = BoxKt.maybeCachedBoxMeasurePolicy(center3, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap3 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM307clickableO2vRcR0$default3);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
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
            composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy3, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap3, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (!composerM3432constructorimpl.getInserting()) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            } else {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier3, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance3 = BoxScopeInstance.INSTANCE;
            BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(i, composerStartRestartGroup, (i4 >> 6) & 14), (Modifier) null, new TextStyle(AlternateAccountButtonTextStyleKt.asColorResource(light.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(light.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OneTapButtonSizeStyleKt.asLineHeight(light.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i2 & 1) == 0) {
                if (i5 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                    i4 &= -113;
                } else {
                    light = internalVKIDAlternateAccountButtonStyle2;
                }
            } else {
                if (i5 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    light = new InternalVKIDAlternateAccountButtonStyle.Light(null, null, 3, null);
                    i4 &= -113;
                } else {
                    light = internalVKIDAlternateAccountButtonStyle2;
                }
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(979903613, i4, -1, "com.vk.id.onetap.compose.button.alternate.AlternateAccountButton (AlternateAccountButton.kt:71)");
            }
            Modifier modifierBackground4 = AlternateAccountButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(OneTapButtonSizeStyleKt.height(VKIDButtonBorderStyleKt.border(SizeKt.fillMaxWidth$default(TestTagKt.testTag(companion, "sign_in_to_another_account"), 0.0f, 1, null), light.getBorderStyle(), light.getCornersStyle()), light.getSizeStyle()), light.getCornersStyle())), light.getBackgroundStyle());
            composerStartRestartGroup.startReplaceGroup(-447176618);
            objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierM307clickableO2vRcR0$default4 = ClickableKt.m307clickableO2vRcR0$default(modifierBackground4, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(light.getRippleStyle()), 3, null), false, null, null, function1, 28, null);
            Alignment center4 = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy4 = BoxKt.maybeCachedBoxMeasurePolicy(center4, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap4 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier4 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM307clickableO2vRcR0$default4);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
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
            composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy4, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap4, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (!composerM3432constructorimpl.getInserting()) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            } else {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier4, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance4 = BoxScopeInstance.INSTANCE;
            BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(i, composerStartRestartGroup, (i4 >> 6) & 14), (Modifier) null, new TextStyle(AlternateAccountButtonTextStyleKt.asColorResource(light.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(light.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OneTapButtonSizeStyleKt.asLineHeight(light.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return AlternateAccountButtonKt.AlternateAccountButton$lambda$3(companion, light, i, function0, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void AlternateAccountButtonPreview(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1980439874);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1980439874, i, -1, "com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonPreview (AlternateAccountButton.kt:105)");
            }
            int i2 = R.string.vkid_auth_use_another_account_short;
            composerStartRestartGroup.startReplaceGroup(-142302117);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            AlternateAccountButton(null, null, i2, (Function0) objRememberedValue, composerStartRestartGroup, 3072, 3);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.alternate.AlternateAccountButtonKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return AlternateAccountButtonKt.AlternateAccountButtonPreview$lambda$6(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
