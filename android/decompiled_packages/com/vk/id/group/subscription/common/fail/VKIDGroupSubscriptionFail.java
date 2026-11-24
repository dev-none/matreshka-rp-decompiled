package com.vk.id.group.subscription.common.fail;

import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u00002\u00020\u0001:\b\b\t\n\u000b\f\r\u000e\u000fB\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\b\u0010\u0011\u0012\u0013\u0014\u0015\u0016\u0017¨\u0006\u0018"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "", "description", "", "<init>", "(Ljava/lang/String;)V", "getDescription", "()Ljava/lang/String;", "ServiceAccount", "AlreadyGroupMember", "Other", "Close", "Cancel", "Dismiss", "ClientLimitReached", "RemoteLimitReached", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$AlreadyGroupMember;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Cancel;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$ClientLimitReached;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Close;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Dismiss;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Other;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$RemoteLimitReached;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$ServiceAccount;", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class VKIDGroupSubscriptionFail {
    private final String description;

    public /* synthetic */ VKIDGroupSubscriptionFail(String str, DefaultConstructorMarker defaultConstructorMarker) {
        this(str);
    }

    private VKIDGroupSubscriptionFail(String str) {
        this.description = str;
    }

    public final String getDescription() {
        return this.description;
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$ServiceAccount;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class ServiceAccount extends VKIDGroupSubscriptionFail {
        public ServiceAccount() {
            super("User can't subscribe to group with service account", null);
        }

        public boolean equals(Object other) {
            return (other instanceof ServiceAccount) && Intrinsics.areEqual(getDescription(), ((ServiceAccount) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$AlreadyGroupMember;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class AlreadyGroupMember extends VKIDGroupSubscriptionFail {
        public AlreadyGroupMember() {
            super("User can't subscribe to group he's already a member of", null);
        }

        public boolean equals(Object other) {
            return (other instanceof AlreadyGroupMember) && Intrinsics.areEqual(getDescription(), ((AlreadyGroupMember) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0013\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0096\u0002J\b\u0010\f\u001a\u00020\rH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u000e"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Other;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "throwable", "", "<init>", "(Ljava/lang/Throwable;)V", "getThrowable", "()Ljava/lang/Throwable;", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Other extends VKIDGroupSubscriptionFail {
        private final Throwable throwable;

        public final Throwable getThrowable() {
            return this.throwable;
        }

        /* JADX WARN: Illegal instructions before constructor call */
        public Other(Throwable throwable) {
            Intrinsics.checkNotNullParameter(throwable, "throwable");
            String message = throwable.getMessage();
            super(message == null ? "" : message, null);
            this.throwable = throwable;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
                return false;
            }
            Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail.Other");
            Other other2 = (Other) other;
            return Intrinsics.areEqual(getDescription(), other2.getDescription()) && Intrinsics.areEqual(this.throwable, other2.throwable);
        }

        public int hashCode() {
            return (getDescription().hashCode() * 31) + this.throwable.hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Close;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Close extends VKIDGroupSubscriptionFail {
        public Close() {
            super("User clicked on the close button", null);
        }

        public boolean equals(Object other) {
            return (other instanceof Close) && Intrinsics.areEqual(getDescription(), ((Close) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Cancel;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Cancel extends VKIDGroupSubscriptionFail {
        public Cancel() {
            super("User clicked on the cancel button", null);
        }

        public boolean equals(Object other) {
            return (other instanceof Cancel) && Intrinsics.areEqual(getDescription(), ((Cancel) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$Dismiss;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dismiss extends VKIDGroupSubscriptionFail {
        public Dismiss() {
            super("User dismissed the sheet", null);
        }

        public boolean equals(Object other) {
            return (other instanceof Dismiss) && Intrinsics.areEqual(getDescription(), ((Dismiss) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$ClientLimitReached;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class ClientLimitReached extends VKIDGroupSubscriptionFail {
        public ClientLimitReached() {
            super("User reached the limit of group subscription displays that you've set on the client side", null);
        }

        public boolean equals(Object other) {
            return (other instanceof ClientLimitReached) && Intrinsics.areEqual(getDescription(), ((ClientLimitReached) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }

    /* JADX INFO: compiled from: VKIDGroupSubscriptionFail.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0096\u0002J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail$RemoteLimitReached;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "<init>", "()V", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class RemoteLimitReached extends VKIDGroupSubscriptionFail {
        public RemoteLimitReached() {
            super("User reached the limit of group subscription displays that is controlled remotely", null);
        }

        public boolean equals(Object other) {
            return (other instanceof RemoteLimitReached) && Intrinsics.areEqual(getDescription(), ((RemoteLimitReached) other).getDescription());
        }

        public int hashCode() {
            return getDescription().hashCode();
        }
    }
}
