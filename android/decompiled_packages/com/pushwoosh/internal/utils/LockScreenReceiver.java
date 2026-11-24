package com.pushwoosh.internal.utils;

import android.content.ActivityNotFoundException;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import com.pushwoosh.e0.g;
import com.pushwoosh.e0.h;
import com.pushwoosh.e0.i;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class LockScreenReceiver extends BroadcastReceiver {
    private void a(final Context context) {
        new h(new Callback() { // from class: com.pushwoosh.internal.utils.LockScreenReceiver$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(context, result);
            }
        }).a();
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if (intent == null) {
            return;
        }
        try {
            if (TextUtils.equals(intent.getAction(), "android.intent.action.SCREEN_ON")) {
                i.a();
            } else if (TextUtils.equals(intent.getAction(), "android.intent.action.USER_PRESENT")) {
                a(context);
            }
        } catch (Exception e) {
            PWLog.error("LockScreenReceiver", "Failed to handle intent", e);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, Result result) {
        List<Uri> list = (List) result.getData();
        if (list == null || list.isEmpty()) {
            return;
        }
        for (Uri uri : list) {
            Intent intent = new Intent("android.intent.action.VIEW", uri);
            intent.addFlags(268435456);
            try {
                context.startActivity(intent);
            } catch (ActivityNotFoundException e) {
                PWLog.error("Can't open remote url: " + uri, e);
            }
        }
        g.a();
    }
}
