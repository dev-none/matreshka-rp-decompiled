package com.vk.id;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthOptionsCreator.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u001d\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0010\u001a\u00020\u0011H×\u0001J\t\u0010\u0012\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0013"}, d2 = {"Lcom/vk/id/StatParams;", "", "flowSource", "", "sessionId", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getFlowSource", "()Ljava/lang/String;", "getSessionId", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class StatParams {
    public static final int $stable = 0;
    private final String flowSource;
    private final String sessionId;

    public static /* synthetic */ StatParams copy$default(StatParams statParams, String str, String str2, int i, Object obj) {
        if ((i & 1) != 0) {
            str = statParams.flowSource;
        }
        if ((i & 2) != 0) {
            str2 = statParams.sessionId;
        }
        return statParams.copy(str, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getFlowSource() {
        return this.flowSource;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getSessionId() {
        return this.sessionId;
    }

    public final StatParams copy(String flowSource, String sessionId) {
        Intrinsics.checkNotNullParameter(flowSource, "flowSource");
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        return new StatParams(flowSource, sessionId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof StatParams)) {
            return false;
        }
        StatParams statParams = (StatParams) other;
        return Intrinsics.areEqual(this.flowSource, statParams.flowSource) && Intrinsics.areEqual(this.sessionId, statParams.sessionId);
    }

    public int hashCode() {
        return (this.flowSource.hashCode() * 31) + this.sessionId.hashCode();
    }

    public String toString() {
        return "StatParams(flowSource=" + this.flowSource + ", sessionId=" + this.sessionId + ")";
    }

    public StatParams(String flowSource, String sessionId) {
        Intrinsics.checkNotNullParameter(flowSource, "flowSource");
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        this.flowSource = flowSource;
        this.sessionId = sessionId;
    }

    public final String getFlowSource() {
        return this.flowSource;
    }

    public final String getSessionId() {
        return this.sessionId;
    }
}
