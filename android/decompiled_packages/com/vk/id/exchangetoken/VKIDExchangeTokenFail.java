package com.vk.id.exchangetoken;

import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDExchangeTokenFail.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u00002\u00020\u0001:\u0002\b\tB\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\u0002\n\u000b¨\u0006\f"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail;", "", "description", "", "<init>", "(Ljava/lang/String;)V", "getDescription", "()Ljava/lang/String;", "FailedApiCall", "FailedOAuthState", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail$FailedApiCall;", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail$FailedOAuthState;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class VKIDExchangeTokenFail {
    public static final int $stable = 0;
    private final String description;

    public /* synthetic */ VKIDExchangeTokenFail(String str, DefaultConstructorMarker defaultConstructorMarker) {
        this(str);
    }

    private VKIDExchangeTokenFail(String str) {
        this.description = str;
    }

    public final String getDescription() {
        return this.description;
    }

    /* JADX INFO: compiled from: VKIDExchangeTokenFail.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0096\u0002J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0003H\u0016R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\u0011"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail$FailedApiCall;", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail;", "description", "", "throwable", "", "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "getThrowable", "()Ljava/lang/Throwable;", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class FailedApiCall extends VKIDExchangeTokenFail {
        public static final int $stable = 8;
        private final Throwable throwable;

        public final Throwable getThrowable() {
            return this.throwable;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public FailedApiCall(String description, Throwable throwable) {
            super(description, null);
            Intrinsics.checkNotNullParameter(description, "description");
            Intrinsics.checkNotNullParameter(throwable, "throwable");
            this.throwable = throwable;
        }

        public boolean equals(Object other) {
            if (!(other instanceof FailedApiCall)) {
                return false;
            }
            FailedApiCall failedApiCall = (FailedApiCall) other;
            return Intrinsics.areEqual(getDescription(), failedApiCall.getDescription()) && Intrinsics.areEqual(this.throwable, failedApiCall.throwable);
        }

        public int hashCode() {
            return (getDescription().hashCode() * 31) + this.throwable.hashCode();
        }

        public String toString() {
            return "FailedApiCall(description=" + getDescription() + ", throwable=" + this.throwable + ")";
        }
    }

    /* JADX INFO: compiled from: VKIDExchangeTokenFail.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0013\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0096\u0002J\b\u0010\n\u001a\u00020\u000bH\u0016¨\u0006\f"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail$FailedOAuthState;", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenFail;", "description", "", "<init>", "(Ljava/lang/String;)V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class FailedOAuthState extends VKIDExchangeTokenFail {
        public static final int $stable = 0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public FailedOAuthState(String description) {
            super(description, null);
            Intrinsics.checkNotNullParameter(description, "description");
        }

        public boolean equals(Object other) {
            return (other instanceof FailedOAuthState) && Intrinsics.areEqual(getDescription(), ((FailedOAuthState) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }
}
