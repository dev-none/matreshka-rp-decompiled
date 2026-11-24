package com.my.tracker.obfuscated;

import android.content.Context;
import android.text.TextUtils;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.unity3d.services.core.fid.Constants;

/* JADX INFO: loaded from: classes6.dex */
public final class i0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected h0 f4950a;
    boolean b = false;

    public interface c {
        void a();

        void a(String str);
    }

    public h0 a(Context context) {
        if (this.b) {
            return this.f4950a;
        }
        p1 p1VarA = p1.a(context);
        String strI = p1VarA.i();
        if (!TextUtils.isEmpty(strI)) {
            x2.a("FirebaseAppInstanceIdProvider: retrieved cached firebase app instance id " + strI);
        }
        if (b.f4952a) {
            b.a(context, new a(p1VarA));
            this.b = true;
            return this.f4950a;
        }
        x2.a("FirebaseAppInstanceIdProvider: firebase analytics is not available, use cached value '" + strI + "'");
        h0 h0Var = new h0(strI);
        this.f4950a = h0Var;
        return h0Var;
    }

    class a implements c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ p1 f4951a;

        a(p1 p1Var) {
            this.f4951a = p1Var;
        }

        @Override // com.my.tracker.obfuscated.i0.c
        public void a(String str) {
            i0.this.f4950a = new h0(str);
            this.f4951a.j(str);
            x2.a("FirebaseAppInstanceIdProvider: retrieved firebase app instance id %" + i0.this.f4950a.f4946a);
        }

        @Override // com.my.tracker.obfuscated.i0.c
        public void a() {
            x2.a("FirebaseAppInstanceIdProvider: retrieving firebase app instance id finished unsuccessfully");
        }
    }

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final boolean f4952a;

        static {
            boolean zEquals;
            try {
                zEquals = FirebaseAnalytics.class.equals(Class.forName(Constants.FID_CLASS));
            } catch (Throwable th) {
                x2.a("FirebaseHelper: error occurred while working with FirebaseAnalytics", th);
                zEquals = false;
            }
            f4952a = zEquals;
        }

        static void a(Context context, final c cVar) {
            try {
                x2.a("FirebaseHelper: retrieving firebase app instance id");
                FirebaseAnalytics.getInstance(context).getAppInstanceId().addOnCompleteListener(m.b, new OnCompleteListener() { // from class: com.my.tracker.obfuscated.i0$b$$ExternalSyntheticLambda0
                    @Override // com.google.android.gms.tasks.OnCompleteListener
                    public final void onComplete(Task task) {
                        i0.b.a(cVar, task);
                    }
                });
            } catch (Throwable th) {
                x2.a("FirebaseHelper: retrieving firebase app instance id error", th);
                cVar.a();
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static /* synthetic */ void a(c cVar, Task task) {
            if (task.isComplete() && task.isSuccessful()) {
                cVar.a((String) task.getResult());
            } else {
                cVar.a();
            }
        }
    }
}
