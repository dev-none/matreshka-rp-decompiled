package com.pushwoosh.notification.handlers.message.system;

import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.j0.a;
import com.pushwoosh.j0.b;
import com.pushwoosh.j0.f;
import com.pushwoosh.j0.g;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class MessageSystemHandleChainProvider {
    private static final MessageSystemHandleChainProvider b = new MessageSystemHandleChainProvider();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f5292a;

    private MessageSystemHandleChainProvider() {
    }

    public static Chain<MessageSystemHandler> getMessageSystemChain() {
        return b.f5292a;
    }

    public static void init() {
        MessageSystemHandleChainProvider messageSystemHandleChainProvider = b;
        ArrayList arrayList = new ArrayList();
        arrayList.add(new g());
        arrayList.add(new f());
        arrayList.add(new a());
        messageSystemHandleChainProvider.f5292a = new b(arrayList);
    }
}
