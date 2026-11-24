package androidx.compose.ui.graphics;

import android.graphics.ComposeShader;
import android.graphics.Shader;
import android.view.accessibility.AccessibilityManager$AccessibilityServicesStateChangeListener;
import android.view.autofill.AutofillId;
import android.view.inputmethod.DeleteGesture;
import android.view.inputmethod.DeleteRangeGesture;
import android.view.inputmethod.HandwritingGesture;
import android.view.inputmethod.InsertGesture;
import android.view.inputmethod.SelectGesture;
import android.view.inputmethod.SelectRangeGesture;
import android.view.translation.ViewTranslationRequest;
import android.view.translation.ViewTranslationResponse;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes.dex */
public final /* synthetic */ class CanvasZHelper$$ExternalSyntheticApiModelOutline0 {
    public static /* synthetic */ android.graphics.BlendModeColorFilter m(int i, android.graphics.BlendMode blendMode) {
        return new android.graphics.BlendModeColorFilter(i, blendMode);
    }

    public static /* bridge */ /* synthetic */ android.graphics.BlendModeColorFilter m(Object obj) {
        return (android.graphics.BlendModeColorFilter) obj;
    }

    public static /* synthetic */ ComposeShader m(Shader shader, Shader shader2, android.graphics.BlendMode blendMode) {
        return new ComposeShader(shader, shader2, blendMode);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ AccessibilityManager$AccessibilityServicesStateChangeListener m4099m(Object obj) {
        return (AccessibilityManager$AccessibilityServicesStateChangeListener) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ DeleteGesture m4100m(Object obj) {
        return (DeleteGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ DeleteRangeGesture m4101m(Object obj) {
        return (DeleteRangeGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ HandwritingGesture m4102m(Object obj) {
        return (HandwritingGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ SelectGesture m4103m(Object obj) {
        return (SelectGesture) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ SelectRangeGesture m4104m(Object obj) {
        return (SelectRangeGesture) obj;
    }

    public static /* synthetic */ ViewTranslationRequest.Builder m(AutofillId autofillId, long j) {
        return new ViewTranslationRequest.Builder(autofillId, j);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ ViewTranslationResponse m4105m(Object obj) {
        return (ViewTranslationResponse) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ void m4106m() {
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ boolean m4109m(Object obj) {
        return obj instanceof SelectGesture;
    }

    /* JADX INFO: renamed from: m$1, reason: collision with other method in class */
    public static /* synthetic */ void m4112m$1() {
    }

    public static /* bridge */ /* synthetic */ boolean m$1(Object obj) {
        return obj instanceof SelectRangeGesture;
    }

    /* JADX INFO: renamed from: m$2, reason: collision with other method in class */
    public static /* synthetic */ void m4113m$2() {
    }

    public static /* bridge */ /* synthetic */ boolean m$2(Object obj) {
        return obj instanceof DeleteRangeGesture;
    }

    public static /* bridge */ /* synthetic */ boolean m$3(Object obj) {
        return obj instanceof InsertGesture;
    }

    public static /* bridge */ /* synthetic */ boolean m$4(Object obj) {
        return obj instanceof android.graphics.BlendModeColorFilter;
    }
}
