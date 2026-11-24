package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ܪ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0511 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1816;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1817;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ Context f1818;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1819;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ LinkedHashMap f1820;

    public C0511(C0418 c0418, LinkedHashMap linkedHashMap, boolean z, Context context, boolean z2) {
        this.f1816 = c0418;
        this.f1820 = linkedHashMap;
        this.f1819 = z;
        this.f1818 = context;
        this.f1817 = z2;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        JSONObject jSONObject;
        C0331 c0331 = this.f1816.f1526;
        if (c0331 != null) {
            C0418 c0418 = this.f1816;
            LinkedHashMap linkedHashMap = this.f1820;
            boolean z = this.f1819;
            c0418.getClass();
            ArrayList<String> arrayList = new ArrayList(C0331.m8491(z));
            Iterator it = linkedHashMap.values().iterator();
            while (true) {
                String strMo8324 = null;
                if (!it.hasNext()) {
                    break;
                }
                List list = (List) it.next();
                if (list != null && !list.isEmpty() && list.get(0) != null) {
                    strMo8324 = ((AbstractC0265) list.get(0)).mo8324();
                }
                if (strMo8324 != null) {
                    arrayList.add(strMo8324);
                }
            }
            for (String str : arrayList) {
                c0331.f1212.put(str, new C0396(str));
            }
            Context context = this.f1818;
            if (c0331.f1211 == null) {
                c0331.f1211 = new C1003(new C0363(c0331), new C0344(c0331), new C0333(context.getApplicationContext()));
                AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
                C1003 c1003 = c0331.f1211;
                C0896 c0896 = (C0896) abstractC0895M8747;
                long jM8677 = c0896.f3177.m8677();
                C0742 c0742 = c0896.f3177;
                synchronized (c0742) {
                    jSONObject = c0742.f2592;
                }
                int iOptInt = jSONObject.optInt(C0742.f2549, 0);
                boolean zMo8758 = abstractC0895M8747.mo8758();
                int iMo8762 = abstractC0895M8747.mo8762();
                boolean zMo8748 = abstractC0895M8747.mo8748();
                if (!c1003.f3629) {
                    c1003.f3629 = true;
                    c1003.f3626 = jM8677;
                    c1003.f3625 = iOptInt;
                    c1003.f3622 = zMo8758;
                    c1003.f3621 = iMo8762;
                    c1003.f3620 = zMo8748;
                    if (zMo8758) {
                        Handler handler = c1003.f3630;
                        if (handler != null) {
                            handler.removeCallbacksAndMessages(null);
                        }
                        Handler handler2 = c1003.f3630;
                        if (handler2 != null) {
                            handler2.postDelayed(new C1032(c1003), c1003.f3621);
                        }
                    }
                }
            }
            if (this.f1817) {
                c0331.f1208 = new ArrayList(C0331.m8491(this.f1819));
                c0331.f1209 = new C0648(c0331);
            }
        }
    }
}
