package com.ironsource.adqualitysdk.sdk;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.i.AbstractC0323;
import com.ironsource.adqualitysdk.sdk.i.AbstractC0347;
import com.ironsource.adqualitysdk.sdk.i.AbstractC0607;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public class ISAdQualityConfig {

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final HashMap f63;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final ISAdQualityDeviceIdType f64;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final boolean f65;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final boolean f66;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final String f67;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final ISAdQualityLogLevel f68;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final HashSet f69;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final boolean f70;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final boolean f71;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final boolean f72;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f73;

    public ISAdQualityConfig(String str, boolean z, boolean z2, boolean z3, ISAdQualityLogLevel iSAdQualityLogLevel, HashSet hashSet, String str2, boolean z4, boolean z5, ISAdQualityDeviceIdType iSAdQualityDeviceIdType, HashMap map) {
        this.f73 = str;
        this.f72 = z;
        this.f71 = z2;
        this.f70 = z3;
        this.f68 = iSAdQualityLogLevel;
        this.f69 = hashSet;
        this.f67 = str2;
        this.f66 = z4;
        this.f65 = z5;
        this.f64 = iSAdQualityDeviceIdType;
        this.f63 = map;
    }

    @Deprecated
    public static ISAdQualityConfig merge(ISAdQualityConfig iSAdQualityConfig, ISAdQualityConfig iSAdQualityConfig2) {
        Builder builder = new Builder();
        if (iSAdQualityConfig.f72) {
            builder.setUserId(iSAdQualityConfig.f73);
        } else if (iSAdQualityConfig2.f72) {
            builder.setUserId(iSAdQualityConfig2.f73);
        }
        if (iSAdQualityConfig.f70) {
            builder.setTestMode(iSAdQualityConfig.f71);
        } else if (iSAdQualityConfig2.f70) {
            builder.setTestMode(iSAdQualityConfig2.f71);
        }
        if (iSAdQualityConfig.f65) {
            builder.setCoppa(iSAdQualityConfig.f66);
        } else if (iSAdQualityConfig2.f65) {
            builder.setCoppa(iSAdQualityConfig2.f66);
        }
        ISAdQualityLogLevel iSAdQualityLogLevel = iSAdQualityConfig.f68;
        if (iSAdQualityLogLevel == null) {
            iSAdQualityLogLevel = iSAdQualityConfig2.f68;
        }
        builder.setLogLevel(iSAdQualityLogLevel);
        Iterator it = iSAdQualityConfig.f69.iterator();
        while (it.hasNext()) {
            builder.addAdQualityInitListener((ISAdQualityInitListener) it.next());
        }
        Iterator it2 = iSAdQualityConfig2.f69.iterator();
        while (it2.hasNext()) {
            builder.addAdQualityInitListener((ISAdQualityInitListener) it2.next());
        }
        String str = iSAdQualityConfig.f67;
        if (str != null) {
            builder.setInitializationSource(str);
        } else {
            String str2 = iSAdQualityConfig2.f67;
            if (str2 != null) {
                builder.setInitializationSource(str2);
            }
        }
        ISAdQualityDeviceIdType iSAdQualityDeviceIdType = iSAdQualityConfig.f64;
        if (iSAdQualityDeviceIdType == null) {
            iSAdQualityDeviceIdType = iSAdQualityConfig2.f64;
        }
        builder.setDeviceIdType(iSAdQualityDeviceIdType);
        HashMap map = new HashMap(iSAdQualityConfig2.f63);
        map.putAll(iSAdQualityConfig.f63);
        for (Map.Entry entry : map.entrySet()) {
            builder.setMetaData((String) entry.getKey(), (String) entry.getValue());
        }
        return builder.build();
    }

    @Deprecated
    public Set<ISAdQualityInitListener> getAdQualityInitListeners() {
        return this.f69;
    }

    @Deprecated
    public boolean getCoppa() {
        return this.f66;
    }

    @Deprecated
    public ISAdQualityDeviceIdType getDeviceIdType() {
        return this.f64;
    }

    @Deprecated
    public String getInitializationSource() {
        return this.f67;
    }

    @Deprecated
    public ISAdQualityLogLevel getLogLevel() {
        return this.f68;
    }

    @Deprecated
    public Map<String, String> getMetaData() {
        return this.f63;
    }

    @Deprecated
    public String getUserId() {
        return this.f73;
    }

    @Deprecated
    public boolean isTestMode() {
        return this.f71;
    }

    @Deprecated
    public boolean isUserIdSet() {
        return this.f72;
    }

    @Deprecated
    public static class Builder {

        /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
        public String f84 = null;

        /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
        public boolean f83 = false;

        /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
        public boolean f82 = false;

        /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
        public boolean f81 = false;

        /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
        public ISAdQualityLogLevel f80 = ISAdQualityLogLevel.INFO;

        /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
        public final HashSet f79 = new HashSet();

        /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
        public String f78 = null;

        /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
        public boolean f77 = false;

        /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
        public boolean f76 = false;

        /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
        public ISAdQualityDeviceIdType f75 = ISAdQualityDeviceIdType.NONE;

        /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
        public final HashMap f74 = new HashMap();

        @Deprecated
        public Builder() {
        }

        @Deprecated
        public Builder addAdQualityInitListener(ISAdQualityInitListener iSAdQualityInitListener) {
            this.f79.add(iSAdQualityInitListener);
            return this;
        }

        @Deprecated
        public ISAdQualityConfig build() {
            return new ISAdQualityConfig(this.f84, this.f83, this.f82, this.f81, this.f80, this.f79, this.f78, this.f77, this.f76, this.f75, this.f74);
        }

        @Deprecated
        public Builder removeAdQualityInitListener(ISAdQualityInitListener iSAdQualityInitListener) {
            this.f79.remove(iSAdQualityInitListener);
            return this;
        }

        @Deprecated
        public Builder setAdQualityInitListener(ISAdQualityInitListener iSAdQualityInitListener) {
            return addAdQualityInitListener(iSAdQualityInitListener);
        }

        @Deprecated
        public Builder setCoppa(boolean z) {
            this.f77 = z;
            this.f76 = true;
            return this;
        }

        @Deprecated
        public Builder setDeviceIdType(ISAdQualityDeviceIdType iSAdQualityDeviceIdType) {
            this.f75 = iSAdQualityDeviceIdType;
            return this;
        }

        @Deprecated
        public Builder setInitializationSource(String str) {
            if (AbstractC0607.m8594(str, 20)) {
                this.f78 = str;
                return this;
            }
            AbstractC0323.m8472("ISAdQualityConfig", "setInitializationSource( " + str + " ) init source must have length of 1-20");
            return this;
        }

        @Deprecated
        public Builder setLogLevel(ISAdQualityLogLevel iSAdQualityLogLevel) {
            this.f80 = iSAdQualityLogLevel;
            return this;
        }

        @Deprecated
        public Builder setMetaData(JSONObject jSONObject) {
            if (jSONObject != null) {
                for (int i = 0; i < jSONObject.names().length(); i++) {
                    try {
                        String string = jSONObject.names().getString(i);
                        Object objOpt = jSONObject.opt(string);
                        if (objOpt instanceof String) {
                            setMetaData(string, (String) objOpt);
                        } else {
                            AbstractC0323.m8472("ISAdQualityConfig", "setMetaData( " + string + " , " + objOpt + " ) value must be a string");
                        }
                    } catch (Exception unused) {
                    }
                }
            }
            return this;
        }

        @Deprecated
        public Builder setTestMode(boolean z) {
            this.f82 = z;
            this.f81 = true;
            return this;
        }

        @Deprecated
        public Builder setUserId(String str) {
            this.f84 = str;
            this.f83 = true;
            return this;
        }

        @Deprecated
        public Builder setMetaData(String str, String str2) {
            try {
                if (!TextUtils.isEmpty(str2)) {
                    if (!AbstractC0347.f1330.contains(str)) {
                        if (AbstractC0347.m8498(this.f74, str)) {
                            AbstractC0323.m8472("ISAdQualityConfig", "setMetaData( " + str + " , " + str2 + " ) limited to 5 meta data values. Ignoring meta data value.");
                            return this;
                        }
                        if (!AbstractC0607.m8594(str, 64) || !AbstractC0607.m8594(str2, 64)) {
                            AbstractC0323.m8472("ISAdQualityConfig", "setMetaData( " + str + " , " + str2 + " ) the length of both the key and the value should be between 1 and 64 characters.");
                            return this;
                        }
                    }
                    this.f74.put(str, str2);
                }
            } catch (Exception unused) {
            }
            return this;
        }
    }
}
