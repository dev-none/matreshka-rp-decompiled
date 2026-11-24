package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ExternalAttribution;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.text.Charsets;

/* JADX INFO: loaded from: classes7.dex */
public class J2 implements ExternalAttribution {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final H9 f5739a;

    public J2(H9 h9) {
        this.f5739a = h9;
    }

    @Override // io.appmetrica.analytics.ExternalAttribution
    public final byte[] toBytes() {
        return MessageNano.toByteArray(this.f5739a);
    }

    public final String toString() {
        return "ExternalAttribution(type=`" + R9.a(this.f5739a.f5704a) + "`value=`" + new String(this.f5739a.b, Charsets.UTF_8) + "`)";
    }
}
