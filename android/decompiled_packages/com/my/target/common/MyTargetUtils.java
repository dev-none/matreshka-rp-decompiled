package com.my.target.common;

import android.content.Context;
import com.my.target.bb;
import com.my.target.d2;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class MyTargetUtils {
    public static Map<String, String> collectInfo(Context context) {
        return d2.b().a(MyTargetManager.getSdkConfig(), MyTargetPrivacy.currentPrivacy(), null, context);
    }

    public static void sendStat(String str, Context context) {
        bb.c(str, context);
    }
}
