package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import io.appmetrica.analytics.coreutils.internal.time.TimeProvider;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.util.Map;
import kotlin.text.Charsets;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class O9 extends Wg {
    public final P9 b;

    public O9(C2085e5 c2085e5, TimeProvider timeProvider) {
        super(c2085e5);
        this.b = new P9(c2085e5, timeProvider);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        long jOptLong;
        P9 p9 = this.b;
        I9 i9 = p9.f5834a.t().B;
        Long lValueOf = i9 != null ? Long.valueOf(i9.f5724a) : null;
        if (lValueOf != null) {
            zo zoVar = p9.f5834a.t;
            synchronized (zoVar) {
                jOptLong = zoVar.f6438a.a().optLong("external_attribution_window_start", -1L);
            }
            if (jOptLong < 0) {
                jOptLong = p9.b.currentTimeMillis();
                p9.f5834a.t.a(jOptLong);
            }
            if (p9.b.currentTimeMillis() - jOptLong <= lValueOf.longValue()) {
                H9 h9 = (H9) MessageNano.mergeFrom(new H9(), w5.getValueBytes());
                int i = h9.f5704a;
                String str = new String(h9.b, Charsets.UTF_8);
                String str2 = this.b.f5834a.c.k().get(Integer.valueOf(i));
                if (str2 != null) {
                    try {
                        if (JsonUtils.isEqualTo(new JSONObject(str), new JSONObject(str2))) {
                            this.f5944a.m.info("Ignoring attribution of type `" + R9.a(i) + "` with value `" + str + "` since it is not new", new Object[0]);
                            return true;
                        }
                    } catch (Throwable unused) {
                    }
                }
                P9 p10 = this.b;
                Map<Integer, String> mapK = p10.f5834a.c.k();
                mapK.put(Integer.valueOf(i), str);
                p10.f5834a.c.b(mapK);
                this.f5944a.m.info("Handling attribution of type `" + R9.a(i) + '`', new Object[0]);
                return false;
            }
        }
        this.f5944a.m.info("Ignoring attribution since out of collecting interval", new Object[0]);
        return true;
    }
}
