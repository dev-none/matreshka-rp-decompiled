package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0626 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f2211;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0644 f2212;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ List f2213;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f2214;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f2215;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2216;

    public C0626(C0418 c0418, String str, Context context, String str2, List list, C0644 c0644) {
        this.f2211 = c0418;
        this.f2216 = str;
        this.f2215 = context;
        this.f2214 = str2;
        this.f2213 = list;
        this.f2212 = c0644;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        AbstractC0323.m8477(StringFog.decrypt("eCWm9HebwTJJB6n0c5/QLw==\n", "O0rImhL4tV0=\n"), StringFog.decrypt("JS4Y8BAFlpcWKR/jWQeVkAIlEvAWFto=\n", "bEBxhHlk+v4=\n") + this.f2216);
        try {
            C0418 c0418 = this.f2211;
            Context context = this.f2215;
            String str = this.f2214;
            String str2 = this.f2216;
            List list = this.f2213;
            C0644 c0644 = this.f2212;
            c0418.getClass();
            C0613 c0613 = new C0613(new AtomicBoolean(false), c0644);
            Iterator it = list.iterator();
            while (it.hasNext()) {
                c0418.m8530(context, str, str2, (AbstractC0265) it.next(), c0613);
            }
        } catch (Throwable th) {
            C0331 c0331 = this.f2211.f1526;
            if (c0331 != null) {
                AbstractC1766n.m8384(new C0394(c0331, this.f2216, EnumC0405.f1504));
            }
            HashMap mapM8519 = C0418.m8519(this.f2211);
            String str3 = this.f2214;
            Throwable cause = th;
            while (cause.getCause() != null) {
                cause = cause.getCause();
            }
            mapM8519.put(str3, cause.toString());
            AbstractC1104.m8888(StringFog.decrypt("1b852V6K9r7knTbZWo7now==\n", "ltBXtzvpgtE=\n"), StringFog.decrypt("9XN4v4aznwzVYH65mvTcHd9vZLWX55MMkA==\n", "sAEK0PST/H4=\n") + this.f2216, th, true, true, false);
        }
    }
}
