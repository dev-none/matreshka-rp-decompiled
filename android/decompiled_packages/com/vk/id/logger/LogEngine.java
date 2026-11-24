package com.vk.id.logger;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: LogEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0002\bf\u0018\u00002\u00020\u0001:\u0001\u000bJ*\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00072\b\u0010\t\u001a\u0004\u0018\u00010\nH&¨\u0006\f"}, d2 = {"Lcom/vk/id/logger/LogEngine;", "", "log", "", "logLevel", "Lcom/vk/id/logger/LogEngine$LogLevel;", "tag", "", "message", "throwable", "", "LogLevel", "logger_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface LogEngine {

    /* JADX INFO: compiled from: LogEngine.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, d2 = {"Lcom/vk/id/logger/LogEngine$LogLevel;", "", "<init>", "(Ljava/lang/String;I)V", "INFO", "DEBUG", "ERROR", "logger_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public enum LogLevel {
        INFO,
        DEBUG,
        ERROR;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        public static EnumEntries<LogLevel> getEntries() {
            return $ENTRIES;
        }
    }

    void log(LogLevel logLevel, String tag, String message, Throwable throwable);
}
