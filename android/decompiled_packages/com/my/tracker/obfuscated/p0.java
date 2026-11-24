package com.my.tracker.obfuscated;

import android.content.Context;
import android.text.TextUtils;
import com.android.installreferrer.api.InstallReferrerClient;
import com.android.installreferrer.api.InstallReferrerStateListener;
import com.android.installreferrer.api.ReferrerDetails;

/* JADX INFO: loaded from: classes6.dex */
public final class p0 {
    static int f = 3;
    static volatile p0 g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final e0 f4984a;
    final n b;
    final Context c;
    InstallReferrerClient d;
    int e;

    final class a implements InstallReferrerStateListener {
        a() {
        }

        @Override // com.android.installreferrer.api.InstallReferrerStateListener
        public void onInstallReferrerServiceDisconnected() {
            x2.a("ReferrerHandler: install referrer service is disconnected. Connection attempts: " + p0.this.e);
            p0.this.a(this);
        }

        @Override // com.android.installreferrer.api.InstallReferrerStateListener
        public void onInstallReferrerSetupFinished(int i) {
            x2.a("ReferrerHandler: install referrer setup is finished");
            if (i == -1) {
                p0.this.a(this);
            } else {
                p0.this.a(i);
            }
        }
    }

    p0(e0 e0Var, n nVar, Context context) {
        this.f4984a = e0Var;
        this.b = nVar;
        this.c = context.getApplicationContext();
    }

    public static void a(e0 e0Var, n nVar, Context context) {
        if (g != null) {
            return;
        }
        synchronized (p0.class) {
            if (g != null) {
                return;
            }
            final p0 p0Var = new p0(e0Var, nVar, context);
            m.a(new Runnable() { // from class: com.my.tracker.obfuscated.p0$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    p0.a(this.f$0);
                }
            });
            g = p0Var;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void c() {
        try {
            x2.a("ReferrerHandler: initialize InstallReferrerClient");
            this.d = InstallReferrerClient.newBuilder(this.c).build();
            a(new a());
        } catch (Throwable th) {
            x2.b("ReferrerHandler: error occurred while initialization InstallReferrerClient", th);
        }
    }

    void b() {
        p1 p1VarA = p1.a(this.c);
        if (p1VarA.r()) {
            return;
        }
        String strM = p1VarA.m();
        if (TextUtils.isEmpty(strM)) {
            return;
        }
        a(strM, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(p0 p0Var) {
        p0Var.b();
        p0Var.a();
    }

    public static void a(String str, Context context, Runnable runnable) {
        p0 p0Var = g;
        if (p0Var == null) {
            p1 p1VarA = p1.a(context);
            if (!p1VarA.r()) {
                p1VarA.l(str);
            }
            runnable.run();
            return;
        }
        p0Var.a(str, runnable);
    }

    void a() {
        if (p1.a(this.c).o()) {
            return;
        }
        m.f(new Runnable() { // from class: com.my.tracker.obfuscated.p0$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c();
            }
        });
    }

    void a(int i) {
        if (this.d == null) {
            x2.b("ReferrerHandler: install referrer client is null");
            return;
        }
        try {
            if (i == 0) {
                x2.a("ReferrerHandler: retrieving install referrer");
                final ReferrerDetails installReferrer = this.d.getInstallReferrer();
                m.a(new Runnable() { // from class: com.my.tracker.obfuscated.p0$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.b(installReferrer);
                    }
                });
            } else {
                x2.a("ReferrerHandler: InstallReferrerResponse code: " + i);
            }
        } catch (Throwable th) {
            x2.b("ReferrerHandler: error occurred while retrieving install referrer", th);
        }
        try {
            this.d.endConnection();
        } catch (Throwable unused) {
        }
        this.d = null;
    }

    void a(InstallReferrerStateListener installReferrerStateListener) {
        InstallReferrerClient installReferrerClient = this.d;
        if (installReferrerClient == null) {
            x2.a("ReferrerHandler: InstallReferrerClient is null");
            return;
        }
        int i = this.e;
        if (i >= f) {
            try {
                installReferrerClient.endConnection();
            } catch (Throwable unused) {
            }
            this.d = null;
            return;
        }
        this.e = i + 1;
        try {
            x2.a("ReferrerHandler: connect to referrer client");
            this.d.startConnection(installReferrerStateListener);
        } catch (Throwable th) {
            x2.b("ReferrerHandler: error occurred while connection InstallReferrerClient", th);
            a(installReferrerStateListener);
        }
    }

    void a(String str, Runnable runnable) {
        p1 p1VarA = p1.a(this.c);
        if (p1VarA.r()) {
            x2.a("ReferrerHandler: referrer has been tracked");
            return;
        }
        this.f4984a.a(str, t.b(this.c), runnable);
        this.b.a(str);
        p1VarA.v();
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void b(ReferrerDetails referrerDetails) {
        p1 p1VarA = p1.a(this.c);
        if (p1VarA.o()) {
            x2.a("ReferrerHandler: api referrer has been tracked");
            return;
        }
        String installReferrer = referrerDetails.getInstallReferrer();
        x2.a("ReferrerHandler: retrieving install referrer is completed. Referrer: " + installReferrer);
        this.f4984a.a(installReferrer, t.b(this.c), referrerDetails.getInstallBeginTimestampSeconds(), referrerDetails.getReferrerClickTimestampSeconds());
        this.b.a(installReferrer);
        p1VarA.s();
    }
}
