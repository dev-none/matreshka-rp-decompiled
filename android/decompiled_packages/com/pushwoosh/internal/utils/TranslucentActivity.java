package com.pushwoosh.internal.utils;

import android.app.Activity;
import android.os.Bundle;

/* JADX INFO: loaded from: classes6.dex */
public class TranslucentActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindow().setFlags(512, 512);
    }
}
