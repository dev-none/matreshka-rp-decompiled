package io.flutter.plugins.firebase.performance;

import com.google.firebase.perf.FirebasePerformance;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u000f\b\u0086\u0081\u0002\u0018\u0000 \u00112\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0011B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010¨\u0006\u0012"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMethod;", "", "raw", "", "<init>", "(Ljava/lang/String;II)V", "getRaw", "()I", FirebasePerformance.HttpMethod.CONNECT, FirebasePerformance.HttpMethod.DELETE, "GET", FirebasePerformance.HttpMethod.HEAD, FirebasePerformance.HttpMethod.OPTIONS, FirebasePerformance.HttpMethod.PATCH, "POST", FirebasePerformance.HttpMethod.PUT, FirebasePerformance.HttpMethod.TRACE, "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum HttpMethod {
    CONNECT(0),
    DELETE(1),
    GET(2),
    HEAD(3),
    OPTIONS(4),
    PATCH(5),
    POST(6),
    PUT(7),
    TRACE(8);

    private final int raw;
    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    public static EnumEntries<HttpMethod> getEntries() {
        return $ENTRIES;
    }

    HttpMethod(int i) {
        this.raw = i;
    }

    public final int getRaw() {
        return this.raw;
    }

    /* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMethod$Companion;", "", "<init>", "()V", "ofRaw", "Lio/flutter/plugins/firebase/performance/HttpMethod;", "raw", "", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HttpMethod ofRaw(int raw) {
            for (HttpMethod httpMethod : HttpMethod.values()) {
                if (httpMethod.getRaw() == raw) {
                    return httpMethod;
                }
            }
            return null;
        }
    }
}
