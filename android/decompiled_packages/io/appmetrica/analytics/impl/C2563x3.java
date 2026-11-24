package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2563x3 implements F5 {
    @Override // kotlin.jvm.functions.Function1
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Map<String, String> invoke(ContentValues contentValues) {
        String asString = contentValues.getAsString("clids");
        HashMap mapC = AbstractC2322nb.c(asString);
        if (Jm.a(mapC)) {
            return mapC;
        }
        AbstractC2254kj.a("Passed clids (" + asString + ") are invalid.", new Object[0]);
        return null;
    }
}
