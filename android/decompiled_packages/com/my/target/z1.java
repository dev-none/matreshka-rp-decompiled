package com.my.target;

import android.content.Context;
import android.location.Location;
import android.location.LocationManager;
import android.net.wifi.ScanResult;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.SystemClock;
import android.telephony.CellIdentityCdma;
import android.telephony.CellIdentityGsm;
import android.telephony.CellIdentityLte;
import android.telephony.CellIdentityNr;
import android.telephony.CellIdentityTdscdma;
import android.telephony.CellIdentityWcdma;
import android.telephony.CellInfo;
import android.telephony.CellInfoCdma;
import android.telephony.CellInfoGsm;
import android.telephony.CellInfoLte;
import android.telephony.CellInfoWcdma;
import android.telephony.CellLocation;
import android.telephony.CellSignalStrengthCdma;
import android.telephony.CellSignalStrengthGsm;
import android.telephony.CellSignalStrengthLte;
import android.telephony.CellSignalStrengthNr;
import android.telephony.CellSignalStrengthTdscdma;
import android.telephony.CellSignalStrengthWcdma;
import android.telephony.TelephonyManager;
import android.telephony.gsm.GsmCellLocation;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.my.target.common.MyTargetConfig;
import com.pushwoosh.n.j$$ExternalSyntheticApiModelOutline0;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class z1 extends c2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public d f4878a = new d(new HashMap(), 0);

    public static class a implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4879a = "cdma";
        public final int b;
        public final int c;
        public final int d;
        public final int e;
        public final int f;
        public final int g;
        public final int h;
        public final int i;
        public final int j;
        public final int k;
        public final int l;
        public final int m;
        public final int n;
        public final int o;
        public final int p;

        public a(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11, int i12, int i13, int i14, int i15) {
            this.b = i;
            this.c = i2;
            this.d = i3;
            this.e = i4;
            this.f = i5;
            this.g = i6;
            this.h = i7;
            this.i = i8;
            this.j = i9;
            this.k = i10;
            this.l = i11;
            this.m = i12;
            this.n = i13;
            this.o = i14;
            this.p = i15;
        }

        @Override // com.my.target.z1.b
        public String a() {
            return this.f4879a + StringUtils.COMMA + this.b + StringUtils.COMMA + this.c + StringUtils.COMMA + this.d + StringUtils.COMMA + this.e + StringUtils.COMMA + this.f + StringUtils.COMMA + this.g + StringUtils.COMMA + this.h + StringUtils.COMMA + this.i + StringUtils.COMMA + this.j + StringUtils.COMMA + this.k + StringUtils.COMMA + this.l + StringUtils.COMMA + this.m + StringUtils.COMMA + this.n + StringUtils.COMMA + this.o + StringUtils.COMMA + this.p;
        }
    }

    public interface b {
        String a();
    }

    public static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public List f4880a;

        public c(Context context) {
            b bVarB;
            this.f4880a = null;
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            if (telephonyManager == null) {
                return;
            }
            try {
                boolean z = Build.VERSION.SDK_INT < 29 && c2.a("android.permission.ACCESS_COARSE_LOCATION", context);
                boolean zA = c2.a("android.permission.ACCESS_FINE_LOCATION", context);
                if (z || zA) {
                    List listA = a(telephonyManager);
                    this.f4880a = listA;
                    if ((listA == null || listA.isEmpty()) && (bVarB = b(telephonyManager)) != null) {
                        ArrayList arrayList = new ArrayList();
                        this.f4880a = arrayList;
                        arrayList.add(bVarB);
                    }
                }
            } catch (Throwable th) {
                gb.a("EnvironmentParamsDataProvider$CellEnvironment: Environment provider error - " + th.getMessage());
            }
        }

        public static List a(TelephonyManager telephonyManager) {
            Object eVar;
            Object aVar;
            List<CellInfo> allCellInfo = telephonyManager.getAllCellInfo();
            if (allCellInfo == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (CellInfo cellInfo : allCellInfo) {
                if (cellInfo.isRegistered()) {
                    if (cellInfo instanceof CellInfoLte) {
                        CellInfoLte cellInfoLte = (CellInfoLte) cellInfo;
                        CellIdentityLte cellIdentity = cellInfoLte.getCellIdentity();
                        CellSignalStrengthLte cellSignalStrength = cellInfoLte.getCellSignalStrength();
                        long ci = cellIdentity.getCi();
                        int i = Build.VERSION.SDK_INT;
                        eVar = new e("lte", ci, Integer.MAX_VALUE, i >= 28 ? cellIdentity.getMccString() : String.valueOf(cellIdentity.getMcc()), i >= 28 ? cellIdentity.getMncString() : String.valueOf(cellIdentity.getMnc()), cellSignalStrength.getLevel(), cellSignalStrength.getDbm(), cellSignalStrength.getAsuLevel(), cellSignalStrength.getTimingAdvance(), cellIdentity.getEarfcn(), Integer.MAX_VALUE, Integer.MAX_VALUE, cellIdentity.getTac());
                    } else if (cellInfo instanceof CellInfoGsm) {
                        CellInfoGsm cellInfoGsm = (CellInfoGsm) cellInfo;
                        CellIdentityGsm cellIdentity2 = cellInfoGsm.getCellIdentity();
                        CellSignalStrengthGsm cellSignalStrength2 = cellInfoGsm.getCellSignalStrength();
                        long cid = cellIdentity2.getCid();
                        int lac = cellIdentity2.getLac();
                        int i2 = Build.VERSION.SDK_INT;
                        eVar = new e("gsm", cid, lac, i2 >= 28 ? cellIdentity2.getMccString() : String.valueOf(cellIdentity2.getMcc()), i2 >= 28 ? cellIdentity2.getMncString() : String.valueOf(cellIdentity2.getMnc()), cellSignalStrength2.getLevel(), cellSignalStrength2.getDbm(), cellSignalStrength2.getAsuLevel(), cellSignalStrength2.getTimingAdvance(), Integer.MAX_VALUE, cellIdentity2.getBsic(), cellIdentity2.getPsc(), Integer.MAX_VALUE);
                    } else if (cellInfo instanceof CellInfoWcdma) {
                        CellInfoWcdma cellInfoWcdma = (CellInfoWcdma) cellInfo;
                        CellIdentityWcdma cellIdentity3 = cellInfoWcdma.getCellIdentity();
                        CellSignalStrengthWcdma cellSignalStrength3 = cellInfoWcdma.getCellSignalStrength();
                        long cid2 = cellIdentity3.getCid();
                        int lac2 = cellIdentity3.getLac();
                        int i3 = Build.VERSION.SDK_INT;
                        eVar = new e("wcdma", cid2, lac2, i3 >= 28 ? cellIdentity3.getMccString() : String.valueOf(cellIdentity3.getMcc()), i3 >= 28 ? cellIdentity3.getMncString() : String.valueOf(cellIdentity3.getMnc()), cellSignalStrength3.getLevel(), cellSignalStrength3.getDbm(), cellSignalStrength3.getAsuLevel(), Integer.MAX_VALUE, cellIdentity3.getUarfcn(), Integer.MAX_VALUE, cellIdentity3.getPsc(), Integer.MAX_VALUE);
                    } else {
                        if (cellInfo instanceof CellInfoCdma) {
                            CellInfoCdma cellInfoCdma = (CellInfoCdma) cellInfo;
                            CellIdentityCdma cellIdentity4 = cellInfoCdma.getCellIdentity();
                            CellSignalStrengthCdma cellSignalStrength4 = cellInfoCdma.getCellSignalStrength();
                            aVar = new a(cellIdentity4.getNetworkId(), cellIdentity4.getSystemId(), cellIdentity4.getBasestationId(), cellIdentity4.getLatitude(), cellIdentity4.getLongitude(), cellSignalStrength4.getCdmaLevel(), cellSignalStrength4.getLevel(), cellSignalStrength4.getEvdoLevel(), cellSignalStrength4.getAsuLevel(), cellSignalStrength4.getCdmaDbm(), cellSignalStrength4.getDbm(), cellSignalStrength4.getEvdoDbm(), cellSignalStrength4.getEvdoEcio(), cellSignalStrength4.getCdmaEcio(), cellSignalStrength4.getEvdoSnr());
                        } else {
                            int i4 = Build.VERSION.SDK_INT;
                            if (i4 >= 29 && j$$ExternalSyntheticApiModelOutline0.m$1(cellInfo)) {
                                CellIdentityNr cellIdentityNrM9055m = j$$ExternalSyntheticApiModelOutline0.m9055m((Object) cellInfo.getCellIdentity());
                                CellSignalStrengthNr cellSignalStrengthNrM8987m = h4$$ExternalSyntheticApiModelOutline0.m8987m((Object) cellInfo.getCellSignalStrength());
                                aVar = new e("nr", cellIdentityNrM9055m.getNci(), Integer.MAX_VALUE, cellIdentityNrM9055m.getMccString(), cellIdentityNrM9055m.getMncString(), cellSignalStrengthNrM8987m.getLevel(), cellSignalStrengthNrM8987m.getDbm(), cellSignalStrengthNrM8987m.getAsuLevel(), Integer.MAX_VALUE, cellIdentityNrM9055m.getNrarfcn(), Integer.MAX_VALUE, Integer.MAX_VALUE, cellIdentityNrM9055m.getTac());
                            } else if (i4 >= 30 && j$$ExternalSyntheticApiModelOutline0.m9074m((Object) cellInfo)) {
                                CellIdentityTdscdma cellIdentity5 = j$$ExternalSyntheticApiModelOutline0.m9057m((Object) cellInfo).getCellIdentity();
                                CellSignalStrengthTdscdma cellSignalStrengthTdscdmaM9061m = j$$ExternalSyntheticApiModelOutline0.m9061m((Object) cellInfo.getCellSignalStrength());
                                aVar = new e("tdscdma", cellIdentity5.getCid(), cellIdentity5.getLac(), cellIdentity5.getMccString(), cellIdentity5.getMncString(), cellSignalStrengthTdscdmaM9061m.getLevel(), cellSignalStrengthTdscdmaM9061m.getDbm(), cellSignalStrengthTdscdmaM9061m.getAsuLevel(), Integer.MAX_VALUE, cellIdentity5.getUarfcn(), Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE);
                            }
                        }
                        eVar = aVar;
                    }
                    arrayList.add(eVar);
                }
            }
            return arrayList;
        }

        public static b b(TelephonyManager telephonyManager) {
            String str;
            String str2;
            String strSubstring;
            CellLocation cellLocation = telephonyManager.getCellLocation();
            String strSubstring2 = null;
            if (!(cellLocation instanceof GsmCellLocation)) {
                return null;
            }
            GsmCellLocation gsmCellLocation = (GsmCellLocation) cellLocation;
            String networkOperator = telephonyManager.getNetworkOperator();
            if (networkOperator == null || networkOperator.length() == 0) {
                str = null;
                str2 = null;
            } else {
                try {
                    strSubstring = networkOperator.substring(0, 3);
                    try {
                        strSubstring2 = networkOperator.substring(3);
                    } catch (Throwable unused) {
                        gb.a("EnvironmentParamsDataProvider$CellEnvironment: Unable to substring network operator " + networkOperator);
                    }
                } catch (Throwable unused2) {
                    strSubstring = null;
                }
                str2 = strSubstring2;
                str = strSubstring;
            }
            return new e("gsm", gsmCellLocation.getCid(), gsmCellLocation.getLac(), str, str2, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE);
        }
    }

    public static final class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Map f4881a;
        public final long b;

        public d(Map map, long j) {
            this.f4881a = map;
            this.b = j;
        }

        public long a() {
            return this.b;
        }

        public Map b() {
            return new HashMap(this.f4881a);
        }
    }

    public static class e implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4882a;
        public final String b;
        public final String c;
        public final long d;
        public final int e;
        public final int f;
        public final int g;
        public final int h;
        public final int i;
        public final int j;
        public final int k;
        public final int l;
        public final int m;

        public e(String str, long j, int i, String str2, String str3, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
            this.f4882a = str;
            this.d = j;
            this.e = i;
            this.b = str2 == null ? String.valueOf(Integer.MAX_VALUE) : str2;
            this.c = str3 == null ? String.valueOf(Integer.MAX_VALUE) : str3;
            this.f = i2;
            this.g = i3;
            this.h = i4;
            this.i = i5;
            this.j = i6;
            this.k = i7;
            this.l = i8;
            this.m = i9;
        }

        @Override // com.my.target.z1.b
        public String a() {
            return this.f4882a + StringUtils.COMMA + this.d + StringUtils.COMMA + this.e + StringUtils.COMMA + this.b + StringUtils.COMMA + this.c + StringUtils.COMMA + this.f + StringUtils.COMMA + this.g + StringUtils.COMMA + this.h + StringUtils.COMMA + this.i + StringUtils.COMMA + this.j + StringUtils.COMMA + this.k + StringUtils.COMMA + this.l + StringUtils.COMMA + this.m;
        }
    }

    public static final class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public WifiInfo f4883a;
        public List b;

        public f(Context context) {
            try {
                WifiManager wifiManager = (WifiManager) context.getApplicationContext().getSystemService("wifi");
                if (wifiManager != null && wifiManager.isWifiEnabled()) {
                    this.f4883a = wifiManager.getConnectionInfo();
                    if (z1.a(context)) {
                        this.b = wifiManager.getScanResults();
                    }
                    List list = this.b;
                    if (list == null) {
                        return;
                    }
                    Collections.sort(list, new Comparator() { // from class: com.my.target.z1$f$$ExternalSyntheticLambda0
                        @Override // java.util.Comparator
                        public final int compare(Object obj, Object obj2) {
                            return z1.f.a((ScanResult) obj, (ScanResult) obj2);
                        }
                    });
                }
            } catch (Throwable unused) {
                gb.a("EnvironmentParamsDataProvider$WiFiEnvironment: No permissions for access to wifi state");
            }
        }

        public static /* synthetic */ int a(ScanResult scanResult, ScanResult scanResult2) {
            return scanResult2.level - scanResult.level;
        }
    }

    public static boolean a(Context context) {
        return c2.a("android.permission.ACCESS_FINE_LOCATION", context) || c2.a("android.permission.ACCESS_COARSE_LOCATION", context);
    }

    public static void b(Map map, Context context) {
        LocationManager locationManager;
        if (a(context) && (locationManager = (LocationManager) context.getSystemService(FirebaseAnalytics.Param.LOCATION)) != null) {
            Location location = null;
            long j = 0;
            float f2 = Float.MAX_VALUE;
            String str = null;
            for (String str2 : locationManager.getAllProviders()) {
                try {
                    Location lastKnownLocation = locationManager.getLastKnownLocation(str2);
                    if (lastKnownLocation != null) {
                        gb.a("EnvironmentParamsDataProvider: LocationProvider - " + str2);
                        float accuracy = lastKnownLocation.getAccuracy();
                        long time = lastKnownLocation.getTime();
                        if (location == null || (time > j && accuracy < f2)) {
                            str = str2;
                            location = lastKnownLocation;
                            f2 = accuracy;
                            j = time;
                        }
                    }
                } catch (Throwable unused) {
                    gb.a("EnvironmentParamsDataProvider: No permissions for get geo data");
                }
            }
            if (location == null) {
                return;
            }
            String str3 = location.getLatitude() + StringUtils.COMMA + location.getLongitude() + StringUtils.COMMA + location.getAccuracy() + StringUtils.COMMA + location.getSpeed() + StringUtils.COMMA + (j / 1000);
            map.put(FirebaseAnalytics.Param.LOCATION, str3);
            gb.a("EnvironmentParamsDataProvider: Location - " + str3);
            map.put("location_provider", str);
        }
    }

    public final void c(Map map, Context context) {
        if (c2.a("android.permission.ACCESS_WIFI_STATE", context)) {
            f fVar = new f(context);
            WifiInfo wifiInfo = fVar.f4883a;
            if (wifiInfo != null) {
                String bssid = wifiInfo.getBSSID();
                if (bssid == null) {
                    bssid = "";
                }
                int linkSpeed = wifiInfo.getLinkSpeed();
                int networkId = wifiInfo.getNetworkId();
                int rssi = wifiInfo.getRssi();
                String ssid = wifiInfo.getSSID();
                if (ssid == null) {
                    ssid = "";
                }
                String str = bssid + StringUtils.COMMA + ssid + StringUtils.COMMA + rssi + StringUtils.COMMA + networkId + StringUtils.COMMA + linkSpeed;
                map.put("wifi", str);
                gb.a("EnvironmentParamsDataProvider: ip - " + wifiInfo.getIpAddress());
                gb.a("EnvironmentParamsDataProvider: wifi - " + str);
            }
            List list = fVar.b;
            if (list == null) {
                return;
            }
            int iMin = Math.min(list.size(), 5);
            int i = 0;
            while (i < iMin) {
                ScanResult scanResult = (ScanResult) list.get(i);
                gb.a(scanResult.level + "");
                String str2 = scanResult.BSSID;
                if (str2 == null) {
                    str2 = "";
                }
                String str3 = scanResult.SSID;
                if (str3 == null) {
                    str3 = "";
                }
                String str4 = str2 + StringUtils.COMMA + str3 + StringUtils.COMMA + scanResult.level;
                StringBuilder sb = new StringBuilder("wifi");
                i++;
                sb.append(i);
                map.put(sb.toString(), str4);
                gb.a("EnvironmentParamsDataProvider: wifi" + i + " - " + str4);
            }
        }
    }

    public synchronized d a() {
        return this.f4878a;
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void c(MyTargetConfig myTargetConfig, Context context) {
        long jUptimeMillis = SystemClock.uptimeMillis();
        if (!myTargetConfig.isTrackingLocationEnabled) {
            synchronized (this) {
                this.f4878a = new d(new HashMap(), SystemClock.uptimeMillis() - jUptimeMillis);
            }
            return;
        }
        HashMap map = new HashMap();
        b(map, context);
        if (myTargetConfig.isTrackingEnvironmentEnabled) {
            c(map, context);
            a(map, context);
        }
        synchronized (this) {
            this.f4878a = new d(map, SystemClock.uptimeMillis() - jUptimeMillis);
        }
    }

    public final void a(Map map, Context context) {
        List list;
        if (c2.a("android.permission.ACCESS_COARSE_LOCATION", context) && (list = new c(context).f4880a) != null) {
            int i = 0;
            while (i < list.size()) {
                StringBuilder sb = new StringBuilder("cell");
                sb.append(i != 0 ? Integer.valueOf(i) : "");
                map.put(sb.toString(), ((b) list.get(i)).a());
                i++;
            }
        }
    }

    public synchronized Map b(final MyTargetConfig myTargetConfig, final Context context) {
        d dVarA;
        dVarA = a();
        f0.e(new Runnable() { // from class: com.my.target.z1$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(myTargetConfig, context);
            }
        });
        return dVarA.b();
    }
}
