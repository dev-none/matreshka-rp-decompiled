package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ve, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2524ve implements InterfaceC2166h8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2599ye f6370a;
    public final C2413r3 b;
    public final C2620za c;
    public final Of d;

    public C2524ve() {
        this(new C2599ye(), new C2413r3(), new C2620za(100), new Of());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<Ii> fromModel(C2499ue c2499ue) {
        Ii iiFromModel;
        A8 a8 = new A8();
        a8.f5593a = c2499ue.f6351a;
        a8.f = new C2369p8();
        C2549we c2549we = c2499ue.b;
        C2319n8 c2319n8 = new C2319n8();
        c2319n8.f6222a = StringUtils.getUTF8Bytes(c2549we.f6386a);
        On onA = this.c.a(c2549we.b);
        c2319n8.b = StringUtils.getUTF8Bytes((String) onA.f5825a);
        c2319n8.e = c2549we.c.size();
        Map<String, String> map = c2549we.d;
        if (map != null) {
            iiFromModel = this.f6370a.fromModel(map);
            c2319n8.c = (C2418r8) iiFromModel.f5730a;
        } else {
            iiFromModel = null;
        }
        a8.f.f6253a = c2319n8;
        int i = 0;
        char c = 1;
        C2187i3 c2187i3 = new C2187i3(C2187i3.b(onA, iiFromModel));
        List list = c2549we.c;
        ArrayList arrayList = new ArrayList();
        this.d.getClass();
        int iComputeInt32Size = a8.f5593a != new A8().f5593a ? CodedOutputByteBufferNano.computeInt32Size(1, a8.f5593a) : 0;
        C2618z8 c2618z8 = a8.b;
        if (c2618z8 != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(2, c2618z8);
        }
        C2568x8 c2568x8 = a8.c;
        if (c2568x8 != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(3, c2568x8);
        }
        C2593y8 c2593y8 = a8.d;
        int i2 = 4;
        if (c2593y8 != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(4, c2593y8);
        }
        C2217j8 c2217j8 = a8.e;
        if (c2217j8 != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(5, c2217j8);
        }
        C2369p8 c2369p8 = a8.f;
        if (c2369p8 != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(6, c2369p8);
        }
        ArrayList arrayList2 = new ArrayList();
        A8 a9 = new A8();
        a9.f5593a = a8.f5593a;
        C2369p8 c2369p9 = new C2369p8();
        a9.f = c2369p9;
        c2369p9.f6253a = new C2319n8();
        C2319n8 c2319n9 = a9.f.f6253a;
        C2319n8 c2319n10 = a8.f.f6253a;
        c2319n9.b = c2319n10.b;
        c2319n9.f6222a = c2319n10.f6222a;
        c2319n9.e = c2319n10.e;
        c2319n9.c = c2319n10.c;
        C2187i3 c2187i4 = c2187i3;
        int i3 = 0;
        int i4 = iComputeInt32Size;
        while (i3 < list.size()) {
            C2438s3 c2438s3 = (C2438s3) list.get(i3);
            char c2 = c;
            C2344o8 c2344o8 = new C2344o8();
            c2344o8.f6237a = i3;
            int i5 = i;
            Ii iiFromModel2 = this.b.fromModel(c2438s3);
            c2344o8.b = (C2243k8) iiFromModel2.f5730a;
            iiFromModel2.b.getBytesTruncated();
            Ii ii = new Ii(c2344o8, iiFromModel2);
            Of of = this.d;
            C2344o8 c2344o9 = (C2344o8) ii.f5730a;
            of.getClass();
            int iComputeTagSize = CodedOutputByteBufferNano.computeTagSize(i2);
            int iComputeMessageSizeNoTag = CodedOutputByteBufferNano.computeMessageSizeNoTag(c2344o9);
            int iComputeRawVarint32Size = iComputeTagSize + iComputeMessageSizeNoTag + ((iComputeMessageSizeNoTag & (-128)) == 0 ? i5 : CodedOutputByteBufferNano.computeRawVarint32Size(iComputeMessageSizeNoTag));
            if (arrayList2.size() != 0 && i4 + iComputeRawVarint32Size > 204800) {
                a9.f.f6253a.d = (C2344o8[]) arrayList2.toArray(new C2344o8[arrayList2.size()]);
                ArrayList arrayList3 = new ArrayList();
                arrayList.add(new Ii(a9, c2187i4));
                A8 a10 = new A8();
                a10.f5593a = a8.f5593a;
                C2369p8 c2369p10 = new C2369p8();
                a10.f = c2369p10;
                c2369p10.f6253a = new C2319n8();
                C2319n8 c2319n11 = a10.f.f6253a;
                C2319n8 c2319n12 = a8.f.f6253a;
                c2319n11.b = c2319n12.b;
                c2319n11.f6222a = c2319n12.f6222a;
                c2319n11.e = c2319n12.e;
                c2319n11.c = c2319n12.c;
                c2187i4 = c2187i3;
                i4 = iComputeInt32Size;
                a9 = a10;
                arrayList2 = arrayList3;
            }
            arrayList2.add((C2344o8) ii.f5730a);
            InterfaceC2212j3[] interfaceC2212j3Arr = new InterfaceC2212j3[2];
            interfaceC2212j3Arr[i5] = c2187i4;
            interfaceC2212j3Arr[c2] = ii.b;
            c2187i4 = new C2187i3(C2187i3.b(interfaceC2212j3Arr));
            i4 += iComputeRawVarint32Size;
            i3++;
            c = c2;
            i = i5;
            i2 = 4;
        }
        a9.f.f6253a.d = (C2344o8[]) arrayList2.toArray(new C2344o8[arrayList2.size()]);
        arrayList.add(new Ii(a9, c2187i4));
        return arrayList;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2524ve(C2599ye c2599ye, C2413r3 c2413r3, C2620za c2620za, Of of) {
        this.f6370a = c2599ye;
        this.b = c2413r3;
        this.c = c2620za;
        this.d = of;
    }

    public final C2499ue a(List<Ii> list) {
        throw new UnsupportedOperationException();
    }
}
