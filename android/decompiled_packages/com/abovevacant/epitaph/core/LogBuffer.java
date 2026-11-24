package com.abovevacant.epitaph.core;

import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class LogBuffer {
    public final List<LogMessage> logs;
    public final String name;

    public LogBuffer(final String name, final List<LogMessage> logs) {
        this.name = name;
        this.logs = Collections.unmodifiableList(logs);
    }
}
