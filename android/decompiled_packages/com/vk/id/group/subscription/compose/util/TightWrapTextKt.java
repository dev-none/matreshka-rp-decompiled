package com.vk.id.group.subscription.compose.util;

import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.layout.LayoutModifierKt;
import androidx.compose.ui.layout.Measurable;
import androidx.compose.ui.layout.MeasureResult;
import androidx.compose.ui.layout.MeasureScope;
import androidx.compose.ui.layout.Placeable;
import androidx.compose.ui.text.TextLayoutResult;
import androidx.compose.ui.text.TextStyle;
import androidx.compose.ui.unit.Constraints;
import androidx.media3.exoplayer.RendererCapabilities;
import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.IntIterator;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.RangesKt;

/* JADX INFO: compiled from: TightWrapText.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\u001a7\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0001¢\u0006\u0004\b\f\u0010\r¨\u0006\u000e²\u0006\f\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u008a\u008e\u0002"}, d2 = {"TightWrapText", "", "text", "", "modifier", "Landroidx/compose/ui/Modifier;", "style", "Landroidx/compose/ui/text/TextStyle;", "maxLines", "", "overflow", "Landroidx/compose/ui/text/style/TextOverflow;", "TightWrapText-pNBRTJQ", "(Ljava/lang/String;Landroidx/compose/ui/Modifier;Landroidx/compose/ui/text/TextStyle;IILandroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release", "textLayoutResult", "Landroidx/compose/ui/text/TextLayoutResult;"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class TightWrapTextKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TightWrapText_pNBRTJQ$lambda$10(String str, Modifier modifier, TextStyle textStyle, int i, int i2, int i3, Composer composer, int i4) {
        m9282TightWrapTextpNBRTJQ(str, modifier, textStyle, i, i2, composer, RecomposeScopeImplKt.updateChangedFlags(i3 | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: TightWrapText-pNBRTJQ, reason: not valid java name */
    public static final void m9282TightWrapTextpNBRTJQ(final String text, final Modifier modifier, final TextStyle style, final int i, final int i2, Composer composer, final int i3) {
        int i4;
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(modifier, "modifier");
        Intrinsics.checkNotNullParameter(style, "style");
        Composer composerStartRestartGroup = composer.startRestartGroup(-86488437);
        if ((i3 & 6) == 0) {
            i4 = (composerStartRestartGroup.changed(text) ? 4 : 2) | i3;
        } else {
            i4 = i3;
        }
        if ((i3 & 48) == 0) {
            i4 |= composerStartRestartGroup.changed(modifier) ? 32 : 16;
        }
        if ((i3 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(style) ? 256 : 128;
        }
        if ((i3 & 3072) == 0) {
            i4 |= composerStartRestartGroup.changed(i) ? 2048 : 1024;
        }
        if ((i3 & 24576) == 0) {
            i4 |= composerStartRestartGroup.changed(i2) ? 16384 : 8192;
        }
        if ((i4 & 9363) != 9362 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-86488437, i4, -1, "com.vk.id.group.subscription.compose.util.TightWrapText (TightWrapText.kt:24)");
            }
            composerStartRestartGroup.startReplaceGroup(-524635391);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(null, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            final MutableState mutableState = (MutableState) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-524631270);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function3() { // from class: com.vk.id.group.subscription.compose.util.TightWrapTextKt$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function3
                    public final Object invoke(Object obj, Object obj2, Object obj3) {
                        return TightWrapTextKt.TightWrapText_pNBRTJQ$lambda$7$lambda$6(mutableState, (MeasureScope) obj, (Measurable) obj2, (Constraints) obj3);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierLayout = LayoutModifierKt.layout(modifier, (Function3) objRememberedValue2);
            composerStartRestartGroup.startReplaceGroup(-524603219);
            Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue3 = new Function1() { // from class: com.vk.id.group.subscription.compose.util.TightWrapTextKt$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return TightWrapTextKt.TightWrapText_pNBRTJQ$lambda$9$lambda$8(mutableState, (TextLayoutResult) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
            }
            composerStartRestartGroup.endReplaceGroup();
            BasicTextKt.m1017BasicTextVhcvRP8(text, modifierLayout, style, (Function1<? super TextLayoutResult, Unit>) objRememberedValue3, i2, false, i, 0, (ColorProducer) null, composerStartRestartGroup, (i4 & 14) | 3072 | (i4 & 896) | (57344 & i4) | ((i4 << 9) & 3670016), 416);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.util.TightWrapTextKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return TightWrapTextKt.TightWrapText_pNBRTJQ$lambda$10(text, modifier, style, i, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final TextLayoutResult TightWrapText_pNBRTJQ$lambda$1(MutableState<TextLayoutResult> mutableState) {
        return mutableState.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MeasureResult TightWrapText_pNBRTJQ$lambda$7$lambda$6(MutableState mutableState, MeasureScope layout, Measurable measurable, Constraints constraints) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        final Placeable placeableMo5552measureBRTryo0 = measurable.mo5552measureBRTryo0(constraints.getValue());
        TextLayoutResult textLayoutResultTightWrapText_pNBRTJQ$lambda$1 = TightWrapText_pNBRTJQ$lambda$1(mutableState);
        Intrinsics.checkNotNull(textLayoutResultTightWrapText_pNBRTJQ$lambda$1);
        if (textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineCount() == 0) {
            return MeasureScope.layout$default(layout, placeableMo5552measureBRTryo0.getWidth(), placeableMo5552measureBRTryo0.getHeight(), null, new Function1() { // from class: com.vk.id.group.subscription.compose.util.TightWrapTextKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return TightWrapTextKt.TightWrapText_pNBRTJQ$lambda$7$lambda$6$lambda$3(placeableMo5552measureBRTryo0, (Placeable.PlacementScope) obj);
                }
            }, 4, null);
        }
        Iterator<Integer> it = RangesKt.until(0, textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineCount()).iterator();
        if (!it.hasNext()) {
            throw new NoSuchElementException();
        }
        IntIterator intIterator = (IntIterator) it;
        float lineLeft = textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineLeft(intIterator.nextInt());
        while (it.hasNext()) {
            lineLeft = Math.min(lineLeft, textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineLeft(intIterator.nextInt()));
        }
        Iterator<Integer> it2 = RangesKt.until(0, textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineCount()).iterator();
        if (!it2.hasNext()) {
            throw new NoSuchElementException();
        }
        IntIterator intIterator2 = (IntIterator) it2;
        float lineRight = textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineRight(intIterator2.nextInt());
        while (it2.hasNext()) {
            lineRight = Math.max(lineRight, textLayoutResultTightWrapText_pNBRTJQ$lambda$1.getLineRight(intIterator2.nextInt()));
        }
        final float f = lineLeft;
        return MeasureScope.layout$default(layout, (int) Math.ceil(lineRight - lineLeft), placeableMo5552measureBRTryo0.getHeight(), null, new Function1() { // from class: com.vk.id.group.subscription.compose.util.TightWrapTextKt$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return TightWrapTextKt.TightWrapText_pNBRTJQ$lambda$7$lambda$6$lambda$5(placeableMo5552measureBRTryo0, f, (Placeable.PlacementScope) obj);
            }
        }, 4, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TightWrapText_pNBRTJQ$lambda$7$lambda$6$lambda$3(Placeable placeable, Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        Placeable.PlacementScope.placeRelative$default(layout, placeable, 0, 0, 0.0f, 4, null);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TightWrapText_pNBRTJQ$lambda$7$lambda$6$lambda$5(Placeable placeable, float f, Placeable.PlacementScope layout) {
        Intrinsics.checkNotNullParameter(layout, "$this$layout");
        Placeable.PlacementScope.place$default(layout, placeable, -((int) Math.floor(f)), 0, 0.0f, 4, null);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TightWrapText_pNBRTJQ$lambda$9$lambda$8(MutableState mutableState, TextLayoutResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        mutableState.setValue(it);
        return Unit.INSTANCE;
    }
}
