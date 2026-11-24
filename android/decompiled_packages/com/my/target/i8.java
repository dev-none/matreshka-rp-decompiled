package com.my.target;

import android.content.Context;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class i8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final y7 f4658a;
    public final j b;

    public i8(y7 y7Var, j jVar) {
        this.f4658a = y7Var;
        this.b = jVar;
    }

    public static i8 a(y7 y7Var, j jVar) {
        return new i8(y7Var, jVar);
    }

    public void a(final s7 s7Var, boolean z, Context context) {
        if (s7Var.b0() != z) {
            s7Var.g(z);
            final Context applicationContext = context.getApplicationContext();
            f0.b(new Runnable() { // from class: com.my.target.i8$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(s7Var, applicationContext);
                }
            });
        }
    }

    public final /* synthetic */ void a(s7 s7Var, Context context) {
        String strA = a(s7Var);
        if (strA == null) {
            return;
        }
        w1 w1VarB = w1.b(context);
        if (w1VarB == null) {
            gb.a("NotificationHandler: Unable to open disk cache and save text data for slotId - " + this.b.i());
            return;
        }
        w1VarB.a(this.b.i(), strA, true);
    }

    public final String a(s7 s7Var) {
        String strR = s7Var.r();
        try {
            JSONObject jSONObjectJ = this.f4658a.j();
            if (jSONObjectJ == null) {
                gb.a("NotificationHandler: Unable to change cached notification for banner " + strR + " - no raw data in section");
                return null;
            }
            JSONObject jSONObject = jSONObjectJ.getJSONObject(this.f4658a.i());
            if (jSONObject == null) {
                gb.a("NotificationHandler: Unable to change cached notification for banner " + strR + " - no section object in raw data");
                return null;
            }
            JSONArray jSONArray = jSONObject.getJSONArray("banners");
            if (jSONArray == null) {
                gb.a("NotificationHandler: Uunable to change cached notification for banner " + strR + " - no banners array in section object");
                return null;
            }
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObject2 = (JSONObject) jSONArray.get(i);
                String string = jSONObject2.getString("bannerID");
                if (string != null && string.equals(strR)) {
                    jSONObject2.put("hasNotification", s7Var.b0());
                    gb.a("NotificationHandler: Notification changed in raw data for banner " + strR);
                    return jSONObjectJ.toString();
                }
            }
            return null;
        } catch (Throwable th) {
            gb.a("NotificationHandler: Error updating cached notification for section " + this.f4658a.i() + " and banner " + strR + " - " + th);
        }
    }
}
