package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2242k7 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2216j7 f6168a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2242k7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public final byte[] a(C2268l7 c2268l7) {
        return MessageNano.toByteArray(this.f6168a.fromModel(c2268l7));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        return MessageNano.toByteArray(this.f6168a.fromModel((C2268l7) obj));
    }

    public C2242k7(C2216j7 c2216j7) {
        this.f6168a = c2216j7;
    }

    /* JADX WARN: Code duplicated, block: B:5:0x000f A[Catch: InvalidProtocolBufferNanoException -> 0x0015, TRY_LEAVE, TryCatch #0 {InvalidProtocolBufferNanoException -> 0x0015, blocks: (B:3:0x0002, B:5:0x000f), top: B:10:0x0002 }] */
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2268l7 toModel(byte[] bArr) {
        C2492u7 c2492u7;
        if (bArr != null) {
            try {
                c2492u7 = (C2492u7) MessageNano.mergeFrom(new C2492u7(), bArr);
                if (c2492u7 == null) {
                    c2492u7 = new C2492u7();
                }
            } catch (InvalidProtocolBufferNanoException unused) {
                c2492u7 = new C2492u7();
            }
        } else {
            c2492u7 = new C2492u7();
        }
        return this.f6168a.toModel(c2492u7);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public /* synthetic */ C2242k7(C2216j7 c2216j7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        if ((i & 1) != 0) {
            c2216j7 = new C2216j7(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }
        this(c2216j7);
    }
}
