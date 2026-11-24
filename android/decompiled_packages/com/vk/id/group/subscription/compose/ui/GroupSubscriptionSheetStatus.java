package com.vk.id.group.subscription.compose.ui;

import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b1\u0018\u00002\u00020\u0001:\u0005\u0004\u0005\u0006\u0007\bB\t\b\u0005¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0005\t\n\u000b\f\r¨\u0006\u000e"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "Landroid/os/Parcelable;", "<init>", "()V", "Init", "Loaded", "Subscribing", "Failure", "Resubscribing", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Failure;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Init;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Loaded;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Resubscribing;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Subscribing;", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class GroupSubscriptionSheetStatus implements Parcelable {
    public static final int $stable = 0;

    public /* synthetic */ GroupSubscriptionSheetStatus(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private GroupSubscriptionSheetStatus() {
    }

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bÇ\n\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u0004\u001a\u00020\u0005H\u0007J\u0013\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH×\u0003J\t\u0010\n\u001a\u00020\u0005H×\u0001J\t\u0010\u000b\u001a\u00020\fH×\u0001J\u0018\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0005H\u0007¨\u0006\u0012"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Init;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "<init>", "()V", "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Init extends GroupSubscriptionSheetStatus {
        public static final int $stable = 0;
        public static final Init INSTANCE = new Init();
        public static final Parcelable.Creator<Init> CREATOR = new Creator();

        /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<Init> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Init createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                parcel.readInt();
                return Init.INSTANCE;
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Init[] newArray(int i) {
                return new Init[i];
            }
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Init)) {
                return false;
            }
            return true;
        }

        public int hashCode() {
            return -1098976538;
        }

        public String toString() {
            return "Init";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            dest.writeInt(1);
        }

        private Init() {
            super(null);
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\b\u0010\n\u001a\u00020\u000bH\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH×\u0003J\t\u0010\u0010\u001a\u00020\u000bH×\u0001J\t\u0010\u0011\u001a\u00020\u0012H×\u0001J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u000bH\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Loaded;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "data", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "<init>", "(Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;)V", "getData", "()Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Loaded extends GroupSubscriptionSheetStatus {
        public static final int $stable = 0;
        public static final Parcelable.Creator<Loaded> CREATOR = new Creator();
        private final GroupSubscriptionSheetStatusData data;

        /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<Loaded> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Loaded createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new Loaded(GroupSubscriptionSheetStatusData.CREATOR.createFromParcel(parcel));
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Loaded[] newArray(int i) {
                return new Loaded[i];
            }
        }

        public static /* synthetic */ Loaded copy$default(Loaded loaded, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Object obj) {
            if ((i & 1) != 0) {
                groupSubscriptionSheetStatusData = loaded.data;
            }
            return loaded.copy(groupSubscriptionSheetStatusData);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        public final Loaded copy(GroupSubscriptionSheetStatusData data) {
            Intrinsics.checkNotNullParameter(data, "data");
            return new Loaded(data);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof Loaded) && Intrinsics.areEqual(this.data, ((Loaded) other).data);
        }

        public int hashCode() {
            return this.data.hashCode();
        }

        public String toString() {
            return "Loaded(data=" + this.data + ")";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            this.data.writeToParcel(dest, flags);
        }

        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Loaded(GroupSubscriptionSheetStatusData data) {
            super(null);
            Intrinsics.checkNotNullParameter(data, "data");
            this.data = data;
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\b\u0010\n\u001a\u00020\u000bH\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH×\u0003J\t\u0010\u0010\u001a\u00020\u000bH×\u0001J\t\u0010\u0011\u001a\u00020\u0012H×\u0001J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u000bH\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Subscribing;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "data", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "<init>", "(Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;)V", "getData", "()Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Subscribing extends GroupSubscriptionSheetStatus {
        public static final int $stable = 0;
        public static final Parcelable.Creator<Subscribing> CREATOR = new Creator();
        private final GroupSubscriptionSheetStatusData data;

        /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<Subscribing> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Subscribing createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new Subscribing(GroupSubscriptionSheetStatusData.CREATOR.createFromParcel(parcel));
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Subscribing[] newArray(int i) {
                return new Subscribing[i];
            }
        }

        public static /* synthetic */ Subscribing copy$default(Subscribing subscribing, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Object obj) {
            if ((i & 1) != 0) {
                groupSubscriptionSheetStatusData = subscribing.data;
            }
            return subscribing.copy(groupSubscriptionSheetStatusData);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        public final Subscribing copy(GroupSubscriptionSheetStatusData data) {
            Intrinsics.checkNotNullParameter(data, "data");
            return new Subscribing(data);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof Subscribing) && Intrinsics.areEqual(this.data, ((Subscribing) other).data);
        }

        public int hashCode() {
            return this.data.hashCode();
        }

        public String toString() {
            return "Subscribing(data=" + this.data + ")";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            this.data.writeToParcel(dest, flags);
        }

        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Subscribing(GroupSubscriptionSheetStatusData data) {
            super(null);
            Intrinsics.checkNotNullParameter(data, "data");
            this.data = data;
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\b\u0010\n\u001a\u00020\u000bH\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH×\u0003J\t\u0010\u0010\u001a\u00020\u000bH×\u0001J\t\u0010\u0011\u001a\u00020\u0012H×\u0001J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u000bH\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Failure;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "data", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "<init>", "(Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;)V", "getData", "()Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Failure extends GroupSubscriptionSheetStatus {
        public static final int $stable = 0;
        public static final Parcelable.Creator<Failure> CREATOR = new Creator();
        private final GroupSubscriptionSheetStatusData data;

        /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<Failure> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Failure createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new Failure(GroupSubscriptionSheetStatusData.CREATOR.createFromParcel(parcel));
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Failure[] newArray(int i) {
                return new Failure[i];
            }
        }

        public static /* synthetic */ Failure copy$default(Failure failure, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Object obj) {
            if ((i & 1) != 0) {
                groupSubscriptionSheetStatusData = failure.data;
            }
            return failure.copy(groupSubscriptionSheetStatusData);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        public final Failure copy(GroupSubscriptionSheetStatusData data) {
            Intrinsics.checkNotNullParameter(data, "data");
            return new Failure(data);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof Failure) && Intrinsics.areEqual(this.data, ((Failure) other).data);
        }

        public int hashCode() {
            return this.data.hashCode();
        }

        public String toString() {
            return "Failure(data=" + this.data + ")";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            this.data.writeToParcel(dest, flags);
        }

        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Failure(GroupSubscriptionSheetStatusData data) {
            super(null);
            Intrinsics.checkNotNullParameter(data, "data");
            this.data = data;
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÇ\u0001J\b\u0010\n\u001a\u00020\u000bH\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH×\u0003J\t\u0010\u0010\u001a\u00020\u000bH×\u0001J\t\u0010\u0011\u001a\u00020\u0012H×\u0001J\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u000bH\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Resubscribing;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "data", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "<init>", "(Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;)V", "getData", "()Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Resubscribing extends GroupSubscriptionSheetStatus {
        public static final int $stable = 0;
        public static final Parcelable.Creator<Resubscribing> CREATOR = new Creator();
        private final GroupSubscriptionSheetStatusData data;

        /* JADX INFO: compiled from: GroupSubscriptionSheetStatus.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class Creator implements Parcelable.Creator<Resubscribing> {
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Resubscribing createFromParcel(Parcel parcel) {
                Intrinsics.checkNotNullParameter(parcel, "parcel");
                return new Resubscribing(GroupSubscriptionSheetStatusData.CREATOR.createFromParcel(parcel));
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public final Resubscribing[] newArray(int i) {
                return new Resubscribing[i];
            }
        }

        public static /* synthetic */ Resubscribing copy$default(Resubscribing resubscribing, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Object obj) {
            if ((i & 1) != 0) {
                groupSubscriptionSheetStatusData = resubscribing.data;
            }
            return resubscribing.copy(groupSubscriptionSheetStatusData);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        public final Resubscribing copy(GroupSubscriptionSheetStatusData data) {
            Intrinsics.checkNotNullParameter(data, "data");
            return new Resubscribing(data);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof Resubscribing) && Intrinsics.areEqual(this.data, ((Resubscribing) other).data);
        }

        public int hashCode() {
            return this.data.hashCode();
        }

        public String toString() {
            return "Resubscribing(data=" + this.data + ")";
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel dest, int flags) {
            Intrinsics.checkNotNullParameter(dest, "dest");
            this.data.writeToParcel(dest, flags);
        }

        public final GroupSubscriptionSheetStatusData getData() {
            return this.data;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Resubscribing(GroupSubscriptionSheetStatusData data) {
            super(null);
            Intrinsics.checkNotNullParameter(data, "data");
            this.data = data;
        }
    }
}
