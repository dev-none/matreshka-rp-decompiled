package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.y7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2592y7 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2567x7 f6411a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2592y7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public final byte[] a(C2617z7 c2617z7) {
        return MessageNano.toByteArray(this.f6411a.fromModel(c2617z7));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        return MessageNano.toByteArray(this.f6411a.fromModel((C2617z7) obj));
    }

    public C2592y7(C2567x7 c2567x7) {
        this.f6411a = c2567x7;
    }

    /* JADX WARN: Code duplicated, block: B:5:0x000f A[Catch: InvalidProtocolBufferNanoException -> 0x0015, TRY_LEAVE, TryCatch #0 {InvalidProtocolBufferNanoException -> 0x0015, blocks: (B:3:0x0002, B:5:0x000f), top: B:10:0x0002 }] */
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2617z7 toModel(byte[] bArr) {
        C2542w7 c2542w7;
        if (bArr != null) {
            try {
                c2542w7 = (C2542w7) MessageNano.mergeFrom(new C2542w7(), bArr);
                if (c2542w7 == null) {
                    c2542w7 = new C2542w7();
                }
            } catch (InvalidProtocolBufferNanoException unused) {
                c2542w7 = new C2542w7();
            }
        } else {
            c2542w7 = new C2542w7();
        }
        return this.f6411a.toModel(c2542w7);
    }

    public /* synthetic */ C2592y7(C2567x7 c2567x7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2567x7(null, 1, null) : c2567x7);
    }
}
