package com.vk.id.internal.store;

import android.content.Context;
import android.content.SharedPreferences;
import androidx.preference.PreferenceManager;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDPrefsStore.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0007\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u0011\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\u0015\u001a\u00020\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\u0006\u001a\n \b*\u0004\u0018\u00010\u00070\u00078BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\nR$\u0010\r\u001a\u00020\f2\u0006\u0010\u000b\u001a\u00020\f8@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R$\u0010\u0012\u001a\u00020\f2\u0006\u0010\u000b\u001a\u00020\f8F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0013\u0010\u000f\"\u0004\b\u0014\u0010\u0011¨\u0006\u0018"}, d2 = {"Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "prefs", "Landroid/content/SharedPreferences;", "kotlin.jvm.PlatformType", "getPrefs", "()Landroid/content/SharedPreferences;", "value", "", "codeVerifier", "getCodeVerifier$vkid_release", "()Ljava/lang/String;", "setCodeVerifier$vkid_release", "(Ljava/lang/String;)V", "state", "getState", "setState", "clear", "", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDPrefsStore {
    private static final String CODE_VERIFIER = "pkce_code_verifier";
    private static final String DEFAULT_CODE_VERIFIER = "";
    private static final String DEFAULT_STATE = "";
    private static final String STATE = "state";
    private final Context context;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;

    public InternalVKIDPrefsStore(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    private final SharedPreferences getPrefs() {
        return PreferenceManager.getDefaultSharedPreferences(this.context);
    }

    public final String getCodeVerifier$vkid_release() {
        String string = getPrefs().getString(CODE_VERIFIER, "");
        if (string != null) {
            return string;
        }
        throw new IllegalArgumentException("Required value was null.".toString());
    }

    public final void setCodeVerifier$vkid_release(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        getPrefs().edit().putString(CODE_VERIFIER, value).apply();
    }

    public final String getState() {
        String string = getPrefs().getString("state", "");
        if (string != null) {
            return string;
        }
        throw new IllegalArgumentException("Required value was null.".toString());
    }

    public final void setState(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        getPrefs().edit().putString("state", value).apply();
    }

    public final void clear() {
        setState("");
        setCodeVerifier$vkid_release("");
    }

    /* JADX INFO: compiled from: InternalVKIDPrefsStore.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lcom/vk/id/internal/store/InternalVKIDPrefsStore$Companion;", "", "<init>", "()V", "DEFAULT_STATE", "", "CODE_VERIFIER", "DEFAULT_CODE_VERIFIER", "STATE", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
