package com.my.target;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class s9 implements k6 {
    public Context e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u9 f4813a = u9.a(15000);
    public final Runnable b = new Runnable() { // from class: com.my.target.s9$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.b();
        }
    };
    public final l6 c = new l6();
    public s1 d = new s1();
    public boolean f = false;
    public Map g = new HashMap();

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final List f4814a = new ArrayList();
        public final Map b = new HashMap();
    }

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final List f4815a = new ArrayList();
    }

    public static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final long f4816a;
        public final int b;
        public final int c;
        public final int d;
        public final String e;
        public final String f;

        public c(long j, int i, int i2, int i3, String str, String str2) {
            this.f4816a = j;
            this.b = i;
            this.c = i2;
            this.d = i3;
            this.e = str;
            this.f = str2;
        }
    }

    @Override // com.my.target.k6
    public void a(s1 s1Var, Context context) {
        this.d = s1Var;
        this.e = context;
        if ((!TextUtils.isEmpty(s1Var.h) && s1Var.h.startsWith("com.my.targetdemo5.")) || "ru.mail.mailapp".equals(s1Var.h) || "com.vkontakte.android".equals(s1Var.h)) {
            this.f = true;
        }
        this.f4813a.a(this.b);
    }

    public final void b() {
        f0.d(new Runnable() { // from class: com.my.target.s9$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        });
    }

    @Override // com.my.target.k6
    public void a(o oVar, int i, int i2, int i3, String str, String str2) {
        c cVar = new c(SystemClock.elapsedRealtime(), i, i2, i3, str, str2);
        synchronized (this) {
            a aVar = (a) this.g.get(oVar);
            if (aVar == null) {
                aVar = new a();
                this.g.put(oVar, aVar);
            }
            aVar.f4814a.add(cVar);
        }
    }

    @Override // com.my.target.k6
    public void a(h0 h0Var, int i, int i2, int i3, String str, String str2) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (h0Var.b()) {
            c cVar = new c(jElapsedRealtime, i, i2, i3, str, str2);
            synchronized (this) {
                o oVarA = h0Var.a();
                a aVar = (a) this.g.get(oVarA);
                if (aVar == null) {
                    aVar = new a();
                    this.g.put(oVarA, aVar);
                }
                b bVar = (b) aVar.b.get(h0Var);
                if (bVar == null) {
                    bVar = new b();
                    aVar.b.put(h0Var, bVar);
                }
                bVar.f4815a.add(cVar);
            }
        }
    }

    public final /* synthetic */ void a() {
        Map map;
        Context context;
        synchronized (this) {
            map = this.g;
            this.g = new HashMap();
        }
        if (!this.f || (context = this.e) == null) {
            return;
        }
        this.c.a(this.d, map, context);
    }
}
