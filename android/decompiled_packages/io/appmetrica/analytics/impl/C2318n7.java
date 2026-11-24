package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import com.vk.id.analytics.stat.StatTracker;
import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2318n7 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2242k7 f6221a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2318n7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final ContentValues fromModel(C2293m7 c2293m7) {
        ContentValues contentValues = new ContentValues();
        Long l = c2293m7.f6204a;
        if (l != null) {
            contentValues.put(StatTracker.EXTERNAL_PARAM_SESSION_ID, Long.valueOf(l.longValue()));
        }
        EnumC1998al enumC1998al = c2293m7.b;
        if (enumC1998al != null) {
            contentValues.put("session_type", Integer.valueOf(enumC1998al.f6005a));
        }
        Long l2 = c2293m7.c;
        if (l2 != null) {
            contentValues.put("number_in_session", Long.valueOf(l2.longValue()));
        }
        EnumC2195ib enumC2195ib = c2293m7.d;
        if (enumC2195ib != null) {
            contentValues.put("type", Integer.valueOf(enumC2195ib.f6131a));
        }
        Long l3 = c2293m7.e;
        if (l3 != null) {
            contentValues.put("global_number", Long.valueOf(l3.longValue()));
        }
        Long l4 = c2293m7.f;
        if (l4 != null) {
            contentValues.put("time", Long.valueOf(l4.longValue()));
        }
        C2242k7 c2242k7 = this.f6221a;
        contentValues.put("event_description", MessageNano.toByteArray(c2242k7.f6168a.fromModel(c2293m7.g)));
        return contentValues;
    }

    public C2318n7(C2242k7 c2242k7) {
        this.f6221a = c2242k7;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public /* synthetic */ C2318n7(C2242k7 c2242k7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2242k7(null, 1, 0 == true ? 1 : 0) : c2242k7);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2293m7 toModel(ContentValues contentValues) {
        EnumC1998al enumC1998al;
        Long asLong = contentValues.getAsLong(StatTracker.EXTERNAL_PARAM_SESSION_ID);
        Integer asInteger = contentValues.getAsInteger("session_type");
        if (asInteger != null) {
            int iIntValue = asInteger.intValue();
            Integer numValueOf = Integer.valueOf(iIntValue);
            EnumC1998al enumC1998al2 = EnumC1998al.FOREGROUND;
            if (numValueOf != null) {
                numValueOf.getClass();
                if (iIntValue != 0 && iIntValue == 1) {
                    enumC1998al2 = EnumC1998al.BACKGROUND;
                }
            }
            enumC1998al = enumC1998al2;
        } else {
            enumC1998al = null;
        }
        Long asLong2 = contentValues.getAsLong("number_in_session");
        Integer asInteger2 = contentValues.getAsInteger("type");
        return new C2293m7(asLong, enumC1998al, asLong2, asInteger2 != null ? EnumC2195ib.a(asInteger2.intValue()) : null, contentValues.getAsLong("global_number"), contentValues.getAsLong("time"), this.f6221a.toModel(contentValues.getAsByteArray("event_description")));
    }
}
