package io.appmetrica.analytics.impl;

import android.os.Bundle;
import io.appmetrica.analytics.coreutils.internal.services.FrameworkDetector;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Ac implements K8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Vg f5595a;
    public final C2018bf b;
    public final String c = "activation_unlock_event_sending";
    public final AtomicBoolean d;

    public Ac(Vg vg, C2514v4 c2514v4, C2018bf c2018bf) {
        this.f5595a = vg;
        this.b = c2018bf;
        this.d = new AtomicBoolean(c2018bf.a(false) || a(c2514v4));
    }

    public final void a(String str) {
        try {
            Vj vj = AbstractC2479tj.f6336a;
            String str2 = this.c;
            JSONObject jSONObjectPut = new JSONObject().put("source", str).put("framework", FrameworkDetector.framework());
            T9 t9I = C2495ua.H.i();
            Bundle applicationMetaData = t9I.d.getApplicationMetaData(t9I.f5902a);
            JSONObject jSONObjectPut2 = jSONObjectPut.put("appmetrica_plugin_id", applicationMetaData != null ? applicationMetaData.getString("io.appmetrica.analytics.plugin_id") : null);
            C2406qk c2406qk = C2495ua.H.D;
            String string = jSONObjectPut2.put("activation_offset", TimeUnit.SECONDS.convert(c2406qk.f6278a.currentTimeMillis() - c2406qk.b, TimeUnit.MILLISECONDS)).toString();
            vj.getClass();
            vj.a(new Tj(str2, string));
        } catch (Throwable unused) {
        }
    }

    @Override // io.appmetrica.analytics.impl.K8
    public final boolean b() {
        String str;
        if (!this.d.get() && (str = ((C2378ph) this.f5595a.a()).m) != null && !Intrinsics.areEqual(str, "629a824d-c717-4ba5-bc0f-3f3968554d01") && this.d.compareAndSet(false, true)) {
            this.b.b(true);
            a("activation");
        }
        return this.d.get();
    }

    public final void a() {
        if (this.d.compareAndSet(false, true)) {
            this.b.b(true);
            a("timer");
        }
    }

    public static boolean a(C2514v4 c2514v4) {
        String str = c2514v4.f6362a;
        return (str == null || Intrinsics.areEqual(str, "629a824d-c717-4ba5-bc0f-3f3968554d01")) ? false : true;
    }
}
