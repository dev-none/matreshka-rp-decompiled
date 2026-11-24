package io.appmetrica.analytics.impl;

import android.content.Context;
import android.location.Location;
import android.net.ConnectivityManager;
import io.appmetrica.analytics.coreapi.internal.system.NetworkType;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import kotlin.jvm.internal.Ref;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2368p7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6252a;
    public final int b;
    public final Y8 c;
    public final E8 d;
    public final C2184i0 e;
    public final O8 f;
    public final C2442s7 g;
    public final W5 h;

    public C2368p7(Context context, Yk yk, int i, Y8 y8, E8 e8, C2184i0 c2184i0, O8 o8, C2442s7 c2442s7) {
        this.f6252a = context;
        this.b = i;
        this.c = y8;
        this.d = e8;
        this.e = c2184i0;
        this.f = o8;
        this.g = c2442s7;
        this.h = e8.f5655a;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static String b() {
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        C2409qn c2409qnC = C2495ua.H.C();
        C2343o7 c2343o7 = new C2343o7(objectRef);
        synchronized (c2409qnC) {
            c2409qnC.b.a(c2343o7);
        }
        return (String) objectRef.element;
    }

    public final C2268l7 a() throws JSONException {
        JSONObject jSONObjectOptJSONObject;
        Jo jo;
        Integer numValueOf = Integer.valueOf(this.h.e);
        String name = this.h.getName();
        String value = this.h.getValue();
        Y8 y8 = this.c;
        int i = this.b;
        zo zoVar = y8.f5968a.f5982a;
        synchronized (zoVar) {
            jSONObjectOptJSONObject = zoVar.f6438a.a().optJSONObject("numbers_of_type");
        }
        long jOptLong = jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.optLong(String.valueOf(i)) : 0L;
        y8.f5968a.a(i, 1 + jOptLong);
        Long lValueOf = Long.valueOf(jOptLong);
        C2442s7 c2442s7 = this.g;
        c2442s7.getClass();
        Rb rbM = C2495ua.H.m();
        Location userLocation = rbM.getUserLocation();
        if (userLocation != null) {
            int i2 = Jo.b;
            Location location = new Location(userLocation);
            String provider = location.getProvider();
            location.setProvider("");
            jo = new Jo(location, provider);
        } else {
            Location systemLocation = rbM.getSystemLocation();
            jo = systemLocation != null ? new Jo(new Location(systemLocation), "") : null;
        }
        boolean z = c2442s7.f6308a.d;
        Double dValueOf = jo != null ? Double.valueOf(jo.getLatitude()) : null;
        Double dValueOf2 = jo != null ? Double.valueOf(jo.getLongitude()) : null;
        Long lValueOf2 = jo != null ? Long.valueOf(jo.getTime()) : null;
        Integer numValueOf2 = jo != null ? Integer.valueOf((int) jo.getAccuracy()) : null;
        Integer numValueOf3 = jo != null ? Integer.valueOf((int) jo.getBearing()) : null;
        Integer numValueOf4 = jo != null ? Integer.valueOf((int) jo.getSpeed()) : null;
        C2393q7 c2393q7 = new C2393q7(Boolean.valueOf(z), dValueOf2, dValueOf, jo != null ? Integer.valueOf((int) jo.getAltitude()) : null, numValueOf3, numValueOf2, numValueOf4, lValueOf2, jo != null ? jo.getProvider() : null, jo != null ? jo.f5751a : null);
        String str = this.h.c;
        C2184i0 c2184i0 = this.e;
        String str2 = c2184i0.f6120a;
        Long lValueOf3 = Long.valueOf(c2184i0.b);
        Integer numValueOf5 = Integer.valueOf(this.h.g);
        Context context = this.f6252a;
        He he = Le.f5775a;
        Integer num = (Integer) Le.c.a((NetworkType) SystemServiceUtils.accessSystemServiceSafelyOrDefault((ConnectivityManager) context.getSystemService("connectivity"), "getting connection type", "ConnectivityManager", NetworkType.UNDEFINED, new Ke()));
        num.intValue();
        String strB = b();
        N8 n8 = this.d.b;
        W5 w5 = this.h;
        return new C2268l7(numValueOf, name, value, lValueOf, c2393q7, str, str2, lValueOf3, numValueOf5, num, strB, n8, w5.h, w5.k, w5.l, w5.n, w5.o, this.f.fromModel(w5.p));
    }

    public /* synthetic */ C2368p7(Context context, Yk yk, int i, Y8 y8, E8 e8, C2378ph c2378ph, C2184i0 c2184i0) {
        this(context, yk, i, y8, e8, c2184i0, new O8(), new C2442s7(c2378ph));
    }
}
