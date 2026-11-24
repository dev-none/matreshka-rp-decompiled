package com.my.tracker.obfuscated;

import android.app.Activity;
import android.app.Application;
import android.content.Intent;
import com.my.tracker.ads.AdEvent;
import com.my.tracker.miniapps.MiniAppEvent;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class c1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final AtomicBoolean f4924a = new AtomicBoolean();
    final y2 b;
    final Application c;
    final e0 d;
    final com.my.tracker.obfuscated.a e;
    final n f;
    final y g;
    final s1 h;
    final w1 i;
    n1 j;
    protected t1 k;

    final class a implements e0.b {
        a() {
        }

        @Override // com.my.tracker.obfuscated.e0.b
        public void a(String str) {
            c1.this.f.b(str);
        }

        @Override // com.my.tracker.obfuscated.e0.b
        public void a() {
            c1.this.e.e();
        }
    }

    c1(y2 y2Var, Application application) {
        this.b = y2Var;
        this.c = application;
        x2.c("MyTracker created, version: 3.5.0");
        e0 e0VarA = e0.a(y2Var, new a(), application);
        this.d = e0VarA;
        w1 w1VarA = w1.a(e0VarA, y2Var.a(), application);
        this.i = w1VarA;
        this.e = com.my.tracker.obfuscated.a.a(e0VarA, y2Var, w1VarA, application);
        this.f = n.a(y2Var, application);
        this.g = y.a(e0VarA);
        this.h = s1.a(e0VarA, application);
        this.k = t1.a();
    }

    public static c1 a(String str, y2 y2Var, Application application) {
        y2Var.b(str);
        return new c1(y2Var, application);
    }

    public void b(String str, String str2, Map map) {
        if (b()) {
            return;
        }
        this.d.b(str, str2, map);
    }

    public void a(List list) {
        if (!this.f4924a.compareAndSet(false, true)) {
            x2.a("MyTracker: tracker has already been initialized");
            return;
        }
        x2.c("MyTracker is initialized with id: " + this.b.g());
        b1.c(this.c);
        y2 y2Var = this.b;
        final e0 e0Var = this.d;
        Objects.requireNonNull(e0Var);
        s sVar = new s() { // from class: com.my.tracker.obfuscated.c1$$ExternalSyntheticLambda0
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                e0Var.b((Boolean) obj);
            }
        };
        final e0 e0Var2 = this.d;
        Objects.requireNonNull(e0Var2);
        y2Var.a(sVar, new s() { // from class: com.my.tracker.obfuscated.c1$$ExternalSyntheticLambda1
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                e0Var2.c((Boolean) obj);
            }
        });
        this.d.d();
        w0.a(this.b, this.d, this.i, this.c);
        p0.a(this.d, this.f, this.c);
        v0.a(this.d, this.f, this.c);
        l2.d().a(this.b, this.c);
        this.e.a();
        this.h.a();
        if (!list.isEmpty()) {
            n1 n1VarA = n1.a(this.d, this.c);
            this.j = n1VarA;
            n1VarA.a(list);
        }
        t1 t1Var = this.k;
        Application application = this.c;
        final e0 e0Var3 = this.d;
        Objects.requireNonNull(e0Var3);
        t1Var.a(application, new s() { // from class: com.my.tracker.obfuscated.c1$$ExternalSyntheticLambda2
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                e0Var3.b((String) obj);
            }
        });
    }

    public void b(Map map) {
        if (b()) {
            return;
        }
        this.d.d(map);
    }

    public void b(int i, boolean z) {
        if (b()) {
            return;
        }
        l2.e().b(i, z);
    }

    boolean b() {
        boolean z = this.f4924a.get();
        boolean z2 = !z;
        if (!z) {
            x2.b("MyTracker error: tracker hasn't been initialized");
        }
        return z2;
    }

    public void a() {
        if (b()) {
            return;
        }
        this.d.a();
    }

    public void a(Activity activity) {
        if (b()) {
            return;
        }
        this.e.d(activity);
    }

    public void a(String str, Map map) {
        if (b()) {
            return;
        }
        this.d.a(str, map);
    }

    public void a(String str, String str2, Map map) {
        if (b()) {
            return;
        }
        this.d.a(str, str2, map);
    }

    public void a(Map map) {
        if (b()) {
            return;
        }
        this.d.c(map);
    }

    public void a(int i, Map map) {
        if (b()) {
            return;
        }
        this.d.a(i, map);
    }

    public void a(AdEvent adEvent) {
        if (b()) {
            return;
        }
        this.d.a(adEvent);
    }

    public void a(MiniAppEvent miniAppEvent) {
        if (b()) {
            return;
        }
        this.d.a(miniAppEvent);
    }

    public void a(JSONObject jSONObject, JSONObject jSONObject2, String str, Map map) {
        if (b()) {
            return;
        }
        if (this.b.s()) {
            x2.a("MyTracker: autotrackingPurchase is enabled, you mustn't use trackPurchase(*) method");
        } else {
            this.h.a(jSONObject, jSONObject2, str, map);
        }
    }

    public void a(Object obj, String str, String str2, String str3, Map map) {
        if (b()) {
            return;
        }
        if (this.b.s()) {
            x2.a("MyTracker: autotrackingPurchase is enabled, you mustn't use trackAppGalleryPurchase(*) method");
        } else {
            this.h.a(obj, str, str2, str3, map);
        }
    }

    public void a(int i, Intent intent) {
        if (b()) {
            return;
        }
        if (!this.b.s()) {
            x2.a("MyTracker: autotrackingPurchase is disabled, you should enable it before using onActivityResult(*) method");
        } else {
            this.h.b(i, intent);
        }
    }

    public void a(int i, List list) {
        if (b()) {
            return;
        }
        if (!this.b.s()) {
            x2.a("MyTracker: autotrackingPurchase is disabled, you should enable it before using onPurchasesUpdated(*) method");
        } else {
            this.h.a(i, list);
        }
    }

    public String a(Intent intent) {
        return this.g.a(intent);
    }

    public void a(int i, boolean z) {
        if (b()) {
            return;
        }
        l2.e().a(i, z);
    }

    public void a(int i) {
        if (b()) {
            return;
        }
        l2.e().a(i);
    }
}
