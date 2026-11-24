package com.my.target;

import android.os.SystemClock;
import android.text.TextUtils;
import android.util.LruCache;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class a2 {
    public static final a2 e = new a2();
    public static final a f = new a("");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LruCache f4521a = new LruCache(10);
    public long b;
    public long c;
    public boolean d;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final long f4522a = SystemClock.elapsedRealtime();
        public final String b;

        public a(String str) {
            this.b = str;
        }
    }

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4523a;
        public final String b;

        public b(String str, String str2) {
            this.f4523a = str;
            this.b = str2;
        }
    }

    public static String a(long j, String str) {
        if (str.isEmpty()) {
            return "";
        }
        String str2 = ":2:" + j;
        return str.replace(StringUtils.COMMA, str2 + StringUtils.COMMA) + str2;
    }

    public a a(String str) {
        if (TextUtils.isEmpty(str)) {
            return f;
        }
        return new a(str);
    }

    public synchronized void a(long j) {
        if (this.d) {
            return;
        }
        this.b = j * 1000;
        this.c = SystemClock.elapsedRealtime();
        this.d = true;
    }

    public synchronized void a(List list, long j) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            String strR = ((com.my.target.b) it.next()).r();
            this.f4521a.put(strR, strR + ":1:" + j);
        }
    }

    public synchronized b a(a aVar) {
        String strJoin;
        String str;
        String str2;
        Map mapSnapshot = this.f4521a.snapshot();
        if (mapSnapshot.isEmpty()) {
            str = "";
            strJoin = "";
        } else {
            String strJoin2 = TextUtils.join(StringUtils.COMMA, mapSnapshot.keySet());
            strJoin = TextUtils.join(StringUtils.COMMA, mapSnapshot.values());
            str = strJoin2;
        }
        String strA = a(this.d ? ((this.b + aVar.f4522a) - this.c) / 1000 : 0L, aVar.b);
        if (!strJoin.isEmpty() && !strA.isEmpty()) {
            str2 = strJoin + StringUtils.COMMA + strA;
        } else {
            str2 = strJoin + strA;
        }
        return new b(str, str2);
    }
}
