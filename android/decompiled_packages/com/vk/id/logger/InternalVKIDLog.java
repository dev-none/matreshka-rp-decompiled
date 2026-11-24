package com.vk.id.logger;

import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDLog.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0000\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0004\u001a\u00020\u0001H\u0007J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0007J*\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\n2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u0016R\u000e\u0010\u0004\u001a\u00020\u0001X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/vk/id/logger/InternalVKIDLog;", "Lcom/vk/id/logger/LogEngine;", "<init>", "()V", "logEngine", "setLogEngine", "", "createLoggerForTag", "Lcom/vk/id/logger/InternalVKIDLogger;", "tag", "", "log", "logLevel", "Lcom/vk/id/logger/LogEngine$LogLevel;", "message", "throwable", "", "logger_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDLog implements LogEngine {
    public static final InternalVKIDLog INSTANCE = new InternalVKIDLog();
    private static LogEngine logEngine = new InternalVKIDFakeLogEngine();

    private InternalVKIDLog() {
    }

    @InternalVKIDApi
    public final void setLogEngine(LogEngine logEngine2) {
        Intrinsics.checkNotNullParameter(logEngine2, "logEngine");
        logEngine = logEngine2;
    }

    @InternalVKIDApi
    public final InternalVKIDLogger createLoggerForTag(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        return new InternalVKIDLoggerWithTag(tag, this);
    }

    @Override // com.vk.id.logger.LogEngine
    public void log(LogEngine.LogLevel logLevel, String tag, String message, Throwable throwable) {
        Intrinsics.checkNotNullParameter(logLevel, "logLevel");
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(message, "message");
        logEngine.log(logLevel, tag, message, throwable);
    }
}
