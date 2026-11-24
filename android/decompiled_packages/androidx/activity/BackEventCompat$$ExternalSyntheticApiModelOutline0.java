package androidx.activity;

import android.graphics.RenderNode;
import android.media.ApplicationMediaCapabilities;
import android.view.WindowInsetsAnimationControlListener;
import android.view.WindowInsetsAnimationController;
import android.view.inputmethod.DeleteGesture;
import android.view.inputmethod.DeleteRangeGesture;
import android.view.inputmethod.EditorBoundsInfo;
import android.view.inputmethod.InsertGesture;
import android.view.inputmethod.JoinOrSplitGesture;
import android.view.inputmethod.RemoveSpaceGesture;
import android.view.inputmethod.SelectGesture;
import android.view.inputmethod.SelectRangeGesture;
import android.view.inspector.InspectionCompanion;
import android.window.BackEvent;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes.dex */
public final /* synthetic */ class BackEventCompat$$ExternalSyntheticApiModelOutline0 {
    public static /* synthetic */ RenderNode m(String str) {
        return new RenderNode(str);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ ApplicationMediaCapabilities.Builder m5m() {
        return new ApplicationMediaCapabilities.Builder();
    }

    public static /* bridge */ /* synthetic */ WindowInsetsAnimationControlListener m(Object obj) {
        return (WindowInsetsAnimationControlListener) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ WindowInsetsAnimationController m6m(Object obj) {
        return (WindowInsetsAnimationController) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ EditorBoundsInfo.Builder m7m() {
        return new EditorBoundsInfo.Builder();
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ InsertGesture m8m(Object obj) {
        return (InsertGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ JoinOrSplitGesture m9m(Object obj) {
        return (JoinOrSplitGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ RemoveSpaceGesture m10m(Object obj) {
        return (RemoveSpaceGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ InspectionCompanion.UninitializedPropertyMapException m11m() {
        return new InspectionCompanion.UninitializedPropertyMapException();
    }

    public static /* synthetic */ BackEvent m(float f, float f2, float f3, int i) {
        return new BackEvent(f, f2, f3, i);
    }

    public static /* synthetic */ BackEvent m(float f, float f2, float f3, int i, long j) {
        return new BackEvent(f, f2, f3, i, j);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ OnBackInvokedCallback m12m(Object obj) {
        return (OnBackInvokedCallback) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ OnBackInvokedDispatcher m13m(Object obj) {
        return (OnBackInvokedDispatcher) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ Class m14m() {
        return SelectGesture.class;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ void m17m() {
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ boolean m22m(Object obj) {
        return obj instanceof RemoveSpaceGesture;
    }

    public static /* bridge */ /* synthetic */ Class m$1() {
        return SelectRangeGesture.class;
    }

    public static /* bridge */ /* synthetic */ boolean m$1(Object obj) {
        return obj instanceof JoinOrSplitGesture;
    }

    public static /* bridge */ /* synthetic */ Class m$2() {
        return DeleteRangeGesture.class;
    }

    public static /* bridge */ /* synthetic */ boolean m$2(Object obj) {
        return obj instanceof DeleteGesture;
    }

    public static /* bridge */ /* synthetic */ Class m$3() {
        return DeleteGesture.class;
    }

    public static /* bridge */ /* synthetic */ Class m$4() {
        return JoinOrSplitGesture.class;
    }

    public static /* bridge */ /* synthetic */ Class m$5() {
        return InsertGesture.class;
    }

    public static /* bridge */ /* synthetic */ Class m$6() {
        return RemoveSpaceGesture.class;
    }
}
