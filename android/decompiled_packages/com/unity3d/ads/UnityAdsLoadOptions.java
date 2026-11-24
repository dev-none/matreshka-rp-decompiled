package com.unity3d.ads;

import com.unity3d.ads.core.data.model.LoadConfigurationInternal;
import com.unity3d.ads.core.domain.LegacyLoadUseCase;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public class UnityAdsLoadOptions extends UnityAdsBaseOptions {
    private String AD_MARKUP = LegacyLoadUseCase.KEY_AD_MARKUP;
    public LoadConfigurationInternal loadConfiguration = null;

    public void setAdMarkup(String str) {
        set(this.AD_MARKUP, str);
    }
}
