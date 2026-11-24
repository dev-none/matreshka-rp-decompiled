package com.google.android.play.core.assetpacks.model;

import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
public final class b {
    public static String a(String str, String str2) {
        return str + StringUtils.PROCESS_POSTFIX_DELIMITER + str2;
    }

    public static String b(String str, String str2, String str3) {
        return str + StringUtils.PROCESS_POSTFIX_DELIMITER + str2 + StringUtils.PROCESS_POSTFIX_DELIMITER + str3;
    }
}
