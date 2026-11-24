package com.my.target;

import android.content.Context;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.mediation.AdNetworkConfig;
import com.my.target.mediation.MediationAdConfig;
import com.my.target.mediation.MediationAdapter;
import java.lang.ref.WeakReference;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class z5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j f4885a;
    public final h6.a b;
    public final x5 c;
    public MediationAdapter d;
    public WeakReference e;
    public u9 f;
    public b g;
    public String h;
    public h6 i;
    public float j;

    public static class a implements MediationAdConfig {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4886a;
        public final String b;
        public final int c;
        public final int d;
        public final Map e;
        public final MyTargetPrivacy f;
        public final AdNetworkConfig g;

        public a(String str, String str2, Map map, int i, int i2, MyTargetPrivacy myTargetPrivacy, AdNetworkConfig adNetworkConfig) {
            this.f4886a = str;
            this.b = str2;
            this.e = map;
            this.d = i;
            this.c = i2;
            this.f = myTargetPrivacy;
            this.g = adNetworkConfig;
        }

        public static a a(String str, String str2, Map map, int i, int i2, MyTargetPrivacy myTargetPrivacy, AdNetworkConfig adNetworkConfig) {
            return new a(str, str2, map, i, i2, myTargetPrivacy, adNetworkConfig);
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public AdNetworkConfig getAdNetworkConfig() {
            return this.g;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public int getAge() {
            return this.d;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public int getGender() {
            return this.c;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public String getPayload() {
            return this.b;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public String getPlacementId() {
            return this.f4886a;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public MyTargetPrivacy getPrivacy() {
            return this.f;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public Map getServerParams() {
            return this.e;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public boolean isUserAgeRestricted() {
            return this.f.userAgeRestricted;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public boolean isUserConsent() {
            Boolean bool = this.f.userConsent;
            if (bool != null) {
                return bool.booleanValue();
            }
            return true;
        }

        @Override // com.my.target.mediation.MediationAdConfig
        public boolean isUserConsentSpecified() {
            return this.f.userConsent != null;
        }
    }

    public final class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y5 f4887a;

        public b(y5 y5Var) {
            this.f4887a = y5Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            gb.a("MediationEngine: Timeout for " + this.f4887a.b() + " ad network");
            Context contextG = z5.this.g();
            if (contextG != null) {
                z5.this.a(this.f4887a, "networkTimeout", contextG);
            }
            z5.this.a(this.f4887a, false);
        }
    }

    public z5(x5 x5Var, j jVar, h6.a aVar) {
        this.c = x5Var;
        this.f4885a = jVar;
        this.b = aVar;
    }

    public String a() {
        return this.h;
    }

    public abstract void a(MediationAdapter mediationAdapter, y5 y5Var, Context context);

    public abstract boolean a(MediationAdapter mediationAdapter);

    public void b(Context context) {
        this.e = new WeakReference(context);
        h();
    }

    public abstract void e();

    public abstract MediationAdapter f();

    public Context g() {
        WeakReference weakReference = this.e;
        if (weakReference == null) {
            return null;
        }
        return (Context) weakReference.get();
    }

    public final void h() {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter != null) {
            try {
                mediationAdapter.destroy();
            } catch (Throwable th) {
                gb.b("MediationEngine: Error - " + th);
            }
            this.d = null;
        }
        Context contextG = g();
        if (contextG == null) {
            gb.b("MediationEngine: Can't configure next ad network, context is null");
            return;
        }
        y5 y5VarD = this.c.d();
        if (y5VarD == null) {
            gb.a("MediationEngine: No ad networks available");
            e();
            return;
        }
        gb.a("MediationEngine: Prepare adapter for " + y5VarD.b() + " ad network");
        MediationAdapter mediationAdapterA = a(y5VarD);
        this.d = mediationAdapterA;
        if (mediationAdapterA == null || !a(mediationAdapterA)) {
            gb.b("MediationEngine: Can't create adapter, class " + y5VarD.a() + " not found or invalid");
            a(y5VarD, "networkAdapterInvalid", contextG);
            h();
            return;
        }
        gb.a("MediationEngine: Adapter created");
        this.i = this.b.a(y5VarD.b(), y5VarD.f());
        u9 u9Var = this.f;
        if (u9Var != null) {
            u9Var.close();
        }
        int i = y5VarD.i();
        if (i > 0) {
            this.g = new b(y5VarD);
            u9 u9VarA = u9.a(i);
            this.f = u9VarA;
            u9VarA.a(this.g);
        } else {
            this.g = null;
        }
        a(y5VarD, "networkRequested", contextG);
        a(this.d, y5VarD, contextG);
    }

    public void a(y5 y5Var, boolean z) {
        b bVar = this.g;
        if (bVar == null || bVar.f4887a != y5Var) {
            return;
        }
        Context contextG = g();
        h6 h6Var = this.i;
        if (h6Var != null && contextG != null) {
            h6Var.b();
            this.i.b(contextG);
        }
        u9 u9Var = this.f;
        if (u9Var != null) {
            u9Var.b(this.g);
            this.f.close();
            this.f = null;
        }
        this.g = null;
        if (!z) {
            h();
            return;
        }
        this.h = y5Var.b();
        this.j = y5Var.f();
        if (contextG != null) {
            a(y5Var, "networkFilled", contextG);
        }
    }

    public float b() {
        return this.j;
    }

    public void a(y5 y5Var, String str, Context context) {
        bb.b(y5Var.h(), str, -1, context);
    }

    public final MediationAdapter a(y5 y5Var) {
        if (y5Var.j()) {
            return f();
        }
        return a(y5Var.a());
    }

    public final MediationAdapter a(String str) {
        try {
            return (MediationAdapter) Class.forName(str).getConstructor(null).newInstance(null);
        } catch (Throwable th) {
            gb.b("MediationEngine: Error – " + th);
            return null;
        }
    }
}
