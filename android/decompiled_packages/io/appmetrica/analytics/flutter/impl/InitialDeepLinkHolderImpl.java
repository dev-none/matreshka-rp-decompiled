package io.appmetrica.analytics.flutter.impl;

import android.app.Activity;
import android.content.Intent;
import io.appmetrica.analytics.flutter.pigeon.Pigeon;

/* JADX INFO: loaded from: classes7.dex */
public class InitialDeepLinkHolderImpl implements Pigeon.InitialDeepLinkHolderPigeon {
    public Activity activity = null;

    @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.InitialDeepLinkHolderPigeon
    public String getInitialDeeplink() {
        Intent intent;
        Activity activity = this.activity;
        if (activity == null || (intent = activity.getIntent()) == null) {
            return null;
        }
        return intent.getDataString();
    }
}
