package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class Sn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final In f5891a;
    public final V b;
    public final List c;
    public final String d;
    public final String e;
    public final Map f;
    public final String g;
    public final Boolean h;

    public Sn(In in, V v, ArrayList arrayList, String str, String str2, Map map, String str3, Boolean bool) {
        this.f5891a = in;
        this.b = v;
        this.c = arrayList;
        this.d = str;
        this.e = str2;
        this.f = map;
        this.g = str3;
        this.h = bool;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        In in = this.f5891a;
        if (in != null) {
            for (Hl hl : in.c) {
                sb.append("at " + hl.f5712a + "." + hl.e + "(" + hl.b + StringUtils.PROCESS_POSTFIX_DELIMITER + hl.c + StringUtils.PROCESS_POSTFIX_DELIMITER + hl.d + ")\n");
            }
        }
        return "UnhandledException{exception=" + this.f5891a + "\n" + sb.toString() + '}';
    }
}
