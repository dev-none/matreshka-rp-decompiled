package defpackage;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: WakelockPlusMessages.g.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u0013\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\nJ\u0013\u0010\u000b\u001a\u00020\u00032\b\u0010\f\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0007J\u001a\u0010\u0010\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u0010\u0011J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0015"}, d2 = {"LToggleMessage;", "", "enable", "", "<init>", "(Ljava/lang/Boolean;)V", "getEnable", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "toList", "", "equals", Request.JsonKeys.OTHER, "hashCode", "", "component1", MenuActionType.COPY, "(Ljava/lang/Boolean;)LToggleMessage;", "toString", "", "Companion", "wakelock_plus_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ToggleMessage {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Boolean enable;

    /* JADX WARN: Multi-variable type inference failed */
    public ToggleMessage() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public static /* synthetic */ ToggleMessage copy$default(ToggleMessage toggleMessage, Boolean bool, int i, Object obj) {
        if ((i & 1) != 0) {
            bool = toggleMessage.enable;
        }
        return toggleMessage.copy(bool);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Boolean getEnable() {
        return this.enable;
    }

    public final ToggleMessage copy(Boolean enable) {
        return new ToggleMessage(enable);
    }

    public String toString() {
        return "ToggleMessage(enable=" + this.enable + ")";
    }

    public ToggleMessage(Boolean bool) {
        this.enable = bool;
    }

    public /* synthetic */ ToggleMessage(Boolean bool, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : bool);
    }

    public final Boolean getEnable() {
        return this.enable;
    }

    /* JADX INFO: compiled from: WakelockPlusMessages.g.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"LToggleMessage$Companion;", "", "<init>", "()V", "fromList", "LToggleMessage;", "pigeonVar_list", "", "wakelock_plus_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ToggleMessage fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            return new ToggleMessage((Boolean) pigeonVar_list.get(0));
        }
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf(this.enable);
    }

    public boolean equals(Object other) {
        if (!(other instanceof ToggleMessage)) {
            return false;
        }
        if (this == other) {
            return true;
        }
        return WakelockPlusMessagesPigeonUtils.INSTANCE.deepEquals(toList(), ((ToggleMessage) other).toList());
    }

    public int hashCode() {
        return toList().hashCode();
    }
}
