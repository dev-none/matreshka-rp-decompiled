package com.my.target;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.MenuItem;
import android.view.Window;
import android.widget.FrameLayout;
import androidx.media3.transformer.ExportException;
import com.my.target.common.MyTargetActivity;
import com.my.target.common.NavigationType;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class e1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final WeakHashMap f4600a = new WeakHashMap();

    public static abstract class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final com.my.target.b f4601a;

        public a(com.my.target.b bVar) {
            this.f4601a = bVar;
        }

        public static a a(com.my.target.b bVar, String str, String str2) {
            return new b(bVar, str, str2);
        }

        public abstract boolean a(Context context);

        public static a a(String str, com.my.target.b bVar) {
            return lb.d(str) ? new c(str, bVar) : new d(str, bVar);
        }
    }

    public static final class c extends d {
        public c(String str, com.my.target.b bVar) {
            super(str, bVar);
        }

        @Override // com.my.target.e1.d, com.my.target.e1.a
        public boolean a(Context context) {
            if (d(this.b, context)) {
                return true;
            }
            return super.a(context);
        }

        public final boolean d(String str, Context context) {
            return y3.a(str, context);
        }
    }

    public static final class e implements MyTargetActivity.ActivityEngine {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4602a;
        public gc b;

        public e(String str) {
            this.f4602a = str;
        }

        public static e a(String str) {
            return new e(str);
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityAttach(MyTargetActivity myTargetActivity) {
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public boolean onActivityBackPressed() {
            gc gcVar = this.b;
            if (gcVar == null || !gcVar.a()) {
                return true;
            }
            this.b.c();
            return false;
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityCreate(final MyTargetActivity myTargetActivity, Intent intent, FrameLayout frameLayout) {
            myTargetActivity.setTheme(android.R.style.Theme.Light.NoTitleBar);
            Window window = myTargetActivity.getWindow();
            window.addFlags(Integer.MIN_VALUE);
            window.setStatusBarColor(-12232092);
            try {
                gc gcVar = new gc(myTargetActivity);
                this.b = gcVar;
                frameLayout.addView(gcVar);
                this.b.d();
                this.b.setUrl(this.f4602a);
                this.b.setListener(new gc.d() { // from class: com.my.target.e1$e$$ExternalSyntheticLambda0
                    @Override // com.my.target.gc.d
                    public final void a() {
                        myTargetActivity.finish();
                    }
                });
            } catch (Throwable th) {
                gb.b("ClickHandler: Error - " + th.getMessage());
                myTargetActivity.finish();
            }
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityDestroy() {
            gc gcVar = this.b;
            if (gcVar == null) {
                return;
            }
            gcVar.b();
            this.b = null;
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public boolean onActivityOptionsItemSelected(MenuItem menuItem) {
            return false;
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityPause() {
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityResume() {
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityStart() {
        }

        @Override // com.my.target.common.MyTargetActivity.ActivityEngine
        public void onActivityStop() {
        }

        public void a(Context context) {
            MyTargetActivity.activityEngine = this;
            Intent intent = new Intent(context, (Class<?>) MyTargetActivity.class);
            if (!(context instanceof Activity)) {
                intent.addFlags(268435456);
            }
            context.startActivity(intent);
        }
    }

    public static e1 a() {
        return new e1();
    }

    public static boolean b(String str, String str2, Context context) {
        return str == null ? y3.a(str2, context) : y3.a(str2, str, context);
    }

    public static boolean a(String str, String str2, Context context) {
        if (str2 == null) {
            return false;
        }
        return b(str, str2, context);
    }

    public void a(com.my.target.b bVar, String str, String str2, String str3, Context context) {
        bVar.d().b(2, 7000, "available-link");
        if (a(bVar.e(), str, context)) {
            bVar.d().a(2, ExportException.ERROR_CODE_MUXING_TIMEOUT);
            return;
        }
        if (!TextUtils.isEmpty(str2) && y3.a(str2, context)) {
            bVar.d().a(2, ExportException.ERROR_CODE_MUXING_TIMEOUT);
        } else if (!TextUtils.isEmpty(str3)) {
            a(str3, bVar, context);
        } else {
            bVar.d().a(2, 7001, "url is empty");
        }
    }

    public final void b(com.my.target.b bVar, String str, int i, Context context) {
        if (f4600a.containsKey(bVar)) {
            bVar.d().c(2, 7005, "nested-call");
            return;
        }
        String str2 = "click";
        if (i == 2 && bVar.h() != null && (str == null || !str.equals(bVar.B()))) {
            str2 = "ctaClick";
        }
        if (a.a(bVar, str, str2).a(context)) {
            bVar.d().a(2, ExportException.ERROR_CODE_MUXING_TIMEOUT);
            return;
        }
        if (str != null) {
            b(str, bVar, context);
        }
        bb.b(bVar.x(), str2, 2, context);
    }

    public static class d extends a {
        public final String b;

        public d(String str, com.my.target.b bVar) {
            super(bVar);
            this.b = str;
        }

        @Override // com.my.target.e1.a
        public boolean a(Context context) {
            if (b(context)) {
                return true;
            }
            if (this.f4601a.K()) {
                return b(this.b, context);
            }
            if (a(this.b, context)) {
                return true;
            }
            return (NavigationType.STORE.equals(this.f4601a.t()) || (Build.VERSION.SDK_INT >= 28 && !lb.c(this.b))) ? b(this.b, context) : c(this.b, context);
        }

        public final boolean b(Context context) {
            if (!context.getPackageName().equals("ru.mail.browser")) {
                return false;
            }
            Bundle bundle = new Bundle();
            bundle.putString("com.android.browser.application_id", "ru.mail.browser");
            return y3.a(this.b, "ru.mail.browser", bundle, context);
        }

        public final boolean c(String str, Context context) {
            e.a(str).a(context);
            return true;
        }

        public final boolean b(String str, Context context) {
            return y3.a(str, context);
        }

        public final boolean a(String str, Context context) {
            try {
                p1.a().a(context, str);
                return true;
            } catch (Throwable unused) {
                return false;
            }
        }
    }

    public void a(com.my.target.b bVar, int i, Context context) {
        String strB;
        bVar.d().a(2, 7000);
        if (i == 2) {
            strB = bVar.h();
            if (strB == null) {
                strB = bVar.B();
                i = 1;
            }
        } else {
            strB = bVar.B();
        }
        b(bVar, strB, i, context);
    }

    public static final class b extends a {
        public final String b;
        public final String c;

        public b(com.my.target.b bVar, String str, String str2) {
            super(bVar);
            this.b = str;
            this.c = str2;
        }

        @Override // com.my.target.e1.a
        public boolean a(Context context) {
            String strE;
            Intent launchIntentForPackage;
            if (!NavigationType.STORE.equals(this.f4601a.t())) {
                return false;
            }
            if (Build.VERSION.SDK_INT < 30 || this.f4601a.H()) {
                strE = this.f4601a.e();
                if (strE == null || (launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(strE)) == null) {
                    return false;
                }
            } else {
                strE = null;
                launchIntentForPackage = null;
            }
            if (e1.a(strE, this.f4601a.j(), context)) {
                bb.b(this.f4601a.x(), "deeplinkClick", 2, context);
                return true;
            }
            if (!a(strE, this.f4601a.D(), context) && !a(launchIntentForPackage, context)) {
                return false;
            }
            bb.b(this.f4601a.x(), this.c, 2, context);
            String str = this.b;
            if (str != null && !lb.d(str)) {
                lb.g(this.b).a(this.f4601a.d(), context);
            }
            return true;
        }

        public final boolean a(String str, String str2, Context context) {
            if (str2 == null) {
                return false;
            }
            return e1.b(str, str2, context);
        }

        public final boolean a(Intent intent, Context context) {
            if (intent == null) {
                return false;
            }
            return y3.a(intent, context);
        }
    }

    public final void b(final String str, final com.my.target.b bVar, final Context context) {
        if (!bVar.I() && !lb.d(str)) {
            f4600a.put(bVar, Boolean.TRUE);
            lb.g(str).a(new lb.a() { // from class: com.my.target.e1$$ExternalSyntheticLambda0
                @Override // com.my.target.lb.a
                public final void a(String str2) {
                    this.f$0.a(bVar, context, str, str2);
                }
            }).a(bVar.d(), context);
        } else {
            a(str, bVar, context);
        }
    }

    public void a(com.my.target.b bVar, String str, int i, Context context) {
        bVar.d().a(2, 7000);
        b(bVar, str, i, context);
    }

    public final /* synthetic */ void a(com.my.target.b bVar, Context context, String str, String str2) {
        if (!TextUtils.isEmpty(str2)) {
            a(str2, bVar, context);
        } else {
            bVar.d().c(2, 7004, "resolvedUrl is empty, url=" + str);
        }
        f4600a.remove(bVar);
    }

    public final void a(String str, com.my.target.b bVar, Context context) {
        if (a.a(str, bVar).a(context)) {
            bVar.d().a(2, ExportException.ERROR_CODE_MUXING_TIMEOUT);
        } else {
            bVar.d().a(2, 7001);
        }
    }
}
