package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import java.util.Collection;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2552wh implements InterfaceC2433rn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2395q9 f6388a;
    public final /* synthetic */ C2627zh b;

    public C2552wh(C2627zh c2627zh, C2395q9 c2395q9) {
        this.b = c2627zh;
        this.f6388a = c2395q9;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2433rn
    public final void a(Object obj) {
        List list = (List) obj;
        C2395q9 c2395q9 = this.f6388a;
        if (no.a((Collection) list)) {
            return;
        }
        c2395q9.d = new C2345o9[list.size()];
        for (int i = 0; i < list.size(); i++) {
            C2307ml c2307ml = (C2307ml) list.get(i);
            C2345o9[] c2345o9Arr = c2395q9.d;
            Map map = Uf.f5919a;
            C2345o9 c2345o9 = new C2345o9();
            Integer num = c2307ml.f6213a;
            if (num != null) {
                c2345o9.f6238a = num.intValue();
            }
            Integer num2 = c2307ml.b;
            if (num2 != null) {
                c2345o9.b = num2.intValue();
            }
            if (!TextUtils.isEmpty(c2307ml.d)) {
                c2345o9.c = c2307ml.d;
            }
            c2345o9.d = c2307ml.c;
            c2345o9Arr[i] = c2345o9;
            this.b.g += CodedOutputByteBufferNano.computeMessageSizeNoTag(c2395q9.d[i]);
            this.b.g += CodedOutputByteBufferNano.computeTagSize(10);
        }
    }
}
