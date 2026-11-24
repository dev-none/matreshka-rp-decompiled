package com.vk.dto.common.id;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.collection.SieveCacheKt;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonPrimitive;
import com.google.gson.JsonSerializationContext;
import com.google.gson.JsonSerializer;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.ReplaceWith;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UserId.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\b\u0086\b\u0018\u0000 \u00192\u00020\u0001:\u0002\u0019\u001aB\u000f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004B\r\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\t\u0010\n\u001a\u00020\u0006HÆ\u0003J\u0013\u0010\u000b\u001a\u00020\u00002\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÆ\u0001J\b\u0010\f\u001a\u00020\rH\u0016J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011HÖ\u0003J\t\u0010\u0012\u001a\u00020\rHÖ\u0001J\b\u0010\u0013\u001a\u00020\u0014H\u0016J\u0018\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00032\u0006\u0010\u0018\u001a\u00020\rH\u0016R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\u001b"}, d2 = {"Lcom/vk/dto/common/id/UserId;", "Landroid/os/Parcelable;", "parcel", "Landroid/os/Parcel;", "(Landroid/os/Parcel;)V", "value", "", "(J)V", "getValue", "()J", "component1", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "", "writeToParcel", "", "dest", FeatureFlags.TYPE, "Companion", "GsonSerializer", "id_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final /* data */ class UserId implements Parcelable {
    private final long value;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final UserId DEFAULT = new UserId(0);
    public static final Parcelable.Creator<UserId> CREATOR = new Parcelable.Creator<UserId>() { // from class: com.vk.dto.common.id.UserId$Companion$CREATOR$1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public UserId createFromParcel(Parcel source) {
            Intrinsics.checkNotNullParameter(source, "source");
            return new UserId(source);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public UserId[] newArray(int size) {
            return new UserId[size];
        }
    };

    public static /* synthetic */ UserId copy$default(UserId userId, long j, int i, Object obj) {
        if ((i & 1) != 0) {
            j = userId.value;
        }
        return userId.copy(j);
    }

    @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
    @JvmStatic
    public static final UserId fromLegacyValue(int i) {
        return INSTANCE.fromLegacyValue(i);
    }

    @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
    @JvmStatic
    public static final List<UserId> fromLegacyValues(Collection<Integer> collection) {
        return INSTANCE.fromLegacyValues(collection);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final long getValue() {
        return this.value;
    }

    public final UserId copy(long value) {
        return new UserId(value);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof UserId) && this.value == ((UserId) other).value;
    }

    public int hashCode() {
        return Long.hashCode(this.value);
    }

    public UserId(long j) {
        this.value = j;
    }

    public final long getValue() {
        return this.value;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public UserId(Parcel parcel) {
        this(parcel.readLong());
        Intrinsics.checkNotNullParameter(parcel, "parcel");
    }

    public String toString() {
        return String.valueOf(this.value);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeLong(this.value);
    }

    /* JADX INFO: compiled from: UserId.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\u0018\u00002\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u00012\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0003B\u000f\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J(\u0010\u0007\u001a\u0004\u0018\u00010\u00022\b\u0010\b\u001a\u0004\u0018\u00010\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0016J&\u0010\u000e\u001a\u00020\t2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00022\b\u0010\u0010\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u0011H\u0016R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/vk/dto/common/id/UserId$GsonSerializer;", "Lcom/google/gson/JsonSerializer;", "Lcom/vk/dto/common/id/UserId;", "Lcom/google/gson/JsonDeserializer;", "shiftByMaxInt", "", "(Z)V", "deserialize", "json", "Lcom/google/gson/JsonElement;", "typeOfT", "Ljava/lang/reflect/Type;", "context", "Lcom/google/gson/JsonDeserializationContext;", "serialize", "src", "typeOfSrc", "Lcom/google/gson/JsonSerializationContext;", "id_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class GsonSerializer implements JsonSerializer<UserId>, JsonDeserializer<UserId> {
        private final boolean shiftByMaxInt;

        public GsonSerializer() {
            this(false, 1, null);
        }

        public GsonSerializer(boolean z) {
            this.shiftByMaxInt = z;
        }

        public /* synthetic */ GsonSerializer(boolean z, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? false : z);
        }

        @Override // com.google.gson.JsonSerializer
        public JsonElement serialize(UserId src, Type typeOfSrc, JsonSerializationContext context) {
            long value;
            if (src == null) {
                value = -1;
            } else if (!this.shiftByMaxInt) {
                value = src.getValue();
            } else if (src.getValue() < 0) {
                value = src.getValue() - ((long) Integer.MAX_VALUE);
            } else {
                value = src.getValue() + ((long) Integer.MAX_VALUE);
            }
            return new JsonPrimitive(Long.valueOf(value));
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.google.gson.JsonDeserializer
        public UserId deserialize(JsonElement json, Type typeOfT, JsonDeserializationContext context) {
            if (json != null && !json.isJsonNull()) {
                long asLong = json.getAsLong();
                if (!this.shiftByMaxInt) {
                    return new UserId(asLong);
                }
                boolean z = asLong < 0;
                long jAbs = Math.abs(asLong);
                if (jAbs < SieveCacheKt.NodeLinkMask) {
                    throw new IllegalStateException("abs of owner id should be >= MAX_INT");
                }
                long j = jAbs - ((long) Integer.MAX_VALUE);
                if (z) {
                    j = -j;
                }
                return new UserId(j);
            }
            return null;
        }
    }

    /* JADX INFO: compiled from: UserId.kt */
    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0010\u001e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\tH\u0007J\u001c\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00050\u000b2\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\t0\fH\u0007J\b\u0010\r\u001a\u00020\u000eH\u0007J\u0016\u0010\u000f\u001a\u00020\u000e2\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0011H\u0007R\u0016\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/vk/dto/common/id/UserId$Companion;", "", "()V", "CREATOR", "Landroid/os/Parcelable$Creator;", "Lcom/vk/dto/common/id/UserId;", "DEFAULT", "fromLegacyValue", "value", "", "fromLegacyValues", "", "", "removeLegacyGlobalObserver", "", "setLegacyGlobalObserver", "observer", "Lkotlin/Function0;", "id_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
        @JvmStatic
        public final UserId fromLegacyValue(int value) {
            UserIdKt.legacyObserver.invoke();
            return new UserId(value);
        }

        @Deprecated(message = "don't use it in new code", replaceWith = @ReplaceWith(expression = "UserId()", imports = {"com.vk.dto.common.id.UserId"}))
        @JvmStatic
        public final List<UserId> fromLegacyValues(Collection<Integer> value) {
            Intrinsics.checkNotNullParameter(value, "value");
            UserIdKt.legacyObserver.invoke();
            Collection<Integer> collection = value;
            ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(collection, 10));
            Iterator<T> it = collection.iterator();
            while (it.hasNext()) {
                arrayList.add(UserId.INSTANCE.fromLegacyValue(((Number) it.next()).intValue()));
            }
            return arrayList;
        }

        @Deprecated(message = "Only for debug usage")
        public final synchronized void setLegacyGlobalObserver(Function0<Unit> observer) {
            Intrinsics.checkNotNullParameter(observer, "observer");
            UserIdKt.legacyObserver = observer;
        }

        @Deprecated(message = "Only for debug usage")
        public final synchronized void removeLegacyGlobalObserver() {
            UserIdKt.legacyObserver = new Function0<Unit>() { // from class: com.vk.dto.common.id.UserId$Companion$removeLegacyGlobalObserver$1
                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final void invoke2() {
                }

                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Unit invoke() {
                    invoke2();
                    return Unit.INSTANCE;
                }
            };
        }
    }
}
