package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.content.Intent;
import io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2232jn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2560x0 f6160a;
    public final Io b;
    public final C2335o c;
    public final C2024bl d;
    public final L5 e;
    public final C2219ja f;

    public C2232jn(C2560x0 c2560x0, Io io2, C2335o c2335o, C2024bl c2024bl, L5 l5, C2219ja c2219ja) {
        this.f6160a = c2560x0;
        this.b = io2;
        this.c = c2335o;
        this.d = c2024bl;
        this.e = l5;
        this.f = c2219ja;
    }

    public static Intent a(Activity activity) {
        return (Intent) SystemServiceUtils.accessSystemServiceSafely(activity, "getting intent", "activity", new FunctionWithThrowable() { // from class: io.appmetrica.analytics.impl.jn$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable
            public final Object apply(Object obj) {
                return C2232jn.b((Activity) obj);
            }
        });
    }

    public static final Intent b(Activity activity) {
        return activity.getIntent();
    }

    public C2232jn(C2560x0 c2560x0, Io io2) {
        this(c2560x0, io2, C2213j4.l().a(), C2213j4.l().o(), C2213j4.l().h(), C2213j4.l().k());
    }
}
