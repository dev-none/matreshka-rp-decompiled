package com.vk.id.captcha.sensors.a;

import androidx.media3.exoplayer.upstream.CmcdData;
import io.sentry.protocol.ViewHierarchyNode;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: SensorData.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\b0\u0018\u00002\u00020\u0001:\u0003\u0006\u0003\nB\t\b\u0004¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u0003\u001a\u00020\u0002H'¢\u0006\u0004\b\u0003\u0010\u0004R\u0014\u0010\u0006\u001a\u00020\u00058'X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\u0003\u000b\f\r"}, d2 = {"Lcom/vk/id/captcha/c/a/a;", "", "Lorg/json/JSONObject;", "b", "()Lorg/json/JSONObject;", "", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "()Ljava/lang/String;", "<init>", "()V", "c", "Lcom/vk/id/captcha/c/a/a$a;", "Lcom/vk/id/captcha/c/a/a$b;", "Lcom/vk/id/captcha/c/a/a$c;"}, k = 1, mv = {1, 9, 0}, xi = 48)
public abstract class a {
    public /* synthetic */ a(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    /* JADX INFO: renamed from: a */
    public abstract String getD();

    public abstract JSONObject b();

    private a() {
    }

    /* JADX INFO: compiled from: SensorData.kt */
    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\n\b\u0086\b\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B\u001f\u0012\u0006\u0010\u0003\u001a\u00020\u0010\u0012\u0006\u0010\u0017\u001a\u00020\u0010\u0012\u0006\u0010\u0018\u001a\u00020\u0010¢\u0006\u0004\b\u0019\u0010\u001aJ\u001a\u0010\u0005\u001a\u00020\u00042\b\u0010\u0003\u001a\u0004\u0018\u00010\u0002HÖ\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0010\u0010\b\u001a\u00020\u0007HÖ\u0001¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u000b\u001a\u00020\nH\u0017¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\u000e\u001a\u00020\rH×\u0001¢\u0006\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0012\u001a\u00020\u0010X\u0006¢\u0006\u0006\n\u0004\b\u000b\u0010\u0011R\u0011\u0010\u000b\u001a\u00020\u0010X\u0006¢\u0006\u0006\n\u0004\b\u0013\u0010\u0011R\u0011\u0010\u0013\u001a\u00020\u0010X\u0006¢\u0006\u0006\n\u0004\b\u0014\u0010\u0011R\u001a\u0010\u0014\u001a\u00020\r8\u0017X\u0097D¢\u0006\f\n\u0004\b\u0015\u0010\u0016\u001a\u0004\b\u0012\u0010\u000f"}, d2 = {"Lcom/vk/id/captcha/c/a/a$c;", "Lcom/vk/id/captcha/c/a/a;", "", "p0", "", "equals", "(Ljava/lang/Object;)Z", "", "hashCode", "()I", "Lorg/json/JSONObject;", "b", "()Lorg/json/JSONObject;", "", "toString", "()Ljava/lang/String;", "", "F", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "c", "d", "e", "Ljava/lang/String;", "p1", "p2", "<init>", "(FFF)V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class c extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name and from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);

        /* JADX INFO: renamed from: b, reason: from kotlin metadata */
        public float a;

        /* JADX INFO: renamed from: c, reason: from kotlin metadata */
        public float b;

        /* JADX INFO: renamed from: d, reason: from kotlin metadata */
        public float c;

        /* JADX INFO: renamed from: e, reason: from kotlin metadata */
        private final String d;

        public final boolean equals(Object p0) {
            if (this == p0) {
                return true;
            }
            if (!(p0 instanceof c)) {
                return false;
            }
            c cVar = (c) p0;
            return Float.compare(this.a, cVar.a) == 0 && Float.compare(this.b, cVar.b) == 0 && Float.compare(this.c, cVar.c) == 0;
        }

        public final int hashCode() {
            return (((Float.hashCode(this.a) * 31) + Float.hashCode(this.b)) * 31) + Float.hashCode(this.c);
        }

        public final String toString() {
            return "c(a=" + this.a + ", b=" + this.b + ", c=" + this.c + ')';
        }

        public c(float f, float f2, float f3) {
            super(null);
            this.a = f;
            this.b = f2;
            this.c = f3;
            this.d = "motion";
        }

        @Override // com.vk.id.captcha.sensors.a.a
        /* JADX INFO: renamed from: a, reason: from getter */
        public final String getD() {
            return this.d;
        }

        @Override // com.vk.id.captcha.sensors.a.a
        public final JSONObject b() throws JSONException {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(ViewHierarchyNode.JsonKeys.ALPHA, Float.valueOf(this.a));
            jSONObject.put("beta", Float.valueOf(this.b));
            jSONObject.put("gamma", Float.valueOf(this.c));
            return jSONObject;
        }

        /* JADX INFO: renamed from: com.vk.id.captcha.c.a.a$c$a, reason: collision with other inner class name and from kotlin metadata */
        /* JADX INFO: compiled from: SensorData.kt */
        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u0014\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0003\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"Lcom/vk/id/captcha/c/a/a$c$a;", "", "", "p0", "Lcom/vk/id/captcha/c/a/a$c;", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "([F)Lcom/vk/id/captcha/c/a/a$c;", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final c a(float[] p0) {
                Intrinsics.checkNotNullParameter(p0, "");
                float f = p0[0];
                return new c(f, f, f);
            }
        }
    }

    /* JADX INFO: renamed from: com.vk.id.captcha.c.a.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: SensorData.kt */
    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0007\b\u0086\b\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B\u001f\u0012\u0006\u0010\u0003\u001a\u00020\u0013\u0012\u0006\u0010\u0017\u001a\u00020\u0013\u0012\u0006\u0010\u0018\u001a\u00020\u0013¢\u0006\u0004\b\u0019\u0010\u001aJ\u001a\u0010\u0005\u001a\u00020\u00042\b\u0010\u0003\u001a\u0004\u0018\u00010\u0002HÖ\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0010\u0010\b\u001a\u00020\u0007HÖ\u0001¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u000b\u001a\u00020\nH\u0017¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\u000e\u001a\u00020\rH×\u0001¢\u0006\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0012\u001a\u00020\r8\u0017X\u0097D¢\u0006\f\n\u0004\b\u0010\u0010\u0011\u001a\u0004\b\u0012\u0010\u000fR\u0011\u0010\u000b\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u000b\u0010\u0014R\u0011\u0010\u0015\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u0015\u0010\u0014R\u0011\u0010\u0016\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u0016\u0010\u0014"}, d2 = {"Lcom/vk/id/captcha/c/a/a$a;", "Lcom/vk/id/captcha/c/a/a;", "", "p0", "", "equals", "(Ljava/lang/Object;)Z", "", "hashCode", "()I", "Lorg/json/JSONObject;", "b", "()Lorg/json/JSONObject;", "", "toString", "()Ljava/lang/String;", "e", "Ljava/lang/String;", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "", "F", "c", "d", "p1", "p2", "<init>", "(FFF)V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class C1193a extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name and from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        public float b;
        public float c;
        public float d;

        /* JADX INFO: renamed from: e, reason: from kotlin metadata */
        private final String a;

        public final boolean equals(Object p0) {
            if (this == p0) {
                return true;
            }
            if (!(p0 instanceof C1193a)) {
                return false;
            }
            C1193a c1193a = (C1193a) p0;
            return Float.compare(this.b, c1193a.b) == 0 && Float.compare(this.c, c1193a.c) == 0 && Float.compare(this.d, c1193a.d) == 0;
        }

        public final int hashCode() {
            return (((Float.hashCode(this.b) * 31) + Float.hashCode(this.c)) * 31) + Float.hashCode(this.d);
        }

        public final String toString() {
            return "a(b=" + this.b + ", c=" + this.c + ", d=" + this.d + ')';
        }

        public C1193a(float f, float f2, float f3) {
            super(null);
            this.b = f;
            this.c = f2;
            this.d = f3;
            this.a = "accelerometer";
        }

        @Override // com.vk.id.captcha.sensors.a.a
        /* JADX INFO: renamed from: a, reason: from getter */
        public final String getD() {
            return this.a;
        }

        @Override // com.vk.id.captcha.sensors.a.a
        public final JSONObject b() throws JSONException {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("x", Float.valueOf(this.b));
            jSONObject.put("y", Float.valueOf(this.c));
            jSONObject.put("z", Float.valueOf(this.d));
            return jSONObject;
        }

        /* JADX INFO: renamed from: com.vk.id.captcha.c.a.a$a$a, reason: collision with other inner class name and from kotlin metadata */
        /* JADX INFO: compiled from: SensorData.kt */
        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u0014\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0003\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"Lcom/vk/id/captcha/c/a/a$a$a;", "", "", "p0", "Lcom/vk/id/captcha/c/a/a$a;", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "([F)Lcom/vk/id/captcha/c/a/a$a;", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final C1193a a(float[] p0) {
                Intrinsics.checkNotNullParameter(p0, "");
                return new C1193a(p0[0], p0[1], p0[2]);
            }
        }
    }

    /* JADX INFO: compiled from: SensorData.kt */
    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0007\b\u0086\b\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B\u001f\u0012\u0006\u0010\u0003\u001a\u00020\u0013\u0012\u0006\u0010\u0017\u001a\u00020\u0013\u0012\u0006\u0010\u0018\u001a\u00020\u0013¢\u0006\u0004\b\u0019\u0010\u001aJ\u001a\u0010\u0005\u001a\u00020\u00042\b\u0010\u0003\u001a\u0004\u0018\u00010\u0002HÖ\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0010\u0010\b\u001a\u00020\u0007HÖ\u0001¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u000b\u001a\u00020\nH\u0017¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\u000e\u001a\u00020\rH×\u0001¢\u0006\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0012\u001a\u00020\r8\u0017X\u0097D¢\u0006\f\n\u0004\b\u0010\u0010\u0011\u001a\u0004\b\u0012\u0010\u000fR\u0011\u0010\u000b\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u000b\u0010\u0014R\u0011\u0010\u0015\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u0015\u0010\u0014R\u0011\u0010\u0016\u001a\u00020\u0013X\u0007¢\u0006\u0006\n\u0004\b\u0016\u0010\u0014"}, d2 = {"Lcom/vk/id/captcha/c/a/a$b;", "Lcom/vk/id/captcha/c/a/a;", "", "p0", "", "equals", "(Ljava/lang/Object;)Z", "", "hashCode", "()I", "Lorg/json/JSONObject;", "b", "()Lorg/json/JSONObject;", "", "toString", "()Ljava/lang/String;", "e", "Ljava/lang/String;", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "", "F", "c", "d", "p1", "p2", "<init>", "(FFF)V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class b extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name and from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        public float b;
        public float c;
        public float d;

        /* JADX INFO: renamed from: e, reason: from kotlin metadata */
        private final String a;

        public final boolean equals(Object p0) {
            if (this == p0) {
                return true;
            }
            if (!(p0 instanceof b)) {
                return false;
            }
            b bVar = (b) p0;
            return Float.compare(this.b, bVar.b) == 0 && Float.compare(this.c, bVar.c) == 0 && Float.compare(this.d, bVar.d) == 0;
        }

        public final int hashCode() {
            return (((Float.hashCode(this.b) * 31) + Float.hashCode(this.c)) * 31) + Float.hashCode(this.d);
        }

        public final String toString() {
            return "b(b=" + this.b + ", c=" + this.c + ", d=" + this.d + ')';
        }

        public b(float f, float f2, float f3) {
            super(null);
            this.b = f;
            this.c = f2;
            this.d = f3;
            this.a = "gyroscope";
        }

        @Override // com.vk.id.captcha.sensors.a.a
        /* JADX INFO: renamed from: a, reason: from getter */
        public final String getD() {
            return this.a;
        }

        @Override // com.vk.id.captcha.sensors.a.a
        public final JSONObject b() throws JSONException {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("x", Float.valueOf(this.b));
            jSONObject.put("y", Float.valueOf(this.c));
            jSONObject.put("z", Float.valueOf(this.d));
            return jSONObject;
        }

        /* JADX INFO: renamed from: com.vk.id.captcha.c.a.a$b$a, reason: collision with other inner class name and from kotlin metadata */
        /* JADX INFO: compiled from: SensorData.kt */
        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u0014\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0003\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"Lcom/vk/id/captcha/c/a/a$b$a;", "", "", "p0", "Lcom/vk/id/captcha/c/a/a$b;", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "([F)Lcom/vk/id/captcha/c/a/a$b;", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final b a(float[] p0) {
                Intrinsics.checkNotNullParameter(p0, "");
                return new b(p0[0], p0[1], p0[2]);
            }
        }
    }
}
