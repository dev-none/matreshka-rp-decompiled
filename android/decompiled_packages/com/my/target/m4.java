package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.common.models.ImageData;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class m4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u f4705a;
    public final j b;
    public final Context c;
    public boolean d = true;

    public m4(u uVar, j jVar, Context context) {
        this.f4705a = uVar;
        this.b = jVar;
        this.c = context;
    }

    public static m4 a(u uVar, j jVar, Context context) {
        return new m4(uVar, jVar, context);
    }

    public boolean a(JSONObject jSONObject, l4 l4Var, n nVar) {
        ImageData imageDataA;
        ImageData imageDataA2;
        this.d = l4Var.J();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("portrait");
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("landscape");
        if ((jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) && (jSONArrayOptJSONArray2 == null || jSONArrayOptJSONArray2.length() <= 0)) {
            nVar.a(m.p);
            a("No images in InterstitialAdImageBanner", "Required field", l4Var.r());
            return false;
        }
        if (jSONArrayOptJSONArray != null) {
            int length = jSONArrayOptJSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null && (imageDataA2 = a(jSONObjectOptJSONObject, l4Var.r())) != null) {
                    l4Var.e(imageDataA2);
                }
            }
        }
        if (jSONArrayOptJSONArray2 != null) {
            int length2 = jSONArrayOptJSONArray2.length();
            for (int i2 = 0; i2 < length2; i2++) {
                JSONObject jSONObjectOptJSONObject2 = jSONArrayOptJSONArray2.optJSONObject(i2);
                if (jSONObjectOptJSONObject2 != null && (imageDataA = a(jSONObjectOptJSONObject2, l4Var.r())) != null) {
                    l4Var.d(imageDataA);
                }
            }
        }
        boolean z = (l4Var.P().isEmpty() && l4Var.S().isEmpty()) ? false : true;
        if (z) {
            nVar.a(m.p);
        }
        return z;
    }

    public final ImageData a(JSONObject jSONObject, String str) {
        String strOptString = jSONObject.optString("imageLink");
        if (TextUtils.isEmpty(strOptString)) {
            a("InterstitialAdImageBanner no imageLink for image", "Required field", str);
            return null;
        }
        int iOptInt = jSONObject.optInt("width");
        int iOptInt2 = jSONObject.optInt("height");
        if (iOptInt > 0 && iOptInt2 > 0) {
            return ImageData.newImageData(strOptString, iOptInt, iOptInt2);
        }
        a("InterstitialAdImageBanner  image has wrong dimensions, w = " + iOptInt + ", h = " + iOptInt2, "Required field", str);
        return null;
    }

    public final void a(String str, String str2, String str3) {
        if (this.d) {
            String str4 = this.f4705a.f4826a;
            q5 q5VarD = q5.a(str2).f(str).a(this.b.i()).d(str3);
            if (str4 == null) {
                str4 = this.f4705a.b;
            }
            q5VarD.c(str4).b(this.c);
        }
    }
}
