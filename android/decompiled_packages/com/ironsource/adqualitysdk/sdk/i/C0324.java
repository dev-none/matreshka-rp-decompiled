package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Handler;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualityConfig;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityLogLevel;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Map;
import java.util.UUID;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ξ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0324 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C1142 f1190;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ Activity f1191;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ Application f1192;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f1193;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ String f1194;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ISAdQualityConfig f1195;

    public C0324(C1142 c1142, ISAdQualityConfig iSAdQualityConfig, String str, String str2, Application application, Activity activity) {
        this.f1190 = c1142;
        this.f1195 = iSAdQualityConfig;
        this.f1194 = str;
        this.f1193 = str2;
        this.f1192 = application;
        this.f1191 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        try {
            String userId = this.f1195.getUserId();
            C1142 c1142 = this.f1190;
            ISAdQualityLogLevel logLevel = this.f1195.getLogLevel();
            synchronized (c1142) {
                c1142.f4008 = logLevel;
            }
            this.f1190.m8936();
            boolean zIsEmpty = TextUtils.isEmpty(this.f1194);
            if (zIsEmpty) {
                String strDecrypt = StringFog.decrypt("tBDrNvEQJyOMJ/4I\n", "9XS6Q5B8Tlc=\n");
                AbstractC0323.m8480(strDecrypt, strDecrypt, StringFog.decrypt("FRW/qlsrItkmEri5Ej0nxDRbsb9fL27ZOFs=\n", "XHvW3jJKTrA=\n") + this.f1193, true);
            } else {
                String strDecrypt2 = StringFog.decrypt("Mh+Rv2fJu9QKKISB\n", "c3vAygal0qA=\n");
                AbstractC0323.m8480(strDecrypt2, strDecrypt2, StringFog.decrypt("CWyobtT9SRs6a699netMBigioGrNvE4XOSI=\n", "QALBGr2cJXI=\n") + this.f1194, true);
            }
            C1069.m8875(this.f1192.getApplicationContext()).m8878();
            C1142.m8935(this.f1190, this.f1195.isTestMode());
            if (this.f1195.isTestMode()) {
                AbstractC0323.m8472(StringFog.decrypt("OCP3N1F0UHQAFOIJ\n", "eUemQjAYOQA=\n"), StringFog.decrypt("3MeRZEIXEjqqp+NuZHk7dP+mpEUrNTxt7qa0Q38xdW/u9bdnZD0wJv/0tk8qeHQ7zvCmRH8qdWzi\n8qsKfzwmb8bpp082LSdu7qa0Q2c1dXnupqdDeDo0ae/jpwsqeA==\n", "i4bDKgtZVRs=\n"));
            }
            try {
                Class.forName(StringFog.decrypt("jgpZDBh6T8OAFxM/BGpFjrsFThU=\n", "72Q9fncTK+0=\n"));
            } catch (Throwable unused) {
            }
            Activity activity = this.f1191;
            if (activity != null) {
                AbstractC1148.m8954(activity);
            } else {
                Application application = this.f1192;
                String str = AbstractC1148.f4049;
                if (application != null) {
                    AbstractC1148.m8948(application.getApplicationContext());
                }
            }
            if (zIsEmpty) {
                C1142.m8929(this.f1190).f366 = this.f1193;
            } else {
                C1142.m8929(this.f1190).f367 = this.f1194;
            }
            C1142.m8929(this.f1190).f363 = this.f1195.getInitializationSource();
            C1142.m8929(this.f1190).f362 = this.f1195.getCoppa();
            C1142.m8929(this.f1190).f361 = this.f1195.getDeviceIdType();
            if (this.f1195.getMetaData() != null) {
                C1745d0 c1745d0M8929 = C1142.m8929(this.f1190);
                Map<String, String> metaData = this.f1195.getMetaData();
                c1745d0M8929.f360.clear();
                if (metaData != null) {
                    c1745d0M8929.f360.putAll(metaData);
                }
                if (this.f1195.getMetaData().containsKey(StringFog.decrypt("EJUUPX4LwPwWnR8gfgzK5ACa\n", "ZfRwTiF4pY8=\n"))) {
                    C1142.m8929(this.f1190).f358 = this.f1195.getMetaData().get(StringFog.decrypt("YgvCn1Eoc+JkA8mCUS95+nIE\n", "F2qm7A5bFpE=\n"));
                }
            }
            Context applicationContext = this.f1192.getApplicationContext();
            this.f1190.f4007 = applicationContext;
            C0657.f2283.m8611(applicationContext, !zIsEmpty ? this.f1194 : this.f1193);
            this.f1190.f4003 = new C0865(applicationContext);
            C1142 c1143 = this.f1190;
            c1143.f4001 = new C0783(applicationContext, c1143.f4006.f349, "B0r1sW@sH3re");
            AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
            C1142 c1144 = this.f1190;
            abstractC0895M8747.mo8769(applicationContext, c1144.f4003, c1144.f4006, new C0485(this), C1142.m8928(c1144));
            C1142 c1145 = this.f1190;
            C1142 c1146 = this.f1190;
            c1145.f4000 = new C0719(applicationContext, c1146.f4003, c1146.f4006.f350);
            String strM8572 = AbstractC0533.m8572(applicationContext);
            AbstractC0895 abstractC0895M8748 = AbstractC0895.m8747();
            C0484 c0484 = new C0484(this, strM8572);
            C0896 c0896 = (C0896) abstractC0895M8748;
            Handler handler = c0896.f3179;
            if (handler != null) {
                handler.post(new C0915(c0896, c0484));
            }
            AbstractC0895 abstractC0895M8749 = AbstractC0895.m8747();
            C0471 c0471 = new C0471(this);
            C0896 c0897 = (C0896) abstractC0895M8749;
            Handler handler2 = c0897.f3179;
            if (handler2 != null) {
                handler2.post(new C0930(c0897, c0471));
            }
            C1142.m8934(this.f1190, applicationContext);
            this.f1190.f4002 = new C0763(applicationContext, C1142.m8929(this.f1190), this.f1190.f4006, this.f1191 != null, strM8572, new C0444(this));
            if (!this.f1195.isUserIdSet()) {
                C1142.m8929(this.f1190).f359 = true;
                C0783 c0783 = new C0783(this.f1190.f4002.f2607, C0763.f2599, C0763.f2598);
                String str2 = C0763.f2596;
                String strM8723 = c0783.m8723(str2);
                if (TextUtils.isEmpty(strM8723)) {
                    strM8723 = UUID.randomUUID().toString();
                    c0783.m8724(str2, strM8723);
                }
                userId = strM8723;
            }
            if (this.f1190.m8940()) {
                this.f1190.f4002.m8709(new C0421(this));
            }
            this.f1190.f4002.m8708(new C0378(this));
            C0331 c0331 = new C0331(new C0375(this));
            C1142 c1147 = this.f1190;
            C1142 c1148 = this.f1190;
            c1147.f4005 = new C0418(c1148.f4000, c1148.f4002, strM8572, c0331, new C0345(this));
            C1142 c1149 = this.f1190;
            c1149.f4005.f1522.f3309 = new C0337(this);
            c1149.f3998 = new C0210(this.f1190.f4005);
            C1142 c11410 = this.f1190;
            c11410.f3997 = new C0601(c11410.f4002);
            AbstractC0323.m8477(StringFog.decrypt("r55G6bry+IGXqVPX\n", "7voXnNuekfU=\n"), StringFog.decrypt("prIVq44md86GlS2cmxg20ZuAJru2PXGCiY4m76ohepjP\n", "7+FUz99TFqI=\n") + this.f1190.f4006.f352);
            C1142 c11411 = this.f1190;
            Activity activity2 = this.f1191;
            c11411.m8945(activity2 != null ? activity2 : applicationContext, userId, true, false, true);
            C1142.m8932(this.f1190, applicationContext);
            C1142.m8933(this.f1190);
            C1142.m8931(this.f1190);
        } catch (Throwable th) {
            String strDecrypt3 = StringFog.decrypt("qSzKEQcuKEuFKtEfGWc7TII5mDcmTyV0mT/UFwF3YXaoFQ==\n", "7F64fnUOQSU=\n");
            AbstractC1104.m8888(StringFog.decrypt("ndiS42qaa8ql74fd\n", "3LzDlgv2Ar4=\n"), strDecrypt3, th, true, false, true);
            C0964 c0964 = this.f1190.f3999;
            c0964.m8827(c0964.f3387, ISAdQualityInitError.EXCEPTION_ON_INIT, strDecrypt3);
        }
    }
}
