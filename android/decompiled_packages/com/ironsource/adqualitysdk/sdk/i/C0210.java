package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityCustomMediationRevenue;
import com.ironsource.adqualitysdk.sdk.ISAdQualityMediationNetwork;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ť, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0210 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f875 = StringFog.decrypt("DrrEpDk5sgwkrei/GSKoEwqtz6MLIq4RKZrOvA84shs=\n", "R8irympWx34=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0418 f876;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f877;

    static {
        StringFog.decrypt("WZhqWGYviR9a02FfRC6TBFuQXFRx\n", "NP0OMQdb4HA=\n");
        StringFog.decrypt("bXOyapttMchuOLlttnwuwmxGumKDSz3R\n", "ABbWA/oZWKc=\n");
        StringFog.decrypt("LXpkvpVBaI4uMWO7kVRvojVsdLiZZ2SX\n", "QB8A1/Q1AeE=\n");
    }

    public C0210(C0418 c0418) {
        this.f876 = c0418;
        C0225 c0225 = new C0225(this);
        AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
        synchronized (abstractC1041M8867) {
            abstractC1041M8867.f3778.add(c0225);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8443(C0210 c0210, ISAdQualityCustomMediationRevenue iSAdQualityCustomMediationRevenue) {
        c0210.getClass();
        C0946 c0946 = new C0946();
        c0946.f3357 = true;
        c0946.f3360 = iSAdQualityCustomMediationRevenue.getRevenue();
        c0946.f3362 = m8442(iSAdQualityCustomMediationRevenue.getMediationNetwork());
        c0946.f3358 = iSAdQualityCustomMediationRevenue.getPlacement();
        c0946.f3356 = iSAdQualityCustomMediationRevenue.getCustomData();
        return c0946.m8822();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8442(ISAdQualityMediationNetwork iSAdQualityMediationNetwork) {
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.ADMOB) {
            return StringFog.decrypt("MsDbDrw=\n", "U6S2Yd5+OSo=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.DT_FAIR_BID) {
            return StringFog.decrypt("GHYCoTb1/Q==\n", "fhdr01ScmWU=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.HELIUM) {
            return StringFog.decrypt("E9JXDBjE\n", "e7c7ZW2pg6w=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.LEVEL_PLAY) {
            return StringFog.decrypt("rVH7lmJF8De3Rw==\n", "3iSL8xA2n1k=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.MAX) {
            return StringFog.decrypt("BVSpomGeXMs=\n", "ZCTZzg7oNaU=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.UNITY) {
            return StringFog.decrypt("dbM/8z402lE=\n", "AN1Wh0dVviI=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.SELF_MEDIATED) {
            return StringFog.decrypt("ZCTYf8kLFKp2NdF9\n", "F0G0GaRucMM=\n");
        }
        if (iSAdQualityMediationNetwork == ISAdQualityMediationNetwork.OTHER) {
            return StringFog.decrypt("kUAkhJo=\n", "/jRM4eidqCg=\n");
        }
        return "";
    }
}
