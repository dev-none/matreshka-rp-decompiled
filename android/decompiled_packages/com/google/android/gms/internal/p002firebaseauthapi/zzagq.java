package com.google.android.gms.internal.p002firebaseauthapi;

import androidx.collection.ArrayMap;
import com.google.firebase.FirebaseApp;
import com.google.firebase.auth.internal.zzcd;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zzagq {
    private static final Map<String, zzagt> zza = new ArrayMap();
    private static final Map<String, List<WeakReference<zzags>>> zzb = new ArrayMap();

    private static String zza(String str, int i, boolean z) {
        if (z) {
            return "http://[" + str + "]:" + i + "/";
        }
        return "http://" + str + StringUtils.PROCESS_POSTFIX_DELIMITER + i + "/";
    }

    public static String zza(String str) {
        zzagt zzagtVar;
        Map<String, zzagt> map = zza;
        synchronized (map) {
            zzagtVar = map.get(str);
        }
        if (zzagtVar == null) {
            throw new IllegalStateException("Tried to get the emulator widget endpoint, but no emulator endpoint overrides found.");
        }
        return zza(zzagtVar.zzb(), zzagtVar.zza(), zzagtVar.zzb().contains(StringUtils.PROCESS_POSTFIX_DELIMITER)) + "emulator/auth/handler";
    }

    public static String zza(String str, String str2) {
        zzagt zzagtVar;
        String str3;
        Map<String, zzagt> map = zza;
        synchronized (map) {
            zzagtVar = map.get(str);
        }
        if (zzagtVar != null) {
            str3 = "" + zza(zzagtVar.zzb(), zzagtVar.zza(), zzagtVar.zzb().contains(StringUtils.PROCESS_POSTFIX_DELIMITER));
        } else {
            str3 = "https://";
        }
        if (!str2.equals(zzcd.zza())) {
            str3 = str3 + str2 + "-";
        }
        return str3 + "identityplatform.googleapis.com/v2beta";
    }

    public static String zzb(String str) {
        zzagt zzagtVar;
        String str2;
        Map<String, zzagt> map = zza;
        synchronized (map) {
            zzagtVar = map.get(str);
        }
        if (zzagtVar != null) {
            str2 = "" + zza(zzagtVar.zzb(), zzagtVar.zza(), zzagtVar.zzb().contains(StringUtils.PROCESS_POSTFIX_DELIMITER));
        } else {
            str2 = "https://";
        }
        return str2 + "www.googleapis.com/identitytoolkit/v3/relyingparty";
    }

    public static String zzc(String str) {
        zzagt zzagtVar;
        String str2;
        Map<String, zzagt> map = zza;
        synchronized (map) {
            zzagtVar = map.get(str);
        }
        if (zzagtVar != null) {
            str2 = "" + zza(zzagtVar.zzb(), zzagtVar.zza(), zzagtVar.zzb().contains(StringUtils.PROCESS_POSTFIX_DELIMITER));
        } else {
            str2 = "https://";
        }
        return str2 + "identitytoolkit.googleapis.com/v2";
    }

    public static String zzd(String str) {
        zzagt zzagtVar;
        String str2;
        Map<String, zzagt> map = zza;
        synchronized (map) {
            zzagtVar = map.get(str);
        }
        if (zzagtVar != null) {
            str2 = "" + zza(zzagtVar.zzb(), zzagtVar.zza(), zzagtVar.zzb().contains(StringUtils.PROCESS_POSTFIX_DELIMITER));
        } else {
            str2 = "https://";
        }
        return str2 + "securetoken.googleapis.com/v1";
    }

    public static void zza(String str, zzags zzagsVar) {
        Map<String, List<WeakReference<zzags>>> map = zzb;
        synchronized (map) {
            if (map.containsKey(str)) {
                map.get(str).add(new WeakReference<>(zzagsVar));
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.add(new WeakReference<>(zzagsVar));
                map.put(str, arrayList);
            }
        }
    }

    public static void zza(FirebaseApp firebaseApp, String str, int i) {
        String apiKey = firebaseApp.getOptions().getApiKey();
        Map<String, zzagt> map = zza;
        synchronized (map) {
            map.put(apiKey, new zzagt(str, i));
        }
        Map<String, List<WeakReference<zzags>>> map2 = zzb;
        synchronized (map2) {
            if (map2.containsKey(apiKey)) {
                Iterator<WeakReference<zzags>> it = map2.get(apiKey).iterator();
                boolean z = false;
                while (it.hasNext()) {
                    zzags zzagsVar = it.next().get();
                    if (zzagsVar != null) {
                        zzagsVar.zza();
                        z = true;
                    }
                }
                if (!z) {
                    zza.remove(apiKey);
                }
            }
        }
    }

    public static boolean zza(FirebaseApp firebaseApp) {
        return zza.containsKey(firebaseApp.getOptions().getApiKey());
    }
}
