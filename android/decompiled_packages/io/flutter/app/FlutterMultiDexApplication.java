package io.flutter.app;

import android.app.Application;
import android.content.Context;
import androidx.multidex.MultiDex;

/* JADX INFO: loaded from: classes7.dex */
public class FlutterMultiDexApplication extends Application {
    @Override // android.content.ContextWrapper
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        MultiDex.install(this);
    }
}
