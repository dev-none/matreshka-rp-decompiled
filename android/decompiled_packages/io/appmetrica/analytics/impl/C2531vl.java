package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2531vl {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Jc f6374a;
    public final Ic b;

    public C2531vl(PublicLogger publicLogger, String str) {
        this(new Jc(str, publicLogger), new Ic(str, publicLogger));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final synchronized boolean a(Mc mc, String str, String str2) {
        int size = mc.size();
        int i = this.f6374a.c.f6325a;
        if (size < i || (i == mc.size() && mc.containsKey(str))) {
            this.b.getClass();
            int length = mc.f5790a;
            if (str2 != null) {
                length += str2.length();
            }
            if (mc.containsKey(str)) {
                String str3 = (String) mc.get(str);
                if (str3 != null) {
                    length -= str3.length();
                }
            } else {
                length += str.length();
            }
            if (length <= 4500) {
                mc.put(str, str2);
                return true;
            }
            Ic ic = this.b;
            ic.b.warning("The %s has reached the total size limit that equals %d symbols. Item with key %s will be ignored", ic.f5726a, 4500, str);
        } else {
            Jc jc = this.f6374a;
            jc.d.warning("The %s has reached the limit of %d items. Item with key %s will be ignored", jc.e, Integer.valueOf(jc.c.f6325a), str);
        }
        return false;
    }

    public final boolean b(Mc mc, String str, String str2) {
        if (mc == null) {
            return false;
        }
        String strA = this.f6374a.f5745a.a(str);
        String strA2 = this.f6374a.b.a(str2);
        if (!mc.containsKey(strA)) {
            if (strA2 != null) {
                return a(mc, strA, strA2);
            }
            return false;
        }
        String str3 = (String) mc.get(strA);
        if (strA2 == null || !strA2.equals(str3)) {
            return a(mc, strA, strA2);
        }
        return false;
    }

    public C2531vl(Jc jc, Ic ic) {
        this.f6374a = jc;
        this.b = ic;
    }
}
