package com.pushwoosh;

import android.app.Activity;
import android.content.res.Resources;
import android.util.TypedValue;
import com.pushwoosh.a.d;
import com.pushwoosh.b.k;
import com.pushwoosh.d0.h;
import com.pushwoosh.d0.i;
import com.pushwoosh.e.f;
import com.pushwoosh.e0.m;
import com.pushwoosh.g0.b;
import com.pushwoosh.inapp.PushwooshInAppImpl;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.network.RequestManager;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.g;
import com.pushwoosh.m0.t;
import com.pushwoosh.notification.NotificationServiceExtension;
import com.pushwoosh.notification.PushwooshNotificationManager;
import com.pushwoosh.repository.PushwooshRepository;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.RichMediaStyle;
import com.pushwoosh.richmedia.animation.RichMediaAnimationSlideBottom;
import com.pushwoosh.v.j;
import java.lang.ref.WeakReference;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshPlatform {
    private static final AtomicBoolean r = new AtomicBoolean(false);
    private static PushwooshPlatform s;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final m f5028a;
    private final b b;
    private final com.pushwoosh.a.a c;
    private final PushwooshNotificationManager d;
    private final PushwooshRepository e;
    private final RegistrationPrefs f;
    private final PushwooshInAppImpl g;
    private final com.pushwoosh.featureflags.a h;
    private final j i;
    private NotificationServiceExtension j;
    private final com.pushwoosh.richmedia.a k;
    private final com.pushwoosh.e0.b l;
    private final a m;
    private final g n;
    private final RichMediaStyle o;
    private Activity p;
    private volatile WeakReference q;

    /* synthetic */ PushwooshPlatform(d dVar, int i) {
        this(dVar);
    }

    public static PushwooshPlatform getInstance() {
        return s;
    }

    public static boolean isHostCandidate(Activity activity) {
        Resources.Theme theme = activity.getTheme();
        TypedValue typedValue = new TypedValue();
        return ((theme.resolveAttribute(android.R.attr.windowIsTranslucent, typedValue, true) && typedValue.data != 0) || (theme.resolveAttribute(android.R.attr.windowIsFloating, typedValue, true) && typedValue.data != 0)) ? false : true;
    }

    public static void notifyNotInitialized() {
        if (r.compareAndSet(false, true)) {
            PWLog.warn("PushwooshPlatform", "Pushwoosh library not initialized. All method calls will be ignored");
        }
    }

    final com.pushwoosh.e0.b b() {
        return this.l;
    }

    public g deviceRegistrar() {
        return this.n;
    }

    public com.pushwoosh.featureflags.a featureFlags() {
        return this.h;
    }

    public com.pushwoosh.e0.d getConfig() {
        return this.c;
    }

    public Activity getHostActivity() {
        WeakReference weakReference = this.q;
        if (weakReference == null) {
            return null;
        }
        return (Activity) weakReference.get();
    }

    public b getPushMessageFactory() {
        return this.b;
    }

    public RegistrationPrefs getRegistrationPrefs() {
        return this.f;
    }

    public com.pushwoosh.richmedia.a getRichMediaController() {
        return this.k;
    }

    public RichMediaStyle getRichMediaStyle() {
        return this.o;
    }

    public j getServerCommunicationManager() {
        return this.i;
    }

    public Activity getTopActivity() {
        return this.p;
    }

    public m getUUIDFactory() {
        return this.f5028a;
    }

    public PushwooshNotificationManager notificationManager() {
        return this.d;
    }

    public NotificationServiceExtension notificationService() {
        if (this.j == null) {
            try {
                Class cls = this.c.i;
                if (cls != null) {
                    this.j = (NotificationServiceExtension) cls.newInstance();
                } else {
                    this.j = new NotificationServiceExtension();
                }
            } catch (Exception e) {
                PWLog.exception(e);
                this.j = new NotificationServiceExtension();
            }
        }
        return this.j;
    }

    public void onApplicationCreated() {
        this.m.a();
    }

    public PushwooshInAppImpl pushwooshInApp() {
        return this.g;
    }

    public PushwooshRepository pushwooshRepository() {
        return this.e;
    }

    public void setHostActivity(Activity activity) {
        this.q = activity == null ? null : new WeakReference(activity);
    }

    public void setTopActivity(Activity activity) {
        this.p = activity;
    }

    private PushwooshPlatform(d dVar) {
        this.f5028a = new m();
        com.pushwoosh.a.a aVar = dVar.f5034a;
        this.c = aVar;
        g gVar = new g();
        this.n = gVar;
        RepositoryModule.init(aVar, gVar);
        PWLog.init();
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        this.f = registrationPreferences;
        j jVar = new j();
        this.i = jVar;
        NetworkModule.init(registrationPreferences, jVar, aVar.x);
        PushwooshNotificationManager pushwooshNotificationManager = new PushwooshNotificationManager(aVar, dVar.b, registrationPreferences, gVar);
        this.d = pushwooshNotificationManager;
        PushwooshInAppImpl pushwooshInAppImpl = new PushwooshInAppImpl(new f(), jVar);
        this.g = pushwooshInAppImpl;
        this.b = new b();
        this.l = new com.pushwoosh.e0.b(AndroidPlatformModule.getPrefsProvider().providePrefs("PWAppVersion"));
        RequestManager requestManager = NetworkModule.getRequestManager();
        PushwooshRepository pushwooshRepository = new PushwooshRepository(requestManager, new t(), registrationPreferences, RepositoryModule.getNotificationPreferences());
        this.e = pushwooshRepository;
        com.pushwoosh.featureflags.a aVarA = com.pushwoosh.featureflags.a.a(aVar, registrationPreferences, requestManager, pushwooshInAppImpl);
        this.h = aVarA;
        aVarA.g();
        RichMediaStyle richMediaStyle = new RichMediaStyle(0, new RichMediaAnimationSlideBottom());
        this.o = richMediaStyle;
        this.k = new com.pushwoosh.richmedia.a(new com.pushwoosh.p.a(), new com.pushwoosh.richmedia.b(), richMediaStyle);
        this.m = new a(aVar, registrationPreferences, pushwooshRepository, pushwooshNotificationManager, pushwooshInAppImpl, gVar, new k(), new h() { // from class: com.pushwoosh.PushwooshPlatform$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.d0.h
            public final void a(i iVar) {
                com.pushwoosh.d0.g.a(iVar);
            }
        });
    }
}
