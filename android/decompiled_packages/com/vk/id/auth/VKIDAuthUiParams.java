package com.vk.id.auth;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.OperatingSystem;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.SetsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDAuthUiParams.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001:\u0001\u0016B+\b\u0002\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00030\u0006¢\u0006\u0004\b\u0007\u0010\bJ!\u0010\u000e\u001a\u00020\u00002\u0017\u0010\u000f\u001a\u0013\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00120\u0010¢\u0006\u0002\b\u0013H\u0007J!\u0010\u0014\u001a\u00020\u00152\u0017\u0010\u000f\u001a\u0013\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00120\u0010¢\u0006\u0002\b\u0013H\u0007R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0016\u0010\u0004\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u001a\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00030\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0017"}, d2 = {"Lcom/vk/id/auth/VKIDAuthUiParams;", "", "state", "", "codeChallenge", "scopes", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V", "getState$vkid_release", "()Ljava/lang/String;", "getCodeChallenge$vkid_release", "getScopes$vkid_release", "()Ljava/util/Set;", "newBuilder", "initializer", "Lkotlin/Function1;", "Lcom/vk/id/auth/VKIDAuthUiParams$Builder;", "", "Lkotlin/ExtensionFunctionType;", "asParamsBuilder", "Lcom/vk/id/auth/VKIDAuthParams$Builder;", "Builder", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDAuthUiParams {
    public static final int $stable = 8;
    private final String codeChallenge;
    private final Set<String> scopes;
    private final String state;

    public /* synthetic */ VKIDAuthUiParams(String str, String str2, Set set, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, set);
    }

    private VKIDAuthUiParams(String str, String str2, Set<String> set) {
        this.state = str;
        this.codeChallenge = str2;
        this.scopes = set;
    }

    /* JADX INFO: renamed from: getState$vkid_release, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: getCodeChallenge$vkid_release, reason: from getter */
    public final String getCodeChallenge() {
        return this.codeChallenge;
    }

    public final Set<String> getScopes$vkid_release() {
        return this.scopes;
    }

    /* JADX INFO: compiled from: VKIDAuthUiParams.kt */
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\"\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0013\u001a\u00020\u0014R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001c\u0010\n\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u0007\"\u0004\b\f\u0010\tR \u0010\r\u001a\b\u0012\u0004\u0012\u00020\u00050\u000eX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012¨\u0006\u0015"}, d2 = {"Lcom/vk/id/auth/VKIDAuthUiParams$Builder;", "", "<init>", "()V", "state", "", "getState", "()Ljava/lang/String;", "setState", "(Ljava/lang/String;)V", "codeChallenge", "getCodeChallenge", "setCodeChallenge", "scopes", "", "getScopes", "()Ljava/util/Set;", "setScopes", "(Ljava/util/Set;)V", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/auth/VKIDAuthUiParams;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        public static final int $stable = 8;
        private String codeChallenge;
        private Set<String> scopes = SetsKt.emptySet();
        private String state;

        public final String getState() {
            return this.state;
        }

        public final void setState(String str) {
            this.state = str;
        }

        public final String getCodeChallenge() {
            return this.codeChallenge;
        }

        public final void setCodeChallenge(String str) {
            this.codeChallenge = str;
        }

        public final Set<String> getScopes() {
            return this.scopes;
        }

        public final void setScopes(Set<String> set) {
            Intrinsics.checkNotNullParameter(set, "<set-?>");
            this.scopes = set;
        }

        public final VKIDAuthUiParams build() {
            return new VKIDAuthUiParams(this.state, this.codeChallenge, this.scopes, null);
        }
    }

    @InternalVKIDApi
    public final VKIDAuthParams.Builder asParamsBuilder(Function1<? super VKIDAuthParams.Builder, Unit> initializer) {
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        VKIDAuthParams.Builder builder = new VKIDAuthParams.Builder();
        builder.setState(this.state);
        builder.setCodeChallenge(this.codeChallenge);
        builder.setScopes(this.scopes);
        builder.setInternalUse(true);
        initializer.invoke(builder);
        return builder;
    }

    @InternalVKIDApi
    public final VKIDAuthUiParams newBuilder(Function1<? super Builder, Unit> initializer) {
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        Builder builder = new Builder();
        builder.setState(this.state);
        builder.setCodeChallenge(this.codeChallenge);
        builder.setScopes(this.scopes);
        initializer.invoke(builder);
        return builder.build();
    }
}
