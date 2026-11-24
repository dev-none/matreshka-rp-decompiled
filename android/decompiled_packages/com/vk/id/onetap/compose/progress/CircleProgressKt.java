package com.vk.id.onetap.compose.progress;

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
import androidx.compose.ui.graphics.GraphicsLayerModifierKt;
import androidx.compose.ui.graphics.GraphicsLayerScope;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.compose.ui.semantics.SemanticsModifierKt;
import androidx.compose.ui.semantics.SemanticsProperties_androidKt;
import androidx.compose.ui.semantics.SemanticsPropertyReceiver;
import com.vk.id.onetap.common.progress.style.InternalCircleProgressStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: CircleProgress.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\u001a\u0015\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004¨\u0006\u0005²\u0006\n\u0010\u0006\u001a\u00020\u0007X\u008a\u0084\u0002"}, d2 = {"CircleProgress", "", "style", "Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;", "(Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;Landroidx/compose/runtime/Composer;I)V", "onetap-compose_release", "angle", ""}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CircleProgressKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit CircleProgress$lambda$5(InternalCircleProgressStyle internalCircleProgressStyle, int i, Composer composer, int i2) {
        CircleProgress(internalCircleProgressStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void CircleProgress(final InternalCircleProgressStyle style, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        Composer composerStartRestartGroup = composer.startRestartGroup(2079882370);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2079882370, i2, -1, "com.vk.id.onetap.compose.progress.CircleProgress (CircleProgress.kt:27)");
            }
            final State<Float> stateAnimateFloat = InfiniteTransitionKt.animateFloat(InfiniteTransitionKt.rememberInfiniteTransition("vkid_spinner", composerStartRestartGroup, 6, 0), 0.0f, 360.0f, AnimationSpecKt.m179infiniteRepeatable9IiC70o$default(AnimationSpecKt.tween$default(1000, 0, EasingKt.getLinearEasing(), 2, null), RepeatMode.Restart, 0L, 4, null), "vkid_spinner", composerStartRestartGroup, InfiniteTransition.$stable | 25008 | (InfiniteRepeatableSpec.$stable << 9), 0);
            Modifier.Companion companion = Modifier.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(1828822699);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.progress.CircleProgressKt$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return CircleProgressKt.CircleProgress$lambda$2$lambda$1((SemanticsPropertyReceiver) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierTestTag = TestTagKt.testTag(SemanticsModifierKt.semantics$default(companion, false, (Function1) objRememberedValue, 1, null), "circle_progress");
            composerStartRestartGroup.startReplaceGroup(1828828489);
            boolean zChanged = composerStartRestartGroup.changed(stateAnimateFloat);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function1() { // from class: com.vk.id.onetap.compose.progress.CircleProgressKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return CircleProgressKt.CircleProgress$lambda$4$lambda$3(stateAnimateFloat, (GraphicsLayerScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_spinner, composerStartRestartGroup, 0), (String) null, GraphicsLayerModifierKt.graphicsLayer(modifierTestTag, (Function1) objRememberedValue2), (Alignment) null, (ContentScale) null, 0.0f, CircleProgressStyleKt.asColorFilter(style, composerStartRestartGroup, i2 & 14), composerStartRestartGroup, 48, 56);
            composerStartRestartGroup = composerStartRestartGroup;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.progress.CircleProgressKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return CircleProgressKt.CircleProgress$lambda$5(style, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit CircleProgress$lambda$2$lambda$1(SemanticsPropertyReceiver semantics) {
        Intrinsics.checkNotNullParameter(semantics, "$this$semantics");
        SemanticsProperties_androidKt.setTestTagsAsResourceId(semantics, true);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit CircleProgress$lambda$4$lambda$3(State state, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setRotationZ(CircleProgress$lambda$0(state));
        return Unit.INSTANCE;
    }

    private static final float CircleProgress$lambda$0(State<Float> state) {
        return state.getValue().floatValue();
    }
}
