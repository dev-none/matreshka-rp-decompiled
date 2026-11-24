package com.pushwoosh.notification;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationOpenActivity extends Activity {
    @Override // android.app.Activity
    protected final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        NotificationIntentHelper.processIntent(this, getIntent(), new NotificationOpenActivity$$ExternalSyntheticLambda0(this));
    }

    @Override // android.app.Activity
    protected final void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        NotificationIntentHelper.processIntent(this, intent, new NotificationOpenActivity$$ExternalSyntheticLambda0(this));
    }
}
