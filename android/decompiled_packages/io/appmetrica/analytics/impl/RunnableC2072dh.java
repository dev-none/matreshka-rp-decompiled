package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.coreutils.internal.time.TimePassedChecker;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import kotlin.KotlinVersion;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import org.apache.commons.io.FilenameUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.dh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2072dh implements Runnable {
    @Override // java.lang.Runnable
    public final void run() {
        TimePassedChecker timePassedChecker = new TimePassedChecker();
        SystemTimeProvider systemTimeProvider = new SystemTimeProvider();
        C2095ef c2095efZ = C2495ua.H.z();
        if (timePassedChecker.didTimePassMillis(c2095efZ.f(), TimeUnit.DAYS.toMillis(1L), "[ReportKotlinVersionTask]")) {
            KotlinVersion kotlinVersion = KotlinVersion.CURRENT;
            StringBuilder sb = new StringBuilder();
            sb.append(kotlinVersion.getMajor());
            sb.append(FilenameUtils.EXTENSION_SEPARATOR);
            sb.append(kotlinVersion.getMinor());
            sb.append(FilenameUtils.EXTENSION_SEPARATOR);
            sb.append(kotlinVersion.getPatch());
            Map mapMapOf = MapsKt.mapOf(TuplesKt.to("major", Integer.valueOf(kotlinVersion.getMajor())), TuplesKt.to("minor", Integer.valueOf(kotlinVersion.getMinor())), TuplesKt.to("patch", Integer.valueOf(kotlinVersion.getPatch())), TuplesKt.to("version", sb.toString()));
            Vj vj = AbstractC2479tj.f6336a;
            vj.getClass();
            vj.a(new Uj("kotlin_version", mapMapOf));
            c2095efZ.c(systemTimeProvider.currentTimeMillis()).b();
        }
    }
}
