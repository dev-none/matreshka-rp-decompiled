package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class ca implements ja.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final fa f4575a;
    public final WeakReference b;
    public final bc c;
    public final s8 d;
    public WeakReference e;
    public a f;

    public interface a {
        void a(String str);

        void b(String str);
    }

    public ca(fa faVar, s8 s8Var, Context context) {
        gb.a("ShoppableAdPresenter: create presenter");
        this.f4575a = faVar;
        this.b = new WeakReference(context);
        this.d = s8Var;
        this.c = bc.b(faVar.E(), faVar.x());
    }

    public void a(a aVar) {
        this.f = aVar;
    }

    public long b() {
        ja jaVar;
        WeakReference weakReference = this.e;
        if (weakReference == null || (jaVar = (ja) weakReference.get()) == null) {
            return 0L;
        }
        return jaVar.getAndResetInteractionEnd();
    }

    public View c() {
        ja jaVar;
        WeakReference weakReference = this.e;
        if (weakReference != null && (jaVar = (ja) weakReference.get()) != null) {
            return jaVar;
        }
        Context context = (Context) this.b.get();
        if (context == null) {
            gb.a("ShoppableAdPresenter: context is null");
            return null;
        }
        ja jaVar2 = new ja(context);
        jaVar2.setListener(this);
        jaVar2.a(this.d);
        this.c.c(jaVar2);
        jaVar2.a(null, this.f4575a.M(), "text/html", "utf-8", null);
        this.e = new WeakReference(jaVar2);
        return jaVar2;
    }

    public void a() {
        ja jaVar;
        gb.a("ShoppableAdPresenter: destroy presenter");
        this.c.a((bc.a) null);
        this.c.e();
        WeakReference weakReference = this.e;
        if (weakReference != null && (jaVar = (ja) weakReference.get()) != null) {
            jaVar.setListener(null);
        }
        this.e = null;
    }

    @Override // com.my.target.ja.a
    public void a(String str) {
        gb.a("ShoppableAdPresenter: on shoppable view click, url - " + str);
        a aVar = this.f;
        if (aVar != null) {
            aVar.b(str);
        }
    }

    @Override // com.my.target.ja.a
    public void a(int i, String str, String str2) {
        a aVar = this.f;
        if (aVar == null) {
            return;
        }
        StringBuilder sb = new StringBuilder("WebView error - ");
        sb.append(i);
        if (!TextUtils.isEmpty(str)) {
            sb.append(", ");
            sb.append(str);
        }
        if (!TextUtils.isEmpty(str2)) {
            sb.append(", ");
            sb.append(str2);
        }
        aVar.a(sb.toString());
    }
}
