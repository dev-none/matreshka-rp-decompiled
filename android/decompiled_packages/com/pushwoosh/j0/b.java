package com.pushwoosh.j0;

import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandler;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class b implements Chain {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5231a;

    public b(ArrayList arrayList) {
        this.f5231a = arrayList;
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final void addItem(Object obj) {
        this.f5231a.add((MessageSystemHandler) obj);
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final Iterator getIterator() {
        return this.f5231a.iterator();
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final void removeItem(Object obj) {
        this.f5231a.remove((MessageSystemHandler) obj);
    }
}
