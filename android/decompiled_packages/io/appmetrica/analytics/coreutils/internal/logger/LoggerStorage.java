package io.appmetrica.analytics.coreutils.internal.logger;

import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public abstract class LoggerStorage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HashMap f5505a = new HashMap();
    private static final Object b = new Object();
    private static volatile PublicLogger c = PublicLogger.getAnonymousInstance();

    public static PublicLogger getMainPublicOrAnonymousLogger() {
        return c;
    }

    public static PublicLogger getOrCreateMainPublicLogger(String str) {
        c = getOrCreatePublicLogger(str);
        return c;
    }

    public static PublicLogger getOrCreatePublicLogger(String str) {
        PublicLogger publicLogger;
        if (TextUtils.isEmpty(str)) {
            return PublicLogger.getAnonymousInstance();
        }
        PublicLogger publicLogger2 = (PublicLogger) f5505a.get(str);
        if (publicLogger2 != null) {
            return publicLogger2;
        }
        synchronized (b) {
            publicLogger = (PublicLogger) f5505a.get(str);
            if (publicLogger == null) {
                publicLogger = new PublicLogger(ApiKeyUtils.createPartialApiKey(str));
                f5505a.put(str, publicLogger);
            }
        }
        return publicLogger;
    }

    public static void unsetPublicLoggers() {
        f5505a = new HashMap();
        c = PublicLogger.getAnonymousInstance();
    }
}
