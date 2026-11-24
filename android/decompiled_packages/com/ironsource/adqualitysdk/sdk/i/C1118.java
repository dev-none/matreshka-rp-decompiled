package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.pm.PackageManager;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collection;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｆ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1118 implements InterfaceC0573 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f3955;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String[] f3954 = {StringFog.decrypt("gn9vA2HBHuiRYm1VdYYL64VibURo\n", "4RACLQyoaoU=\n"), StringFog.decrypt("9rDNpkOqvtX6qcHmQr+03ueyjvhFrKHV8LLP/EM=\n", "ld+giCbN0ac=\n"), StringFog.decrypt("EklfxVtqMdMEX0qEQnw=\n", "fTs46ysYXqs=\n"), StringFog.decrypt("kQKkPJf6a9WbGahr1fdp2IIZpn2X9HTY\n", "8m3JEvufHaw=\n"), StringFog.decrypt("zhIzzrH9n6TTDyTOtfmTs8IBJoGg\n", "oWBU4MKc8cA=\n")};

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String[] f3953 = {StringFog.decrypt("Selp19J4p2BM4iPX0nO1YFX8KNbYfv8nQ/8zxNF2tDw=\n", "LYxHpb0a0U4=\n"), StringFog.decrypt("lenGRwf2rZ+M6ZtUAg==\n", "/IboMWbYyOc=\n"), StringFog.decrypt("9KaHXyKyM3Ps7cxQNw==\n", "mcOpKEfbQBs=\n"), StringFog.decrypt("YI1aVnFR5bJ8mllWcEP7vGiaTw==\n", "D/89eB0ild0=\n"), StringFog.decrypt("aLAVkO/SKZhitFbN6dEvnnm+DNs=\n", "C994vpyzXOo=\n")};

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String[] f3952 = {StringFog.decrypt("vSOaSKRXBOKxJJkRpRYZ6bklhA0=\n", "3kz3ZtA4dIg=\n"), StringFog.decrypt("krNjvGuXvb+Rrz+6LYWhoZK0Pqo=\n", "98ZN3wP21NE=\n"), StringFog.decrypt("U7GU3xaTlYZYt5KVCIiUlB6tjIEYjpWGVaw=\n", "MN758X384PU=\n"), StringFog.decrypt("34wnmMKCaZjJhSXDgox0lM6MI9KCnm8=\n", "vONKtqztGvA=\n"), StringFog.decrypt("jVOsShcnxseKTKAWFzaBxptMpBYWPMrH\n", "7jzBZGNPr7U=\n"), StringFog.decrypt("dg+CwPym/eJ6F4qdq7Dk\n", "FWDv7oXDkY4=\n"), StringFog.decrypt("Gu2nyVQ6D+EW667JQzEF9xDsrclXPQf/EOytyXw6KuMJwKOLWT0F9CrnuJFcNw69Os2DqQ==\n", "eYLK5zVUa5M=\n"), StringFog.decrypt("tzKF5+wJkjWkKJvn4wCUMq0tib3sCQ==\n", "1F3oyY9h91k=\n"), StringFog.decrypt("1IUYEhKxl4/QixhZLruWyQ==\n", "t+p1PHHY/6E=\n"), StringFog.decrypt("e9l/mk5cfKJ7x2uaWl9lqHzKe98=\n", "FKsYtD0+CM0=\n"), StringFog.decrypt("EjUbL9vig84VdAZq2w==\n", "cVp2AbyX4rw=\n")};

    public C1118(Context context) {
        this.f3955 = context;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    public final String getName() {
        return StringFog.decrypt("3Y34K0nB5h7djfoRWM/mHd2R\n", "uOOOQjuuiHM=\n");
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    /* JADX INFO: renamed from: ﾒ */
    public final C0885 mo8551() {
        String strDecrypt;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayListM8889 = m8889(f3954);
        if (!arrayListM8889.isEmpty()) {
            arrayList.add(40);
        }
        ArrayList arrayListM88810 = m8889(f3953);
        if (!arrayListM88810.isEmpty()) {
            arrayList.add(41);
        }
        ArrayList arrayListM88811 = m8889(f3952);
        if (!arrayListM88811.isEmpty()) {
            arrayList.add(42);
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(StringFog.decrypt("mgA3aEjlXDSGAQ==\n", "6nJYEDGxM1s=\n"), new JSONArray((Collection) arrayListM8889));
            jSONObject.put(StringFog.decrypt("7Kf2EzqrZkDKreoaKA==\n", "nsKFdlvZBSg=\n"), new JSONArray((Collection) arrayListM88810));
            jSONObject.put(StringFog.decrypt("h/Zlh6R1D3+I7Q==\n", "5J4A5tAhYBA=\n"), new JSONArray((Collection) arrayListM88811));
            strDecrypt = jSONObject.toString();
        } catch (Exception unused) {
            strDecrypt = StringFog.decrypt("dbA=\n", "Ds3HqekbgYY=\n");
        }
        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList m8889(String[] strArr) {
        PackageManager packageManager = this.f3955.getPackageManager();
        ArrayList arrayList = new ArrayList();
        for (String str : strArr) {
            try {
                packageManager.getPackageInfo(str, 0);
                arrayList.add(str);
            } catch (PackageManager.NameNotFoundException | SecurityException unused) {
            }
        }
        return arrayList;
    }
}
