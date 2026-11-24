package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ĩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0182 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0179 f756;

    public C0182(C0179 c0179) {
        this.f756 = c0179;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        C0179 c0179 = this.f756;
        if (c0179.f753) {
            C0418 c0418 = c0179.f748.f4005;
            Context context = c0179.f752;
            C0259 c0259 = new C0259(this);
            if (c0418.f1535.get()) {
                return;
            }
            C1775s.f495 = AbstractC0895.m8747().mo8756();
            AbstractC0637.f2230 = AbstractC0895.m8747().mo8757();
            synchronized (c0418) {
                z = c0418.f1534;
            }
            if (z) {
                AbstractC1766n.m8384(new C0513(c0259));
                return;
            }
            String str = AbstractC0702.f2427;
            ArrayList<String> arrayList = new ArrayList(AbstractC0702.f2425.keySet());
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            for (String str2 : arrayList) {
                List<AbstractC0265> list = (List) AbstractC0702.f2425.get(str2);
                if (list != null) {
                    ArrayList arrayList2 = new ArrayList();
                    for (AbstractC0265 abstractC0265 : list) {
                        if (AbstractC0702.m8622(abstractC0265)) {
                            arrayList2.add(abstractC0265);
                        }
                    }
                    linkedHashMap.put(str2, arrayList2);
                }
            }
            c0418.m8529(context, c0259, linkedHashMap);
        }
    }
}
