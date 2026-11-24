package io.sentry.android.core.anr;

import java.io.File;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes7.dex */
public class AnrProfileRotationHelper {
    private static final String OLD_FILE_NAME = "anr_profile_old";
    private static final String RECORDING_FILE_NAME = "anr_profile";
    private static final AtomicBoolean shouldRotate = new AtomicBoolean(true);
    private static final Object rotationLock = new Object();

    public static void rotate() {
        shouldRotate.set(true);
    }

    private static void performRotationIfNeeded(File file) {
        AtomicBoolean atomicBoolean = shouldRotate;
        if (atomicBoolean.get()) {
            synchronized (rotationLock) {
                if (atomicBoolean.get()) {
                    File file2 = new File(file, RECORDING_FILE_NAME);
                    File file3 = new File(file, OLD_FILE_NAME);
                    try {
                        file3.delete();
                    } catch (Throwable unused) {
                    }
                    try {
                        file2.renameTo(file3);
                    } catch (Throwable unused2) {
                    }
                    shouldRotate.set(false);
                }
            }
        }
    }

    public static File getFileForRecording(File file) {
        performRotationIfNeeded(file);
        return new File(file, RECORDING_FILE_NAME);
    }

    public static File getLastFile(File file) {
        performRotationIfNeeded(file);
        return new File(file, OLD_FILE_NAME);
    }

    public static boolean deleteLastFile(File file) {
        File file2 = new File(file, OLD_FILE_NAME);
        if (file2.exists()) {
            return file2.delete();
        }
        return true;
    }
}
