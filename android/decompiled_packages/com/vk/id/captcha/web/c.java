package com.vk.id.captcha.web;

import android.content.res.Configuration;
import android.net.Uri;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UrlDecorator.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Configuration f5367a;

    public c(Configuration configuration) {
        Intrinsics.checkNotNullParameter(configuration, "");
        this.f5367a = configuration;
    }

    public final String a(String str) {
        Intrinsics.checkNotNullParameter(str, "");
        Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
        int i = this.f5367a.uiMode & 48;
        String str2 = "light";
        if (i != 16 && i == 32) {
            str2 = "dark";
        }
        String string = builderBuildUpon.appendQueryParameter("scheme", str2).build().toString();
        Intrinsics.checkNotNullExpressionValue(string, "");
        return string;
    }
}
