package ru.ok.tracer.base.drop;

import androidx.core.app.NotificationCompat;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: DropRecord.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u001f\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u0015\u0010\r\u001a\u00020\u00002\u0006\u0010\u000e\u001a\u00020\u0006H\u0000¢\u0006\u0002\b\u000fJ\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0013\u001a\u00020\u0006H\u0016J\b\u0010\u0014\u001a\u00020\u0003H\u0016R\u0014\u0010\u0005\u001a\u00020\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\u0004\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u000b¨\u0006\u0015"}, d2 = {"Lru/ok/tracer/base/drop/DropRecord;", "", NotificationCompat.CATEGORY_EVENT, "", "reason", "count", "", "(Ljava/lang/String;Ljava/lang/String;I)V", "getCount$tracer_base_release", "()I", "getEvent$tracer_base_release", "()Ljava/lang/String;", "getReason$tracer_base_release", "copyIncrementCount", "plusCount", "copyIncrementCount$tracer_base_release", "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class DropRecord {
    private final int count;
    private final String event;
    private final String reason;

    public DropRecord(String event, String reason, int i) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(reason, "reason");
        this.event = event;
        this.reason = reason;
        this.count = i;
    }

    /* JADX INFO: renamed from: getEvent$tracer_base_release, reason: from getter */
    public final String getEvent() {
        return this.event;
    }

    /* JADX INFO: renamed from: getReason$tracer_base_release, reason: from getter */
    public final String getReason() {
        return this.reason;
    }

    /* JADX INFO: renamed from: getCount$tracer_base_release, reason: from getter */
    public final int getCount() {
        return this.count;
    }

    public final DropRecord copyIncrementCount$tracer_base_release(int plusCount) {
        return new DropRecord(this.event, this.reason, this.count + plusCount);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof DropRecord)) {
            return false;
        }
        DropRecord dropRecord = (DropRecord) other;
        return Intrinsics.areEqual(this.event, dropRecord.event) && Intrinsics.areEqual(this.reason, dropRecord.reason) && this.count == dropRecord.count;
    }

    public int hashCode() {
        return (((this.event.hashCode() * 31) + this.reason.hashCode()) * 31) + this.count;
    }

    public String toString() {
        return "DropRecord(event='" + this.event + "', reason='" + this.reason + "', count=" + this.count + ')';
    }
}
