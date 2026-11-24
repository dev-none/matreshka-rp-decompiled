package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ỵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0890 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3150;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f3151;

    public C0890(ArrayList arrayList, JSONObject jSONObject) {
        this.f3151 = arrayList;
        this.f3150 = jSONObject;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        for (C0421 c0421 : this.f3151) {
            JSONObject jSONObject = this.f3150;
            Context context = c0421.f1538.f1190.f4007;
            String str = AbstractC1033.f3726;
            int i = AbstractC1024.f3694;
            Intent intentPutExtra = new Intent(str).putExtra(AbstractC1033.f3718, jSONObject.toString());
            C1069 c1069M8875 = C1069.m8875(context);
            if (c1069M8875.f3853) {
                synchronized (c1069M8875.f3851) {
                    intentPutExtra.getAction();
                    String strResolveTypeIfNeeded = intentPutExtra.resolveTypeIfNeeded(c1069M8875.f3852.getContentResolver());
                    intentPutExtra.getData();
                    String scheme = intentPutExtra.getScheme();
                    intentPutExtra.getCategories();
                    boolean z = (intentPutExtra.getFlags() & 8) != 0;
                    if (z) {
                        Log.v(C1069.f3848, StringFog.decrypt("5N3vGp7wiYvRmOgMguPA\n", "tricdfKG4OU=\n") + strResolveTypeIfNeeded + StringFog.decrypt("FHYvAUYly48=\n", "NAVMaSNIrq8=\n") + scheme + StringFog.decrypt("n75s7sHEKwDRpSo=\n", "v9EKzqiqX2U=\n") + intentPutExtra);
                    }
                    ArrayList arrayList = (ArrayList) c1069M8875.f3850.get(intentPutExtra.getAction());
                    if (arrayList != null) {
                        if (z) {
                            Log.v(C1069.f3848, StringFog.decrypt("eAIGaXWKApxQEgY6Og==\n", "OWFyABrkIvA=\n") + arrayList);
                        }
                        if (arrayList.size() > 0) {
                            if (arrayList.get(0) != null) {
                                throw new ClassCastException();
                            }
                            if (!z) {
                                throw null;
                            }
                            StringFog.decrypt("vKWiBxD5/zjRpbEFEf7iK9GivwgM9eN/\n", "8cTWZHiQkV8=\n");
                            throw null;
                        }
                    }
                }
            }
        }
    }
}
