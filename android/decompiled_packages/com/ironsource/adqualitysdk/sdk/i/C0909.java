package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.telephony.TelephonyManager;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.net.NetworkInterface;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ί, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0909 implements InterfaceC0573 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f3228;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String[] f3227 = {StringFog.decrypt("xbTE\n", "scGqvCOQ4Q4=\n"), StringFog.decrypt("XXDX\n", "LQCnf5Q7MNE=\n"), StringFog.decrypt("AcUom2E=\n", "aLVb/gL0iCY=\n")};

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String[] f3226 = {StringFog.decrypt("doH6/A==\n", "AvSUzOo4I+4=\n"), StringFog.decrypt("GFL4VQ==\n", "aCKIZX0AO60=\n")};

    public C0909(Context context) {
        this.f3228 = context;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    public final String getName() {
        return StringFog.decrypt("av8s/NpzJdZt9D/ux3E8+Wru\n", "BJpYi7UBTpA=\n");
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    /* JADX INFO: renamed from: ﾒ */
    public final C0885 mo8551() {
        boolean z;
        boolean z2;
        String networkOperatorName;
        String strDecrypt;
        List list;
        String strDecrypt2;
        String simCountryIso;
        Network activeNetwork;
        NetworkCapabilities networkCapabilities;
        ArrayList arrayList = new ArrayList();
        boolean z3 = true;
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) this.f3228.getSystemService(StringFog.decrypt("c2I28uJH7AlmZCzl\n", "EA1YnIckmGA=\n"));
            z = (connectivityManager == null || (activeNetwork = connectivityManager.getActiveNetwork()) == null || (networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork)) == null) ? false : !networkCapabilities.hasCapability(15);
        } catch (Throwable unused) {
        }
        if (z) {
            arrayList.add(30);
        }
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            if (networkInterfaces != null) {
                loop1: while (networkInterfaces.hasMoreElements()) {
                    String lowerCase = networkInterfaces.nextElement().getName().toLowerCase();
                    String[] strArr = f3226;
                    int length = strArr.length;
                    int i = 0;
                    while (true) {
                        if (i >= length) {
                            String[] strArr2 = f3227;
                            int length2 = strArr2.length;
                            int i2 = 0;
                            while (true) {
                                if (i2 < length2) {
                                    if (!lowerCase.startsWith(strArr2[i2])) {
                                        i2++;
                                    }
                                }
                            }
                        } else if (!lowerCase.equals(strArr[i])) {
                            i++;
                        }
                        arrayList.add(31);
                        break loop1;
                    }
                }
            }
        } catch (Exception unused2) {
        }
        try {
            String property = System.getProperty(StringFog.decrypt("soNpTuzmuQmijlVRseI=\n", "2vcdPsKWy2Y=\n"));
            z2 = (property == null || property.trim().isEmpty()) ? false : true;
        } catch (Exception unused3) {
        }
        if (z2) {
            arrayList.add(32);
        }
        try {
            TelephonyManager telephonyManager = (TelephonyManager) this.f3228.getSystemService(StringFog.decrypt("WJbsUrE=\n", "KP6DPNRluyc=\n"));
            if (telephonyManager == null || (networkOperatorName = telephonyManager.getNetworkOperatorName()) == null || networkOperatorName.trim().isEmpty()) {
                networkOperatorName = null;
            }
        } catch (Exception unused4) {
        }
        try {
            ConnectivityManager connectivityManager2 = (ConnectivityManager) this.f3228.getSystemService(StringFog.decrypt("uqhOhWrshbWvrlSS\n", "2ccg6w+P8dw=\n"));
            if (connectivityManager2 == null) {
                strDecrypt = StringFog.decrypt("USr/jxLEEg==\n", "JESU4X2zfAs=\n");
            } else {
                Network activeNetwork2 = connectivityManager2.getActiveNetwork();
                if (activeNetwork2 == null) {
                    strDecrypt = StringFog.decrypt("rG6ksg==\n", "wgHK18MwZPo=\n");
                } else {
                    NetworkCapabilities networkCapabilities2 = connectivityManager2.getNetworkCapabilities(activeNetwork2);
                    if (networkCapabilities2 == null) {
                        strDecrypt = StringFog.decrypt("5k9Oz0vxPA==\n", "kyEloSSGUsc=\n");
                    } else if (networkCapabilities2.hasTransport(1)) {
                        strDecrypt = StringFog.decrypt("Iup1CA==\n", "VYMTYeZLlWY=\n");
                    } else if (networkCapabilities2.hasTransport(0)) {
                        strDecrypt = StringFog.decrypt("wpDBtHCo2+E=\n", "ofWt2AXEupM=\n");
                    } else if (networkCapabilities2.hasTransport(3)) {
                        strDecrypt = StringFog.decrypt("cAOPyY1V5kI=\n", "FXfnrP87gzY=\n");
                    } else if (networkCapabilities2.hasTransport(2)) {
                        strDecrypt = StringFog.decrypt("Cb+vGCrAJfgD\n", "a9PafV6vSow=\n");
                    } else {
                        strDecrypt = networkCapabilities2.hasTransport(4) ? StringFog.decrypt("0cCq\n", "p7DEjmbg1QU=\n") : StringFog.decrypt("zcwqnw8=\n", "orhC+n18qAg=\n");
                    }
                }
            }
        } catch (Throwable unused5) {
            strDecrypt = StringFog.decrypt("QejkIvrD5A==\n", "NIaPTJW0iqQ=\n");
        }
        try {
            TelephonyManager telephonyManager2 = (TelephonyManager) this.f3228.getSystemService(StringFog.decrypt("zDq2IVA=\n", "vFLZTzVVUp0=\n"));
            if (telephonyManager2 != null && (simCountryIso = telephonyManager2.getSimCountryIso()) != null) {
                simCountryIso.trim().isEmpty();
            }
        } catch (Exception unused6) {
        }
        try {
            Enumeration<NetworkInterface> networkInterfaces2 = NetworkInterface.getNetworkInterfaces();
            if (networkInterfaces2 == null) {
                list = Collections.EMPTY_LIST;
            } else {
                ArrayList arrayList2 = new ArrayList();
                while (networkInterfaces2.hasMoreElements()) {
                    arrayList2.add(networkInterfaces2.nextElement().getName());
                }
                list = arrayList2;
            }
        } catch (Exception unused7) {
            list = Collections.EMPTY_LIST;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(StringFog.decrypt("ck3yJ8E=\n", "Gz6kV6/7OBs=\n"), z);
            jSONObject.put(StringFog.decrypt("nHuMoKgwrJ+Lbp0=\n", "8h7418dCx8s=\n"), strDecrypt);
            jSONObject.put(StringFog.decrypt("Y226mZsn4HZlcIyCkyrrUG4=\n", "Ch7q6/RfmTU=\n"), z2);
            String strDecrypt3 = StringFog.decrypt("PqqnMldiqhszuQ==\n", "VsvUcTYQ2HI=\n");
            if (networkOperatorName == null) {
                z3 = false;
            }
            jSONObject.put(strDecrypt3, z3);
            jSONObject.put(StringFog.decrypt("T16nt5mlCktDc7ynhbc=\n", "JjDT0uvDayg=\n"), list.size());
            strDecrypt2 = jSONObject.toString();
        } catch (Exception unused8) {
            strDecrypt2 = StringFog.decrypt("x2w=\n", "vBE6ZvGZEa0=\n");
        }
        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt2, null);
    }
}
