package com.ironsource.adqualitysdk.sdk.i;

import android.util.Log;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᑉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0618 extends RuntimeException {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final Throwable f2154;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC1060 f2155;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2156;

    public AbstractC0618(String str, AbstractC1060 abstractC1060, Throwable th) {
        this.f2156 = str;
        this.f2155 = abstractC1060;
        this.f2154 = th;
    }

    @Override // java.lang.Throwable
    public final String toString() {
        String str;
        StringBuilder sb = new StringBuilder();
        sb.append(mo8344());
        sb.append(StringFog.decrypt("G7k=\n", "IZlG/H4Izlg=\n"));
        sb.append(this.f2156);
        sb.append('\n');
        sb.append(this.f2155);
        if (this.f2154 != null) {
            str = StringFog.decrypt("8Nc/dH7+1tmY7WQh\n", "+pReAQ2bsvk=\n") + Log.getStackTraceString(this.f2154);
        } else {
            str = "";
        }
        sb.append(str);
        return sb.toString();
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract String mo8344();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8596(String str) {
        AbstractC0728.m8662(str, this.f2156, null, this);
    }
}
