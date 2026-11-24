package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.IntentFilter;
import android.os.Handler;
import android.text.TextUtils;
import android.util.Log;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdListener;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdType;
import com.ironsource.adqualitysdk.sdk.ISAdQualityConfig;
import com.ironsource.adqualitysdk.sdk.ISAdQualityCustomMediationRevenue;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityLogLevel;
import com.ironsource.adqualitysdk.sdk.ISAdQualityMediationNetwork;
import com.ironsource.adqualitysdk.sdk.ISAdQualitySegment;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｲ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1142 extends IronSourceAdQuality {

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static C1142 f3994;

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public C0601 f3997;

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public C0210 f3998;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public C0719 f4000;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public C0783 f4001;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public C0763 f4002;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public C0865 f4003;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public ISAdQualityAdListener f4004;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public C0418 f4005;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public Context f4007;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public ISAdQualityConfig f4014;

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3996 = StringFog.decrypt("/9Co5jiYf/nH573Y\n", "vrT5k1n0Fo0=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3995 = StringFog.decrypt("69rxKZJ6\n", "mLWeRP4b0E8=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1745d0 f4015 = new C1745d0();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public boolean f4013 = false;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public boolean f4012 = false;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public boolean f4011 = false;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public boolean f4010 = false;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public boolean f4009 = false;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public ISAdQualityLogLevel f4008 = ISAdQualityLogLevel.INFO;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public final C0964 f3999 = new C0964(new C0498(this));

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final C1738b f4006 = new C1738b();

    static {
        StringFog.decrypt("9AnJpRmSuKf1Gt7lAo+cueE62q4Dlec=\n", "kX+sy23h3ck=\n");
        f3994 = null;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static boolean m8928(C1142 c1142) {
        boolean z;
        synchronized (c1142) {
            z = c1142.f4010;
        }
        return z;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static C1745d0 m8929(C1142 c1142) {
        C1745d0 c1745d0;
        synchronized (c1142) {
            c1745d0 = c1142.f4015;
        }
        return c1745d0;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8932(C1142 c1142, Context context) {
        c1142.getClass();
        try {
            context.registerReceiver(new C1162(), new IntentFilter(StringFog.decrypt("fEc5GJz5Aip0RykPneRIZX5dNAWdviRFSX0YOKrPJUxcZxovtw==\n", "HSldavOQZgQ=\n")), null, AbstractC1766n.f457);
        } catch (Throwable th) {
            String str = f3996;
            AbstractC0323.m8479(str, str, StringFog.decrypt("+rUjPsZDxfjT9Dg3xE6W+NmmajDCU5Hpzq1qIMZEgOXKsTg=\n", "vNRKUqMn5Yw=\n"), th, null, true);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8935(C1142 c1142, boolean z) {
        synchronized (c1142) {
            c1142.f4010 = z;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void changeUserId(String str) {
        C1745d0 c1745d0;
        try {
            if (m8947(str)) {
                synchronized (this) {
                    try {
                        c1745d0 = this.f4015;
                    } catch (Exception e) {
                        e = e;
                    }
                }
                boolean zEquals = str.equals(c1745d0.m8345());
                boolean z = !zEquals;
                boolean zMo8868 = AbstractC1041.m8867().mo8868();
                if (!zEquals && zMo8868) {
                    C0763 c0763 = this.f4002;
                    c0763.getClass();
                    AbstractC1766n.m8385(new C0880(c0763));
                }
                m8945(this.f4007, str, z, true, zMo8868);
                return;
            }
            return;
        } catch (Exception e2) {
            e = e2;
        }
        AbstractC1104.m8888(f3996, AbstractC0343.m8497("s3xaUDV6OeuCekFRIHo//ZN8YVtn\n", "9g4oP0daSo4=\n", new StringBuilder(), str), e, true, false, true);
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void initialize(Context context, String str) throws Throwable {
        initialize(context, str, null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void initializeWithGameId(Context context, String str) throws Throwable {
        initializeWithGameId(context, str, null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void sendCustomMediationRevenue(ISAdQualityCustomMediationRevenue iSAdQualityCustomMediationRevenue) {
        boolean z;
        synchronized (this) {
            z = this.f4011;
        }
        if (z) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("4v9K3pHm7zbP+gSakLXoPMy+SZyBr/0nyPFK2Zej6jbP60HZyObVAOD6dYyEqvUn2L53va7m6zLS\nvleRkLL4PNbwCg==\n", "oZ4k+eXGnFM=\n"));
            return;
        }
        if (!m8939()) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("J44qT/r5bN8Ki2QL+6pr1QnPKQ3qsH7ODYAqSPy8ad8KmiFIo/lW6SWLFR3vtXbOHc8XLMX5dslE\ngSscrrBx0xCGJQTno3reSg==\n", "ZO9EaI7ZH7o=\n"));
            return;
        }
        this.f3998.getClass();
        if (iSAdQualityCustomMediationRevenue != null && iSAdQualityCustomMediationRevenue.getMediationNetwork() == ISAdQualityMediationNetwork.LEVEL_PLAY && iSAdQualityCustomMediationRevenue.getCustomData() != null && iSAdQualityCustomMediationRevenue.getCustomData().length() > 0) {
            C0210 c0210 = this.f3998;
            c0210.getClass();
            AbstractC1766n.m8388(new C0213(c0210, iSAdQualityCustomMediationRevenue));
            return;
        }
        C0210 c0211 = this.f3998;
        c0211.getClass();
        if (iSAdQualityCustomMediationRevenue != null) {
            if (iSAdQualityCustomMediationRevenue.getRevenue() < 0.0d) {
                AbstractC0323.m8472(C0210.f875, StringFog.decrypt("/7p+VqGqIobSvzASoPkljNH7fRSx4zCX1bR+UafvJ4bSrnVL9fg0ldm1ZRT1+TmMybd0UbfvcY3T\ntT0fsO0wl9WtdQ==\n", "vNsQcdWKUeM=\n"));
                return;
            }
            ISAdQualityMediationNetwork mediationNetwork = iSAdQualityCustomMediationRevenue.getMediationNetwork();
            if (mediationNetwork == null || TextUtils.isEmpty(C0210.m8442(mediationNetwork))) {
                AbstractC0323.m8472(C0210.f875, StringFog.decrypt("ixfqjgVo4XCmEqTKBDvmeqVW6cwVIfNhoRnqiQMt5HCmA+GTUSX7Zrsf6s5RJfdxoRfwwB4msnut\nAvPGAyM=\n", "yHaEqXFIkhU=\n"));
                return;
            }
            ISAdQualityAdType adType = iSAdQualityCustomMediationRevenue.getAdType();
            if (adType != ISAdQualityAdType.INTERSTITIAL && adType != ISAdQualityAdType.VIDEO && adType != ISAdQualityAdType.REWARDED_VIDEO && adType != ISAdQualityAdType.REWARDED && (iSAdQualityCustomMediationRevenue.getMediationNetwork() != ISAdQualityMediationNetwork.LEVEL_PLAY || iSAdQualityCustomMediationRevenue.getCustomData() == null || iSAdQualityCustomMediationRevenue.getCustomData().length() <= 0)) {
                AbstractC0323.m8472(C0210.f875, StringFog.decrypt("O8plvZM4IHAWzyv5kmsnehWLZv+DcTJhEcRlupV9JXAW3m6gx2smZQjEee6CfHN0HIt/45d9IDUZ\n2W66jnYncArYf/OTcTJ5VIt984N9PDlY2W7thmo3cByLffODfTw1GcVvupV9JHQKz27+\n", "eKsLmucYUxU=\n"));
                return;
            }
            C0218 c0218 = new C0218(c0211, iSAdQualityCustomMediationRevenue);
            C0941 c0941 = ((C0896) AbstractC0895.m8747()).f2591;
            AbstractC1766n.m8389(c0218, c0941 != null ? c0941.f3319.optInt(StringFog.decrypt("g+Wuyw==\n", "4Ijcr/44qE8=\n"), 3000) : 3000);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void setAdListener(ISAdQualityAdListener iSAdQualityAdListener) {
        boolean z;
        synchronized (this) {
            z = this.f4011;
        }
        if (z) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("jdLeA5agnE+6k9FAwuyGWbrW3kGQoMIKh+DxQLP1jkanx8kEscSkCrnSwwSR6JpeqtzHSsw=\n", "zrOwJOKA7yo=\n"));
        } else {
            this.f4004 = iSAdQualityAdListener;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void setConfig(ISAdQualityConfig iSAdQualityConfig) {
        boolean z;
        synchronized (this) {
            z = this.f4011;
        }
        if (z) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("wZjPg1FBJXL22cLLSwc/cKLUge12IDJG95jNzVEYdkTGsoHTRBJ2ZOqM1cBKFjg5\n", "gvmhpCVhVhc=\n"));
        } else if (m8941()) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("bwnAcZ4GBN9YSM05hEAe3QxFjh+5ZxPrWQnCP55fV+loI44/mQYW1l4NzzKTBh7URRzHN4ZPDd9I\nRg==\n", "LGiuVuomd7o=\n"));
        } else {
            this.f4014 = iSAdQualityConfig;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void setMetaData(String str, String str2) {
        boolean z;
        try {
            synchronized (this) {
                z = this.f4011;
            }
            if (z) {
                AbstractC0323.m8472(f3996, StringFog.decrypt("5GTBjaaHk0PTJcLPpsbAQsZxzor/h6l15mH+37PLiVLeJfzumYeXR9Ql3MKn04RJ0GuB\n", "pwWvqtKn4CY=\n"));
                return;
            }
            if (!m8939()) {
                String str3 = f3996;
                String strDecrypt = StringFog.decrypt("FbUcDtKTWaRsswdHy49LvCWgDA72tWu0Ha8IQtaSU/AfniIO3YNMvz6/SU3eika5Ir1JCcyDXp0p\nrghq3pJL9w==\n", "TNppLr/mKtA=\n");
                if (AbstractC0323.m8474()) {
                    Log.w(AbstractC0323.m8476(str3), strDecrypt);
                    return;
                } else {
                    if (AbstractC0323.m8475().shouldPrintLog(ISAdQualityLogLevel.WARNING)) {
                        Log.w(AbstractC0323.m8476(str3), strDecrypt);
                        return;
                    }
                    return;
                }
            }
            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                if (!AbstractC0347.f1330.contains(str)) {
                    if (AbstractC0347.m8498(m8942().f360, str)) {
                        AbstractC0323.m8472(f3996, StringFog.decrypt("c9o6GflpEmJhyy98vA==\n", "AL9OVJwdcyY=\n") + str + StringFog.decrypt("WbFcXyA0TYIa6RkHbHEAwxX0EQomNE3DDfJc\n", "eZ18Y1JRKeM=\n") + 5 + StringFog.decrypt("AQjdCMPLWhZVBJgKw4dLElJLmDXFhVEFSAvfXM+OShYBAdkIw8tIFk0Q3VI=\n", "IWW4fKLrPnc=\n"));
                        return;
                    }
                    if (!AbstractC0607.m8594(str, 64) || !AbstractC0607.m8594(str2, 64)) {
                        AbstractC0323.m8472(f3996, StringFog.decrypt("NXvy+he1C1MnauefUg==\n", "Rh6Gt3LBahc=\n") + str + StringFog.decrypt("cDWMYS1D1vQzbck5YQabtSRxyX0zQ9zyJHGMMjkG0PokcYwpN0OS/jVgjDwxQpLhOHyMKz5Kx/Bw\nasQyKkrWtTJ8jD86UsXwNXeM\n", "UBmsXV8mspU=\n") + 1 + StringFog.decrypt("R/FPPIM=\n", "Z5AhWKM7brc=\n") + 64 + StringFog.decrypt("76ArjfmU0FOqsTDC\n", "z8ND7Iv1syc=\n"));
                        return;
                    }
                }
                C1745d0 c1745d0M8942 = m8942();
                if (str == null) {
                    c1745d0M8942.getClass();
                } else if (str2 == null) {
                    c1745d0M8942.f360.remove(str);
                } else {
                    c1745d0M8942.f360.put(str, str2);
                }
                if (StringFog.decrypt("mjAK6v+jAzqcOAH3/6QJIoo/\n", "71FumaDQZkk=\n").equals(str)) {
                    m8942().f358 = str2;
                }
            }
        } catch (Exception e) {
            AbstractC1104.m8888(f3996, AbstractC0343.m8497("0Hfzq2ufacLhceiqfp93wuFkoaB4y3uH\n", "lQWBxBm/Gqc=\n", new StringBuilder(), str), e, true, false, true);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void setSegment(ISAdQualitySegment iSAdQualitySegment) {
        boolean z;
        synchronized (this) {
            z = this.f4011;
        }
        if (z) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("ZGWB67C72LJTJJypo/bOuVMkwuyNyOqzdnGOoK3v0vd0QKTss/rY91Rsmrig9Ny5CQ==\n", "JwTvzMSbq9c=\n"));
        } else {
            AbstractC1766n.m8388(new C1161(this, iSAdQualitySegment));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void setUserConsent(boolean z) {
        C1745d0 c1745d0;
        synchronized (this) {
            c1745d0 = this.f4015;
        }
        c1745d0.f364 = z;
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final synchronized void shutdown() {
        m8946(false);
    }

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final synchronized void m8936() {
    }

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final synchronized void m8937() {
        if (m8938()) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("YPIPhlDvQWpXswjPUKpAYUL/QdVBvEYvTvwFxATiEkZw0gXwUa5eZlfqQfJghBJ4QuBB0ky6RmtM\n5A+P\n", "I5NhoSTPMg8=\n"));
        } else if (m8939()) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("y6VzxvAramKmuW7GtSphd+rwdNejLC976bRlkrI9aXn0tSDbvjF7f+e8aci5Nmg3\n", "htAAstBYDxY=\n"));
        } else {
            this.f4009 = true;
        }
    }

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final synchronized boolean m8938() {
        return this.f4011;
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final synchronized boolean m8939() {
        return this.f4013;
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final synchronized boolean m8940() {
        return this.f4009;
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void initialize(Context context, String str, ISAdQualityConfig iSAdQualityConfig) throws Throwable {
        if (context instanceof Application) {
            m8944((Application) context, (Activity) null, str, (String) null, iSAdQualityConfig);
            return;
        }
        if (context != null && (context.getApplicationContext() instanceof Application)) {
            m8944((Application) context.getApplicationContext(), (Activity) null, str, (String) null, iSAdQualityConfig);
            return;
        }
        if (context instanceof Activity) {
            Activity activity = (Activity) context;
            m8944(activity.getApplication(), activity, str, (String) null, iSAdQualityConfig);
        } else {
            String strDecrypt = StringFog.decrypt("sIkhwRW7f7iQrhn2AIUwvZezFMwloneunPoDyiq6e6yN+gHXI+5zoYquQMch7nGy2a4Z1SHuX7eN\nsxbMMLcxlYmqDMwnr2q9lrQ=\n", "+dpgpUTOHtQ=\n");
            AbstractC0323.m8472(f3996, strDecrypt);
            this.f3999.m8827(iSAdQualityConfig != null ? iSAdQualityConfig.getAdQualityInitListeners() : null, ISAdQualityInitError.EXCEPTION_ON_INIT, strDecrypt);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.IronSourceAdQuality
    public final void initializeWithGameId(Context context, String str, ISAdQualityConfig iSAdQualityConfig) throws Throwable {
        if (str == null) {
            str = "";
        }
        String str2 = str;
        if (context instanceof Application) {
            m8944((Application) context, (Activity) null, (String) null, str2, iSAdQualityConfig);
            return;
        }
        if (context != null && (context.getApplicationContext() instanceof Application)) {
            m8944((Application) context.getApplicationContext(), (Activity) null, (String) null, str2, iSAdQualityConfig);
            return;
        }
        if (context instanceof Activity) {
            Activity activity = (Activity) context;
            m8944(activity.getApplication(), activity, (String) null, str2, iSAdQualityConfig);
        } else {
            String strDecrypt = StringFog.decrypt("VRPkoNiKxHt1NNyXzbSLfnIp0a3ok8xteWDGq+eLwG9oYMS27t/IYm80habs38pxPDTctOzf5HRo\nKdOt/YaKVmwwya3qntF+cy4=\n", "HEClxIn/pRc=\n");
            AbstractC0323.m8472(f3996, strDecrypt);
            this.f3999.m8827(iSAdQualityConfig != null ? iSAdQualityConfig.getAdQualityInitListeners() : null, ISAdQualityInitError.EXCEPTION_ON_INIT, strDecrypt);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8933(C1142 c1142) {
        synchronized (c1142) {
            c1142.f4013 = true;
        }
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final synchronized boolean m8941() {
        return this.f4012;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized C1745d0 m8942() {
        return this.f4015;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0128 */
    /* JADX WARN: Code duplicated, block: B:33:0x0081  */
    /* JADX WARN: Code duplicated, block: B:35:0x0085  */
    /* JADX WARN: Code duplicated, block: B:38:0x0094  */
    /* JADX WARN: Code duplicated, block: B:94:0x0104 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:89:0x012f
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1478)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void m8944(android.app.Application r11, android.app.Activity r12, java.lang.String r13, java.lang.String r14, com.ironsource.adqualitysdk.sdk.ISAdQualityConfig r15) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 305
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ironsource.adqualitysdk.sdk.i.C1142.m8944(android.app.Application, android.app.Activity, java.lang.String, java.lang.String, com.ironsource.adqualitysdk.sdk.ISAdQualityConfig):void");
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8931(C1142 c1142) {
        synchronized (c1142) {
            c1142.f4012 = false;
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static C1142 m8930() {
        synchronized (C1142.class) {
            if (f3994 == null) {
                f3994 = new C1142();
            }
        }
        return f3994;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8946(boolean z) {
        String str;
        String str2;
        C0653 c0653;
        try {
            if (m8938()) {
                AbstractC0323.m8472(f3996, StringFog.decrypt("6sgHVHI5V0jK7z9jZwcWU8LoZlFPPlNFx+JmQ0s5QkDM7Cge\n", "o5tGMCNMNiQ=\n"));
                return;
            }
            if (!m8939()) {
                AbstractC0323.m8472(f3996, StringFog.decrypt("MjH/eZe8FRoSFsdOgoJUARoRnnOjvxEEWwvQdLKgFRoSGNt55uRUGBRC0HijrVQCFELNdbO9EBkM\nDJA=\n", "e2K+HcbJdHY=\n"));
                return;
            }
            String strDecrypt = StringFog.decrypt("4GZ6J2WEO7rAQUJjZ7UR9t5USGNHmS+izVpMLQ==\n", "qTU7QzTxWtY=\n");
            if (z) {
                strDecrypt = strDecrypt + StringFog.decrypt("uGjQJbxz5K/Je8MmuCfc6+hiwz63PNem\n", "mA6iStFTpcs=\n");
            }
            JSONObject jSONObject = new JSONObject();
            if (z) {
                str = "6sz2FPUC\n";
                str2 = "mamEYpBwiVg=\n";
            } else {
                str = "K99A\n";
                str2 = "WLsr8S8WHQE=\n";
            }
            try {
                jSONObject.put(StringFog.decrypt("vQ==\n", "zp4hf0/074s=\n"), StringFog.decrypt(str, str2));
            } catch (JSONException unused) {
            }
            this.f4002.m8710(StringFog.decrypt("PcRpJZ0=\n", "SbQ2Ue6SAOE=\n"), jSONObject);
            AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
            String str3 = f3995;
            C0896 c0896 = (C0896) abstractC0895M8747;
            if (str3 != null) {
                c0653 = (C0653) c0896.mo8763().get(str3);
            } else {
                c0896.getClass();
                c0653 = null;
            }
            String str4 = c0653 != null ? c0653.f2270 : null;
            if (!TextUtils.isEmpty(str4)) {
                strDecrypt = strDecrypt + StringFog.decrypt("92n6ROl3UhO2bfxeu3c=\n", "1x6TMIFXIHY=\n") + str4;
            }
            AbstractC0323.m8477(f3996, strDecrypt);
            C0964 c0964 = this.f3999;
            c0964.m8827(c0964.f3387, ISAdQualityInitError.AD_QUALITY_SDK_WAS_SHUTDOWN, strDecrypt);
            this.f4011 = true;
            this.f3999.f3382 = true;
            AbstractC0895.m8747().mo8749();
            C1069.m8875(this.f4007).m8877();
            this.f4005.m8522();
            C0865 c0865 = this.f4003;
            C0808 c0808 = c0865.f3088;
            c0808.f2883.unregisterReceiver(c0808);
            c0865.f3087 = true;
            this.f4002.m8699();
            C0657.f2283.m8610();
            C0705.m8629();
        } catch (Exception e) {
            AbstractC1104.m8888(f3996, StringFog.decrypt("rVMq8ZVVNVOdVSz3iRJmX4dWNg==\n", "6CFYnud1Rjs=\n"), e, true, false, true);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8947(String str) {
        boolean z;
        synchronized (this) {
            z = this.f4011;
        }
        if (z) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("LKntMOSwYAkOpuRysOVwBB3o6nOwvSMoPInnRuXxbwgbsaNE1NsjFg67o2T45XcFAL/tOQ==\n", "b8iDF5CQA2E=\n"));
            return false;
        }
        if (!m8939()) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("U/f5ir2orRMq8eLDpLS/C2Pi6YqZjp8DW+3txrmpp0dZ3MeKsri4CHj9rMmxsbIOZP+sjbO1vwlt\n/dnZta+XAy0=\n", "CpiMqtDd3mc=\n"));
            return false;
        }
        if (!TextUtils.isEmpty(str)) {
            return true;
        }
        AbstractC0323.m8472(f3996, StringFog.decrypt("UytAlt77zMk9J1OWyOnHnGluVdOL5tzXcW5YxIvtxMtpNw==\n", "HU43tquIqbs=\n"));
        return false;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8945(Context context, String str, boolean z, boolean z2, boolean z3) {
        C1745d0 c1745d0;
        synchronized (this) {
            c1745d0 = this.f4015;
        }
        String strM8345 = c1745d0.m8345();
        m8942().m8346(str);
        if (str == null) {
            AbstractC0323.m8472(f3996, StringFog.decrypt("qj93ZzcbiTmcCFcILH6JJZxNS10JVodsvwFASRZfiSGOBkAIFk/bKc8ZSggVW9o/zwwFXgRWwCjP\nA0pGSFTcIINNUFsASIkFq01RR0Vz+g2LPFBJCVPdNc8+YWNL\n", "720lKGU6qUw=\n"));
        } else if (str.equals(StringFog.decrypt("UtOqou4viUAexLyjqzGGSUc=\n", "M73T1oZG5yc=\n"))) {
            String str2 = f3996;
            StringBuilder sbM8559 = AbstractC0502.m8559("/56w7rotgbPVucXTjSzUmdOihYGcZMTK3qmEwJ1g1crPv4fTyEXlyg==\n", "uszioegMoeo=\n", new StringBuilder(), str);
            sbM8559.append(StringFog.decrypt("9W0jqOXRhtj7IBKv5ZCGyKkoU7DvkIXcqD5TpaDFm9SqOBbk9cOQz/sEN+Tm34edviwQrKDFhtip\nbQeroPmm/L8cBqXs2YHE+x43j64=\n", "201zxICw9b0=\n"));
            AbstractC0323.m8472(str2, sbM8559.toString());
        } else {
            String str3 = f3996;
            AbstractC0323.m8480(str3, str3, AbstractC0343.m8497("gWuZLWrc+Gy8VZk+JvzfVPhXqBRq4NhIqiSlG2r82Bf4\n", "2ATsX0qVqy0=\n", new StringBuilder(), str), true);
        }
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C0179 c0179 = new C0179(this, z, context, z2, strM8345, z3);
        C0896 c0896 = (C0896) abstractC0895M8747;
        Handler handler = c0896.f3179;
        if (handler != null) {
            handler.post(new C0949(c0896, c0179));
        }
        JSONObject jSONObjectM8943 = m8943();
        if (jSONObjectM8943 != null) {
            AbstractC0895 abstractC0895M8748 = AbstractC0895.m8747();
            C1745d0 c1745d0M8942 = m8942();
            C0896 c0897 = (C0896) abstractC0895M8748;
            c0897.f3164 = 0L;
            c0897.f3163 = c1745d0M8942;
            c0897.mo8688(jSONObjectM8943);
            c0897.m8775();
            c0897.m8771();
            return;
        }
        AbstractC0895.m8747().mo8768(context, m8942(), true);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8943() {
        C1745d0 c1745d0;
        synchronized (this) {
            c1745d0 = this.f4015;
        }
        ConcurrentHashMap concurrentHashMap = c1745d0.f360;
        if (concurrentHashMap == null || !concurrentHashMap.containsKey(StringFog.decrypt("MIS9vHaISqYOgqCMfQ==\n", "UeDM4x/mI9I=\n"))) {
            return null;
        }
        try {
            return new JSONObject((String) concurrentHashMap.get(StringFog.decrypt("Z9fMAFDH1P9Z0dEwWw==\n", "BrO9XzmpvYs=\n")));
        } catch (JSONException unused) {
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8934(C1142 c1142, Context context) {
        String strM8723 = c1142.f4001.m8723(StringFog.decrypt("7pPZELPAodbOmQ==\n", "h/2tPsCl0qU=\n"));
        if (TextUtils.isEmpty(strM8723)) {
            return;
        }
        String strDecrypt = StringFog.decrypt("yqz8sEiRs6nV8PalA5ew5N+w/L9Uh7upzQ==\n", "vt6d0y3z0so=\n");
        String strDecrypt2 = StringFog.decrypt("aGgXYKzNiEV+ZApotIGRV3VmFHS0xcZF\n", "Gwd4DcCspTY=\n");
        Context applicationContext = context.getApplicationContext();
        C0326 c0326 = new C0326(applicationContext, strDecrypt);
        C0392 c0392 = new C0392(AbstractC0355.f1351, applicationContext.getPackageName(), AbstractC0267.m8459(applicationContext), strDecrypt2);
        try {
            c0326.m8490(StringFog.decrypt("6TPMlEjsonPJOQ==\n", "gF24ujuJ0QA=\n"), c0392.m8507(strM8723));
        } catch (Throwable unused) {
        }
        c1142.f4001.m8722(StringFog.decrypt("sFU+slzDQwGQXw==\n", "2TtKnC+mMHI=\n"));
    }
}
