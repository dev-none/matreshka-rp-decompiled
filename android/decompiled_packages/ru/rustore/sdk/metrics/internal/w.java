package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class w extends Lambda implements Function0<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ l f6675a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(l lVar) {
        super(0);
        this.f6675a = lVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final String invoke() {
        return "Http request was rejected with: " + this.f6675a;
    }
}
