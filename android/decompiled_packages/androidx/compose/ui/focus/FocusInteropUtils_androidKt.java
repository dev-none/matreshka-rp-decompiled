package androidx.compose.ui.focus;

import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import androidx.compose.ui.geometry.Rect;
import androidx.compose.ui.input.key.Key;
import androidx.compose.ui.input.key.KeyEvent_androidKt;
import androidx.compose.ui.platform.AndroidComposeView;
import androidx.compose.ui.unit.LayoutDirection;
import androidx.media3.extractor.ts.TsExtractor;
import kotlin.Metadata;

/* JADX INFO: compiled from: FocusInteropUtils.android.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000<\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0012\u0010\u0000\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000\u001a\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003*\u00020\u0001H\u0000¢\u0006\u0004\b\u0005\u0010\u0006\u001a\u0015\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0007H\u0000¢\u0006\u0004\b\b\u0010\t\u001a\u0012\u0010\n\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\f\u001a\u00020\u0003H\u0000\u001a\u0014\u0010\r\u001a\u00020\u000e*\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000fH\u0000\u001a%\u0010\u0011\u001a\u00020\u0012*\u00020\u000f2\b\u0010\u0013\u001a\u0004\u0018\u00010\u00032\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015H\u0000¢\u0006\u0002\u0010\u0016¨\u0006\u0017"}, d2 = {"toFocusDirection", "Landroidx/compose/ui/focus/FocusDirection;", "androidDirection", "", "toAndroidFocusDirection", "toAndroidFocusDirection-3ESFkO8", "(I)Ljava/lang/Integer;", "Landroidx/compose/ui/input/key/KeyEvent;", "toFocusDirection-ZmokQxo", "(Landroid/view/KeyEvent;)Landroidx/compose/ui/focus/FocusDirection;", "toLayoutDirection", "Landroidx/compose/ui/unit/LayoutDirection;", "androidLayoutDirection", "calculateBoundingRectRelativeTo", "Landroidx/compose/ui/geometry/Rect;", "Landroid/view/View;", "view", "requestInteropFocus", "", "direction", "rect", "Landroid/graphics/Rect;", "(Landroid/view/View;Ljava/lang/Integer;Landroid/graphics/Rect;)Z", "ui_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class FocusInteropUtils_androidKt {
    public static final FocusDirection toFocusDirection(int i) {
        if (i == 1) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3757getPreviousdhqQ8s());
        }
        if (i == 2) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3756getNextdhqQ8s());
        }
        if (i == 17) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3755getLeftdhqQ8s());
        }
        if (i == 33) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3759getUpdhqQ8s());
        }
        if (i == 66) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3758getRightdhqQ8s());
        }
        if (i != 130) {
            return null;
        }
        return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3752getDowndhqQ8s());
    }

    /* JADX INFO: renamed from: toAndroidFocusDirection-3ESFkO8, reason: not valid java name */
    public static final Integer m3760toAndroidFocusDirection3ESFkO8(int i) {
        if (FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3759getUpdhqQ8s())) {
            return 33;
        }
        if (FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3752getDowndhqQ8s())) {
            return Integer.valueOf(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
        }
        if (FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3755getLeftdhqQ8s())) {
            return 17;
        }
        if (FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3758getRightdhqQ8s())) {
            return 66;
        }
        if (FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3756getNextdhqQ8s())) {
            return 2;
        }
        return FocusDirection.m3748equalsimpl0(i, FocusDirection.INSTANCE.m3757getPreviousdhqQ8s()) ? 1 : null;
    }

    /* JADX INFO: renamed from: toFocusDirection-ZmokQxo, reason: not valid java name */
    public static final FocusDirection m3761toFocusDirectionZmokQxo(KeyEvent keyEvent) {
        long jM5279getKeyZmokQxo = KeyEvent_androidKt.m5279getKeyZmokQxo(keyEvent);
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5131getNavigatePreviousEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3757getPreviousdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5129getNavigateNextEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3756getNextdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5207getTabEK5gGoQ())) {
            return FocusDirection.m3745boximpl(KeyEvent_androidKt.m5285isShiftPressedZmokQxo(keyEvent) ? FocusDirection.INSTANCE.m3757getPreviousdhqQ8s() : FocusDirection.INSTANCE.m3756getNextdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5048getDirectionRightEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3758getRightdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5047getDirectionLeftEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3755getLeftdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5049getDirectionUpEK5gGoQ()) || Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5160getPageUpEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3759getUpdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5044getDirectionDownEK5gGoQ()) || Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5159getPageDownEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3752getDowndhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5043getDirectionCenterEK5gGoQ()) || Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5057getEnterEK5gGoQ()) || Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5149getNumPadEnterEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3753getEnterdhqQ8s());
        }
        if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m4986getBackEK5gGoQ()) || Key.m4971equalsimpl0(jM5279getKeyZmokQxo, Key.INSTANCE.m5060getEscapeEK5gGoQ())) {
            return FocusDirection.m3745boximpl(FocusDirection.INSTANCE.m3754getExitdhqQ8s());
        }
        return null;
    }

    public static final LayoutDirection toLayoutDirection(int i) {
        if (i == 0) {
            return LayoutDirection.Ltr;
        }
        if (i != 1) {
            return null;
        }
        return LayoutDirection.Rtl;
    }

    public static final Rect calculateBoundingRectRelativeTo(View view, View view2) {
        view.getLocationInWindow(FocusInteropUtils.INSTANCE.getTempCoordinates());
        int i = FocusInteropUtils.INSTANCE.getTempCoordinates()[0];
        int i2 = FocusInteropUtils.INSTANCE.getTempCoordinates()[1];
        view2.getLocationInWindow(FocusInteropUtils.INSTANCE.getTempCoordinates());
        float f = i - FocusInteropUtils.INSTANCE.getTempCoordinates()[0];
        float f2 = i2 - FocusInteropUtils.INSTANCE.getTempCoordinates()[1];
        return new Rect(f, f2, view.getWidth() + f, view.getHeight() + f2);
    }

    public static final boolean requestInteropFocus(View view, Integer num, android.graphics.Rect rect) {
        if (num == null) {
            return view.requestFocus();
        }
        if (!(view instanceof ViewGroup)) {
            return view.requestFocus(num.intValue(), rect);
        }
        ViewGroup viewGroup = (ViewGroup) view;
        if (viewGroup.isFocused()) {
            return true;
        }
        if (viewGroup.isFocusable() && !viewGroup.hasFocus()) {
            return viewGroup.requestFocus(num.intValue(), rect);
        }
        if (view instanceof AndroidComposeView) {
            return ((AndroidComposeView) view).requestFocus(num.intValue(), rect);
        }
        if (rect != null) {
            View viewFindNextFocusFromRect = FocusFinder.getInstance().findNextFocusFromRect(viewGroup, rect, num.intValue());
            return viewFindNextFocusFromRect != null ? viewFindNextFocusFromRect.requestFocus(num.intValue(), rect) : viewGroup.requestFocus(num.intValue(), rect);
        }
        View viewFindNextFocus = FocusFinder.getInstance().findNextFocus(viewGroup, viewGroup.hasFocus() ? viewGroup.findFocus() : null, num.intValue());
        return viewFindNextFocus != null ? viewFindNextFocus.requestFocus(num.intValue()) : view.requestFocus(num.intValue());
    }
}
