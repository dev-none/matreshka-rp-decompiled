package com.vk.id.captcha.web;

import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.net.Uri;
import android.view.View;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: UrlValidator.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final boolean f5368a;
    private final String b;

    public d(boolean z, String str) {
        Intrinsics.checkNotNullParameter(str, "");
        this.f5368a = z;
        this.b = str;
    }

    public final boolean a(View view, Uri uri) {
        if (uri != null && this.f5368a) {
            String string = uri.toString();
            Intrinsics.checkNotNullExpressionValue(string, "");
            if (StringsKt.startsWith$default(string, StringsKt.substringBefore$default(this.b, "?", (String) null, 2, (Object) null), false, 2, (Object) null)) {
                return false;
            }
        }
        if (uri != null && view != null) {
            a aVar = new a();
            String string2 = uri.toString();
            Intrinsics.checkNotNullExpressionValue(string2, "");
            if (aVar.a(string2)) {
                Intent data = new Intent("android.intent.action.VIEW").setData(uri);
                Intrinsics.checkNotNullExpressionValue(data, "");
                try {
                    view.getContext().startActivity(data);
                    return true;
                } catch (ActivityNotFoundException unused) {
                    return false;
                }
            }
        }
        return true;
    }
}
