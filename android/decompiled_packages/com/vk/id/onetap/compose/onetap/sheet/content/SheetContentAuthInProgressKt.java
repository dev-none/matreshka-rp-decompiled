package com.vk.id.onetap.compose.onetap.sheet.content;

import androidx.compose.animation.core.AnimationSpecKt;
import androidx.compose.animation.core.EasingKt;
import androidx.compose.animation.core.InfiniteRepeatableSpec;
import androidx.compose.animation.core.InfiniteTransition;
import androidx.compose.animation.core.InfiniteTransitionKt;
import androidx.compose.animation.core.RepeatMode;
import androidx.compose.foundation.ImageKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.State;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.GraphicsLayerModifierKt;
import androidx.compose.ui.graphics.GraphicsLayerScope;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SheetContentAuthInProgress.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u0007\u001a#\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005H\u0001¢\u0006\u0002\u0010\u0006\u001a\u0017\u0010\u0007\u001a\u00020\u00012\b\b\u0001\u0010\b\u001a\u00020\tH\u0003¢\u0006\u0002\u0010\n\u001a\r\u0010\u000b\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\f¨\u0006\r²\u0006\n\u0010\u000e\u001a\u00020\u000fX\u008a\u0084\u0002"}, d2 = {"SheetContentAuthInProgress", "", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "dismissSheet", "Lkotlin/Function0;", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "CircleProgress", "progressRes", "", "(ILandroidx/compose/runtime/Composer;I)V", "OneTapBottomSheetProgressPreview", "(Landroidx/compose/runtime/Composer;I)V", "onetap-compose_release", "angle", ""}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class SheetContentAuthInProgressKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit CircleProgress$lambda$4(int i, int i2, Composer composer, int i3) {
        CircleProgress(i, composer, RecomposeScopeImplKt.updateChangedFlags(i2 | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapBottomSheetProgressPreview$lambda$7(int i, Composer composer, int i2) {
        OneTapBottomSheetProgressPreview(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetContentAuthInProgress$lambda$0(OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, int i, Composer composer, int i2) {
        SheetContentAuthInProgress(oneTapBottomSheetStyle, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void SheetContentAuthInProgress(final OneTapBottomSheetStyle style, final Function0<Unit> dismissSheet, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(dismissSheet, "dismissSheet");
        Composer composerStartRestartGroup = composer.startRestartGroup(-377767247);
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
                ComposerKt.traceEventStart(-377767247, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgress (SheetContentAuthInProgress.kt:24)");
            }
            OneTapBottomSheetAnalytics.INSTANCE.BottomSheetInProgressShown$onetap_compose_release(composerStartRestartGroup, 0);
            SheetContentBoxKt.SheetContentBox(style, dismissSheet, ComposableSingletons$SheetContentAuthInProgressKt.INSTANCE.m9364getLambda1$onetap_compose_release(), composerStartRestartGroup, (i2 & 112) | (i2 & 14) | RendererCapabilities.DECODER_SUPPORT_MASK);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgressKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthInProgressKt.SheetContentAuthInProgress$lambda$0(style, dismissSheet, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void CircleProgress(final int i, Composer composer, final int i2) {
        int i3;
        Composer composerStartRestartGroup = composer.startRestartGroup(1409954711);
        if ((i2 & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(i) ? 4 : 2) | i2;
        } else {
            i3 = i2;
        }
        if ((i3 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1409954711, i3, -1, "com.vk.id.onetap.compose.onetap.sheet.content.CircleProgress (SheetContentAuthInProgress.kt:40)");
            }
            final State<Float> stateAnimateFloat = InfiniteTransitionKt.animateFloat(InfiniteTransitionKt.rememberInfiniteTransition("vkid_auth_in_progress_spinner", composerStartRestartGroup, 6, 0), 0.0f, 360.0f, AnimationSpecKt.m179infiniteRepeatable9IiC70o$default(AnimationSpecKt.tween$default(1000, 0, EasingKt.getLinearEasing(), 2, null), RepeatMode.Restart, 0L, 4, null), "VKID Auth in progress", composerStartRestartGroup, InfiniteTransition.$stable | 25008 | (InfiniteRepeatableSpec.$stable << 9), 0);
            Modifier.Companion companion = Modifier.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-1873424899);
            boolean zChanged = composerStartRestartGroup.changed(stateAnimateFloat);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgressKt$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return SheetContentAuthInProgressKt.CircleProgress$lambda$3$lambda$2(stateAnimateFloat, (GraphicsLayerScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            ImageKt.Image(PainterResources_androidKt.painterResource(i, composerStartRestartGroup, i3 & 14), (String) null, GraphicsLayerModifierKt.graphicsLayer(companion, (Function1) objRememberedValue), (Alignment) null, (ContentScale) null, 0.0f, (ColorFilter) null, composerStartRestartGroup, 48, 120);
            composerStartRestartGroup = composerStartRestartGroup;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgressKt$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthInProgressKt.CircleProgress$lambda$4(i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit CircleProgress$lambda$3$lambda$2(State state, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setRotationZ(CircleProgress$lambda$1(state));
        return Unit.INSTANCE;
    }

    private static final void OneTapBottomSheetProgressPreview(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-1448478117);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1448478117, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.OneTapBottomSheetProgressPreview (SheetContentAuthInProgress.kt:63)");
            }
            OneTapBottomSheetStyle.TransparentDark transparentDark = new OneTapBottomSheetStyle.TransparentDark(null, null, null, 7, null);
            composerStartRestartGroup.startReplaceGroup(-1965396971);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgressKt$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetContentAuthInProgress(transparentDark, (Function0) objRememberedValue, composerStartRestartGroup, 48);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentAuthInProgressKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentAuthInProgressKt.OneTapBottomSheetProgressPreview$lambda$7(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final float CircleProgress$lambda$1(State<Float> state) {
        return state.getValue().floatValue();
    }
}
