package com.vk.id.captcha.web;

import android.net.Uri;
import android.webkit.URLUtil;
import java.util.Locale;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* JADX INFO: compiled from: LinkScheme.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Lazy f5362a = LazyKt.lazy(new Function0<Regex>() { // from class: com.vk.id.captcha.web.a.1
        @Override // kotlin.jvm.functions.Function0
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final Regex invoke() {
            return new Regex("(^|[a-z0-9.\\-]*\\.)(vk|vkontakte)\\.(com|ru|me)");
        }
    });

    public final boolean a(String str) {
        Intrinsics.checkNotNullParameter(str, "");
        if (!URLUtil.isHttpsUrl(str)) {
            return false;
        }
        Uri uri = Uri.parse(str);
        Intrinsics.checkNotNull(uri);
        String host = uri.getHost();
        if (host == null || host.length() == 0) {
            return false;
        }
        String strValueOf = String.valueOf(uri.getHost());
        Locale locale = Locale.getDefault();
        Intrinsics.checkNotNullExpressionValue(locale, "");
        String lowerCase = strValueOf.toLowerCase(locale);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "");
        return ((Regex) this.f5362a.getValue()).matches(lowerCase);
    }
}
