package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0610 implements InterfaceC1023 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f2132;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C0613 f2133;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0265 f2134;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ String f2135;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0349 f2136;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f2137;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2138;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ boolean f2139;

    public C0610(C0418 c0418, boolean z, String str, Context context, AbstractC0349 abstractC0349, String str2, AbstractC0265 abstractC0265, C0613 c0613) {
        this.f2132 = c0418;
        this.f2139 = z;
        this.f2138 = str;
        this.f2137 = context;
        this.f2136 = abstractC0349;
        this.f2135 = str2;
        this.f2134 = abstractC0265;
        this.f2133 = c0613;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1023
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8595(String str) {
        C0331 c0331;
        if (TextUtils.isEmpty(str)) {
            if (this.f2139 || (c0331 = this.f2132.f1526) == null) {
                return;
            }
            AbstractC1766n.m8384(new C0394(c0331, this.f2138, EnumC0405.f1503));
            return;
        }
        C0418 c0418 = this.f2132;
        Context context = this.f2137;
        AbstractC0349 abstractC0349 = this.f2136;
        c0418.getClass();
        C0929 c0929 = TextUtils.isEmpty(str) ? null : new C0929(context, new C0666(str, c0418.f1528), c0418.f1522, c0418.f1529, abstractC0349);
        C0418 c0419 = this.f2132;
        Context context2 = this.f2137;
        String str2 = this.f2135;
        String str3 = this.f2138;
        AbstractC0265 abstractC0265 = this.f2134;
        AbstractC0349 abstractC03410 = this.f2136;
        C0613 c0613 = this.f2133;
        c0419.getClass();
        AbstractC1766n.m8388(new C0537(c0419, c0929, abstractC0265, str3, false, c0613, str2, abstractC03410, context2));
    }
}
