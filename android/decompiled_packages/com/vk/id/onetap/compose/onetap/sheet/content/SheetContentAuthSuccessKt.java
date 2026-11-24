package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
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
import androidx.compose.ui.text.style.TextDecoration;
import androidx.compose.ui.text.style.TextGeometricTransform;
import androidx.compose.ui.text.style.TextIndent;
import androidx.compose.ui.text.style.TextMotion;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.TextUnitKt;
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.onetap.compose.R;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SheetContentAuthSuccess.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a#\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005H\u0001¢\u0006\u0002\u0010\u0006\u001a\r\u0010\u0007\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\b¨\u0006\t"}, d2 = {"SheetContentAuthSuccess", "", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "dismissSheet", "Lkotlin/Function0;", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "OneTapBottomSheetProgressPreview", "(Landroidx/compose/runtime/Composer;I)V", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class SheetContentAuthSuccessKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapBottomSheetProgressPreview$lambda$3(int i, Composer composer, int i2) {
        OneTapBottomSheetProgressPreview(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetContentAuthSuccess$lambda$0(OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, int i, Composer composer, int i2) {
        SheetContentAuthSuccess(oneTapBottomSheetStyle, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void SheetContentAuthSuccess(final OneTapBottomSheetStyle style, final Function0<Unit> dismissSheet, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(dismissSheet, "dismissSheet");
        Composer composerStartRestartGroup = composer.startRestartGroup(1637237657);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(dismissSheet) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1637237657, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccess (SheetContentAuthSuccess.kt:25)");
            }
            SheetContentBoxKt.SheetContentBox(style, dismissSheet, ComposableLambdaKt.rememberComposableLambda(-1215095955, true, new Function3<ColumnScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccessKt.SheetContentAuthSuccess.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer2, Integer num) {
                    invoke(columnScope, composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(ColumnScope SheetContentBox, Composer composer2, int i3) {
                    Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
                    if ((i3 & 17) != 16 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(-1215095955, i3, -1, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccess.<anonymous> (SheetContentAuthSuccess.kt:30)");
                        }
                        SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(60)), composer2, 6);
                        ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_sheet_content_success, composer2, 0), (String) null, (Modifier) null, (Alignment) null, (ContentScale) null, 0.0f, ColorFilter.Companion.m4174tintxETnrds$default(ColorFilter.INSTANCE, ColorResources_androidKt.colorResource(R.color.vkid_azure_300, composer2, 0), 0, 2, null), composer2, 48, 60);
                        BasicTextKt.m1017BasicTextVhcvRP8(StringResources_androidKt.stringResource(R.string.vkid_sheet_state_auth_success, composer2, 0), PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(12), 0.0f, 0.0f, 13, null), new TextStyle(ColorResources_androidKt.colorResource(style.getContentTextColor(), composer2, 0), TextUnitKt.getSp(15), FontWeight.INSTANCE.getW400(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, TextUnitKt.getSp(0.1d), (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, 0, 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16646008, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composer2, 48, 504);
                        SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(72)), composer2, 6);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccessKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthSuccessKt.SheetContentAuthSuccess$lambda$0(style, dismissSheet, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void OneTapBottomSheetProgressPreview(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1414717182);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1414717182, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.OneTapBottomSheetProgressPreview (SheetContentAuthSuccess.kt:53)");
            }
            OneTapBottomSheetStyle.TransparentLight transparentLight = new OneTapBottomSheetStyle.TransparentLight(null, null, null, 7, null);
            composerStartRestartGroup.startReplaceGroup(-1965408427);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccessKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetContentAuthSuccess(transparentLight, (Function0) objRememberedValue, composerStartRestartGroup, 48);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthSuccessKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthSuccessKt.OneTapBottomSheetProgressPreview$lambda$3(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
