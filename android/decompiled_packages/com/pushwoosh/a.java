package com.pushwoosh;

import android.text.TextUtils;
import androidx.work.ExistingWorkPolicy;
import androidx.work.OneTimeWorkRequest;
import com.pushwoosh.a.e;
import com.pushwoosh.a.f;
import com.pushwoosh.b.k;
import com.pushwoosh.d0.h;
import com.pushwoosh.d0.i;
import com.pushwoosh.inapp.PushwooshInAppImpl;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.event.AppIdChangedEvent;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.InitHwidEvent;
import com.pushwoosh.internal.event.ReverseProxyReadyEvent;
import com.pushwoosh.internal.event.ServerCommunicationStartedEvent;
import com.pushwoosh.internal.platform.ApplicationOpenDetector;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.g;
import com.pushwoosh.notification.PushwooshNotificationManager;
import com.pushwoosh.notification.RescheduleNotificationsWorker;
import com.pushwoosh.repository.PushwooshRepository;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.s.b;
import com.pushwoosh.s.c;
import com.pushwoosh.w.d;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import ru.ok.tracer.base.ucum.UcumUtils;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.a.a f5030a;
    public final RegistrationPrefs b;
    public final PushwooshRepository c;
    public final PushwooshNotificationManager d;
    public final PushwooshInAppImpl e;
    public final g f;
    public final k g;
    public final h h;
    public final d i = new d();
    public final AtomicBoolean j = new AtomicBoolean(false);
    public final ExecutorService k = Executors.newSingleThreadExecutor();

    public a(com.pushwoosh.a.a aVar, RegistrationPrefs registrationPrefs, PushwooshRepository pushwooshRepository, PushwooshNotificationManager pushwooshNotificationManager, PushwooshInAppImpl pushwooshInAppImpl, g gVar, k kVar, h hVar) {
        this.f5030a = aVar;
        this.b = registrationPrefs;
        this.c = pushwooshRepository;
        this.d = pushwooshNotificationManager;
        this.e = pushwooshInAppImpl;
        this.f = gVar;
        this.g = kVar;
        this.h = hVar;
    }

    public final void a() {
        PWLog.noise("PushwooshStartWorker", "initialize()");
        if (c.d.f5311a == 2) {
            PWLog.warn("PushwooshStartWorker", "SDK already initialized");
            return;
        }
        f();
        ArrayList arrayList = new ArrayList();
        arrayList.add(new com.pushwoosh.a.g() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.a.g
            public final void a(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean) {
                this.f$0.b(countDownLatch, atomicBoolean);
            }
        });
        arrayList.add(new com.pushwoosh.a.g() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.a.g
            public final void a(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean) {
                this.f$0.a(countDownLatch, atomicBoolean);
            }
        });
        if (this.f5030a.x) {
            arrayList.add(new com.pushwoosh.a.g() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda3
                @Override // com.pushwoosh.a.g
                public final void a(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean) {
                    this.f$0.c(countDownLatch, atomicBoolean);
                }
            });
        }
        final CountDownLatch countDownLatch = new CountDownLatch(arrayList.size());
        final AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        final long jCurrentTimeMillis = System.currentTimeMillis();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((com.pushwoosh.a.g) it.next()).a(countDownLatch, atomicBoolean);
        }
        this.k.submit(new Runnable() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(countDownLatch, atomicBoolean, jCurrentTimeMillis);
            }
        });
        this.d.d();
        this.d.e();
        Iterator it2 = this.f5030a.D.iterator();
        while (it2.hasNext()) {
            ((Plugin) it2.next()).init();
        }
    }

    public final void b(final AppIdChangedEvent appIdChangedEvent) {
        PWLog.noise("PushwooshStartWorker", "onAppIdChangedEvent()");
        c.d.a(new Runnable() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda11
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(appIdChangedEvent);
            }
        });
    }

    public final void c(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean) {
        PWLog.warn("PushwooshStartWorker", "Reverse proxy is enabled. SDK startup is paused — waiting for setReverseProxy() to be called.");
        EventBus.subscribe(ReverseProxyReadyEvent.class, new f(countDownLatch));
    }

    public final void d() {
        String strDescribeTransport;
        PWLog.noise("PushwooshStartWorker", "printInitializingMessage()");
        String strA = b.a(c.d.f5311a);
        String str = this.b.hwid().get();
        String str2 = this.b.applicationId().get();
        String str3 = this.b.apiToken().get();
        if (str3 != null && str3.length() > 6) {
            str3 = str3.substring(0, 4) + "......" + str3.substring(str3.length() - 6);
        }
        String str4 = this.b.pushToken().get();
        String str5 = this.b.baseUrl().get();
        DeviceSpecificProvider deviceSpecificProvider = DeviceSpecificProvider.getInstance();
        if (deviceSpecificProvider == null) {
            strDescribeTransport = "not detected";
        } else {
            try {
                strDescribeTransport = deviceSpecificProvider.describeTransport();
            } catch (Throwable th) {
                PWLog.error("PushwooshStartWorker", "can't describe push transport", th);
                strDescribeTransport = "unavailable";
            }
        }
        PWLog.info("PushwooshStartWorker", "PUSHWOOSH SDK STATUS: ".concat(strA));
        PWLog.info("PushwooshStartWorker", "PUSHWOOSH SDK VERSION: 6.17.1");
        PWLog.info("PushwooshStartWorker", "PUSHWOOSH BASE URL: " + str5);
        PWLog.info("PushwooshStartWorker", "APP CODE: " + str2);
        PWLog.info("PushwooshStartWorker", "HWID: " + str);
        PWLog.info("PushwooshStartWorker", "PUSH TRANSPORT: " + strDescribeTransport);
        PWLog.info("PushwooshStartWorker", "PUSH TOKEN: " + str4);
        PWLog.info("PushwooshStartWorker", "API TOKEN: " + str3);
    }

    public final void e() {
        if (!this.j.compareAndSet(false, true)) {
            PWLog.warn("PushwooshStartWorker", "Local pushes already rescheduled");
        } else {
            int i = RescheduleNotificationsWorker.f5285a;
            PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(RescheduleNotificationsWorker.class).build(), "RescheduleNotificationsWorker", ExistingWorkPolicy.KEEP);
        }
    }

    public final void f() {
        EventBus.subscribe(com.pushwoosh.w.b.class, new EventListener() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((com.pushwoosh.w.b) event);
            }
        });
        this.g.b();
        EventBus.subscribe(BootReceiver.DeviceBootedEvent.class, new EventListener() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda5
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((BootReceiver.DeviceBootedEvent) event);
            }
        });
        EventBus.subscribe(AppIdChangedEvent.class, new EventListener() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda6
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.b((AppIdChangedEvent) event);
            }
        });
        EventBus.subscribe(ServerCommunicationStartedEvent.class, new EventListener() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda7
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((ServerCommunicationStartedEvent) event);
            }
        });
        EventBus.subscribe(ApplicationOpenDetector.ApplicationMovedToForegroundEvent.class, new EventListener() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda8
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((ApplicationOpenDetector.ApplicationMovedToForegroundEvent) event);
            }
        });
    }

    public final void b(final CountDownLatch countDownLatch, final AtomicBoolean atomicBoolean) {
        PWLog.noise("PushwooshStartWorker", "fetchDeviceHwidAsync()");
        try {
            this.h.a(new i() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda12
                @Override // com.pushwoosh.d0.i
                public final void a(String str) {
                    this.f$0.a(atomicBoolean, countDownLatch, str);
                }
            });
        } catch (Throwable th) {
            PWLog.error("PushwooshStartWorker", "can't fetchDeviceHwid", th);
            atomicBoolean.set(true);
            while (countDownLatch.getCount() > 0) {
                countDownLatch.countDown();
            }
        }
    }

    public final void c() {
        PWLog.noise("PushwooshStartWorker", "fixDefaultUserId()");
        if (TextUtils.isEmpty(this.b.userId().get())) {
            this.e.setUserId(this.b.hwid().get());
        }
        if (TextUtils.isEmpty(this.b.pushToken().get())) {
            return;
        }
        this.f.getClass();
        g.b((String) null);
    }

    public final void b() {
        PWLog.noise("PushwooshStartWorker", "fixDefaultUserId()");
        if (TextUtils.isEmpty(this.b.userId().get())) {
            this.e.setUserId(this.b.hwid().get());
        }
        PWLog.noise("PushwooshStartWorker", "sendAppOpenEvent()");
        this.c.sendAppOpen();
        PWLog.noise("PushwooshStartWorker", "registerDevice()");
        this.f.b();
        PWLog.noise("PushwooshStartWorker", "loadInApps()");
        this.e.checkForUpdates();
    }

    public final void a(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean, long j) {
        try {
            PWLog.debug("PushwooshStartWorker", "Waiter task is waiting for latch...");
            countDownLatch.await();
            PWLog.debug("PushwooshStartWorker", "Latch released. Checking for failures...");
            if (atomicBoolean.get()) {
                PWLog.error("PushwooshStartWorker", "can't initialize sdk, because of failed operations");
                c.d.a();
                return;
            }
            try {
                c.d.b();
                PWLog.info("PushwooshStartWorker", "Pushwoosh SDK started successfully, duration: " + (System.currentTimeMillis() - j) + UcumUtils.UCUM_MILLISECODS);
                PWLog.noise("PushwooshStartWorker", "start()");
                try {
                    d();
                } catch (Throwable th) {
                    PWLog.error("PushwooshStartWorker", "an error occurred during start", th);
                }
            } catch (Throwable th2) {
                PWLog.error("PushwooshStartWorker", "can't start sdk", th2);
                c.d.a();
            }
        } catch (InterruptedException e) {
            PWLog.error("PushwooshStartWorker", "can't initialize sdk", e);
            c.d.a();
            Thread.currentThread().interrupt();
        }
    }

    public final void a(com.pushwoosh.w.b bVar) {
        PWLog.noise("PushwooshStartWorker", "onApplicationOpenEvent()");
        c.d.a(new Runnable() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda13
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final void a(BootReceiver.DeviceBootedEvent deviceBootedEvent) {
        PWLog.noise("PushwooshStartWorker", "onDeviceBootedEvent()");
        c.d.a(new Runnable() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda10
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.e();
            }
        });
    }

    public final /* synthetic */ void a(AppIdChangedEvent appIdChangedEvent) {
        PWLog.info("PushwooshStartWorker", "AppCode was changed from " + appIdChangedEvent.getOldAppId() + " to " + appIdChangedEvent.getNewAppId() + ". Updating registration.");
        this.f.b();
    }

    public final void a(ServerCommunicationStartedEvent serverCommunicationStartedEvent) {
        PWLog.noise("PushwooshStartWorker", "onServerCommunicationStartedEvent()");
        c.d.a(new Runnable() { // from class: com.pushwoosh.a$$ExternalSyntheticLambda9
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c();
            }
        });
    }

    public final void a(ApplicationOpenDetector.ApplicationMovedToForegroundEvent applicationMovedToForegroundEvent) {
        d dVar = this.i;
        long jA = dVar.b.a();
        long[] jArr = dVar.f5323a;
        int i = dVar.c;
        jArr[i] = jA;
        dVar.c = (i + 1) % 6;
        int iMin = Math.min(dVar.d + 1, 6);
        dVar.d = iMin;
        if (iMin >= 6 && jA - dVar.f5323a[dVar.c] <= 30000) {
            PWLog.debug("KnockPatternDetector", "Knock pattern detected!");
            dVar.d = 0;
            dVar.c = 0;
            dVar.c();
        }
    }

    public final void a(AtomicBoolean atomicBoolean, CountDownLatch countDownLatch, String str) {
        PWLog.debug("PushwooshStartWorker", "fetched device hwid: " + str);
        try {
            this.b.hwid().set(str);
            EventBus.sendEvent(new InitHwidEvent(str));
            countDownLatch.countDown();
        } catch (Throwable th) {
            PWLog.error("PushwooshStartWorker", "can't store device hwid", th);
            atomicBoolean.set(true);
            while (countDownLatch.getCount() > 0) {
                countDownLatch.countDown();
            }
        }
    }

    public final void a(CountDownLatch countDownLatch, AtomicBoolean atomicBoolean) {
        PWLog.noise("PushwooshStartWorker", "fetchAppCodeAsync()");
        try {
            EventBus.subscribe(com.pushwoosh.g0.f.class, new e(this, atomicBoolean, countDownLatch));
        } catch (Throwable th) {
            PWLog.error("PushwooshStartWorker", "can't subscribe to fetch app code", th);
            atomicBoolean.set(true);
            while (countDownLatch.getCount() > 0) {
                countDownLatch.countDown();
            }
        }
    }
}
