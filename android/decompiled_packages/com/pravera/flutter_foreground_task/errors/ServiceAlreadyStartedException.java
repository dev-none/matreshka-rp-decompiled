package com.pravera.flutter_foreground_task.errors;

import kotlin.Metadata;

/* JADX INFO: compiled from: ServiceAlreadyStartedException.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00060\u0001j\u0002`\u0002B\u0007¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/pravera/flutter_foreground_task/errors/ServiceAlreadyStartedException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "<init>", "()V", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ServiceAlreadyStartedException extends Exception {
    public ServiceAlreadyStartedException() {
        super("The service has already started.");
    }
}
