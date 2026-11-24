package com.vk.id.storage;

import com.google.gson.Gson;
import com.google.gson.JsonSyntaxException;
import com.vk.id.AccessToken;
import com.vk.id.RefreshToken;
import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDTokenStorage.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0007\u0018\u0000 \u001a2\u00020\u0001:\u0001\u001aB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\r\u0010\u0017\u001a\u00020\u0018H\u0000¢\u0006\u0002\b\u0019R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R(\u0010\n\u001a\u0004\u0018\u00010\t2\b\u0010\b\u001a\u0004\u0018\u00010\t8@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u0013\u0010\u000f\u001a\u0004\u0018\u00010\t8F¢\u0006\u0006\u001a\u0004\b\u0010\u0010\fR(\u0010\u0012\u001a\u0004\u0018\u00010\u00112\b\u0010\b\u001a\u0004\u0018\u00010\u00118@@@X\u0080\u000e¢\u0006\f\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016¨\u0006\u001b"}, d2 = {"Lcom/vk/id/storage/InternalVKIDTokenStorage;", "", "preferences", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "<init>", "(Lcom/vk/id/storage/InternalVKIDPreferencesStorage;)V", "gson", "Lcom/google/gson/Gson;", "value", "Lcom/vk/id/AccessToken;", Constants.ACCESS_TOKEN, "getAccessToken$vkid_release", "()Lcom/vk/id/AccessToken;", "setAccessToken$vkid_release", "(Lcom/vk/id/AccessToken;)V", "currentAccessToken", "getCurrentAccessToken", "Lcom/vk/id/RefreshToken;", "refreshToken", "getRefreshToken$vkid_release", "()Lcom/vk/id/RefreshToken;", "setRefreshToken$vkid_release", "(Lcom/vk/id/RefreshToken;)V", "clear", "", "clear$vkid_release", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDTokenStorage {
    private static final String ACCESS_TOKEN_KEY = "ACCESS_TOKEN_KEY";
    private static final String REFRESH_TOKEN_V1_KEY = "REFRESH_TOKEN_KEY";
    private static final String REFRESH_TOKEN_V2_KEY = "REFRESH_TOKEN_WITH_SCOPES_KEY";
    private final Gson gson;
    private final InternalVKIDPreferencesStorage preferences;
    public static final int $stable = 8;

    public InternalVKIDTokenStorage(InternalVKIDPreferencesStorage preferences) {
        Intrinsics.checkNotNullParameter(preferences, "preferences");
        this.preferences = preferences;
        this.gson = new Gson();
    }

    public final AccessToken getAccessToken$vkid_release() {
        try {
            return (AccessToken) this.gson.fromJson(this.preferences.getString(ACCESS_TOKEN_KEY), AccessToken.class);
        } catch (JsonSyntaxException unused) {
            return null;
        }
    }

    public final void setAccessToken$vkid_release(AccessToken accessToken) {
        this.preferences.set(ACCESS_TOKEN_KEY, accessToken != null ? this.gson.toJson(accessToken) : null);
    }

    public final AccessToken getCurrentAccessToken() {
        return getAccessToken$vkid_release();
    }

    public final RefreshToken getRefreshToken$vkid_release() {
        RefreshToken refreshToken;
        try {
            String string = this.preferences.getString(REFRESH_TOKEN_V2_KEY);
            if (string != null && (refreshToken = (RefreshToken) this.gson.fromJson(string, RefreshToken.class)) != null) {
                return refreshToken;
            }
            String string2 = this.preferences.getString(REFRESH_TOKEN_V1_KEY);
            if (string2 != null) {
                return new RefreshToken(string2, null);
            }
        } catch (JsonSyntaxException unused) {
        }
        return null;
    }

    public final void setRefreshToken$vkid_release(RefreshToken refreshToken) {
        this.preferences.set(REFRESH_TOKEN_V2_KEY, refreshToken != null ? this.gson.toJson(refreshToken) : null);
    }

    public final void clear$vkid_release() {
        setAccessToken$vkid_release(null);
        setRefreshToken$vkid_release(null);
        this.preferences.set(REFRESH_TOKEN_V1_KEY, null);
    }
}
