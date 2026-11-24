package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: loaded from: classes7.dex */
public final class B7 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2592y7 f5609a;

    /* JADX WARN: Multi-variable type inference failed */
    public B7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final ContentValues fromModel(A7 a7) {
        ContentValues contentValues = new ContentValues();
        Long l = a7.f5592a;
        if (l != null) {
            contentValues.put("id", Long.valueOf(l.longValue()));
        }
        EnumC1998al enumC1998al = a7.b;
        if (enumC1998al != null) {
            contentValues.put("type", Integer.valueOf(enumC1998al.f6005a));
        }
        String str = a7.c;
        if (str != null) {
            contentValues.put("report_request_parameters", str);
        }
        C2592y7 c2592y7 = this.f5609a;
        contentValues.put("session_description", MessageNano.toByteArray(c2592y7.f6411a.fromModel(a7.d)));
        return contentValues;
    }

    public B7(C2592y7 c2592y7) {
        this.f5609a = c2592y7;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public /* synthetic */ B7(C2592y7 c2592y7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2592y7(null, 1, 0 == true ? 1 : 0) : c2592y7);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final A7 toModel(ContentValues contentValues) {
        EnumC1998al enumC1998al;
        Long asLong = contentValues.getAsLong("id");
        Integer asInteger = contentValues.getAsInteger("type");
        if (asInteger != null) {
            int iIntValue = asInteger.intValue();
            Integer numValueOf = Integer.valueOf(iIntValue);
            enumC1998al = EnumC1998al.FOREGROUND;
            if (numValueOf != null) {
                numValueOf.getClass();
                if (iIntValue != 0 && iIntValue == 1) {
                    enumC1998al = EnumC1998al.BACKGROUND;
                }
            }
        } else {
            enumC1998al = null;
        }
        return new A7(asLong, enumC1998al, contentValues.getAsString("report_request_parameters"), this.f5609a.toModel(contentValues.getAsByteArray("session_description")));
    }
}
