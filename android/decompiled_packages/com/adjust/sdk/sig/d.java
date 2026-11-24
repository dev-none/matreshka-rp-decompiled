package com.adjust.sdk.sig;

import android.content.Context;
import android.util.Log;
import com.google.common.base.Ascii;
import com.unity3d.ads.metadata.InAppPurchaseMetaData;
import io.sentry.ProfileChunk;
import java.security.InvalidKeyException;
import java.security.UnrecoverableKeyException;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f4214a = false;

    public static void a(Set set, Map map, Map map2) {
        Iterator it = set.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            if (map.containsKey(str)) {
                map2.put(str, (String) map.get(str));
            }
        }
    }

    public static void a(Context context, c cVar, a aVar, Map map, String str, String str2) throws Exception {
        byte[] bArrA;
        if (f4214a) {
            Log.e("SignerInstance", "sign: library received error. It has locked down");
            return;
        }
        if (map == null || map.size() == 0 || str == null || str2 == null) {
            Log.e("SignerInstance", "sign: One or more parameters are null");
            return;
        }
        map.put("activity_kind", str);
        map.put(ProfileChunk.JsonKeys.CLIENT_SDK, str2);
        int i = 2;
        while (true) {
            if (i <= 0) {
                bArrA = null;
                break;
            }
            try {
                cVar.b(context);
                bArrA = cVar.a(context, map.toString().getBytes("UTF-8"));
                break;
            } catch (b e) {
                Log.e("SignerInstance", "sign: Api is less than JellyBean-4-18");
                f4214a = true;
                map.remove("activity_kind");
                map.remove(ProfileChunk.JsonKeys.CLIENT_SDK);
                throw e;
            } catch (InvalidKeyException e2) {
                e = e2;
            } catch (UnrecoverableKeyException e3) {
                e = e3;
            } catch (Exception e4) {
                Log.e("SignerInstance", "sign: Received an Exception: " + e4.getMessage(), e4);
                map.remove("activity_kind");
                map.remove(ProfileChunk.JsonKeys.CLIENT_SDK);
                throw e4;
            }
            Log.e("SignerInstance", "sign: Received a retriable exception: " + e.getMessage(), e);
            Log.e("SignerInstance", "sign: Attempting retry #" + i);
            i += -1;
            cVar.a(context);
        }
        if (i == 0) {
            f4214a = true;
            map.remove("activity_kind");
            map.remove(ProfileChunk.JsonKeys.CLIENT_SDK);
            return;
        }
        byte[] bArrA2 = ((NativeLibHelper) aVar).a(context, map, bArrA, cVar.f4213a);
        if (bArrA2 == null) {
            Log.e("SignerInstance", "sign: Returned an null signature. Exiting...");
            map.remove("activity_kind");
            map.remove(ProfileChunk.JsonKeys.CLIENT_SDK);
            return;
        }
        int length = bArrA2.length;
        char[] cArr = e.f4215a;
        char[] cArr2 = new char[length * 2];
        for (int i2 = 0; i2 < length; i2++) {
            byte b = bArrA2[i2];
            int i3 = i2 * 2;
            char[] cArr3 = e.f4215a;
            cArr2[i3] = cArr3[(b & 255) >>> 4];
            cArr2[i3 + 1] = cArr3[b & Ascii.SI];
        }
        map.put(InAppPurchaseMetaData.KEY_SIGNATURE, new String(cArr2));
        map.remove("activity_kind");
        map.remove(ProfileChunk.JsonKeys.CLIENT_SDK);
    }
}
