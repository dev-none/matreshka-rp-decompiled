package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ff, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2121ff implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2500uf f6077a;

    public C2121ff() {
        this(new C2500uf());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2425rf fromModel(C2173hf c2173hf) {
        C2425rf c2425rf = new C2425rf();
        if (!TextUtils.isEmpty(c2173hf.f6111a)) {
            c2425rf.f6295a = c2173hf.f6111a;
        }
        c2425rf.b = c2173hf.b.toString();
        c2425rf.c = this.f6077a.fromModel(c2173hf.c).intValue();
        return c2425rf;
    }

    public C2121ff(C2500uf c2500uf) {
        this.f6077a = c2500uf;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2173hf toModel(C2425rf c2425rf) {
        JSONObject jSONObject;
        String str = c2425rf.f6295a;
        String str2 = c2425rf.b;
        if (!TextUtils.isEmpty(str2)) {
            try {
                jSONObject = new JSONObject(str2);
            } catch (Throwable unused) {
                jSONObject = new JSONObject();
            }
        } else {
            jSONObject = new JSONObject();
        }
        return new C2173hf(str, jSONObject, this.f6077a.toModel(Integer.valueOf(c2425rf.c)));
    }
}
