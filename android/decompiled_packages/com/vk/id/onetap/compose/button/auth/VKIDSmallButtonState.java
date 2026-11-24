package com.vk.id.onetap.compose.button.auth;

import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import kotlin.Metadata;

/* JADX INFO: compiled from: VKIDButtonState.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0016\b\u0001\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R+\u0010\b\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\r\u0010\u000e\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR+\u0010\u000f\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\u00038B@BX\u0082\u008e\u0002¢\u0006\u0012\n\u0004\b\u0012\u0010\u000e\u001a\u0004\b\u0010\u0010\n\"\u0004\b\u0011\u0010\fR$\u0010\u0004\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b\u0014\u0010\n\"\u0004\b\u0015\u0010\fR$\u0010\u0016\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u00038@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b\u0017\u0010\n\"\u0004\b\u0018\u0010\f¨\u0006\u0019"}, d2 = {"Lcom/vk/id/onetap/compose/button/auth/VKIDSmallButtonState;", "Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;", "inProgress", "", "userIconLoaded", "<init>", "(ZZ)V", "<set-?>", "_userIconLoaded", "get_userIconLoaded", "()Z", "set_userIconLoaded", "(Z)V", "_userIconLoaded$delegate", "Landroidx/compose/runtime/MutableState;", "_userIconLoading", "get_userIconLoading", "set_userIconLoading", "_userIconLoading$delegate", "value", "getUserIconLoaded$onetap_compose_release", "setUserIconLoaded$onetap_compose_release", "userIconLoading", "getUserIconLoading$onetap_compose_release", "setUserIconLoading$onetap_compose_release", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDSmallButtonState extends VKIDButtonState {
    public static final int $stable = 0;

    /* JADX INFO: renamed from: _userIconLoaded$delegate, reason: from kotlin metadata */
    private final MutableState _userIconLoaded;

    /* JADX INFO: renamed from: _userIconLoading$delegate, reason: from kotlin metadata */
    private final MutableState _userIconLoading;

    public VKIDSmallButtonState(boolean z, boolean z2) {
        super(z, null, null, null, false, false, false, 126, null);
        this._userIconLoaded = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(Boolean.valueOf(z2), null, 2, null);
        this._userIconLoading = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_userIconLoaded() {
        return ((Boolean) this._userIconLoaded.getValue()).booleanValue();
    }

    private final void set_userIconLoaded(boolean z) {
        this._userIconLoaded.setValue(Boolean.valueOf(z));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final boolean get_userIconLoading() {
        return ((Boolean) this._userIconLoading.getValue()).booleanValue();
    }

    private final void set_userIconLoading(boolean z) {
        this._userIconLoading.setValue(Boolean.valueOf(z));
    }

    public final boolean getUserIconLoaded$onetap_compose_release() {
        return get_userIconLoaded();
    }

    public final void setUserIconLoaded$onetap_compose_release(boolean z) {
        if (z != get_userIconLoaded()) {
            set_userIconLoaded(z);
        }
    }

    public final boolean getUserIconLoading$onetap_compose_release() {
        return get_userIconLoading();
    }

    public final void setUserIconLoading$onetap_compose_release(boolean z) {
        if (z != get_userIconLoading()) {
            set_userIconLoading(z);
        }
    }
}
