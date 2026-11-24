package com.my.target.mediation;

import com.my.target.common.MyTargetPrivacy;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public interface MediationAdConfig {
    AdNetworkConfig getAdNetworkConfig();

    int getAge();

    int getGender();

    String getPayload();

    String getPlacementId();

    MyTargetPrivacy getPrivacy();

    Map<String, String> getServerParams();

    boolean isUserAgeRestricted();

    boolean isUserConsent();

    boolean isUserConsentSpecified();
}
