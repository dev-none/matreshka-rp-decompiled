package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.services.FrameworkDetector;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ic, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2196ic extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2221jc f6132a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2196ic(C2221jc c2221jc) {
        super(0);
        this.f6132a = c2221jc;
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0039  */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Bc pe;
        C2221jc c2221jc = this.f6132a;
        Cc cc = c2221jc.f;
        InterfaceC2594y9 interfaceC2594y9 = c2221jc.b;
        Vg vg = c2221jc.f6152a;
        C2514v4 c2514v4 = c2221jc.c;
        C2018bf c2018bf = c2221jc.d;
        cc.getClass();
        if (FrameworkDetector.isNative()) {
            T9 t9I = C2495ua.H.i();
            Bundle applicationMetaData = t9I.d.getApplicationMetaData(t9I.f5902a);
            if (TextUtils.isEmpty(applicationMetaData != null ? applicationMetaData.getString("io.appmetrica.analytics.plugin_id") : null)) {
                pe = new Xd();
            } else {
                pe = new Pe(interfaceC2594y9, vg, c2514v4, c2018bf);
            }
        } else {
            pe = new Pe(interfaceC2594y9, vg, c2514v4, c2018bf);
        }
        return pe.a();
    }
}
