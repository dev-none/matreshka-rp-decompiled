package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ⁿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0929 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public S0 f3278;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final ArrayList f3279 = new ArrayList();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final Context f3280;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0349 f3281;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0429 f3282;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0935 f3283;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0666 f3284;

    public C0929(Context context, C0666 c0666, C0935 c0935, C0429 c0429, AbstractC0349 abstractC0349) {
        this.f3284 = c0666;
        this.f3283 = c0935;
        this.f3282 = c0429;
        this.f3281 = abstractC0349;
        this.f3280 = context.getApplicationContext();
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final void m8803() {
        for (C1013 c1013 : this.f3279) {
            C0966 c0966 = c1013.f3669;
            c0966.getClass();
            AbstractC1766n.m8384(new C0989(c0966));
            C0966 c0967 = c1013.f3669;
            c0967.getClass();
            AbstractC1766n.m8384(new C0967(c0967));
            C0966 c0968 = c1013.f3669;
            c0968.getClass();
            AbstractC1766n.m8384(new C0977(c0968));
            if (c1013.f3673 != null) {
                AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
                C0422 c0422 = c1013.f3673;
                synchronized (abstractC1041M8867) {
                    abstractC1041M8867.f3778.remove(c0422);
                }
                c1013.f3673 = null;
            }
            C0655 c0655 = c1013.f3672;
            if (c0655 != null) {
                c0655.m8609();
                c1013.f3672 = null;
            }
            c1013.f3674 = null;
        }
        AbstractC1766n.m8384(new C0936(this));
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final synchronized boolean m8804() {
        return this.f3281.mo8441();
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String m8805() {
        LinkedHashMap linkedHashMap;
        String strM8499 = this.f3281.m8499();
        String str = null;
        if (TextUtils.isEmpty(strM8499) || StringFog.decrypt("g24TI2XHbg==\n", "xiBSYSmCKrc=\n").equals(strM8499) || StringFog.decrypt("lphnYvc4RSs=\n", "0tE0I7V0AG8=\n").equals(strM8499)) {
            return null;
        }
        C0666 c0666 = this.f3284;
        String strM84910 = this.f3281.m8499();
        if (c0666.f2304 == null) {
            JSONObject jSONObjectOptJSONObject = c0666.f2311.optJSONObject(C0666.f2300);
            if (jSONObjectOptJSONObject != null) {
                linkedHashMap = new LinkedHashMap();
                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    linkedHashMap.put(next, jSONObjectOptJSONObject.optString(next, null));
                }
            } else {
                linkedHashMap = null;
            }
            if (linkedHashMap != null) {
                ArrayList<String> arrayList = new ArrayList(linkedHashMap.keySet());
                Collections.sort(arrayList, new C0668());
                for (String str2 : arrayList) {
                    if (AbstractC0607.m8591(strM84910, str2) >= 0) {
                        str = (String) linkedHashMap.get(str2);
                    }
                }
                c0666.f2304 = str;
            }
        }
        return c0666.f2304;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized ArrayList m8806() {
        if (this.f3279 != null) {
            return new ArrayList(this.f3279);
        }
        return new ArrayList();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0634 m8807(C0588 c0588) {
        if (c0588 != null) {
            return new C0634(c0588, m8807((C0588) this.f3284.m8613().get(c0588.f2095)));
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8808() {
        if (this.f3281.mo8441()) {
            for (C1013 c1013 : m8806()) {
                this.f3284.m8614().f2435.m8628(c1013.f3678.f2225.f2097, c1013);
            }
        }
    }
}
