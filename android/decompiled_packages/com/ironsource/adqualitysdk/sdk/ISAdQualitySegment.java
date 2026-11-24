package com.ironsource.adqualitysdk.sdk;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.i.AbstractC0323;
import com.ironsource.adqualitysdk.sdk.i.AbstractC0607;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public class ISAdQualitySegment {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final HashMap f103;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final double f104;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final long f105;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final AtomicBoolean f106;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final int f107;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f108;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final int f109;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f110;

    @Deprecated
    public static class Builder {

        /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
        public String f116;

        /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
        public String f118;

        /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
        public int f117 = -1;

        /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
        public int f115 = -1;

        /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
        public AtomicBoolean f114 = null;

        /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
        public long f113 = 0;

        /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
        public double f112 = -1.0d;

        /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
        public final HashMap f111 = new HashMap();

        @Deprecated
        public Builder() {
        }

        @Deprecated
        public ISAdQualitySegment build() {
            return new ISAdQualitySegment(this.f118, this.f117, this.f116, this.f115, this.f114, this.f112, this.f113, new HashMap(this.f111));
        }

        @Deprecated
        public Builder setAge(int i) {
            if (i == 0) {
                return this;
            }
            if (i >= 1 && i <= 199) {
                this.f117 = i;
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setAge( " + i + " ) age must be between 1-199");
            return this;
        }

        @Deprecated
        public Builder setCustomData(String str, String str2) {
            if (TextUtils.isEmpty(str2)) {
                return this;
            }
            try {
                if (this.f111.size() >= 5) {
                    AbstractC0323.m8472("ISAdQualitySegment Builder", "setCustomData( " + str + " , " + str2 + " ) limited to 5 custom values. Ignoring custom value.");
                    return this;
                }
                boolean zMatches = false;
                if (TextUtils.isEmpty(str) ? false : str.matches(StringFog.decrypt("+QPPDDNRHheXdZd8YzQ=\n", "p1iuIUkQM00=\n"))) {
                    if (!TextUtils.isEmpty(str2)) {
                        zMatches = str2.matches(StringFog.decrypt("+QPPDDNRHheXdZd8YzQ=\n", "p1iuIUkQM00=\n"));
                    }
                    if (zMatches && AbstractC0607.m8594(str, 32) && AbstractC0607.m8594(str2, 32)) {
                        this.f111.put("sgct_" + str, str2);
                        return this;
                    }
                }
                AbstractC0323.m8472("ISAdQualitySegment Builder", "setCustomData( " + str + " , " + str2 + " ) key and value must be alphanumeric and 1-32 in length");
                return this;
            } catch (Exception e) {
                e.printStackTrace();
                return this;
            }
        }

        @Deprecated
        public Builder setGender(String str) {
            if (TextUtils.isEmpty(str)) {
                return this;
            }
            Locale locale = Locale.ENGLISH;
            if (str.toLowerCase(locale).equals("male") || str.toLowerCase(locale).equals("female")) {
                this.f116 = str.toLowerCase(locale);
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setGender( " + str + " ) is invalid");
            return this;
        }

        @Deprecated
        public Builder setInAppPurchasesTotal(double d) {
            if (d >= 0.0d && d < 999999.99d) {
                this.f112 = Math.floor(d * 100.0d) / 100.0d;
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setIAPTotal( " + d + " ) iapt must be between 0-999999.99");
            return this;
        }

        @Deprecated
        public Builder setIsPaying(boolean z) {
            if (this.f114 == null) {
                this.f114 = new AtomicBoolean();
            }
            this.f114.set(z);
            return this;
        }

        @Deprecated
        public Builder setLevel(int i) {
            if (i == 0) {
                return this;
            }
            if (i > 0 && i < 999999) {
                this.f115 = i;
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setLevel( " + i + " ) level must be between 1-999999");
            return this;
        }

        @Deprecated
        public Builder setSegmentName(String str) {
            if (TextUtils.isEmpty(str)) {
                return this;
            }
            if ((TextUtils.isEmpty(str) ? false : str.matches(StringFog.decrypt("+QPPDDNRHheXdZd8YzQ=\n", "p1iuIUkQM00=\n"))) && AbstractC0607.m8594(str, 32)) {
                this.f118 = str;
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setSegmentName( " + str + " ) segment name must be alphanumeric and 1-32 in length");
            return this;
        }

        @Deprecated
        public Builder setUserCreationDate(long j) {
            if (j == 0) {
                return this;
            }
            if (j > 0) {
                this.f113 = j;
                return this;
            }
            AbstractC0323.m8472("ISAdQualitySegment Builder", "setUserCreationDate( " + j + " ) is an invalid timestamp");
            return this;
        }
    }

    public ISAdQualitySegment(String str, int i, String str2, int i2, AtomicBoolean atomicBoolean, double d, long j, HashMap map) {
        this.f110 = str;
        this.f109 = i;
        this.f108 = str2;
        this.f107 = i2;
        this.f106 = atomicBoolean;
        this.f104 = d;
        this.f105 = j;
        this.f103 = map;
    }

    @Deprecated
    public int getAge() {
        return this.f109;
    }

    @Deprecated
    public Map<String, String> getCustomData() {
        return this.f103;
    }

    @Deprecated
    public String getGender() {
        return this.f108;
    }

    @Deprecated
    public double getInAppPurchasesTotal() {
        return this.f104;
    }

    @Deprecated
    public AtomicBoolean getIsPaying() {
        return this.f106;
    }

    @Deprecated
    public int getLevel() {
        return this.f107;
    }

    @Deprecated
    public String getName() {
        return this.f110;
    }

    @Deprecated
    public long getUserCreationDate() {
        return this.f105;
    }
}
