package com.ironsource.adqualitysdk.sdk;

import com.ironsource.adqualitysdk.sdk.i.AbstractC0939;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public class ISAdQualityCustomMediationRevenue {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final JSONObject f85;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f86;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final double f87;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final ISAdQualityAdType f88;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ISAdQualityMediationNetwork f89;

    @Deprecated
    public static class Builder {

        /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
        public JSONObject f90;

        /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
        public String f91;

        /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
        public double f92;

        /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
        public ISAdQualityMediationNetwork f94 = ISAdQualityMediationNetwork.UNKNOWN;

        /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
        public ISAdQualityAdType f93 = ISAdQualityAdType.UNKNOWN;

        @Deprecated
        public Builder() {
        }

        @Deprecated
        public ISAdQualityCustomMediationRevenue build() {
            return new ISAdQualityCustomMediationRevenue(this.f94, this.f93, this.f92, this.f91, this.f90);
        }

        @Deprecated
        public Builder setAdType(ISAdQualityAdType iSAdQualityAdType) {
            this.f93 = iSAdQualityAdType;
            return this;
        }

        @Deprecated
        public Builder setCustomData(JSONObject jSONObject) {
            if (jSONObject != null) {
                this.f90 = AbstractC0939.m8815(jSONObject, false);
            }
            return this;
        }

        @Deprecated
        public Builder setMediationNetwork(ISAdQualityMediationNetwork iSAdQualityMediationNetwork) {
            this.f94 = iSAdQualityMediationNetwork;
            return this;
        }

        @Deprecated
        public Builder setPlacement(String str) {
            this.f91 = str;
            return this;
        }

        @Deprecated
        public Builder setRevenue(double d) {
            this.f92 = d;
            return this;
        }
    }

    public ISAdQualityCustomMediationRevenue(ISAdQualityMediationNetwork iSAdQualityMediationNetwork, ISAdQualityAdType iSAdQualityAdType, double d, String str, JSONObject jSONObject) {
        this.f89 = iSAdQualityMediationNetwork;
        this.f88 = iSAdQualityAdType;
        this.f87 = d;
        this.f86 = str;
        this.f85 = jSONObject;
    }

    @Deprecated
    public ISAdQualityAdType getAdType() {
        return this.f88;
    }

    @Deprecated
    public JSONObject getCustomData() {
        return this.f85;
    }

    @Deprecated
    public ISAdQualityMediationNetwork getMediationNetwork() {
        return this.f89;
    }

    @Deprecated
    public String getPlacement() {
        return this.f86;
    }

    @Deprecated
    public double getRevenue() {
        return this.f87;
    }
}
