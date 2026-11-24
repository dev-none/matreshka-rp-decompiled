package io.sentry.android.replay.util;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import androidx.core.view.ViewCompat;
import io.sentry.android.replay.viewhierarchy.ViewHierarchyNode;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MaskRenderer.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u0000 #2\u00020\u0001:\u0001#B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0016\u001a\u00020\u0017H\u0016J$\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u00052\u0006\u0010\u001b\u001a\u00020\u001c2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u001eH\u0002J(\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\u001c0 2\u0006\u0010\u001a\u001a\u00020\u00052\u0006\u0010!\u001a\u00020\"2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u001eR\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0006\u001a\u00020\u00078BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\b\u0010\tR\u001b\u0010\f\u001a\u00020\u00058@X\u0080\u0084\u0002¢\u0006\f\u001a\u0004\b\u000f\u0010\u0010*\u0004\b\r\u0010\u000eR\u001b\u0010\u0011\u001a\u00020\u00128BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0015\u0010\u000b\u001a\u0004\b\u0013\u0010\u0014¨\u0006$"}, d2 = {"Lio/sentry/android/replay/util/MaskRenderer;", "Ljava/io/Closeable;", "()V", "lazySinglePixelBitmap", "Lkotlin/Lazy;", "Landroid/graphics/Bitmap;", "maskingPaint", "Landroid/graphics/Paint;", "getMaskingPaint", "()Landroid/graphics/Paint;", "maskingPaint$delegate", "Lkotlin/Lazy;", "singlePixelBitmap", "getSinglePixelBitmap$sentry_android_replay_release$delegate", "(Lio/sentry/android/replay/util/MaskRenderer;)Ljava/lang/Object;", "getSinglePixelBitmap$sentry_android_replay_release", "()Landroid/graphics/Bitmap;", "singlePixelBitmapCanvas", "Landroid/graphics/Canvas;", "getSinglePixelBitmapCanvas", "()Landroid/graphics/Canvas;", "singlePixelBitmapCanvas$delegate", "close", "", "dominantColorForRect", "", "bitmap", "rect", "Landroid/graphics/Rect;", "scaleMatrix", "Landroid/graphics/Matrix;", "renderMasks", "", "viewHierarchy", "Lio/sentry/android/replay/viewhierarchy/ViewHierarchyNode;", "Companion", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class MaskRenderer implements Closeable {
    private static final float MASK_CORNER_RADIUS = 10.0f;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;
    private final Lazy<Bitmap> lazySinglePixelBitmap = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Bitmap>() { // from class: io.sentry.android.replay.util.MaskRenderer$lazySinglePixelBitmap$1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // kotlin.jvm.functions.Function0
        public final Bitmap invoke() {
            return Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888);
        }
    });

    /* JADX INFO: renamed from: singlePixelBitmapCanvas$delegate, reason: from kotlin metadata */
    private final Lazy singlePixelBitmapCanvas = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Canvas>() { // from class: io.sentry.android.replay.util.MaskRenderer$singlePixelBitmapCanvas$2
        {
            super(0);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // kotlin.jvm.functions.Function0
        public final Canvas invoke() {
            return new Canvas(this.this$0.getSinglePixelBitmap$sentry_android_replay_release());
        }
    });

    /* JADX INFO: renamed from: maskingPaint$delegate, reason: from kotlin metadata */
    private final Lazy maskingPaint = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Paint>() { // from class: io.sentry.android.replay.util.MaskRenderer$maskingPaint$2
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // kotlin.jvm.functions.Function0
        public final Paint invoke() {
            return new Paint();
        }
    });

    /* JADX INFO: compiled from: MaskRenderer.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lio/sentry/android/replay/util/MaskRenderer$Companion;", "", "()V", "MASK_CORNER_RADIUS", "", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    public final Bitmap getSinglePixelBitmap$sentry_android_replay_release() {
        return this.lazySinglePixelBitmap.getValue();
    }

    private final Canvas getSinglePixelBitmapCanvas() {
        return (Canvas) this.singlePixelBitmapCanvas.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Paint getMaskingPaint() {
        return (Paint) this.maskingPaint.getValue();
    }

    public static /* synthetic */ List renderMasks$default(MaskRenderer maskRenderer, Bitmap bitmap, ViewHierarchyNode viewHierarchyNode, Matrix matrix, int i, Object obj) {
        if ((i & 4) != 0) {
            matrix = null;
        }
        return maskRenderer.renderMasks(bitmap, viewHierarchyNode, matrix);
    }

    public final List<Rect> renderMasks(final Bitmap bitmap, ViewHierarchyNode viewHierarchy, final Matrix scaleMatrix) {
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        Intrinsics.checkNotNullParameter(viewHierarchy, "viewHierarchy");
        if (bitmap.isRecycled()) {
            return CollectionsKt.emptyList();
        }
        final ArrayList arrayList = new ArrayList();
        final Canvas canvas = new Canvas(bitmap);
        if (scaleMatrix != null) {
            canvas.setMatrix(scaleMatrix);
        }
        viewHierarchy.traverse(new Function1<ViewHierarchyNode, Boolean>() { // from class: io.sentry.android.replay.util.MaskRenderer.renderMasks.2
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public final Boolean invoke(ViewHierarchyNode node) {
                Pair pair;
                Integer dominantColor;
                Intrinsics.checkNotNullParameter(node, "node");
                if (node.getShouldMask() && node.getWidth() > 0 && node.getHeight() > 0) {
                    if (node.getVisibleRect() == null) {
                        return false;
                    }
                    if (node instanceof ViewHierarchyNode.ImageViewHierarchyNode) {
                        pair = TuplesKt.to(CollectionsKt.listOf(node.getVisibleRect()), Integer.valueOf(MaskRenderer.this.dominantColorForRect(bitmap, node.getVisibleRect(), scaleMatrix)));
                    } else {
                        boolean z = node instanceof ViewHierarchyNode.TextViewHierarchyNode;
                        int iIntValue = ViewCompat.MEASURED_STATE_MASK;
                        if (z) {
                            ViewHierarchyNode.TextViewHierarchyNode textViewHierarchyNode = (ViewHierarchyNode.TextViewHierarchyNode) node;
                            TextLayout layout = textViewHierarchyNode.getLayout();
                            if ((layout != null && (dominantColor = layout.getDominantTextColor()) != null) || (dominantColor = textViewHierarchyNode.getDominantColor()) != null) {
                                iIntValue = dominantColor.intValue();
                            }
                            pair = TuplesKt.to(ViewsKt.getVisibleRects(textViewHierarchyNode.getLayout(), node.getVisibleRect(), textViewHierarchyNode.getPaddingLeft(), textViewHierarchyNode.getPaddingTop()), Integer.valueOf(iIntValue));
                        } else {
                            pair = TuplesKt.to(CollectionsKt.listOf(node.getVisibleRect()), Integer.valueOf(ViewCompat.MEASURED_STATE_MASK));
                        }
                    }
                    List list = (List) pair.component1();
                    MaskRenderer.this.getMaskingPaint().setColor(((Number) pair.component2()).intValue());
                    Canvas canvas2 = canvas;
                    MaskRenderer maskRenderer = MaskRenderer.this;
                    Iterator it = list.iterator();
                    while (it.hasNext()) {
                        canvas2.drawRoundRect(new RectF((Rect) it.next()), MaskRenderer.MASK_CORNER_RADIUS, MaskRenderer.MASK_CORNER_RADIUS, maskRenderer.getMaskingPaint());
                    }
                    arrayList.addAll(list);
                }
                return true;
            }
        });
        return arrayList;
    }

    static /* synthetic */ int dominantColorForRect$default(MaskRenderer maskRenderer, Bitmap bitmap, Rect rect, Matrix matrix, int i, Object obj) {
        if ((i & 4) != 0) {
            matrix = null;
        }
        return maskRenderer.dominantColorForRect(bitmap, rect, matrix);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final int dominantColorForRect(Bitmap bitmap, Rect rect, Matrix scaleMatrix) {
        if (bitmap.isRecycled() || getSinglePixelBitmap$sentry_android_replay_release().isRecycled()) {
            return ViewCompat.MEASURED_STATE_MASK;
        }
        Rect rect2 = new Rect(rect);
        RectF rectF = new RectF(rect2);
        if (scaleMatrix != null) {
            scaleMatrix.mapRect(rectF);
        }
        rectF.round(rect2);
        getSinglePixelBitmapCanvas().drawBitmap(bitmap, rect2, new Rect(0, 0, 1, 1), (Paint) null);
        return getSinglePixelBitmap$sentry_android_replay_release().getPixel(0, 0);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        if (!this.lazySinglePixelBitmap.isInitialized() || getSinglePixelBitmap$sentry_android_replay_release().isRecycled()) {
            return;
        }
        getSinglePixelBitmap$sentry_android_replay_release().recycle();
    }
}
