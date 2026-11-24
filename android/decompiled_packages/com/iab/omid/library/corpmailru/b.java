package com.iab.omid.library.corpmailru;

import android.content.Context;
import com.iab.omid.library.corpmailru.b.d;
import com.iab.omid.library.corpmailru.b.f;
import com.iab.omid.library.corpmailru.d.e;

/* JADX INFO: loaded from: classes6.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4457a;

    private void b(Context context) {
        e.a(context, "Application Context cannot be null");
    }

    String a() {
        return "1.3.20-Corpmailru";
    }

    void a(Context context) {
        b(context);
        if (b()) {
            return;
        }
        a(true);
        f.a().a(context);
        com.iab.omid.library.corpmailru.b.b.a().a(context);
        com.iab.omid.library.corpmailru.d.b.a(context);
        d.a().a(context);
    }

    void a(boolean z) {
        this.f4457a = z;
    }

    boolean b() {
        return this.f4457a;
    }
}
