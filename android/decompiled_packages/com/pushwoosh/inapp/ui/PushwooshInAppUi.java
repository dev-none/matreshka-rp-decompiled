package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.util.DisplayMetrics;
import com.bumptech.glide.Glide;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.richmedia.RichMediaColorSchemeResolver;
import io.flutter.plugins.firebase.analytics.Constants;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.ArrayDeque;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\r\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0007¢\u0006\u0004\b\u0005\u0010\u0003J\u0017\u0010\b\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\u0006H\u0007¢\u0006\u0004\b\b\u0010\tJ%\u0010\r\u001a\u00020\u00042\u0014\u0010\f\u001a\u0010\u0012\u0004\u0012\u00020\u000b\u0012\u0006\u0012\u0004\u0018\u00010\u00010\nH\u0007¢\u0006\u0004\b\r\u0010\u000eJ\u0011\u0010\u0010\u001a\u0004\u0018\u00010\u000fH\u0002¢\u0006\u0004\b\u0010\u0010\u0011J\u000f\u0010\u0014\u001a\u00020\u0006H\u0000¢\u0006\u0004\b\u0012\u0010\u0013J\u0017\u0010\u0019\u001a\u00020\u00042\u0006\u0010\u0016\u001a\u00020\u0015H\u0000¢\u0006\u0004\b\u0017\u0010\u0018R\u0014\u0010\u001a\u001a\u00020\u000b8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001a\u0010\u001bR.\u0010#\u001a\u0004\u0018\u00010\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001c8F@FX\u0087\u000e¢\u0006\u0012\u0012\u0004\b\"\u0010\u0003\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u001a\u0010$\u001a\u00020\u00068FX\u0087\u0004¢\u0006\f\u0012\u0004\b%\u0010\u0003\u001a\u0004\b$\u0010\u0013R*\u0010&\u001a\u00020\u00062\u0006\u0010\u001d\u001a\u00020\u00068F@FX\u0087\u000e¢\u0006\u0012\u0012\u0004\b(\u0010\u0003\u001a\u0004\b&\u0010\u0013\"\u0004\b'\u0010\t¨\u0006)"}, d2 = {"Lcom/pushwoosh/inapp/ui/PushwooshInAppUi;", "", "<init>", "()V", "", "dismiss", "", Constants.ENABLED, "setFrequencyCapEnabled", "(Z)V", "", "", "config", "present", "(Ljava/util/Map;)V", "Lcom/pushwoosh/inapp/ui/g1;", "queueManager", "()Lcom/pushwoosh/inapp/ui/g1;", "isCurrentSchemeDark$pushwoosh_inapp_ui_release", "()Z", "isCurrentSchemeDark", "Lcom/pushwoosh/inapp/ui/s0;", "message", "route$pushwoosh_inapp_ui_release", "(Lcom/pushwoosh/inapp/ui/s0;)V", "route", "TAG", "Ljava/lang/String;", "Lcom/pushwoosh/inapp/ui/InAppMessageDelegate;", "value", "getDelegate", "()Lcom/pushwoosh/inapp/ui/InAppMessageDelegate;", "setDelegate", "(Lcom/pushwoosh/inapp/ui/InAppMessageDelegate;)V", "getDelegate$annotations", "delegate", "isPresenting", "isPresenting$annotations", "isPaused", "setPaused", "isPaused$annotations", "pushwoosh-inapp-ui_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class PushwooshInAppUi {
    public static final PushwooshInAppUi INSTANCE = new PushwooshInAppUi();
    private static final String TAG = "PushwooshInAppUi";

    private PushwooshInAppUi() {
    }

    @JvmStatic
    public static final void dismiss() {
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.inapp.ui.PushwooshInAppUi$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                PushwooshInAppUi.dismiss$lambda$0();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void dismiss$lambda$0() {
        s0 s0Var;
        j1 j1Var = e1.b;
        if (j1Var != null && (s0Var = e1.c) != null) {
            e1.a(j1Var, s0Var);
        }
        InAppOverlayActivity inAppOverlayActivity = InAppOverlayActivity.e;
        if (inAppOverlayActivity != null) {
            inAppOverlayActivity.b();
        }
    }

    public static final InAppMessageDelegate getDelegate() {
        WeakReference weakReference = v0.d;
        if (weakReference != null) {
            return (InAppMessageDelegate) weakReference.get();
        }
        return null;
    }

    @JvmStatic
    public static /* synthetic */ void getDelegate$annotations() {
    }

    public static final boolean isPaused() {
        g1 g1VarQueueManager = INSTANCE.queueManager();
        if (g1VarQueueManager != null) {
            return g1VarQueueManager.f;
        }
        return false;
    }

    @JvmStatic
    public static /* synthetic */ void isPaused$annotations() {
    }

    public static final boolean isPresenting() {
        return (e1.b == null && InAppOverlayActivity.e == null) ? false : true;
    }

    @JvmStatic
    public static /* synthetic */ void isPresenting$annotations() {
    }

    @JvmStatic
    public static final void present(Map<String, ? extends Object> config) {
        Intrinsics.checkNotNullParameter(config, "config");
        try {
            String string = new JSONObject(config).toString();
            if (string == null) {
                PWLog.warn(TAG, "present(): config map holds a value JSON cannot carry, not shown");
                return;
            }
            PushwooshInAppUi pushwooshInAppUi = INSTANCE;
            s0 s0VarA = g0.a(string, pushwooshInAppUi.isCurrentSchemeDark$pushwoosh_inapp_ui_release());
            if (s0VarA == null) {
                return;
            }
            pushwooshInAppUi.route$pushwoosh_inapp_ui_release(s0VarA);
        } catch (Exception e) {
            PWLog.warn(TAG, "present(): config map is not JSON-convertible, not shown: " + e.getMessage());
        }
    }

    private final g1 queueManager() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext != null) {
            return v0.f5172a.b(applicationContext);
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void route$lambda$1(s0 message) {
        List listListOfNotNull;
        ArrayList arrayList;
        Intrinsics.checkNotNullParameter(message, "$message");
        Context context = AndroidPlatformModule.getApplicationContext();
        if (context == null) {
            return;
        }
        Intrinsics.checkNotNullParameter(message, "<this>");
        r0 r0Var = message.b;
        if (r0Var instanceof n0) {
            listListOfNotNull = CollectionsKt.listOfNotNull(((n0) r0Var).f5147a.d);
        } else if (r0Var instanceof o0) {
            listListOfNotNull = CollectionsKt.listOfNotNull(((o0) r0Var).f5149a.d);
        } else {
            if (r0Var instanceof l0) {
                ArrayList arrayList2 = ((l0) r0Var).f5140a.f5124a;
                arrayList = new ArrayList();
                Iterator it = arrayList2.iterator();
                while (it.hasNext()) {
                    String str = ((p) it.next()).f5152a;
                    if (str != null) {
                        arrayList.add(str);
                    }
                }
            } else if (r0Var instanceof p0) {
                ArrayList arrayList3 = ((p0) r0Var).f5153a.f5134a;
                arrayList = new ArrayList();
                Iterator it2 = arrayList3.iterator();
                while (it2.hasNext()) {
                    String str2 = ((p2) it2.next()).f5154a;
                    if (str2 != null) {
                        arrayList.add(str2);
                    }
                }
            } else if (r0Var instanceof k0) {
                listListOfNotNull = CollectionsKt.listOfNotNull(((k0) r0Var).f5136a.b);
            } else if (r0Var instanceof m0) {
                listListOfNotNull = CollectionsKt.listOfNotNull(((m0) r0Var).f5143a.f5155a);
            } else {
                if (!(r0Var instanceof q0)) {
                    throw new NoWhenBranchMatchedException();
                }
                q2 q2Var = ((q0) r0Var).f5156a;
                listListOfNotNull = CollectionsKt.listOfNotNull((Object[]) new String[]{q2Var.b, q2Var.c});
            }
            listListOfNotNull = arrayList;
        }
        ArrayList urls = new ArrayList();
        for (Object obj : listListOfNotNull) {
            if (!StringsKt.isBlank((String) obj)) {
                urls.add(obj);
            }
        }
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(urls, "urls");
        DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
        int i = displayMetrics.widthPixels;
        int i2 = displayMetrics.heightPixels;
        Iterator it3 = urls.iterator();
        while (it3.hasNext()) {
            Glide.with(context).load((String) it3.next()).override(i, i2).preload();
        }
        g1 g1VarB = v0.f5172a.b(context);
        Intrinsics.checkNotNullParameter(message, "message");
        if (j0.a(g1VarB.f5125a, message)) {
            String str3 = message.f5162a;
            if (str3 != null) {
                s0 s0Var = g1VarB.h;
                if (Intrinsics.areEqual(s0Var != null ? s0Var.f5162a : null, str3)) {
                    return;
                }
                ArrayDeque arrayDeque = g1VarB.g;
                if (!(arrayDeque instanceof Collection) || !arrayDeque.isEmpty()) {
                    Iterator<E> it4 = arrayDeque.iterator();
                    while (it4.hasNext()) {
                        if (Intrinsics.areEqual(((s0) it4.next()).f5162a, str3)) {
                            return;
                        }
                    }
                }
            }
            g1VarB.g.addLast(message);
            g1VarB.a();
        }
    }

    public static final void setDelegate(InAppMessageDelegate inAppMessageDelegate) {
        v0.d = inAppMessageDelegate != null ? new WeakReference(inAppMessageDelegate) : null;
    }

    @JvmStatic
    public static final void setFrequencyCapEnabled(boolean enabled) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            return;
        }
        v0.f5172a.a(applicationContext).b = enabled;
    }

    public static final void setPaused(boolean z) {
        g1 g1VarQueueManager = INSTANCE.queueManager();
        if (g1VarQueueManager == null) {
            return;
        }
        g1VarQueueManager.a(z);
    }

    public final boolean isCurrentSchemeDark$pushwoosh_inapp_ui_release() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            return false;
        }
        return RichMediaColorSchemeResolver.isCurrentSchemeDark(applicationContext);
    }

    public final void route$pushwoosh_inapp_ui_release(final s0 message) {
        Intrinsics.checkNotNullParameter(message, "message");
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.inapp.ui.PushwooshInAppUi$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                PushwooshInAppUi.route$lambda$1(message);
            }
        });
    }
}
