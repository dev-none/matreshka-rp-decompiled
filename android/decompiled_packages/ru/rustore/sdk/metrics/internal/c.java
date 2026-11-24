package ru.rustore.sdk.metrics.internal;

import java.net.MalformedURLException;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class c extends Lambda implements Function0<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ MalformedURLException f6600a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(MalformedURLException malformedURLException) {
        super(0);
        this.f6600a = malformedURLException;
    }

    @Override // kotlin.jvm.functions.Function0
    public final String invoke() {
        return "Metrics endpoint configuration request failed: " + this.f6600a;
    }
}
