package com.pushwoosh.internal.utils;

import android.util.Log;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class PWLog {
    public static final int ASSERT = 7;
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final int VERBOSE = 2;
    public static final int WARN = 5;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f5218a = false;
    private static Level b = Level.INFO;
    private static LogsUpdateListener c;

    public enum Level {
        NONE,
        FATAL,
        ERROR,
        WARN,
        INFO,
        DEBUG,
        NOISE,
        INTERNAL
    }

    public interface LogsUpdateListener {
        void logUpdated(Level level, String str);
    }

    private static boolean a(Level level) {
        return b.compareTo(level) >= 0;
    }

    public static void debug(String str, String str2) {
        Level level = Level.DEBUG;
        if (a(level)) {
            Log.d("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static void error(String str, String str2) {
        Level level = Level.ERROR;
        if (a(level)) {
            Log.e("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static void exception(Throwable th) {
        error(null, "Exception occurred", th);
    }

    public static void fatal(String str, String str2) {
        Level level = Level.FATAL;
        if (a(level)) {
            Log.wtf("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static void info(String str, String str2) {
        Level level = Level.INFO;
        if (a(level)) {
            Log.i("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static void init() {
        if (f5218a) {
            return;
        }
        String str = RepositoryModule.getRegistrationPreferences().logLevel().get();
        if (str != null) {
            try {
                Level levelValueOf = Level.valueOf(str);
                b = levelValueOf;
                if (levelValueOf == Level.INTERNAL) {
                    b = Level.INFO;
                }
            } catch (IllegalArgumentException unused) {
                error("Unrecognized log level: ".concat(str));
            }
        }
        info("Log level: " + b.name());
        f5218a = true;
    }

    public static void internal(String str, String str2) {
        Level level = Level.INTERNAL;
        if (a(level)) {
            Log.v("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static boolean isLoggable(String str, int i) {
        switch (i) {
            case 2:
                return a(Level.NOISE);
            case 3:
                return a(Level.DEBUG);
            case 4:
                return a(Level.INFO);
            case 5:
                return a(Level.WARN);
            case 6:
                return a(Level.ERROR);
            case 7:
                return a(Level.FATAL);
            default:
                return false;
        }
    }

    public static void noise(String str, String str2) {
        if (a(Level.NOISE)) {
            Log.v("Pushwoosh", a(str, str2));
        }
        Level level = Level.NONE;
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    public static void setLogsUpdateListener(LogsUpdateListener logsUpdateListener) {
        c = logsUpdateListener;
    }

    public static void updateLogLevel(String str) {
        if (str == null || str.isEmpty()) {
            return;
        }
        try {
            Level levelValueOf = Level.valueOf(str);
            if (levelValueOf != Level.INTERNAL) {
                b = levelValueOf;
            }
        } catch (IllegalArgumentException unused) {
            error("Unrecognized log level: ".concat(str));
        }
    }

    public static void warn(String str, String str2) {
        Level level = Level.WARN;
        if (a(level)) {
            Log.w("Pushwoosh", a(str, str2));
        }
        String strA = a(str, str2);
        LogsUpdateListener logsUpdateListener = c;
        if (logsUpdateListener != null) {
            logsUpdateListener.logUpdated(level, strA);
        }
    }

    private static String a(String str, String str2) {
        if (str == null) {
            return str2;
        }
        return "[" + str + "] " + str2;
    }

    public static void debug(String str, String str2, Throwable th) {
        if (a(Level.DEBUG)) {
            Log.d("Pushwoosh", a(str, str2), th);
        }
    }

    public static void error(String str, String str2, Throwable th) {
        if (a(Level.ERROR)) {
            Log.e("Pushwoosh", a(str, str2), th);
        }
    }

    public static void info(String str, String str2, Throwable th) {
        if (a(Level.INFO)) {
            Log.i("Pushwoosh", a(str, str2), th);
        }
    }

    public static void internal(String str, String str2, Throwable th) {
        if (a(Level.INTERNAL)) {
            Log.v("Pushwoosh", a(str, str2), th);
        }
    }

    public static void noise(String str, String str2, Throwable th) {
        if (a(Level.NOISE)) {
            Log.v("Pushwoosh", a(str, str2), th);
        }
    }

    public static void warn(String str, String str2, Throwable th) {
        if (a(Level.WARN)) {
            Log.w("Pushwoosh", a(str, str2), th);
        }
    }

    public static void fatal(String str, String str2, Throwable th) {
        if (a(Level.FATAL)) {
            Log.wtf("Pushwoosh", a(str, str2), th);
        }
    }

    public static void debug(String str) {
        debug((String) null, str);
    }

    public static void error(String str) {
        error((String) null, str);
    }

    public static void info(String str) {
        info((String) null, str);
    }

    public static void internal(String str) {
        internal((String) null, str);
    }

    public static void noise(String str) {
        noise((String) null, str);
    }

    public static void warn(String str) {
        warn((String) null, str);
    }

    public static void debug(String str, Throwable th) {
        debug(null, str, th);
    }

    public static void error(String str, Throwable th) {
        error(null, str, th);
    }

    public static void fatal(String str) {
        fatal((String) null, str);
    }

    public static void info(String str, Throwable th) {
        info(null, str, th);
    }

    public static void internal(String str, Throwable th) {
        internal(null, str, th);
    }

    public static void noise(String str, Throwable th) {
        noise(null, str, th);
    }

    public static void warn(String str, Throwable th) {
        warn(null, str, th);
    }

    public static void fatal(String str, Throwable th) {
        fatal(null, str, th);
    }
}
