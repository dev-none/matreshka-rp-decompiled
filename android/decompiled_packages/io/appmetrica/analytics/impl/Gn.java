package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ValidationException;

/* JADX INFO: loaded from: classes7.dex */
public class Gn implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final uo f5697a;

    public Gn(uo uoVar) {
        this.f5697a = uoVar;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Object obj) {
        so soVarA = this.f5697a.a(obj);
        if (soVarA.f6320a) {
            return soVarA;
        }
        throw new ValidationException(soVarA.b);
    }

    public final uo a() {
        return this.f5697a;
    }
}
