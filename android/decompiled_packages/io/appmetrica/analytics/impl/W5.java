package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import android.util.Pair;
import io.appmetrica.analytics.coreapi.internal.event.CounterReportApi;
import io.appmetrica.analytics.coreapi.internal.permission.PermissionState;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.sentry.protocol.App;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public class W5 implements CounterReportApi, Parcelable {
    public static final Parcelable.Creator<W5> CREATOR = new V5();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f5941a;
    protected String b;
    public String c;
    public int d;
    public int e;
    public Pair f;
    public int g;
    public String h;
    public long i;
    public long j;
    public EnumC2245ka k;
    public EnumC2469t9 l;
    public Bundle m;
    public Boolean n;
    public Integer o;
    public Map p;

    public W5() {
        this("", 0);
    }

    public final void a(String str, String str2) {
        if (this.f == null) {
            this.f = new Pair(str, str2);
        }
    }

    public final Pair<String, String> b() {
        return this.f;
    }

    public final void c(Bundle bundle) {
        this.m = bundle;
    }

    public final long d() {
        return this.i;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final long e() {
        return this.j;
    }

    public final String f() {
        return this.c;
    }

    public final EnumC2245ka g() {
        return this.k;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final int getBytesTruncated() {
        return this.g;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final int getCustomType() {
        return this.e;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final Map<String, byte[]> getExtras() {
        return this.p;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final String getName() {
        return this.f5941a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final int getType() {
        return this.d;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final String getValue() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final byte[] getValueBytes() {
        String str = this.b;
        if (str == null) {
            return null;
        }
        return Base64.decode(str, 0);
    }

    public final Integer h() {
        return this.o;
    }

    public final Bundle i() {
        return this.m;
    }

    public final String j() {
        return this.h;
    }

    public final EnumC2469t9 k() {
        return this.l;
    }

    public final boolean l() {
        return this.f5941a == null;
    }

    public final boolean m() {
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        return -1 == this.d;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setBytesTruncated(int i) {
        this.g = i;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setCustomType(int i) {
        this.e = i;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setExtras(Map<String, byte[]> map) {
        this.p = map;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public void setName(String str) {
        this.f5941a = str;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setType(int i) {
        this.d = i;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public void setValue(String str) {
        this.b = str;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public void setValueBytes(byte[] bArr) {
        this.b = bArr == null ? null : new String(Base64.encode(bArr, 0));
    }

    public final String toString() {
        Locale locale = Locale.US;
        String str = this.f5941a;
        String str2 = EnumC2195ib.a(this.d).b;
        String strSubstring = this.b;
        if (strSubstring == null) {
            strSubstring = null;
        } else if (strSubstring.length() > 500) {
            strSubstring = strSubstring.substring(0, 500);
        }
        return String.format(locale, "[event: %s, type: %s, value: %s]", str, str2, strSubstring);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        Bundle bundle = new Bundle();
        bundle.putString("CounterReport.Event", this.f5941a);
        bundle.putString("CounterReport.Value", this.b);
        bundle.putInt("CounterReport.Type", this.d);
        bundle.putInt("CounterReport.CustomType", this.e);
        bundle.putInt("CounterReport.TRUNCATED", this.g);
        bundle.putString("CounterReport.ProfileID", this.h);
        bundle.putInt("CounterReport.UniquenessStatus", this.k.f6171a);
        Bundle bundle2 = this.m;
        if (bundle2 != null) {
            bundle.putParcelable("CounterReport.Payload", bundle2);
        }
        String str = this.c;
        if (str != null) {
            bundle.putString("CounterReport.Environment", str);
        }
        Pair pair = this.f;
        if (pair != null) {
            bundle.putString("CounterReport.AppEnvironmentDiffKey", (String) pair.first);
            bundle.putString("CounterReport.AppEnvironmentDiffValue", (String) pair.second);
        }
        bundle.putLong("CounterReport.CreationElapsedRealtime", this.i);
        bundle.putLong("CounterReport.CreationTimestamp", this.j);
        EnumC2469t9 enumC2469t9 = this.l;
        if (enumC2469t9 != null) {
            bundle.putInt("CounterReport.Source", enumC2469t9.f6330a);
        }
        Boolean bool = this.n;
        if (bool != null) {
            bundle.putBoolean("CounterReport.AttributionIdChanged", bool.booleanValue());
        }
        Integer num = this.o;
        if (num != null) {
            bundle.putInt("CounterReport.OpenId", num.intValue());
        }
        bundle.putBundle("CounterReport.Extras", CollectionUtils.mapToBundle(this.p));
        parcel.writeBundle(bundle);
    }

    public W5(String str, int i) {
        this("", str, i);
    }

    public static W5 e(W5 w5) {
        return a(w5, EnumC2195ib.EVENT_TYPE_APP_UPDATE);
    }

    public final void b(String str) {
        this.c = str;
    }

    public void c(String str) {
        this.h = str;
    }

    public final Bundle d(Bundle bundle) {
        if (bundle == null) {
            bundle = new Bundle();
        }
        bundle.putParcelable("CounterReport.Object", this);
        return bundle;
    }

    public W5(String str, String str2, int i) {
        this(str, str2, i, new SystemTimeProvider());
    }

    public final void a(long j) {
        this.i = j;
    }

    public final void b(long j) {
        this.j = j;
    }

    public final Boolean c() {
        return this.n;
    }

    public W5(String str, String str2, int i, SystemTimeProvider systemTimeProvider) {
        this.k = EnumC2245ka.UNKNOWN;
        this.p = new HashMap();
        this.f5941a = str2;
        this.d = i;
        this.b = str;
        this.i = systemTimeProvider.elapsedRealtime();
        this.j = systemTimeProvider.currentTimeMillis();
    }

    public static W5 b(Bundle bundle) {
        if (bundle != null) {
            try {
                W5 w5 = (W5) bundle.getParcelable("CounterReport.Object");
                if (w5 != null) {
                    return w5;
                }
            } catch (Throwable unused) {
                return new W5("", 0);
            }
        }
        return new W5("", 0);
    }

    public static W5 c(W5 w5) {
        return a(w5, EnumC2195ib.EVENT_TYPE_INIT);
    }

    public static W5 d(W5 w5) {
        W5 w6 = new W5("", 0);
        w6.j = w5.j;
        w6.i = w5.i;
        w6.f = w5.f;
        w6.c = w5.c;
        w6.m = w5.m;
        w6.p = w5.p;
        w6.h = w5.h;
        return w6;
    }

    public final void a(EnumC2245ka enumC2245ka) {
        this.k = enumC2245ka;
    }

    public final void a(EnumC2469t9 enumC2469t9) {
        this.l = enumC2469t9;
    }

    public final void a(Boolean bool) {
        this.n = bool;
    }

    public final void a(Integer num) {
        this.o = num;
    }

    public static Pair a(Bundle bundle) {
        if (bundle.containsKey("CounterReport.AppEnvironmentDiffKey") && bundle.containsKey("CounterReport.AppEnvironmentDiffValue")) {
            return new Pair(bundle.getString("CounterReport.AppEnvironmentDiffKey"), bundle.getString("CounterReport.AppEnvironmentDiffValue"));
        }
        return null;
    }

    public static W5 a(W5 w5, EnumC2195ib enumC2195ib) {
        W5 w5D = d(w5);
        w5D.d = enumC2195ib.f6131a;
        return w5D;
    }

    public static W5 b(W5 w5) {
        return a(w5, EnumC2195ib.EVENT_TYPE_FIRST_ACTIVATION);
    }

    public static W5 a(W5 w5) {
        return a(w5, EnumC2195ib.EVENT_TYPE_ALIVE);
    }

    public static W5 a(W5 w5, T9 t9) {
        W5 w5A = a(w5, EnumC2195ib.EVENT_TYPE_START);
        w5A.setValueBytes(MessageNano.toByteArray(new C2544w9().fromModel(new C2519v9((String) t9.b.a()))));
        w5A.j = w5.j;
        w5A.i = w5.i;
        return w5A;
    }

    public static W5 a(W5 w5, Collection<PermissionState> collection, F2 f2, C2263l2 c2263l2, List<String> list) {
        String string;
        String str;
        W5 w5D = d(w5);
        try {
            JSONArray jSONArray = new JSONArray();
            for (PermissionState permissionState : collection) {
                jSONArray.put(new JSONObject().put("name", permissionState.name).put("granted", permissionState.granted));
            }
            JSONObject jSONObject = new JSONObject();
            if (f2 != null) {
                jSONObject.put("background_restricted", f2.b);
                E2 e2 = f2.f5670a;
                c2263l2.getClass();
                if (e2 != null) {
                    switch (e2) {
                        case EXEMPTED:
                            str = "EXEMPTED";
                            break;
                        case ACTIVE:
                            str = "ACTIVE";
                            break;
                        case WORKING_SET:
                            str = "WORKING_SET";
                            break;
                        case FREQUENT:
                            str = "FREQUENT";
                            break;
                        case RARE:
                            str = "RARE";
                            break;
                        case RESTRICTED:
                            str = "RESTRICTED";
                            break;
                        case UNKNOWN:
                            str = "UNKNOWN";
                            break;
                        default:
                            break;
                    }
                    jSONObject.put("app_standby_bucket", str);
                }
                str = null;
                jSONObject.put("app_standby_bucket", str);
            }
            string = new JSONObject().put(App.JsonKeys.APP_PERMISSIONS, jSONArray).put("background_restrictions", jSONObject).put("available_providers", new JSONArray((Collection) list)).toString();
        } catch (Throwable unused) {
            string = "";
        }
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5D.d = 12288;
        w5D.setValue(string);
        return w5D;
    }

    public static W5 a(W5 w5, String str) {
        W5 w5D = d(w5);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5D.d = 12289;
        w5D.setValue(str);
        return w5D;
    }

    public static W5 a() {
        W5 w5 = new W5("", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = 16384;
        return w5;
    }

    public static W5 a(String str) {
        W5 w5 = new W5("", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = 12320;
        w5.b = str;
        w5.l = EnumC2469t9.JS;
        return w5;
    }
}
