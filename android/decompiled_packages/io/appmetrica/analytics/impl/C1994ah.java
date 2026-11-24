package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.pm.FeatureInfo;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import java.util.ArrayList;
import java.util.HashSet;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ah, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1994ah extends Wg {
    public final SafePackageManager b;

    public C1994ah(C2085e5 c2085e5) {
        this(c2085e5, new SafePackageManager());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        HashSet hashSet;
        C2085e5 c2085e5 = this.f5944a;
        if (c2085e5.t.c() && c2085e5.y()) {
            C2018bf c2018bf = c2085e5.c;
            String strE = this.f5944a.c.e();
            if (TextUtils.isEmpty(strE)) {
                hashSet = null;
            } else {
                try {
                    hashSet = new HashSet();
                    JSONArray jSONArray = new JSONArray(strE);
                    for (int i = 0; i < jSONArray.length(); i++) {
                        hashSet.add(new Y9(jSONArray.getJSONObject(i)));
                    }
                } catch (Throwable unused) {
                    hashSet = null;
                }
            }
            try {
                ArrayList<Y9> arrayListB = b();
                if (CollectionUtils.areCollectionsEqual(hashSet, arrayListB)) {
                    C2419r9 c2419r9 = c2085e5.n;
                    int i2 = c2419r9.k;
                    c2419r9.m = i2;
                    c2419r9.f6291a.a(i2).b();
                } else {
                    JSONArray jSONArray2 = new JSONArray();
                    for (Y9 y9 : arrayListB) {
                        y9.getClass();
                        JSONObject jSONObjectPut = new JSONObject().put("name", y9.f5969a).put("required", y9.c);
                        int i3 = y9.b;
                        if (i3 != -1) {
                            jSONObjectPut.put("version", i3);
                        }
                        jSONArray2.put(jSONObjectPut);
                    }
                    W5 w5A = W5.a(w5, new JSONObject().put("features", jSONArray2).toString());
                    C2419r9 c2419r10 = c2085e5.n;
                    c2419r10.a(w5A, Wk.a(c2419r10.c.b(w5A), w5A.i));
                    int i4 = c2419r10.k;
                    c2419r10.m = i4;
                    c2419r10.f6291a.a(i4).b();
                    c2018bf.i(jSONArray2.toString());
                }
            } catch (Throwable unused2) {
            }
        }
        return false;
    }

    public final ArrayList b() {
        FeatureInfo[] featureInfoArr;
        try {
            C2085e5 c2085e5 = this.f5944a;
            SafePackageManager safePackageManager = this.b;
            Context context = c2085e5.f6057a;
            PackageInfo packageInfo = safePackageManager.getPackageInfo(context, context.getPackageName(), 16384);
            ArrayList arrayList = new ArrayList();
            X9 v9 = AndroidUtils.isApiAchieved(24) ? new V9() : new W9();
            if (packageInfo != null && (featureInfoArr = packageInfo.reqFeatures) != null) {
                for (FeatureInfo featureInfo : featureInfoArr) {
                    arrayList.add(v9.a(featureInfo));
                }
            }
            return arrayList;
        } catch (Throwable unused) {
            return null;
        }
    }

    public C1994ah(C2085e5 c2085e5, SafePackageManager safePackageManager) {
        super(c2085e5);
        this.b = safePackageManager;
    }
}
