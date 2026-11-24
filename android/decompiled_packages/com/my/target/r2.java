package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.common.MyTargetConfig;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class r2 extends c2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Map f4798a;

    public synchronized Map a(MyTargetConfig myTargetConfig, final Context context) {
        if (f0.a()) {
            gb.a("HuaweiOAIdDataProvider: You must not call collectData method from main thread");
            return new HashMap();
        }
        if (this.f4798a != null) {
            return new HashMap(this.f4798a);
        }
        this.f4798a = new HashMap();
        v8 v8VarA = v8.a(context);
        try {
            Class.forName("com.huawei.hms.ads.identifier.AdvertisingIdClient");
            String strE = v8VarA.e();
            String strD = v8VarA.d();
            if (TextUtils.isEmpty(strE)) {
                a(context);
            } else {
                this.f4798a.put(CommonUrlParts.HUAWEI_OAID, strE);
                this.f4798a.put("oaid_tracking_enabled", strD);
                f0.e(new Runnable() { // from class: com.my.target.r2$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(context);
                    }
                });
            }
            return new HashMap(this.f4798a);
        } catch (Throwable unused) {
            v8VarA.d(null);
            v8VarA.e(null);
            return new HashMap();
        }
    }

    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final void a(Context context) {
        String str;
        Object objInvoke;
        String str2;
        String str3 = null;
        try {
            Class<?> cls = Class.forName("com.huawei.hms.ads.identifier.AdvertisingIdClient");
            gb.a("HuaweiOAIdDataProvider: Send huawei AId");
            Method method = cls.getMethod("getAdvertisingIdInfo", Context.class);
            if (method == null || (objInvoke = method.invoke(null, context)) == null) {
                str = null;
            } else {
                Method method2 = objInvoke.getClass().getMethod("getId", null);
                if (method2 != null) {
                    str2 = (String) method2.invoke(objInvoke, null);
                    try {
                        gb.a("HuaweiOAIdDataProvider: Huawei AId - " + str2);
                    } catch (Throwable unused) {
                    }
                } else {
                    str2 = null;
                }
                Method method3 = objInvoke.getClass().getMethod("isLimitAdTrackingEnabled", null);
                if (method3 != null) {
                    Boolean bool = (Boolean) method3.invoke(objInvoke, null);
                    str3 = (!bool.booleanValue() ? 1 : 0) + "";
                    StringBuilder sb = new StringBuilder("HuaweiOAIdDataProvider: Huawei ad tracking enabled - ");
                    sb.append(!bool.booleanValue());
                    gb.a(sb.toString());
                }
                str = str3;
                str3 = str2;
            }
        } catch (Throwable unused2) {
        }
        synchronized (this) {
            try {
                if (str3 == null) {
                    this.f4798a.remove(CommonUrlParts.HUAWEI_OAID);
                } else {
                    this.f4798a.put(CommonUrlParts.HUAWEI_OAID, str3);
                }
                if (str == null) {
                    this.f4798a.remove("oaid_tracking_enabled");
                } else {
                    this.f4798a.put("oaid_tracking_enabled", str);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        v8.a(context).d(str3);
        v8.a(context).e(str);
    }
}
