package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceModuleCounterReport;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.yk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2605yk {
    public static W5 a(ServiceModuleCounterReport serviceModuleCounterReport) {
        String value;
        W5 w5 = new W5("", "", 0);
        w5.d = serviceModuleCounterReport.getType();
        String name = serviceModuleCounterReport.getName();
        if (name != null) {
            w5.f5941a = name;
        }
        if (serviceModuleCounterReport.getValueBytes() == null && (value = serviceModuleCounterReport.getValue()) != null) {
            w5.b = value;
        }
        byte[] valueBytes = serviceModuleCounterReport.getValueBytes();
        if (valueBytes != null) {
            w5.setValueBytes(valueBytes);
        }
        return w5;
    }
}
