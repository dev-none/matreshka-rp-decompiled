package com.pushwoosh;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.widget.Toast;
import com.pushwoosh.d0.g;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.TranslucentActivity;
import com.pushwoosh.s.c;
import com.pushwoosh.v.b;
import java.util.Locale;

/* JADX INFO: loaded from: classes6.dex */
public class DeepLinkActivity extends TranslucentActivity {
    /* JADX INFO: Access modifiers changed from: private */
    public void a(Uri uri) {
        PWLog.noise("DeepLinkActivity", "openUrl()");
        String scheme = uri.getScheme();
        String host = uri.getHost();
        if (scheme == null) {
            PWLog.warn("DeepLinkActivity", "scheme is null");
            return;
        }
        String lowerCase = scheme.toLowerCase(Locale.getDefault());
        if (host == null) {
            PWLog.warn("DeepLinkActivity", "host is null");
            return;
        }
        if (!lowerCase.startsWith("pushwoosh-")) {
            PWLog.warn("DeepLinkActivity", "scheme is not belongs to pushwoosh");
        } else if (host.equals("createTestDevice")) {
            a(getApplicationContext());
        } else {
            PWLog.error("DeepLinkActivity", "unrecognized pushwoosh command");
        }
    }

    @Override // com.pushwoosh.internal.utils.TranslucentActivity, android.app.Activity
    protected final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            Intent intent = getIntent();
            String action = intent.getAction();
            final Uri data = intent.getData();
            if (data == null) {
                return;
            }
            if (TextUtils.equals(action, "android.intent.action.VIEW")) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.DeepLinkActivity$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(data);
                    }
                });
            }
            return;
        } catch (Exception e) {
            PWLog.error("DeepLinkActivity", "can't open url", e);
            return;
        } finally {
            finish();
        }
        finish();
    }

    private static void a(final Context context) {
        PWLog.noise("DeepLinkActivity", "createTestDevice()");
        NetworkModule.getRequestManager().sendRequest(new b(g.a(), "Imported from the app", false), new Callback() { // from class: com.pushwoosh.DeepLinkActivity$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                DeepLinkActivity.a(context, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Context context, Result result) {
        String message;
        if (result.isSuccess()) {
            Toast.makeText(context, "Test device has been registered.", 1).show();
            return;
        }
        StringBuilder sb = new StringBuilder("Test device registration has failed. ");
        if (result.getException() == null) {
            message = "";
        } else {
            message = ((NetworkException) result.getException()).getMessage();
        }
        sb.append(message);
        Toast.makeText(context, sb.toString(), 1).show();
    }
}
