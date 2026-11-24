package coil.compose;

import androidx.compose.ui.Alignment;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.geometry.Size;
import androidx.compose.ui.geometry.SizeKt;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.drawscope.ContentDrawScope;
import androidx.compose.ui.graphics.painter.Painter;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.IntrinsicMeasurable;
import androidx.compose.ui.layout.IntrinsicMeasureScope;
import androidx.compose.ui.layout.Measurable;
import androidx.compose.ui.layout.MeasureResult;
import androidx.compose.ui.layout.MeasureScope;
import androidx.compose.ui.layout.Placeable;
import androidx.compose.ui.layout.ScaleFactor;
import androidx.compose.ui.layout.ScaleFactorKt;
import androidx.compose.ui.node.DrawModifierNode;
import androidx.compose.ui.node.LayoutModifierNode;
import androidx.compose.ui.unit.Constraints;
import androidx.compose.ui.unit.ConstraintsKt;
import androidx.compose.ui.unit.IntOffset;
import io.sentry.protocol.ViewHierarchyNode;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.math.MathKt;

/* JADX INFO: compiled from: ContentPainterModifier.kt */
/* JADX INFO: loaded from: classes4.dex */
@Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0016\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u00002\u00020\u00012\u00020\u00022\u00020\u0003B/\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0002\u0010\u000eJ\u001a\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020(H\u0002ø\u0001\u0000¢\u0006\u0004\b*\u0010+J\u001a\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020-H\u0002ø\u0001\u0000¢\u0006\u0004\b/\u0010+J\f\u00100\u001a\u000201*\u000202H\u0016J\u001c\u00103\u001a\u000204*\u0002052\u0006\u00106\u001a\u0002072\u0006\u00108\u001a\u000204H\u0016J\u001c\u00109\u001a\u000204*\u0002052\u0006\u00106\u001a\u0002072\u0006\u0010:\u001a\u000204H\u0016J&\u0010;\u001a\u00020<*\u00020=2\u0006\u00106\u001a\u00020>2\u0006\u0010.\u001a\u00020-H\u0016ø\u0001\u0000¢\u0006\u0004\b?\u0010@J\u001c\u0010A\u001a\u000204*\u0002052\u0006\u00106\u001a\u0002072\u0006\u00108\u001a\u000204H\u0016J\u001c\u0010B\u001a\u000204*\u0002052\u0006\u00106\u001a\u0002072\u0006\u0010:\u001a\u000204H\u0016R\u001a\u0010\u0006\u001a\u00020\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R\u001a\u0010\n\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016R\u001c\u0010\f\u001a\u0004\u0018\u00010\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001aR\u001a\u0010\b\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001b\u0010\u001c\"\u0004\b\u001d\u0010\u001eR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010 \"\u0004\b!\u0010\"R\u0014\u0010#\u001a\u00020$8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b%\u0010&\u0082\u0002\u0007\n\u0005\b¡\u001e0\u0001¨\u0006C"}, d2 = {"Lcoil/compose/ContentPainterNode;", "Landroidx/compose/ui/Modifier$Node;", "Landroidx/compose/ui/node/DrawModifierNode;", "Landroidx/compose/ui/node/LayoutModifierNode;", "painter", "Landroidx/compose/ui/graphics/painter/Painter;", "alignment", "Landroidx/compose/ui/Alignment;", "contentScale", "Landroidx/compose/ui/layout/ContentScale;", ViewHierarchyNode.JsonKeys.ALPHA, "", "colorFilter", "Landroidx/compose/ui/graphics/ColorFilter;", "(Landroidx/compose/ui/graphics/painter/Painter;Landroidx/compose/ui/Alignment;Landroidx/compose/ui/layout/ContentScale;FLandroidx/compose/ui/graphics/ColorFilter;)V", "getAlignment", "()Landroidx/compose/ui/Alignment;", "setAlignment", "(Landroidx/compose/ui/Alignment;)V", "getAlpha", "()F", "setAlpha", "(F)V", "getColorFilter", "()Landroidx/compose/ui/graphics/ColorFilter;", "setColorFilter", "(Landroidx/compose/ui/graphics/ColorFilter;)V", "getContentScale", "()Landroidx/compose/ui/layout/ContentScale;", "setContentScale", "(Landroidx/compose/ui/layout/ContentScale;)V", "getPainter", "()Landroidx/compose/ui/graphics/painter/Painter;", "setPainter", "(Landroidx/compose/ui/graphics/painter/Painter;)V", "shouldAutoInvalidate", "", "getShouldAutoInvalidate", "()Z", "calculateScaledSize", "Landroidx/compose/ui/geometry/Size;", "dstSize", "calculateScaledSize-E7KxVPU", "(J)J", "modifyConstraints", "Landroidx/compose/ui/unit/Constraints;", "constraints", "modifyConstraints-ZezNO4M", "draw", "", "Landroidx/compose/ui/graphics/drawscope/ContentDrawScope;", "maxIntrinsicHeight", "", "Landroidx/compose/ui/layout/IntrinsicMeasureScope;", "measurable", "Landroidx/compose/ui/layout/IntrinsicMeasurable;", "width", "maxIntrinsicWidth", "height", "measure", "Landroidx/compose/ui/layout/MeasureResult;", "Landroidx/compose/ui/layout/MeasureScope;", "Landroidx/compose/ui/layout/Measurable;", "measure-3p2s80s", "(Landroidx/compose/ui/layout/MeasureScope;Landroidx/compose/ui/layout/Measurable;J)Landroidx/compose/ui/layout/MeasureResult;", "minIntrinsicHeight", "minIntrinsicWidth", "coil-compose-base_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class ContentPainterNode extends Modifier.Node implements DrawModifierNode, LayoutModifierNode {
    public static final int $stable = 8;
    private Alignment alignment;
    private float alpha;
    private ColorFilter colorFilter;
    private ContentScale contentScale;
    private Painter painter;

    @Override // androidx.compose.ui.Modifier.Node
    public boolean getShouldAutoInvalidate() {
        return false;
    }

    public final Painter getPainter() {
        return this.painter;
    }

    public final void setPainter(Painter painter) {
        this.painter = painter;
    }

    public final Alignment getAlignment() {
        return this.alignment;
    }

    public final void setAlignment(Alignment alignment) {
        this.alignment = alignment;
    }

    public final ContentScale getContentScale() {
        return this.contentScale;
    }

    public final void setContentScale(ContentScale contentScale) {
        this.contentScale = contentScale;
    }

    public final float getAlpha() {
        return this.alpha;
    }

    public final void setAlpha(float f) {
        this.alpha = f;
    }

    public final ColorFilter getColorFilter() {
        return this.colorFilter;
    }

    public final void setColorFilter(ColorFilter colorFilter) {
        this.colorFilter = colorFilter;
    }

    public ContentPainterNode(Painter painter, Alignment alignment, ContentScale contentScale, float f, ColorFilter colorFilter) {
        this.painter = painter;
        this.alignment = alignment;
        this.contentScale = contentScale;
        this.alpha = f;
        this.colorFilter = colorFilter;
    }

    @Override // androidx.compose.ui.node.LayoutModifierNode
    /* JADX INFO: renamed from: measure-3p2s80s */
    public MeasureResult mo131measure3p2s80s(MeasureScope measureScope, Measurable measurable, long j) {
        final Placeable placeableMo5552measureBRTryo0 = measurable.mo5552measureBRTryo0(m7945modifyConstraintsZezNO4M(j));
        return MeasureScope.layout$default(measureScope, placeableMo5552measureBRTryo0.getWidth(), placeableMo5552measureBRTryo0.getHeight(), null, new Function1<Placeable.PlacementScope, Unit>() { // from class: coil.compose.ContentPainterNode$measure$1
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Unit invoke(Placeable.PlacementScope placementScope) {
                invoke2(placementScope);
                return Unit.INSTANCE;
            }

            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
            public final void invoke2(Placeable.PlacementScope placementScope) {
                Placeable.PlacementScope.placeRelative$default(placementScope, placeableMo5552measureBRTryo0, 0, 0, 0.0f, 4, null);
            }
        }, 4, null);
    }

    @Override // androidx.compose.ui.node.LayoutModifierNode
    public int minIntrinsicWidth(IntrinsicMeasureScope intrinsicMeasureScope, IntrinsicMeasurable intrinsicMeasurable, int i) {
        if (this.painter.getIntrinsicSize() != Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            int iMinIntrinsicWidth = intrinsicMeasurable.minIntrinsicWidth(Constraints.m6802getMaxHeightimpl(m7945modifyConstraintsZezNO4M(ConstraintsKt.Constraints$default(0, 0, 0, i, 7, null))));
            return Math.max(MathKt.roundToInt(Size.m3938getWidthimpl(m7944calculateScaledSizeE7KxVPU(SizeKt.Size(iMinIntrinsicWidth, i)))), iMinIntrinsicWidth);
        }
        return intrinsicMeasurable.minIntrinsicWidth(i);
    }

    @Override // androidx.compose.ui.node.LayoutModifierNode
    public int maxIntrinsicWidth(IntrinsicMeasureScope intrinsicMeasureScope, IntrinsicMeasurable intrinsicMeasurable, int i) {
        if (this.painter.getIntrinsicSize() != Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            int iMaxIntrinsicWidth = intrinsicMeasurable.maxIntrinsicWidth(Constraints.m6802getMaxHeightimpl(m7945modifyConstraintsZezNO4M(ConstraintsKt.Constraints$default(0, 0, 0, i, 7, null))));
            return Math.max(MathKt.roundToInt(Size.m3938getWidthimpl(m7944calculateScaledSizeE7KxVPU(SizeKt.Size(iMaxIntrinsicWidth, i)))), iMaxIntrinsicWidth);
        }
        return intrinsicMeasurable.maxIntrinsicWidth(i);
    }

    @Override // androidx.compose.ui.node.LayoutModifierNode
    public int minIntrinsicHeight(IntrinsicMeasureScope intrinsicMeasureScope, IntrinsicMeasurable intrinsicMeasurable, int i) {
        if (this.painter.getIntrinsicSize() != Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            int iMinIntrinsicHeight = intrinsicMeasurable.minIntrinsicHeight(Constraints.m6803getMaxWidthimpl(m7945modifyConstraintsZezNO4M(ConstraintsKt.Constraints$default(0, i, 0, 0, 13, null))));
            return Math.max(MathKt.roundToInt(Size.m3935getHeightimpl(m7944calculateScaledSizeE7KxVPU(SizeKt.Size(i, iMinIntrinsicHeight)))), iMinIntrinsicHeight);
        }
        return intrinsicMeasurable.minIntrinsicHeight(i);
    }

    @Override // androidx.compose.ui.node.LayoutModifierNode
    public int maxIntrinsicHeight(IntrinsicMeasureScope intrinsicMeasureScope, IntrinsicMeasurable intrinsicMeasurable, int i) {
        if (this.painter.getIntrinsicSize() != Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            int iMaxIntrinsicHeight = intrinsicMeasurable.maxIntrinsicHeight(Constraints.m6803getMaxWidthimpl(m7945modifyConstraintsZezNO4M(ConstraintsKt.Constraints$default(0, i, 0, 0, 13, null))));
            return Math.max(MathKt.roundToInt(Size.m3935getHeightimpl(m7944calculateScaledSizeE7KxVPU(SizeKt.Size(i, iMaxIntrinsicHeight)))), iMaxIntrinsicHeight);
        }
        return intrinsicMeasurable.maxIntrinsicHeight(i);
    }

    /* JADX INFO: renamed from: calculateScaledSize-E7KxVPU, reason: not valid java name */
    private final long m7944calculateScaledSizeE7KxVPU(long dstSize) {
        if (Size.m3940isEmptyimpl(dstSize)) {
            return Size.INSTANCE.m3947getZeroNHjbRc();
        }
        long intrinsicSize = this.painter.getIntrinsicSize();
        if (intrinsicSize == Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            return dstSize;
        }
        float fM3938getWidthimpl = Size.m3938getWidthimpl(intrinsicSize);
        if (Float.isInfinite(fM3938getWidthimpl) || Float.isNaN(fM3938getWidthimpl)) {
            fM3938getWidthimpl = Size.m3938getWidthimpl(dstSize);
        }
        float fM3935getHeightimpl = Size.m3935getHeightimpl(intrinsicSize);
        if (Float.isInfinite(fM3935getHeightimpl) || Float.isNaN(fM3935getHeightimpl)) {
            fM3935getHeightimpl = Size.m3935getHeightimpl(dstSize);
        }
        long jSize = SizeKt.Size(fM3938getWidthimpl, fM3935getHeightimpl);
        long jMo5545computeScaleFactorH7hwNQA = this.contentScale.mo5545computeScaleFactorH7hwNQA(jSize, dstSize);
        float fM5642getScaleXimpl = ScaleFactor.m5642getScaleXimpl(jMo5545computeScaleFactorH7hwNQA);
        if (Float.isInfinite(fM5642getScaleXimpl) || Float.isNaN(fM5642getScaleXimpl)) {
            return dstSize;
        }
        float fM5643getScaleYimpl = ScaleFactor.m5643getScaleYimpl(jMo5545computeScaleFactorH7hwNQA);
        return (Float.isInfinite(fM5643getScaleYimpl) || Float.isNaN(fM5643getScaleYimpl)) ? dstSize : ScaleFactorKt.m5658timesmw2e94(jMo5545computeScaleFactorH7hwNQA, jSize);
    }

    /* JADX INFO: renamed from: modifyConstraints-ZezNO4M, reason: not valid java name */
    private final long m7945modifyConstraintsZezNO4M(long constraints) {
        float fM6805getMinWidthimpl;
        int iM6804getMinHeightimpl;
        float fM7975constrainHeightK40F9xA;
        boolean zM6801getHasFixedWidthimpl = Constraints.m6801getHasFixedWidthimpl(constraints);
        boolean zM6800getHasFixedHeightimpl = Constraints.m6800getHasFixedHeightimpl(constraints);
        if (!zM6801getHasFixedWidthimpl || !zM6800getHasFixedHeightimpl) {
            boolean z = Constraints.m6799getHasBoundedWidthimpl(constraints) && Constraints.m6798getHasBoundedHeightimpl(constraints);
            long intrinsicSize = this.painter.getIntrinsicSize();
            if (intrinsicSize != Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
                if (z && (zM6801getHasFixedWidthimpl || zM6800getHasFixedHeightimpl)) {
                    fM6805getMinWidthimpl = Constraints.m6803getMaxWidthimpl(constraints);
                    iM6804getMinHeightimpl = Constraints.m6802getMaxHeightimpl(constraints);
                } else {
                    float fM3938getWidthimpl = Size.m3938getWidthimpl(intrinsicSize);
                    float fM3935getHeightimpl = Size.m3935getHeightimpl(intrinsicSize);
                    fM6805getMinWidthimpl = (Float.isInfinite(fM3938getWidthimpl) || Float.isNaN(fM3938getWidthimpl)) ? Constraints.m6805getMinWidthimpl(constraints) : UtilsKt.m7976constrainWidthK40F9xA(constraints, fM3938getWidthimpl);
                    if (Float.isInfinite(fM3935getHeightimpl) || Float.isNaN(fM3935getHeightimpl)) {
                        iM6804getMinHeightimpl = Constraints.m6804getMinHeightimpl(constraints);
                    } else {
                        fM7975constrainHeightK40F9xA = UtilsKt.m7975constrainHeightK40F9xA(constraints, fM3935getHeightimpl);
                    }
                    long jM7944calculateScaledSizeE7KxVPU = m7944calculateScaledSizeE7KxVPU(SizeKt.Size(fM6805getMinWidthimpl, fM7975constrainHeightK40F9xA));
                    return Constraints.m6793copyZbe2FdA$default(constraints, ConstraintsKt.m6820constrainWidthK40F9xA(constraints, MathKt.roundToInt(Size.m3938getWidthimpl(jM7944calculateScaledSizeE7KxVPU))), 0, ConstraintsKt.m6819constrainHeightK40F9xA(constraints, MathKt.roundToInt(Size.m3935getHeightimpl(jM7944calculateScaledSizeE7KxVPU))), 0, 10, null);
                }
                fM7975constrainHeightK40F9xA = iM6804getMinHeightimpl;
                long jM7944calculateScaledSizeE7KxVPU2 = m7944calculateScaledSizeE7KxVPU(SizeKt.Size(fM6805getMinWidthimpl, fM7975constrainHeightK40F9xA));
                return Constraints.m6793copyZbe2FdA$default(constraints, ConstraintsKt.m6820constrainWidthK40F9xA(constraints, MathKt.roundToInt(Size.m3938getWidthimpl(jM7944calculateScaledSizeE7KxVPU2))), 0, ConstraintsKt.m6819constrainHeightK40F9xA(constraints, MathKt.roundToInt(Size.m3935getHeightimpl(jM7944calculateScaledSizeE7KxVPU2))), 0, 10, null);
            }
            if (z) {
                return Constraints.m6793copyZbe2FdA$default(constraints, Constraints.m6803getMaxWidthimpl(constraints), 0, Constraints.m6802getMaxHeightimpl(constraints), 0, 10, null);
            }
        }
        return constraints;
    }

    @Override // androidx.compose.ui.node.DrawModifierNode
    public void draw(ContentDrawScope contentDrawScope) {
        long jM7944calculateScaledSizeE7KxVPU = m7944calculateScaledSizeE7KxVPU(contentDrawScope.mo4712getSizeNHjbRc());
        long jMo3592alignKFBX0sM = this.alignment.mo3592alignKFBX0sM(UtilsKt.m7978toIntSizeuvyYCjk(jM7944calculateScaledSizeE7KxVPU), UtilsKt.m7978toIntSizeuvyYCjk(contentDrawScope.mo4712getSizeNHjbRc()), contentDrawScope.getLayoutDirection());
        ContentDrawScope contentDrawScope2 = contentDrawScope;
        float fM6970component1impl = IntOffset.m6970component1impl(jMo3592alignKFBX0sM);
        float fM6971component2impl = IntOffset.m6971component2impl(jMo3592alignKFBX0sM);
        contentDrawScope2.getDrawContext().getTransform().translate(fM6970component1impl, fM6971component2impl);
        this.painter.m4838drawx_KDEd0(contentDrawScope2, jM7944calculateScaledSizeE7KxVPU, this.alpha, this.colorFilter);
        contentDrawScope2.getDrawContext().getTransform().translate(-fM6970component1impl, -fM6971component2impl);
        contentDrawScope.drawContent();
    }
}
