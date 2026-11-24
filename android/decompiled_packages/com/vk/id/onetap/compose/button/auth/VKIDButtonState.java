package com.vk.id.onetap.compose.button.auth;

import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDButtonState.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b9\b\u0011\u0018\u00002\u00020\u0001BM\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\b\u001a\u00020\u0003\u0012\b\b\u0002\u0010\t\u001a\u00020\u0003\u0012\b\b\u0002\u0010\n\u001a\u00020\u0003¢\u0006\u0004\b\u000b\u0010\fR+\u0010\u000e\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\u0013\u0010\u0014\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R+\u0010\u0015\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00058B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\u001a\u0010\u0014\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R+\u0010\u001b\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00058B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\u001e\u0010\u0014\u001a\u0004\b\u001c\u0010\u0017\"\u0004\b\u001d\u0010\u0019R/\u0010\u001f\u001a\u0004\u0018\u00010\u00052\b\u0010\r\u001a\u0004\u0018\u00010\u00058B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\"\u0010\u0014\u001a\u0004\b \u0010\u0017\"\u0004\b!\u0010\u0019R+\u0010#\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b&\u0010\u0014\u001a\u0004\b$\u0010\u0010\"\u0004\b%\u0010\u0012R+\u0010'\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b*\u0010\u0014\u001a\u0004\b(\u0010\u0010\"\u0004\b)\u0010\u0012R+\u0010+\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b.\u0010\u0014\u001a\u0004\b,\u0010\u0010\"\u0004\b-\u0010\u0012R$\u0010\u0002\u001a\u00020\u00032\u0006\u0010/\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b0\u0010\u0010\"\u0004\b1\u0010\u0012R$\u0010\u0004\u001a\u00020\u00052\u0006\u0010/\u001a\u00020\u00058@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b2\u0010\u0017\"\u0004\b3\u0010\u0019R$\u0010\u0006\u001a\u00020\u00052\u0006\u0010/\u001a\u00020\u00058@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b4\u0010\u0017\"\u0004\b5\u0010\u0019R(\u0010\u0007\u001a\u0004\u0018\u00010\u00052\b\u0010/\u001a\u0004\u0018\u00010\u00058@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b6\u0010\u0017\"\u0004\b7\u0010\u0019R$\u0010\b\u001a\u00020\u00032\u0006\u0010/\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b8\u0010\u0010\"\u0004\b9\u0010\u0012R$\u0010\t\u001a\u00020\u00032\u0006\u0010/\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b:\u0010\u0010\"\u0004\b;\u0010\u0012R$\u0010\n\u001a\u00020\u00032\u0006\u0010/\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b<\u0010\u0010\"\u0004\b=\u0010\u0012¨\u0006>"}, d2 = {"Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;", "", "inProgress", "", "text", "", "shortText", "userIconUrl", "textVisible", "rightIconVisible", "userLoadFailed", "<init>", "(ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZ)V", "<set-?>", "_inProgress", "get_inProgress", "()Z", "set_inProgress", "(Z)V", "_inProgress$delegate", "Landroidx/compose/runtime/MutableState;", "_text", "get_text", "()Ljava/lang/String;", "set_text", "(Ljava/lang/String;)V", "_text$delegate", "_shortText", "get_shortText", "set_shortText", "_shortText$delegate", "_userIconUrl", "get_userIconUrl", "set_userIconUrl", "_userIconUrl$delegate", "_textVisible", "get_textVisible", "set_textVisible", "_textVisible$delegate", "_rightIconVisible", "get_rightIconVisible", "set_rightIconVisible", "_rightIconVisible$delegate", "_userLoadFailed", "get_userLoadFailed", "set_userLoadFailed", "_userLoadFailed$delegate", "value", "getInProgress$onetap_compose_release", "setInProgress$onetap_compose_release", "getText$onetap_compose_release", "setText$onetap_compose_release", "getShortText$onetap_compose_release", "setShortText$onetap_compose_release", "getUserIconUrl$onetap_compose_release", "setUserIconUrl$onetap_compose_release", "getTextVisible$onetap_compose_release", "setTextVisible$onetap_compose_release", "getRightIconVisible$onetap_compose_release", "setRightIconVisible$onetap_compose_release", "getUserLoadFailed$onetap_compose_release", "setUserLoadFailed$onetap_compose_release", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public class VKIDButtonState {
    public static final int $stable = 0;

    /* JADX INFO: renamed from: _inProgress$delegate, reason: from kotlin metadata */
    private final MutableState _inProgress;

    /* JADX INFO: renamed from: _rightIconVisible$delegate, reason: from kotlin metadata */
    private final MutableState _rightIconVisible;

    /* JADX INFO: renamed from: _shortText$delegate, reason: from kotlin metadata */
    private final MutableState _shortText;

    /* JADX INFO: renamed from: _text$delegate, reason: from kotlin metadata */
    private final MutableState _text;

    /* JADX INFO: renamed from: _textVisible$delegate, reason: from kotlin metadata */
    private final MutableState _textVisible;

    /* JADX INFO: renamed from: _userIconUrl$delegate, reason: from kotlin metadata */
    private final MutableState _userIconUrl;

    /* JADX INFO: renamed from: _userLoadFailed$delegate, reason: from kotlin metadata */
    private final MutableState _userLoadFailed;

    public VKIDButtonState(boolean z, String text, String shortText, String str, boolean z2, boolean z3, boolean z4) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(shortText, "shortText");
        this._inProgress = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(Boolean.valueOf(z), null, 2, null);
        this._text = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(text, null, 2, null);
        this._shortText = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(shortText, null, 2, null);
        this._userIconUrl = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(str, null, 2, null);
        this._textVisible = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(Boolean.valueOf(z2), null, 2, null);
        this._rightIconVisible = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(Boolean.valueOf(z3), null, 2, null);
        this._userLoadFailed = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(Boolean.valueOf(z4), null, 2, null);
    }

    public /* synthetic */ VKIDButtonState(boolean z, String str, String str2, String str3, boolean z2, boolean z3, boolean z4, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(z, (i & 2) != 0 ? "" : str, (i & 4) != 0 ? "" : str2, (i & 8) != 0 ? null : str3, (i & 16) != 0 ? true : z2, (i & 32) != 0 ? false : z3, (i & 64) != 0 ? false : z4);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_inProgress() {
        return ((Boolean) this._inProgress.getValue()).booleanValue();
    }

    private final void set_inProgress(boolean z) {
        this._inProgress.setValue(Boolean.valueOf(z));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final String get_text() {
        return (String) this._text.getValue();
    }

    private final void set_text(String str) {
        this._text.setValue(str);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final String get_shortText() {
        return (String) this._shortText.getValue();
    }

    private final void set_shortText(String str) {
        this._shortText.setValue(str);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final String get_userIconUrl() {
        return (String) this._userIconUrl.getValue();
    }

    private final void set_userIconUrl(String str) {
        this._userIconUrl.setValue(str);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_textVisible() {
        return ((Boolean) this._textVisible.getValue()).booleanValue();
    }

    private final void set_textVisible(boolean z) {
        this._textVisible.setValue(Boolean.valueOf(z));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_rightIconVisible() {
        return ((Boolean) this._rightIconVisible.getValue()).booleanValue();
    }

    private final void set_rightIconVisible(boolean z) {
        this._rightIconVisible.setValue(Boolean.valueOf(z));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_userLoadFailed() {
        return ((Boolean) this._userLoadFailed.getValue()).booleanValue();
    }

    private final void set_userLoadFailed(boolean z) {
        this._userLoadFailed.setValue(Boolean.valueOf(z));
    }

    public final boolean getInProgress$onetap_compose_release() {
        return get_inProgress();
    }

    public final void setInProgress$onetap_compose_release(boolean z) {
        if (z != get_inProgress()) {
            set_inProgress(z);
        }
    }

    public final String getText$onetap_compose_release() {
        return get_text();
    }

    public final void setText$onetap_compose_release(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        if (Intrinsics.areEqual(value, get_text())) {
            return;
        }
        set_text(value);
    }

    public final String getShortText$onetap_compose_release() {
        return get_shortText();
    }

    public final void setShortText$onetap_compose_release(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        if (Intrinsics.areEqual(value, get_shortText())) {
            return;
        }
        set_shortText(value);
    }

    public final String getUserIconUrl$onetap_compose_release() {
        return get_userIconUrl();
    }

    public final void setUserIconUrl$onetap_compose_release(String str) {
        if (Intrinsics.areEqual(str, get_userIconUrl())) {
            return;
        }
        set_userIconUrl(str);
    }

    public final boolean getTextVisible$onetap_compose_release() {
        return get_textVisible();
    }

    public final void setTextVisible$onetap_compose_release(boolean z) {
        if (z != get_textVisible()) {
            set_textVisible(z);
        }
    }

    public final boolean getRightIconVisible$onetap_compose_release() {
        return get_rightIconVisible();
    }

    public final void setRightIconVisible$onetap_compose_release(boolean z) {
        if (z != get_rightIconVisible()) {
            set_rightIconVisible(z);
        }
    }

    public final boolean getUserLoadFailed$onetap_compose_release() {
        return get_userLoadFailed();
    }

    public final void setUserLoadFailed$onetap_compose_release(boolean z) {
        if (z != get_userLoadFailed()) {
            set_userLoadFailed(z);
        }
    }
}
