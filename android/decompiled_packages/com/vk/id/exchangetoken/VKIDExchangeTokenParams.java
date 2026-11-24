package com.vk.id.exchangetoken;

import io.sentry.protocol.OperatingSystem;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: VKIDExchangeTokenParams.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\b\u0007\u0018\u00002\u00020\u0001:\u0001\fB-\b\u0002\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0006\u0010\u0007R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0016\u0010\u0004\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0016\u0010\u0005\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\t¨\u0006\r"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;", "", "state", "", "codeExchangeState", "codeChallenge", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getState$vkid_release", "()Ljava/lang/String;", "getCodeExchangeState$vkid_release", "getCodeChallenge$vkid_release", "Builder", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDExchangeTokenParams {
    public static final int $stable = 0;
    private final String codeChallenge;
    private final String codeExchangeState;
    private final String state;

    public /* synthetic */ VKIDExchangeTokenParams(String str, String str2, String str3, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3);
    }

    private VKIDExchangeTokenParams(String str, String str2, String str3) {
        this.state = str;
        this.codeExchangeState = str2;
        this.codeChallenge = str3;
    }

    /* synthetic */ VKIDExchangeTokenParams(String str, String str2, String str3, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str, (i & 2) != 0 ? null : str2, (i & 4) != 0 ? null : str3);
    }

    /* JADX INFO: renamed from: getState$vkid_release, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: getCodeExchangeState$vkid_release, reason: from getter */
    public final String getCodeExchangeState() {
        return this.codeExchangeState;
    }

    /* JADX INFO: renamed from: getCodeChallenge$vkid_release, reason: from getter */
    public final String getCodeChallenge() {
        return this.codeChallenge;
    }

    /* JADX INFO: compiled from: VKIDExchangeTokenParams.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0010\u001a\u00020\u0011R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001c\u0010\n\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u0007\"\u0004\b\f\u0010\tR\u001c\u0010\r\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u0007\"\u0004\b\u000f\u0010\t¨\u0006\u0012"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams$Builder;", "", "<init>", "()V", "state", "", "getState", "()Ljava/lang/String;", "setState", "(Ljava/lang/String;)V", "codeExchangeState", "getCodeExchangeState", "setCodeExchangeState", "codeChallenge", "getCodeChallenge", "setCodeChallenge", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        public static final int $stable = 8;
        private String codeChallenge;
        private String codeExchangeState;
        private String state;

        public final String getState() {
            return this.state;
        }

        public final void setState(String str) {
            this.state = str;
        }

        public final String getCodeExchangeState() {
            return this.codeExchangeState;
        }

        public final void setCodeExchangeState(String str) {
            this.codeExchangeState = str;
        }

        public final String getCodeChallenge() {
            return this.codeChallenge;
        }

        public final void setCodeChallenge(String str) {
            this.codeChallenge = str;
        }

        public final VKIDExchangeTokenParams build() {
            return new VKIDExchangeTokenParams(this.state, this.codeExchangeState, this.codeChallenge, null);
        }
    }
}
