package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import kotlin.collections.SetsKt;
import kotlin.jvm.functions.Function0;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2154gm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Set f6101a = SetsKt.setOf((Object[]) new String[]{"appmetrica_clids", StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH, StartupParamsCallback.APPMETRICA_DEVICE_ID, "appmetrica_get_ad_url", "appmetrica_report_ad_url", StartupParamsCallback.APPMETRICA_UUID});
    public static final SystemTimeProvider b = new SystemTimeProvider();
    public static final K3 c = new K3();

    public static final boolean a(String str) {
        return !(str == null || str.length() == 0);
    }

    /* JADX WARN: Code duplicated, block: B:51:0x00ae A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:68:0x0017 A[SYNTHETIC] */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static final boolean a(C2231jm c2231jm, Collection collection, Map map, Function0 function0) {
        boolean zA;
        if (collection != null && !collection.isEmpty() && !collection.isEmpty()) {
            Iterator it = collection.iterator();
            while (it.hasNext()) {
                String str = (String) it.next();
                switch (str.hashCode()) {
                    case -1367801046:
                        if (str.equals(StartupParamsCallback.APPMETRICA_UUID)) {
                            zA = a(c2231jm.d);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                    case 155670667:
                        if (str.equals("appmetrica_get_ad_url")) {
                            zA = a(c2231jm.i);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                    case 299713912:
                        if (str.equals(StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH)) {
                            zA = a(c2231jm.b);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                    case 530949152:
                        if (str.equals("appmetrica_clids")) {
                            K3 k3 = c;
                            H3 h3 = (H3) function0.invoke();
                            k3.getClass();
                            zA = K3.a(map, c2231jm, h3);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                    case 703740463:
                        if (str.equals("appmetrica_report_ad_url")) {
                            zA = a(c2231jm.j);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                    case 1117383061:
                        if (str.equals(StartupParamsCallback.APPMETRICA_DEVICE_ID)) {
                            zA = a(c2231jm.f6159a);
                            if (!zA) {
                                return false;
                            }
                        }
                        break;
                }
                if (c2231jm.w) {
                    return false;
                }
                if (b.currentTimeSeconds() > c2231jm.o + ((long) c2231jm.z.f5696a)) {
                    return false;
                }
            }
        }
        return true;
    }
}
