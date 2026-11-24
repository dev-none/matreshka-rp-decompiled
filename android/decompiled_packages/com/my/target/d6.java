package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.mediation.AdNetworkLoader;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class d6 implements Runnable, AdNetworkLoader.AdParamsListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u9 f4592a = u9.a(10000);
    public final String b;
    public final Context c;
    public final List d;
    public final Map e;
    public volatile a f;
    public volatile int g;

    public interface a {
        void a(Map map);
    }

    public d6(String str, List list, Context context, a aVar) {
        this.b = str;
        this.d = list;
        this.c = context;
        this.f = aVar;
        this.g = list.size();
        this.e = this.g == 0 ? Collections.EMPTY_MAP : new HashMap();
    }

    public void a() {
        synchronized (this) {
            a aVar = this.f;
            if (aVar == null) {
                gb.a("MediationParamsLoader: onResult has already been called");
                return;
            }
            this.f = null;
            aVar.a(this.e);
            this.f4592a.close();
        }
    }

    public void b() {
        if (this.g == 0) {
            gb.a("MediationParamsLoader: empty loaders list, direct onResult call");
            a();
            return;
        }
        gb.a("MediationParamsLoader: params loading started, loaders count: " + this.g);
        this.f4592a.a(this);
        for (AdNetworkLoader adNetworkLoader : this.d) {
            gb.a("MediationParamsLoader: loading params for " + adNetworkLoader);
            adNetworkLoader.setAdParamsListener(this);
            adNetworkLoader.loadParams(this.b, this.c);
        }
    }

    @Override // com.my.target.mediation.AdNetworkLoader.AdParamsListener
    public void onLoad(AdNetworkLoader adNetworkLoader, Map map, String str) {
        synchronized (this) {
            if (this.f == null) {
                gb.a("MediationParamsLoader: onResult has already been called, skipping params processing");
                return;
            }
            if (TextUtils.isEmpty(str)) {
                gb.a("MediationParamsLoader: mediation params is received for " + adNetworkLoader);
                if (!map.isEmpty()) {
                    this.e.putAll(map);
                }
            } else {
                gb.a("MediationParamsLoader: failed to get params in " + adNetworkLoader + " with error - " + str);
            }
            this.g--;
            if (this.g > 0) {
                return;
            }
            a();
        }
    }

    @Override // java.lang.Runnable
    public void run() {
        gb.a("MediationParamsLoader: loading timeout");
        Iterator it = this.d.iterator();
        while (it.hasNext()) {
            ((AdNetworkLoader) it.next()).setAdParamsListener(null);
        }
        a();
    }
}
