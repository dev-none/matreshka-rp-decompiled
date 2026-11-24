package io.appmetrica.analytics.screenshot.impl;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.s, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2651s extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2654v f6575a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2651s(C2654v c2654v) {
        super(0);
        this.f6575a = c2654v;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        ((C2656x) this.f6575a.b).a("ContentObserverScreenshotCaptor");
        return Unit.INSTANCE;
    }
}
