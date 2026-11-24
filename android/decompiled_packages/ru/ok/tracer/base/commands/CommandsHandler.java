package ru.ok.tracer.base.commands;

import android.util.Log;
import io.sentry.protocol.OperatingSystem;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONObject;
import ru.ok.tracer.base.limits.TracerFeatureLimits;

/* JADX INFO: compiled from: CommandsHandler.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001:\u0001\u0010B\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u001a\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u00062\b\u0010\r\u001a\u0004\u0018\u00010\u0006J\u000e\u0010\n\u001a\u00020\u000b2\u0006\u0010\u000e\u001a\u00020\u000fR\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lru/ok/tracer/base/commands/CommandsHandler;", "", "builder", "Lru/ok/tracer/base/commands/CommandsHandler$Builder;", "(Lru/ok/tracer/base/commands/CommandsHandler$Builder;)V", "featureName", "", "limits", "Lru/ok/tracer/base/limits/TracerFeatureLimits;", "tag", "handleResponse", "", "responseContentType", "responseContent", "responseObject", "Lorg/json/JSONObject;", "Builder", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class CommandsHandler {
    private final String featureName;
    private final TracerFeatureLimits limits;
    private final String tag;

    public /* synthetic */ CommandsHandler(Builder builder, DefaultConstructorMarker defaultConstructorMarker) {
        this(builder);
    }

    private CommandsHandler(Builder builder) {
        this.featureName = builder.getFeatureName();
        this.tag = builder.getTag();
        this.limits = builder.getLimits();
    }

    public final void handleResponse(String responseContentType, String responseContent) {
        String str = responseContent;
        if (str == null || StringsKt.isBlank(str)) {
            return;
        }
        try {
            handleResponse(new JSONObject(responseContent));
        } catch (Exception unused) {
            Log.w("Tracer", "Cannot parse content with Content-Type: " + responseContentType);
        }
    }

    public final void handleResponse(JSONObject responseObject) {
        Intrinsics.checkNotNullParameter(responseObject, "responseObject");
        JSONObject jSONObjectOptJSONObject = responseObject.optJSONObject("commands");
        if (jSONObjectOptJSONObject == null || this.limits == null) {
            return;
        }
        long jOptLong = jSONObjectOptJSONObject.optLong("globalShutdownMs");
        Long lValueOf = Long.valueOf(jSONObjectOptJSONObject.optLong("featureShutdownMs"));
        lValueOf.longValue();
        Long l = this.featureName != null ? lValueOf : null;
        Long lValueOf2 = Long.valueOf(jSONObjectOptJSONObject.optLong("tagShutdownMs"));
        lValueOf2.longValue();
        this.limits.setShutdownMs(Long.valueOf(jOptLong), this.featureName, l, this.tag, (this.featureName == null || this.tag == null) ? null : lValueOf2);
    }

    /* JADX INFO: compiled from: CommandsHandler.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0006\u0010\u0012\u001a\u00020\u0013J\u000e\u0010\u0014\u001a\u00020\u00002\u0006\u0010\u0003\u001a\u00020\u0004J\u000e\u0010\u0015\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\nJ\u000e\u0010\u0016\u001a\u00020\u00002\u0006\u0010\u000f\u001a\u00020\u0004R\u001c\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0005\u0010\u0006\"\u0004\b\u0007\u0010\bR\u001c\u0010\t\u001a\u0004\u0018\u00010\nX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u001c\u0010\u000f\u001a\u0004\u0018\u00010\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0006\"\u0004\b\u0011\u0010\b¨\u0006\u0017"}, d2 = {"Lru/ok/tracer/base/commands/CommandsHandler$Builder;", "", "()V", "featureName", "", "getFeatureName$tracer_base_release", "()Ljava/lang/String;", "setFeatureName$tracer_base_release", "(Ljava/lang/String;)V", "limits", "Lru/ok/tracer/base/limits/TracerFeatureLimits;", "getLimits$tracer_base_release", "()Lru/ok/tracer/base/limits/TracerFeatureLimits;", "setLimits$tracer_base_release", "(Lru/ok/tracer/base/limits/TracerFeatureLimits;)V", "tag", "getTag$tracer_base_release", "setTag$tracer_base_release", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/base/commands/CommandsHandler;", "setFeatureName", "setLimitsHandler", "setTag", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Builder {
        private String featureName;
        private TracerFeatureLimits limits;
        private String tag;

        /* JADX INFO: renamed from: getFeatureName$tracer_base_release, reason: from getter */
        public final String getFeatureName() {
            return this.featureName;
        }

        public final void setFeatureName$tracer_base_release(String str) {
            this.featureName = str;
        }

        /* JADX INFO: renamed from: getTag$tracer_base_release, reason: from getter */
        public final String getTag() {
            return this.tag;
        }

        public final void setTag$tracer_base_release(String str) {
            this.tag = str;
        }

        /* JADX INFO: renamed from: getLimits$tracer_base_release, reason: from getter */
        public final TracerFeatureLimits getLimits() {
            return this.limits;
        }

        public final void setLimits$tracer_base_release(TracerFeatureLimits tracerFeatureLimits) {
            this.limits = tracerFeatureLimits;
        }

        public final Builder setFeatureName(String featureName) {
            Intrinsics.checkNotNullParameter(featureName, "featureName");
            this.featureName = featureName;
            return this;
        }

        public final Builder setTag(String tag) {
            Intrinsics.checkNotNullParameter(tag, "tag");
            this.tag = tag;
            return this;
        }

        public final Builder setLimitsHandler(TracerFeatureLimits limits) {
            Intrinsics.checkNotNullParameter(limits, "limits");
            this.limits = limits;
            return this;
        }

        public final CommandsHandler build() {
            return new CommandsHandler(this, null);
        }
    }
}
