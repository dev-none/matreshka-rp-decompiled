package com.my.tracker.obfuscated;

import android.text.TextUtils;
import android.util.Base64;
import com.my.tracker.MyTrackerConfig;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes6.dex */
public final class m2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final o2 f4973a;
    final y2 b;
    final int c;

    private static class a implements s0.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final s2[] f4974a;
        private long b;

        private a(s2[] s2VarArr) {
            this.f4974a = s2VarArr;
        }

        static a a(s2[] s2VarArr) {
            return new a(s2VarArr);
        }

        public s2[] b() {
            return this.f4974a;
        }

        public String toString() {
            String strJoin = TextUtils.join(StringUtils.COMMA, this.f4974a);
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            try {
                a(byteArrayOutputStream);
            } catch (Exception unused) {
            }
            return "[ChunkProtobufPacket]\n| sendTimestamp = " + this.b + "\n| contain " + this.f4974a.length + " packets: " + strJoin + "\n| content (base64): " + Base64.encodeToString(byteArrayOutputStream.toByteArray(), 0) + "\n[/ChunkProtobufPacket]";
        }

        @Override // com.my.tracker.obfuscated.s0.a
        public String a() {
            return "application/octet-stream";
        }

        @Override // com.my.tracker.obfuscated.s0.a
        public void a(OutputStream outputStream) throws IOException {
            q qVar = new q(16384);
            q qVar2 = new q(16384);
            for (s2 s2Var : this.f4974a) {
                qVar.a();
                qVar2.a();
                a(s2Var, qVar2);
                qVar.a(1, qVar2);
                qVar.a(outputStream);
            }
        }

        public void a(long j) {
            this.b = j;
        }

        private void a(s2 s2Var, q qVar) {
            try {
                qVar.b(s2Var.b());
                qVar.a(4, this.b);
            } catch (Exception unused) {
                x2.b("TimeSpentPacketSender: something went wrong while extracting protobuf data, return empty result");
            }
        }
    }

    private m2(int i, y2 y2Var, o2 o2Var) {
        this.c = i;
        this.f4973a = o2Var;
        this.b = y2Var;
    }

    public static m2 a(int i, y2 y2Var, o2 o2Var) {
        return new m2(i, y2Var, o2Var);
    }

    void b(a aVar) throws Exception {
        MyTrackerConfig.OkHttpClientProvider okHttpClientProviderN = this.b.n();
        String strP = this.b.p();
        aVar.a(System.currentTimeMillis());
        if (x2.a()) {
            x2.a("TimeSpentPacketSender: This packet will be sent now:\n" + aVar);
        }
        if (!s0.a(aVar, okHttpClientProviderN, true).a(strP).c()) {
            throw new Exception("packet didn't delivered to server");
        }
        x2.a("TimeSpentPacketSender: packet successfully delivered to server");
    }

    public void c() {
        x2.a("TimeSpentPacketSender: i'm notified about new packet");
        m.e(new Runnable() { // from class: com.my.tracker.obfuscated.m2$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        });
    }

    void a() {
        x2.a("TimeSpentPacketSender: start flushing database chunk...");
        try {
            a aVarB = b();
            b(aVarB);
            a(aVarB);
            x2.a("TimeSpentPacketSender: database chunk successfully flushed");
        } catch (Exception e) {
            x2.b("TimeSpentPacketSender: Something went wrong while flushing database chunk:\n" + e.getMessage());
        }
    }

    void a(a aVar) {
        s2[] s2VarArrB = aVar.b();
        int length = s2VarArrB.length;
        long[] jArr = new long[length];
        for (int i = 0; i < s2VarArrB.length; i++) {
            jArr[i] = s2VarArrB[i].a();
        }
        this.f4973a.a(jArr);
        x2.a("TimeSpentPacketSender: successfully deleted " + length + " packets from repository");
    }

    private a b() throws Exception {
        s2[] s2VarArrA = this.f4973a.a(this.c);
        int length = s2VarArrA == null ? 0 : s2VarArrA.length;
        x2.a("TimeSpentPacketSender: got database chunk, size = " + length + ", requested = " + this.c);
        if (length != 0) {
            return a.a(s2VarArrA);
        }
        throw new Exception("database chunk is empty, nothing to send");
    }
}
