package com.pushwoosh.k0;

import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.notification.handlers.message.user.MessageHandler;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Chain {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5235a;

    public a(ArrayList arrayList) {
        this.f5235a = arrayList;
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final void addItem(Object obj) {
        this.f5235a.add((MessageHandler) obj);
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final Iterator getIterator() {
        return this.f5235a.iterator();
    }

    @Override // com.pushwoosh.internal.chain.Chain
    public final void removeItem(Object obj) {
        this.f5235a.remove((MessageHandler) obj);
    }
}
