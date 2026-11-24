package com.vk.id.onetap.compose.util;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.layout.Measurable;
import androidx.compose.ui.layout.MeasureResult;
import androidx.compose.ui.layout.MeasureScope;
import androidx.compose.ui.layout.Placeable;
import androidx.compose.ui.layout.SubcomposeLayoutKt;
import androidx.compose.ui.layout.SubcomposeMeasureScope;
import androidx.compose.ui.unit.Constraints;
import androidx.compose.ui.unit.ConstraintsKt;
import androidx.compose.ui.unit.Dp;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MeasureUnconstrainedViewWidth.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\u001aH\u0010\u0000\u001a\u00020\u00012\u0011\u0010\u0002\u001a\r\u0012\u0004\u0012\u00020\u00010\u0003¢\u0006\u0002\b\u00042&\u0010\u0005\u001a\"\u0012\u0013\u0012\u00110\u0007¢\u0006\f\b\b\u0012\b\b\t\u0012\u0004\b\b(\n\u0012\u0004\u0012\u00020\u00010\u0006¢\u0006\u0002\b\u0004H\u0001¢\u0006\u0002\u0010\u000b\u001aH\u0010\f\u001a\u00020\u00012\u0011\u0010\u0002\u001a\r\u0012\u0004\u0012\u00020\u00010\u0003¢\u0006\u0002\b\u00042&\u0010\u0005\u001a\"\u0012\u0013\u0012\u00110\u0007¢\u0006\f\b\b\u0012\b\b\t\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00010\u0006¢\u0006\u0002\b\u0004H\u0001¢\u0006\u0002\u0010\u000b¨\u0006\u000e"}, d2 = {"MeasureUnconstrainedViewWidth", "", "viewToMeasure", "Lkotlin/Function0;", "Landroidx/compose/runtime/Composable;", "content", "Lkotlin/Function1;", "Landroidx/compose/ui/unit/Dp;", "Lkotlin/ParameterName;", "name", "measuredWidth", "(Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function3;Landroidx/compose/runtime/Composer;I)V", "MeasureUnconstrainedViewHeight", "measuredHeight", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class MeasureUnconstrainedViewWidthKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewHeight$lambda$9(Function2 function2, Function3 function3, int i, Composer composer, int i2) {
        MeasureUnconstrainedViewHeight(function2, function3, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewWidth$lambda$4(Function2 function2, Function3 function3, int i, Composer composer, int i2) {
        MeasureUnconstrainedViewWidth(function2, function3, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void MeasureUnconstrainedViewWidth(final Function2<? super Composer, ? super Integer, Unit> viewToMeasure, final Function3<? super Dp, ? super Composer, ? super Integer, Unit> content, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(viewToMeasure, "viewToMeasure");
        Intrinsics.checkNotNullParameter(content, "content");
        Composer composerStartRestartGroup = composer.startRestartGroup(-1713395483);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(viewToMeasure) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(content) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1713395483, i2, -1, "com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidth (MeasureUnconstrainedViewWidth.kt:11)");
            }
            composerStartRestartGroup.startReplaceGroup(-1738132685);
            boolean z = ((i2 & 14) == 4) | ((i2 & 112) == 32);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda4
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewWidth$lambda$3$lambda$2(viewToMeasure, content, (SubcomposeMeasureScope) obj, (Constraints) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SubcomposeLayoutKt.SubcomposeLayout(null, (Function2) objRememberedValue, composerStartRestartGroup, 0, 1);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda5
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewWidth$lambda$4(viewToMeasure, content, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MeasureResult MeasureUnconstrainedViewWidth$lambda$3$lambda$2(Function2 function2, final Function3 function3, SubcomposeMeasureScope SubcomposeLayout, Constraints constraints) {
        Intrinsics.checkNotNullParameter(SubcomposeLayout, "$this$SubcomposeLayout");
        final float f = SubcomposeLayout.mo410toDpu2uoSUM(SubcomposeLayout.subcompose("viewToMeasure", function2).get(0).mo5552measureBRTryo0(ConstraintsKt.Constraints$default(0, 0, 0, 0, 15, null)).getWidth());
        List<Measurable> listSubcompose = SubcomposeLayout.subcompose("content", ComposableLambdaKt.composableLambdaInstance(1560160232, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$MeasureUnconstrainedViewWidth$1$1$measurable$1
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
                    ComposerKt.traceEventStart(1560160232, i, -1, "com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidth.<anonymous>.<anonymous>.<anonymous> (MeasureUnconstrainedViewWidth.kt:14)");
                }
                function3.invoke(Dp.m6848boximpl(f), composer, 0);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
            }
        }));
        if (!listSubcompose.isEmpty()) {
            final Placeable placeableMo5552measureBRTryo0 = listSubcompose.get(0).mo5552measureBRTryo0(constraints.getValue());
            return MeasureScope.layout$default(SubcomposeLayout, placeableMo5552measureBRTryo0.getWidth(), placeableMo5552measureBRTryo0.getHeight(), null, new Function1() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewWidth$lambda$3$lambda$2$lambda$0(placeableMo5552measureBRTryo0, (Placeable.PlacementScope) obj);
                }
            }, 4, null);
        }
        return MeasureScope.layout$default(SubcomposeLayout, 0, 0, null, new Function1() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewWidth$lambda$3$lambda$2$lambda$1((Placeable.PlacementScope) obj);
            }
        }, 4, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewWidth$lambda$3$lambda$2$lambda$0(Placeable placeable, Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        Placeable.PlacementScope.place$default(layout, placeable, 0, 0, 0.0f, 4, null);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewWidth$lambda$3$lambda$2$lambda$1(Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        return Unit.INSTANCE;
    }

    public static final void MeasureUnconstrainedViewHeight(final Function2<? super Composer, ? super Integer, Unit> viewToMeasure, final Function3<? super Dp, ? super Composer, ? super Integer, Unit> content, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(viewToMeasure, "viewToMeasure");
        Intrinsics.checkNotNullParameter(content, "content");
        Composer composerStartRestartGroup = composer.startRestartGroup(1215822976);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(viewToMeasure) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(content) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1215822976, i2, -1, "com.vk.id.onetap.compose.util.MeasureUnconstrainedViewHeight (MeasureUnconstrainedViewWidth.kt:28)");
            }
            composerStartRestartGroup.startReplaceGroup(-1839021429);
            boolean z = ((i2 & 14) == 4) | ((i2 & 112) == 32);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda6
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewHeight$lambda$8$lambda$7(viewToMeasure, content, (SubcomposeMeasureScope) obj, (Constraints) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SubcomposeLayoutKt.SubcomposeLayout(null, (Function2) objRememberedValue, composerStartRestartGroup, 0, 1);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda7
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewHeight$lambda$9(viewToMeasure, content, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MeasureResult MeasureUnconstrainedViewHeight$lambda$8$lambda$7(Function2 function2, final Function3 function3, SubcomposeMeasureScope SubcomposeLayout, Constraints constraints) {
        Intrinsics.checkNotNullParameter(SubcomposeLayout, "$this$SubcomposeLayout");
        final float f = SubcomposeLayout.mo410toDpu2uoSUM(SubcomposeLayout.subcompose("viewToMeasure", function2).get(0).mo5552measureBRTryo0(ConstraintsKt.Constraints$default(0, 0, 0, 0, 15, null)).getHeight());
        List<Measurable> listSubcompose = SubcomposeLayout.subcompose("content", ComposableLambdaKt.composableLambdaInstance(-383164963, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$MeasureUnconstrainedViewHeight$1$1$measurable$1
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
                    ComposerKt.traceEventStart(-383164963, i, -1, "com.vk.id.onetap.compose.util.MeasureUnconstrainedViewHeight.<anonymous>.<anonymous>.<anonymous> (MeasureUnconstrainedViewWidth.kt:31)");
                }
                function3.invoke(Dp.m6848boximpl(f), composer, 0);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
            }
        }));
        if (!listSubcompose.isEmpty()) {
            final Placeable placeableMo5552measureBRTryo0 = listSubcompose.get(0).mo5552measureBRTryo0(constraints.getValue());
            return MeasureScope.layout$default(SubcomposeLayout, placeableMo5552measureBRTryo0.getWidth(), placeableMo5552measureBRTryo0.getHeight(), null, new Function1() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewHeight$lambda$8$lambda$7$lambda$5(placeableMo5552measureBRTryo0, (Placeable.PlacementScope) obj);
                }
            }, 4, null);
        }
        return MeasureScope.layout$default(SubcomposeLayout, 0, 0, null, new Function1() { // from class: com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewHeight$lambda$8$lambda$7$lambda$6((Placeable.PlacementScope) obj);
            }
        }, 4, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewHeight$lambda$8$lambda$7$lambda$5(Placeable placeable, Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        Placeable.PlacementScope.place$default(layout, placeable, 0, 0, 0.0f, 4, null);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit MeasureUnconstrainedViewHeight$lambda$8$lambda$7$lambda$6(Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        return Unit.INSTANCE;
    }
}
