package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2511v1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Context f6361a;

    public RunnableC2511v1(Context context) {
        this.f6361a = context;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Vj vj = AbstractC2479tj.f6336a;
        Context context = this.f6361a;
        synchronized (vj) {
            if (vj.b == null) {
                vj.b = AbstractC2453si.f6315a.a(context, "20799a27-fa80-4b36-b2db-0f8141f24180");
                Iterator it = vj.f5935a.iterator();
                while (it.hasNext()) {
                    ((Xa) it.next()).a(vj.b);
                }
                vj.f5935a.clear();
            }
        }
    }
}
