package io.appmetrica.analytics.screenshot.impl;

import android.app.Activity;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2634a extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2637d f6553a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2634a(C2637d c2637d) {
        super(0);
        this.f6553a = c2637d;
    }

    public static final void a(C2637d c2637d) {
        ((C2656x) c2637d.b).a("AndroidApiScreenshotCaptor");
    }

    @Override // kotlin.jvm.functions.Function0
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Activity.ScreenCaptureCallback invoke() {
        final C2637d c2637d = this.f6553a;
        return new Activity.ScreenCaptureCallback() { // from class: io.appmetrica.analytics.screenshot.impl.a$$ExternalSyntheticLambda0
            @Override // android.app.Activity.ScreenCaptureCallback
            public final void onScreenCaptured() {
                C2634a.a(c2637d);
            }
        };
    }
}
