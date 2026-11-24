package io.sentry.android.replay.util;

import android.graphics.Rect;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.geometry.Offset;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.painter.Painter;
import androidx.compose.ui.layout.LayoutCoordinates;
import androidx.compose.ui.layout.LayoutCoordinatesKt;
import androidx.compose.ui.layout.ModifierInfo;
import androidx.compose.ui.node.LayoutNode;
import androidx.media3.exoplayer.upstream.CmcdData;
import androidx.media3.extractor.text.ttml.TtmlNode;
import java.lang.reflect.Field;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: Nodes.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\u001a)\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0082\b\u001a)\u0010\u0006\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0082\b\u001a\u0016\u0010\u0007\u001a\u00020\b*\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\tH\u0000\u001a\u0015\u0010\u000b\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\f\u001a\u00020\u0001H\u0082\b\u001a\u0015\u0010\r\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u000e\u001a\u00020\u0001H\u0082\b\u001a\u001d\u0010\u000f\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\f\u001a\u00020\u00012\u0006\u0010\u000e\u001a\u00020\u0001H\u0082\b\u001a\u000e\u0010\u0010\u001a\u0004\u0018\u00010\u0011*\u00020\u0012H\u0000\u001a\f\u0010\u0013\u001a\u00020\u0014*\u00020\u0012H\u0000\u001a\f\u0010\u0015\u001a\u00020\u0016*\u00020\u0011H\u0000¨\u0006\u0017"}, d2 = {"fastMaxOf", "", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "b", "c", "d", "fastMinOf", "boundsInWindow", "Landroid/graphics/Rect;", "Landroidx/compose/ui/layout/LayoutCoordinates;", "rootCoordinates", "fastCoerceAtLeast", "minimumValue", "fastCoerceAtMost", "maximumValue", "fastCoerceIn", "findPainter", "Landroidx/compose/ui/graphics/painter/Painter;", "Landroidx/compose/ui/node/LayoutNode;", "findTextAttributes", "Lio/sentry/android/replay/util/TextAttributes;", "isMaskable", "", "sentry-android-replay_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
public final class NodesKt {
    private static final float fastCoerceAtLeast(float f, float f2) {
        return f < f2 ? f2 : f;
    }

    private static final float fastCoerceAtMost(float f, float f2) {
        return f > f2 ? f2 : f;
    }

    private static final float fastCoerceIn(float f, float f2, float f3) {
        if (f < f2) {
            f = f2;
        }
        return f > f3 ? f3 : f;
    }

    public static final Painter findPainter(LayoutNode layoutNode) {
        Intrinsics.checkNotNullParameter(layoutNode, "<this>");
        List<ModifierInfo> modifierInfo = layoutNode.getModifierInfo();
        int size = modifierInfo.size();
        for (int i = 0; i < size; i++) {
            Modifier modifier = modifierInfo.get(i).getModifier();
            String name = modifier.getClass().getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            if (StringsKt.contains$default((CharSequence) name, (CharSequence) "Painter", false, 2, (Object) null)) {
                try {
                    Field declaredField = modifier.getClass().getDeclaredField("painter");
                    declaredField.setAccessible(true);
                    Object obj = declaredField.get(modifier);
                    if (obj instanceof Painter) {
                        return (Painter) obj;
                    }
                } catch (Throwable unused) {
                }
                return null;
            }
        }
        return null;
    }

    public static final boolean isMaskable(Painter painter) {
        Intrinsics.checkNotNullParameter(painter, "<this>");
        String name = painter.getClass().getName();
        Intrinsics.checkNotNull(name);
        String str = name;
        return (StringsKt.contains$default((CharSequence) str, (CharSequence) "Vector", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "Color", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) str, (CharSequence) "Brush", false, 2, (Object) null)) ? false : true;
    }

    public static final TextAttributes findTextAttributes(LayoutNode layoutNode) {
        Intrinsics.checkNotNullParameter(layoutNode, "<this>");
        List<ModifierInfo> modifierInfo = layoutNode.getModifierInfo();
        int size = modifierInfo.size();
        Color colorM4123boximpl = null;
        boolean z = false;
        for (int i = 0; i < size; i++) {
            Modifier modifier = modifierInfo.get(i).getModifier();
            String name = modifier.getClass().getName();
            Intrinsics.checkNotNull(name);
            String str = name;
            if (StringsKt.contains$default((CharSequence) str, (CharSequence) "Text", false, 2, (Object) null)) {
                try {
                    Field declaredField = modifier.getClass().getDeclaredField(TtmlNode.ATTR_TTS_COLOR);
                    declaredField.setAccessible(true);
                    Object obj = declaredField.get(modifier);
                    ColorProducer colorProducer = obj instanceof ColorProducer ? (ColorProducer) obj : null;
                    colorM4123boximpl = colorProducer != null ? Color.m4123boximpl(colorProducer.mo1780invoke0d7_KjU()) : null;
                } catch (Throwable unused) {
                }
            } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "Fill", false, 2, (Object) null)) {
                z = true;
            }
        }
        return new TextAttributes(colorM4123boximpl, z, null);
    }

    private static final float fastMinOf(float f, float f2, float f3, float f4) {
        return Math.min(f, Math.min(f2, Math.min(f3, f4)));
    }

    private static final float fastMaxOf(float f, float f2, float f3, float f4) {
        return Math.max(f, Math.max(f2, Math.max(f3, f4)));
    }

    public static final Rect boundsInWindow(LayoutCoordinates layoutCoordinates, LayoutCoordinates layoutCoordinates2) {
        Intrinsics.checkNotNullParameter(layoutCoordinates, "<this>");
        LayoutCoordinates layoutCoordinatesFindRootCoordinates = layoutCoordinates2 == null ? LayoutCoordinatesKt.findRootCoordinates(layoutCoordinates) : layoutCoordinates2;
        float fMo5560getSizeYbymL2g = (int) (layoutCoordinatesFindRootCoordinates.mo5560getSizeYbymL2g() >> 32);
        float fMo5560getSizeYbymL2g2 = (int) (layoutCoordinatesFindRootCoordinates.mo5560getSizeYbymL2g() & 4294967295L);
        androidx.compose.ui.geometry.Rect rectLocalBoundingBoxOf$default = LayoutCoordinates.localBoundingBoxOf$default(layoutCoordinatesFindRootCoordinates, layoutCoordinates, false, 2, null);
        float left = rectLocalBoundingBoxOf$default.getLeft();
        if (left < 0.0f) {
            left = 0.0f;
        }
        if (left > fMo5560getSizeYbymL2g) {
            left = fMo5560getSizeYbymL2g;
        }
        float top = rectLocalBoundingBoxOf$default.getTop();
        if (top < 0.0f) {
            top = 0.0f;
        }
        if (top > fMo5560getSizeYbymL2g2) {
            top = fMo5560getSizeYbymL2g2;
        }
        float right = rectLocalBoundingBoxOf$default.getRight();
        if (right < 0.0f) {
            right = 0.0f;
        }
        if (right <= fMo5560getSizeYbymL2g) {
            fMo5560getSizeYbymL2g = right;
        }
        float bottom = rectLocalBoundingBoxOf$default.getBottom();
        float f = bottom >= 0.0f ? bottom : 0.0f;
        if (f <= fMo5560getSizeYbymL2g2) {
            fMo5560getSizeYbymL2g2 = f;
        }
        if (left == fMo5560getSizeYbymL2g || top == fMo5560getSizeYbymL2g2) {
            return new Rect();
        }
        long jMo5565localToWindowMKHz9U = layoutCoordinatesFindRootCoordinates.mo5565localToWindowMKHz9U(Offset.m3861constructorimpl((((long) Float.floatToRawIntBits(left)) << 32) | (((long) Float.floatToRawIntBits(top)) & 4294967295L)));
        long jMo5565localToWindowMKHz9U2 = layoutCoordinatesFindRootCoordinates.mo5565localToWindowMKHz9U(Offset.m3861constructorimpl((((long) Float.floatToRawIntBits(fMo5560getSizeYbymL2g)) << 32) | (((long) Float.floatToRawIntBits(top)) & 4294967295L)));
        long jMo5565localToWindowMKHz9U3 = layoutCoordinatesFindRootCoordinates.mo5565localToWindowMKHz9U(Offset.m3861constructorimpl((((long) Float.floatToRawIntBits(fMo5560getSizeYbymL2g2)) & 4294967295L) | (((long) Float.floatToRawIntBits(fMo5560getSizeYbymL2g)) << 32)));
        long jMo5565localToWindowMKHz9U4 = layoutCoordinatesFindRootCoordinates.mo5565localToWindowMKHz9U(Offset.m3861constructorimpl((((long) Float.floatToRawIntBits(fMo5560getSizeYbymL2g2)) & 4294967295L) | (((long) Float.floatToRawIntBits(left)) << 32)));
        float fIntBitsToFloat = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U >> 32));
        float fIntBitsToFloat2 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U2 >> 32));
        float fIntBitsToFloat3 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U4 >> 32));
        float fIntBitsToFloat4 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U3 >> 32));
        float fMin = Math.min(fIntBitsToFloat, Math.min(fIntBitsToFloat2, Math.min(fIntBitsToFloat3, fIntBitsToFloat4)));
        float fMax = Math.max(fIntBitsToFloat, Math.max(fIntBitsToFloat2, Math.max(fIntBitsToFloat3, fIntBitsToFloat4)));
        float fIntBitsToFloat5 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U & 4294967295L));
        float fIntBitsToFloat6 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U2 & 4294967295L));
        float fIntBitsToFloat7 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U4 & 4294967295L));
        float fIntBitsToFloat8 = Float.intBitsToFloat((int) (jMo5565localToWindowMKHz9U3 & 4294967295L));
        return new Rect((int) fMin, (int) Math.min(fIntBitsToFloat5, Math.min(fIntBitsToFloat6, Math.min(fIntBitsToFloat7, fIntBitsToFloat8))), (int) fMax, (int) Math.max(fIntBitsToFloat5, Math.max(fIntBitsToFloat6, Math.max(fIntBitsToFloat7, fIntBitsToFloat8))));
    }
}
