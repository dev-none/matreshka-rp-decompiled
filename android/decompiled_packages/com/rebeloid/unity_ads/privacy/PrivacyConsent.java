package com.rebeloid.unity_ads.privacy;

import android.content.Context;
import com.rebeloid.unity_ads.UnityAdsConstants;
import com.unity3d.ads.metadata.MetaData;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class PrivacyConsent {
    private Context activity;

    public boolean set(Map<?, ?> map) {
        String str = (String) map.get(UnityAdsConstants.PRIVACY_CONSENT_TYPE_PARAMETER);
        Boolean bool = (Boolean) map.get(UnityAdsConstants.PRIVACY_CONSENT_VALUE_PARAMETER);
        MetaData metaData = new MetaData(this.activity);
        boolean z = metaData.set(defineType(str), bool);
        metaData.commit();
        return z;
    }

    private String defineType(String str) {
        if (str == null) {
            return null;
        }
        str.hashCode();
        switch (str) {
            case "ageGate":
                return "privacy.useroveragelimit";
            case "ccpa":
                return "privacy.consent";
            case "gdpr":
                return "gdpr.consent";
            case "pipl":
                return "pipl.consent";
            default:
                return str;
        }
    }

    public void setActivity(Context context) {
        this.activity = context;
    }
}
