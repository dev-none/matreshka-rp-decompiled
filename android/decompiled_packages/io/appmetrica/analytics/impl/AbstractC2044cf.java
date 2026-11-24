package io.appmetrica.analytics.impl;

import java.util.List;
import java.util.Set;
import org.json.JSONArray;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2044cf {
    public static final String c = "cf";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Oa f6030a;
    public final String b;

    public AbstractC2044cf(Oa oa, String str) {
        this.f6030a = oa;
        this.b = str;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T a(String str, float f) {
        synchronized (this) {
            this.f6030a.a(str, f);
        }
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T b(String str, String str2) {
        synchronized (this) {
            this.f6030a.a(str, str2);
        }
        return this;
    }

    public final C2070df c(String str) {
        return new C2070df(str, this.b);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T d(String str) {
        synchronized (this) {
            this.f6030a.remove(str);
        }
        return this;
    }

    public Set<String> c() {
        return this.f6030a.a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T a(String str, String[] strArr) {
        String string;
        try {
            JSONArray jSONArray = new JSONArray();
            for (String str2 : strArr) {
                jSONArray.put(str2);
            }
            string = jSONArray.toString();
        } catch (Throwable unused) {
            string = null;
        }
        this.f6030a.a(str, string);
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T b(String str, long j) {
        synchronized (this) {
            this.f6030a.a(str, j);
        }
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T b(String str, int i) {
        synchronized (this) {
            this.f6030a.a(i, str);
        }
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final <T extends AbstractC2044cf> T b(String str, boolean z) {
        synchronized (this) {
            this.f6030a.a(str, z);
        }
        return this;
    }

    public final <T extends AbstractC2044cf> T a(String str, List<String> list) {
        return (T) a(str, (String[]) list.toArray(new String[list.size()]));
    }

    public final long a(String str, long j) {
        return this.f6030a.getLong(str, j);
    }

    public final int a(String str, int i) {
        return this.f6030a.getInt(str, i);
    }

    public final String a(String str, String str2) {
        return this.f6030a.getString(str, str2);
    }

    public final void b() {
        synchronized (this) {
            this.f6030a.b();
        }
    }

    public final boolean a(String str, boolean z) {
        return this.f6030a.getBoolean(str, z);
    }

    public final boolean b(String str) {
        return this.f6030a.a(str);
    }
}
