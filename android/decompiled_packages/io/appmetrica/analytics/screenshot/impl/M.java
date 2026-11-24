package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: loaded from: classes7.dex */
public final class M implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Y f6542a;

    /* JADX WARN: Multi-variable type inference failed */
    public M() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final S fromModel(J j) {
        S s = new S();
        s.f6547a = j.f6539a;
        W w = j.b;
        s.b = w != null ? this.f6542a.fromModel(w) : null;
        return s;
    }

    public M(Y y) {
        this.f6542a = y;
    }

    public /* synthetic */ M(Y y, int i, DefaultConstructorMarker defaultConstructorMarker) {
        if ((i & 1) != 0) {
            y = new Y(null, null, null, 7, null);
        }
        this(y);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final J toModel(S s) {
        return new J(s.f6547a, this.f6542a.toModel(s.b));
    }
}
