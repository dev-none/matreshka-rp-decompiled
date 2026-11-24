package com.my.tracker.obfuscated;

import android.content.Context;
import android.content.Intent;
import androidx.compose.material3.internal.CalendarModelKt;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class e implements e0.a, d.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final e0 f4934a;
    final p1 b;
    final d c;

    private e(e0 e0Var, p1 p1Var, d.a aVar) {
        this.f4934a = e0Var;
        this.b = p1Var;
        this.c = aVar.a(this);
    }

    public static e a(e0 e0Var, p1 p1Var, Context context) {
        d.a aVarA = d.a(context.getApplicationContext());
        if (aVarA != null) {
            return new e(e0Var, p1Var, aVarA);
        }
        x2.a("AppGalleryPurchaseHandler: can't support appGallery purchases ");
        return null;
    }

    @Override // com.my.tracker.obfuscated.e0.a
    public void b(List list) {
        if (list.isEmpty()) {
            x2.a("AppGalleryPurchaseHandler: empty subs raw purchases list");
        } else {
            this.c.a(list);
        }
    }

    @Override // com.my.tracker.obfuscated.d.b
    public void c(List list) {
        if (list.isEmpty()) {
            x2.a("AppGalleryPurchaseHandler: can't trackAppGalleryRawPurchases, appGalleryRawPurchases is empty");
        } else {
            this.f4934a.c(list);
        }
    }

    void c() {
        m.a(new Runnable() { // from class: com.my.tracker.obfuscated.e$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public void b(final Object obj, final String str, final String str2, final String str3, final Map map) {
        m.a(new Runnable() { // from class: com.my.tracker.obfuscated.e$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(obj, str, str2, str3, map);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.b.b() < CalendarModelKt.MillisecondsIn24Hours) {
            x2.a("AppGalleryPurchaseHandler: not yet time for tracking");
        } else {
            this.c.a();
            this.b.a(jCurrentTimeMillis);
        }
    }

    public void a() {
        this.f4934a.a(this);
        c();
    }

    public void a(int i, Intent intent) {
        if (i != -1) {
            x2.a("AppGalleryPurchaseHandler: result code isn't equal to RESULT_OK");
        } else if (intent == null) {
            x2.a("AppGalleryPurchaseHandler: empty intent has been received");
        } else {
            this.c.a(intent);
        }
    }

    @Override // com.my.tracker.obfuscated.d.b
    public void a(List list) {
        if (list.isEmpty()) {
            x2.a("AppGalleryPurchaseHandler: can't addAppGalleryRawPurchases, appGalleryRawPurchases is empty");
        } else {
            this.f4934a.a(list, this);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Object obj, String str, String str2, String str3, Map map) {
        JSONObject jSONObjectA = d.a(obj);
        if (jSONObjectA == null) {
            x2.a("AppGalleryPurchaseHandler: error parse productInfo object");
        } else {
            this.f4934a.a(jSONObjectA, str, str2, str3, map);
        }
    }
}
