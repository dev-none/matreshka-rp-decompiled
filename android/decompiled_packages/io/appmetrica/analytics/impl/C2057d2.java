package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreapi.internal.permission.PermissionState;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2057d2 implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final D2 f6038a;

    public C2057d2() {
        this(new D2());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2134g2 fromModel(C2031c2 c2031c2) {
        C2134g2 c2134g2 = new C2134g2();
        c2134g2.f6085a = new C2108f2[c2031c2.f6023a.size()];
        int i = 0;
        int i2 = 0;
        for (PermissionState permissionState : c2031c2.f6023a) {
            C2108f2[] c2108f2Arr = c2134g2.f6085a;
            C2108f2 c2108f2 = new C2108f2();
            c2108f2.f6070a = permissionState.name;
            c2108f2.b = permissionState.granted;
            c2108f2Arr[i2] = c2108f2;
            i2++;
        }
        F2 f2 = c2031c2.b;
        if (f2 != null) {
            c2134g2.b = this.f6038a.fromModel(f2);
        }
        c2134g2.c = new String[c2031c2.c.size()];
        Iterator it = c2031c2.c.iterator();
        while (it.hasNext()) {
            c2134g2.c[i] = (String) it.next();
            i++;
        }
        return c2134g2;
    }

    public C2057d2(D2 d2) {
        this.f6038a = d2;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2031c2 toModel(C2134g2 c2134g2) {
        ArrayList arrayList = new ArrayList();
        int i = 0;
        int i2 = 0;
        while (true) {
            C2108f2[] c2108f2Arr = c2134g2.f6085a;
            if (i2 >= c2108f2Arr.length) {
                break;
            }
            C2108f2 c2108f2 = c2108f2Arr[i2];
            arrayList.add(new PermissionState(c2108f2.f6070a, c2108f2.b));
            i2++;
        }
        C2082e2 c2082e2 = c2134g2.b;
        F2 model = c2082e2 != null ? this.f6038a.toModel(c2082e2) : null;
        ArrayList arrayList2 = new ArrayList();
        while (true) {
            String[] strArr = c2134g2.c;
            if (i < strArr.length) {
                arrayList2.add(strArr[i]);
                i++;
            } else {
                return new C2031c2(arrayList, model, arrayList2);
            }
        }
    }
}
