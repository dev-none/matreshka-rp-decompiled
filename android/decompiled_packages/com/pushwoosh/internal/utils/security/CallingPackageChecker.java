package com.pushwoosh.internal.utils.security;

import android.content.ContentProvider;
import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes6.dex */
public class CallingPackageChecker {
    public static void checkCallingPackage(ContentProvider contentProvider) {
        Context context = contentProvider.getContext();
        String callingPackage = contentProvider.getCallingPackage();
        if (context == null || !TextUtils.equals(callingPackage, context.getPackageName())) {
            throw new SecurityException("Provider does not allow granting of Uri permissions");
        }
    }

    public static void checkIfTrustedPackage(ContentProvider contentProvider, String[] strArr) {
        String callingPackage = contentProvider.getCallingPackage();
        if (strArr.length > 0) {
            for (String str : strArr) {
                if (TextUtils.equals(callingPackage, str)) {
                    return;
                }
            }
        }
        throw new SecurityException(contentProvider.getClass().getName().concat("queried by an untrusted package."));
    }
}
