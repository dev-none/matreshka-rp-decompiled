package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2550wf implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2500uf f6387a = new C2500uf();

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2401qf fromModel(C2525vf c2525vf) {
        C2401qf c2401qf = new C2401qf();
        if (!TextUtils.isEmpty(c2525vf.f6371a)) {
            c2401qf.f6274a = c2525vf.f6371a;
        }
        c2401qf.b = c2525vf.b.toString();
        c2401qf.c = c2525vf.c;
        c2401qf.d = c2525vf.d;
        c2401qf.e = this.f6387a.fromModel(c2525vf.e).intValue();
        return c2401qf;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2525vf toModel(C2401qf c2401qf) {
        JSONObject jSONObject;
        String str = c2401qf.f6274a;
        String str2 = c2401qf.b;
        if (!TextUtils.isEmpty(str2)) {
            try {
                jSONObject = new JSONObject(str2);
            } catch (Throwable unused) {
                jSONObject = new JSONObject();
            }
        } else {
            jSONObject = new JSONObject();
        }
        return new C2525vf(str, jSONObject, c2401qf.c, c2401qf.d, this.f6387a.toModel(Integer.valueOf(c2401qf.e)));
    }
}
