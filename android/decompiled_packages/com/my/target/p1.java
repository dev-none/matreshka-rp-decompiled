package com.my.target;

import android.app.Activity;
import android.app.ActivityOptions;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.LocaleList;
import android.text.TextUtils;
import androidx.browser.customtabs.CustomTabsIntent;
import androidx.core.content.ContextCompat;
import com.google.common.net.HttpHeaders;

/* JADX INFO: loaded from: classes6.dex */
public final class p1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Intent f4763a;
    public final Bundle b;

    public p1(Intent intent, Bundle bundle) {
        this.f4763a = intent;
        this.b = bundle;
    }

    public static p1 a() {
        return new a().a();
    }

    public void a(Context context, String str) {
        this.f4763a.setDataAndNormalize(Uri.parse(str));
        if (Build.VERSION.SDK_INT >= 30 && (context instanceof Activity)) {
            Activity activity = (Activity) context;
            if (activity.isDestroyed() || activity.isFinishing()) {
                context = context.getApplicationContext();
            }
        }
        if (!(context instanceof Activity)) {
            this.f4763a.addFlags(268435456);
        }
        ContextCompat.startActivity(context, this.f4763a, this.b);
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Intent f4764a = new Intent("android.intent.action.VIEW");
        public final int b = 0;
        public final boolean c = true;

        /* JADX INFO: renamed from: com.my.target.p1$a$a, reason: collision with other inner class name */
        public static final class C1176a {
            public static ActivityOptions a() {
                return ActivityOptions.makeBasic();
            }
        }

        public static final class b {
            public static String a() {
                LocaleList adjustedDefault = LocaleList.getAdjustedDefault();
                if (adjustedDefault.isEmpty()) {
                    return null;
                }
                return adjustedDefault.get(0).toLanguageTag();
            }
        }

        public static final class c {
            public static void a(ActivityOptions activityOptions) {
                activityOptions.setShareIdentityEnabled(false);
            }
        }

        public p1 a() {
            Bundle bundle;
            if (!this.f4764a.hasExtra(CustomTabsIntent.EXTRA_SESSION)) {
                c();
            }
            this.f4764a.putExtra(CustomTabsIntent.EXTRA_ENABLE_INSTANT_APPS, true);
            this.f4764a.putExtra(CustomTabsIntent.EXTRA_SHARE_STATE, 0);
            int i = Build.VERSION.SDK_INT;
            b();
            if (i >= 34) {
                ActivityOptions activityOptionsA = C1176a.a();
                a(activityOptionsA);
                bundle = activityOptionsA.toBundle();
            } else {
                bundle = null;
            }
            return new p1(this.f4764a, bundle);
        }

        public final void b() {
            String strA = b.a();
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            Bundle bundleExtra = this.f4764a.getBundleExtra("com.android.browser.headers");
            if (bundleExtra == null) {
                bundleExtra = new Bundle();
            }
            if (bundleExtra.containsKey(HttpHeaders.ACCEPT_LANGUAGE)) {
                return;
            }
            bundleExtra.putString(HttpHeaders.ACCEPT_LANGUAGE, strA);
            this.f4764a.putExtra("com.android.browser.headers", bundleExtra);
        }

        public final void c() {
            Bundle bundle = new Bundle();
            bundle.putBinder(CustomTabsIntent.EXTRA_SESSION, null);
            this.f4764a.putExtras(bundle);
        }

        public final void a(ActivityOptions activityOptions) {
            c.a(activityOptions);
        }
    }
}
