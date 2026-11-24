package com.pushwoosh.inapp.ui;

import com.pushwoosh.internal.utils.BackgroundExecutor;
import io.sentry.protocol.SentryThread;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final /* synthetic */ class f1 extends FunctionReferenceImpl implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final f1 f5122a = new f1();

    public f1() {
        super(1, BackgroundExecutor.class, SentryThread.JsonKeys.MAIN, "main(Ljava/lang/Runnable;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Runnable p0 = (Runnable) obj;
        Intrinsics.checkNotNullParameter(p0, "p0");
        BackgroundExecutor.main(p0);
        return Unit.INSTANCE;
    }
}
