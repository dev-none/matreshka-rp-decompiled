package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.PriorityQueue;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ぃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0952 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0763 f3369;

    public C0952(C0763 c0763) {
        this.f3369 = c0763;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8824(ArrayList arrayList) {
        JSONObject jSONObject;
        C0653 c0653;
        try {
            if (arrayList.isEmpty()) {
                C0763.m8695(this.f3369);
                return;
            }
            PriorityQueue priorityQueue = new PriorityQueue();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                priorityQueue.add(new C0760((C1141) it.next()));
            }
            ArrayList arrayList2 = new ArrayList();
            for (C0760 c0760 = (C0760) priorityQueue.poll(); c0760 != null; c0760 = (C0760) priorityQueue.poll()) {
                C0763 c0763 = this.f3369;
                c0763.getClass();
                AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
                synchronized (c0760) {
                    jSONObject = c0760.f2593.f3993;
                }
                String strOptString = jSONObject.optString(StringFog.decrypt("aE4dnw==\n", "GCJ68cCoiic=\n"));
                String str = c0763.f2602;
                C0896 c0896 = (C0896) abstractC0895M8747;
                if (strOptString != null) {
                    c0653 = (C0653) c0896.mo8763().get(strOptString);
                } else {
                    c0896.getClass();
                    c0653 = null;
                }
                if (c0653 == null || !c0653.m8608(str)) {
                    if (TextUtils.isEmpty(c0760.m8689())) {
                        c0760.m8694(this.f3369.f2613.f1188.m8345());
                    }
                    arrayList2.add(c0760);
                } else {
                    C1072 c1072 = this.f3369.f2614;
                    C1141 c1141 = c0760.f2593;
                    c1072.getClass();
                    C0783.m8721().post(new C1076(c1072, c1141));
                }
            }
            if (arrayList2.isEmpty()) {
                return;
            }
            C0763.m8697(this.f3369, arrayList2, new C0958(this));
        } catch (Exception unused) {
            C0763.m8695(this.f3369);
        }
    }
}
