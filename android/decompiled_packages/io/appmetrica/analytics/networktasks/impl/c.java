package io.appmetrica.analytics.networktasks.impl;

import android.net.Uri;
import androidx.webkit.ProxyConfig;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6491a;

    public c(String str) {
        this.f6491a = a(str);
    }

    public static String a(String str) {
        if (str == null || str.length() == 0) {
            return str;
        }
        Uri uri = Uri.parse(str);
        return Intrinsics.areEqual(ProxyConfig.MATCH_HTTP, uri.getScheme()) ? uri.buildUpon().scheme("https").build().toString() : str;
    }
}
