package com.vk.id.logger;

import android.util.Log;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDAndroidLogcatLogEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J*\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\t2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0016¨\u0006\r"}, d2 = {"Lcom/vk/id/logger/InternalVKIDAndroidLogcatLogEngine;", "Lcom/vk/id/logger/LogEngine;", "<init>", "()V", "log", "", "logLevel", "Lcom/vk/id/logger/LogEngine$LogLevel;", "tag", "", "message", "throwable", "", "logger_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDAndroidLogcatLogEngine implements LogEngine {

    /* JADX INFO: compiled from: InternalVKIDAndroidLogcatLogEngine.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[LogEngine.LogLevel.values().length];
            try {
                iArr[LogEngine.LogLevel.INFO.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[LogEngine.LogLevel.DEBUG.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[LogEngine.LogLevel.ERROR.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    @Override // com.vk.id.logger.LogEngine
    public void log(LogEngine.LogLevel logLevel, String tag, String message, Throwable throwable) {
        Intrinsics.checkNotNullParameter(logLevel, "logLevel");
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(message, "message");
        int i = WhenMappings.$EnumSwitchMapping$0[logLevel.ordinal()];
        if (i == 1) {
            Log.i(tag, message);
        } else if (i == 2) {
            Log.d(tag, message);
        } else {
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            Log.e(tag, message, throwable);
        }
    }
}
