package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrash;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashHandler;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashSource;
import java.io.File;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* JADX INFO: loaded from: classes7.dex */
public final class Qd implements NativeCrashHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Function1 f5850a;
    public final IHandlerExecutor b = C2495ua.k().x().e();
    public final Td c;

    public Qd(Context context, Xg xg, Function1<? super String, Unit> function1, Yd yd, EnumC2195ib enumC2195ib, String str) {
        this.f5850a = function1;
        this.c = new Td(context, xg, yd, enumC2195ib);
    }

    public static final void a(Qd qd, NativeCrash nativeCrash, File file) {
        qd.f5850a.invoke(nativeCrash.getUuid());
    }

    @Override // io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashHandler
    public final void newCrash(final NativeCrash nativeCrash) {
        E0 e0;
        C2142ga c2142ga;
        try {
            NativeCrashSource source = nativeCrash.getSource();
            String handlerVersion = nativeCrash.getHandlerVersion();
            String uuid = nativeCrash.getUuid();
            String dumpFile = nativeCrash.getDumpFile();
            long creationTime = nativeCrash.getCreationTime();
            F0 f0A = G0.a(nativeCrash.getAndroidx.media3.extractor.text.ttml.TtmlNode.TAG_METADATA java.lang.String());
            Intrinsics.checkNotNull(f0A);
            e0 = new E0(source, handlerVersion, uuid, dumpFile, creationTime, f0A);
        } catch (Throwable unused) {
            e0 = null;
        }
        if (e0 == null) {
            this.f5850a.invoke(nativeCrash.getUuid());
            return;
        }
        LoggerStorage.getOrCreatePublicLogger(e0.f.f5668a).info("Detected native crash with uuid = " + e0.c, new Object[0]);
        IHandlerExecutor iHandlerExecutor = this.b;
        Td td = this.c;
        Consumer consumer = new Consumer() { // from class: io.appmetrica.analytics.impl.Qd$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
            public final void consume(Object obj) {
                Qd.a(this.f$0, nativeCrash, (File) obj);
            }
        };
        td.getClass();
        Md md = new Md(new Od(e0.f5647a, e0.b), td.f);
        Jd jd = new Jd(td.b, e0.f, new Sd(e0, td.d));
        C2168ha c2168ha = td.e;
        String str = e0.d;
        c2168ha.getClass();
        File file = new File(str);
        Context context = td.f5905a;
        if (C2142ga.c == null) {
            synchronized (Reflection.getOrCreateKotlinClass(C2142ga.class)) {
                if (C2142ga.c == null) {
                    C2142ga.c = new C2142ga(context);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
        C2142ga c2142ga2 = C2142ga.c;
        if (c2142ga2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("INSTANCE");
            c2142ga = null;
        } else {
            c2142ga = c2142ga2;
        }
        iHandlerExecutor.execute(new Yf(file, md, consumer, jd, c2142ga, td.c.a(e0)));
    }
}
