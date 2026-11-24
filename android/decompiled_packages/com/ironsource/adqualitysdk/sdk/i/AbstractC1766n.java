package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1766n {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final ScheduledExecutorService f456;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final Handler f457;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final Handler f458 = new Handler(Looper.getMainLooper());

    static {
        Handler handler;
        HandlerThread handlerThread;
        int i = 0;
        while (true) {
            if (i < 3) {
                try {
                    handlerThread = new HandlerThread(StringFog.decrypt("BW9icYNfCoMwSQ==\n", "US0gNtc3eOY=\n"));
                    try {
                        handlerThread.start();
                        handler = new Handler(handlerThread.getLooper());
                        break;
                    } catch (Throwable unused) {
                        if (handlerThread != null) {
                            try {
                                handlerThread.quitSafely();
                            } catch (Throwable unused2) {
                                AbstractC0323.m8481(StringFog.decrypt("UqCThx10VyVql4a5\n", "E8TC8nwYPlE=\n"), StringFog.decrypt("xYLpB2C8Mv/sw+MZYLlm7qOB4Qhuv2Dk9o3kS225fO/vhvI=\n", "g+OAawXYEos=\n"), true);
                            }
                        }
                        AbstractC0323.m8481(StringFog.decrypt("8HzQvcx0ecTIS8WD\n", "sRiByK0YELA=\n"), StringFog.decrypt("5VJ6c0WOaWXME3BtRYs9dINRcnxLjTt+1l13P0iLJ3XPVmEzAJgsZdFKenFHxGc/\n", "ozMTHyDqSRE=\n"), true);
                        i++;
                    }
                } catch (Throwable unused3) {
                    handlerThread = null;
                }
            }
            handler = null;
            i++;
        }
        f457 = handler;
        f456 = handler == null ? Executors.newSingleThreadScheduledExecutor() : null;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static void m8384(AbstractRunnableC0910 abstractRunnableC0910) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            abstractRunnableC0910.run();
        } else {
            m8386(abstractRunnableC0910);
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static void m8385(AbstractRunnableC0910 abstractRunnableC0910) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            m8388(abstractRunnableC0910);
        } else {
            abstractRunnableC0910.run();
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8387(AbstractRunnableC0910 abstractRunnableC0910, long j) {
        try {
            f458.postDelayed(abstractRunnableC0910, j);
        } catch (Throwable unused) {
            AbstractC0323.m8481(StringFog.decrypt("tcHCXJEbfR2N9tdi\n", "9KWTKfB3FGk=\n"), StringFog.decrypt("CZ+d1zBBsXwg3oTUJlGxbCqSlcIwQbFnId6Z2jxLsXwnjJHaMQ==\n", "T/70u1UlkQg=\n"), false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8389(AbstractRunnableC0910 abstractRunnableC0910, long j) {
        try {
            Handler handler = f457;
            if (handler != null) {
                handler.postDelayed(abstractRunnableC0910, j);
                return;
            }
            ScheduledExecutorService scheduledExecutorService = f456;
            if (scheduledExecutorService != null) {
                scheduledExecutorService.schedule(abstractRunnableC0910, j, TimeUnit.MILLISECONDS);
            } else {
                AbstractC0323.m8481(StringFog.decrypt("19m2IenkXnnv7qMf\n", "lr3nVIiINw0=\n"), StringFog.decrypt("CuZFG2J3IMw25hAXZzQjyirtCRxxNCTZZO8EFW92KsgvqQABZnc+3yv7RRh1dSLHJesJHA==\n", "RIlleQMUS6s=\n"), false);
            }
        } catch (Throwable unused) {
            AbstractC0323.m8481(StringFog.decrypt("tEC95HipRs+Md6ja\n", "9STskRnFL7s=\n"), StringFog.decrypt("v82wTxC6IXuWjKlMBqoha5zAuFoQuiFgl4y7Qha1Zn2W2bdHVbZgYZ3AvFE=\n", "+azZI3XeAQ8=\n"), false);
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8386(AbstractRunnableC0910 abstractRunnableC0910) {
        try {
            f458.post(abstractRunnableC0910);
        } catch (Throwable unused) {
            AbstractC0323.m8481(StringFog.decrypt("IE0qsAfuE1oYej+O\n", "YSl7xWaCei4=\n"), StringFog.decrypt("hFCNoZzfchytEZSiis9yB6wRiayQ1XIcqkOBrJ0=\n", "wjHkzfm7Umg=\n"), false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8388(AbstractRunnableC0910 abstractRunnableC0910) {
        try {
            Handler handler = f457;
            if (handler != null) {
                handler.post(abstractRunnableC0910);
                return;
            }
            ScheduledExecutorService scheduledExecutorService = f456;
            if (scheduledExecutorService != null) {
                scheduledExecutorService.execute(abstractRunnableC0910);
            } else {
                AbstractC0323.m8481(StringFog.decrypt("dAQcNwEkIipMMwkJ\n", "NWBNQmBIS14=\n"), StringFog.decrypt("2dIDqLn2ibPl0lakvLWKtfnZT6+qtY2mt9tCprT3g7f8nUayvfaXoPjPA6uu9Iu49t9Prw==\n", "l70jytiV4tQ=\n"), false);
            }
        } catch (Throwable unused) {
            AbstractC0323.m8481(StringFog.decrypt("WMBDbul5V0Jg91ZQ\n", "GaQSG4gVPjY=\n"), StringFog.decrypt("J4eqAR9fSQEOxrMCCU9JGg/GoQwZUA4HDpOtCVpTCBsFiqYf\n", "YebDbXo7aXU=\n"), false);
        }
    }
}
