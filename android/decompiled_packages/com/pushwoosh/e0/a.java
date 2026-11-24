package com.pushwoosh.e0;

import android.os.Handler;
import android.os.Looper;
import com.pushwoosh.m0.s;
import com.pushwoosh.m0.t;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes6.dex */
public final class a {
    public final t c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedList f5064a = new LinkedList();
    public final int b = 1000;
    public final Handler d = new Handler(Looper.getMainLooper());

    public a(t tVar) {
        this.c = tVar;
    }

    public final void a(s sVar) {
        synchronized (this.f5064a) {
            if (this.f5064a.isEmpty()) {
                this.d.postDelayed(new Runnable() { // from class: com.pushwoosh.e0.a$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a();
                    }
                }, this.b);
            }
            this.f5064a.add(sVar);
        }
    }

    public final /* synthetic */ void a() {
        LinkedList linkedList = new LinkedList();
        synchronized (this.f5064a) {
            linkedList.addAll(this.f5064a);
            this.f5064a.clear();
        }
        this.c.a(linkedList);
    }
}
