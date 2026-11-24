package ru.rustore.sdk.metrics.internal;

import java.net.URL;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class v extends Lambda implements Function0<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ URL f6674a;
    public final /* synthetic */ int b;
    public final /* synthetic */ String c;
    public final /* synthetic */ String d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(URL url, int i, String str, String str2) {
        super(0);
        this.f6674a = url;
        this.b = i;
        this.c = str;
        this.d = str2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final String invoke() {
        return StringsKt.trimIndent("\n                    HTTP REQUEST\n                    URL: " + this.f6674a + "\n                    CODE: " + this.b + "\n                    BODY: " + this.c + "\n                    HEADER X-Metrics-Request-Time: " + this.d + "\n                ");
    }
}
