package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Function;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2516v6 implements Function {
    @Override // io.appmetrica.analytics.coreapi.internal.backport.Function
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2608yn apply(Thread thread) {
        String name = thread.getName();
        int priority = thread.getPriority();
        long id = thread.getId();
        ThreadGroup threadGroup = thread.getThreadGroup();
        return new C2608yn(name, priority, id, threadGroup != null ? threadGroup.getName() : "", null, null);
    }
}
