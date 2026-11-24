package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class m0 extends Lambda implements Function1<o0, CharSequence> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final m0 f6650a = new m0();

    public m0() {
        super(1);
    }

    @Override // kotlin.jvm.functions.Function1
    public final CharSequence invoke(o0 o0Var) {
        o0 it = o0Var;
        Intrinsics.checkNotNullParameter(it, "it");
        return "'" + it.f6657a + '\'';
    }
}
