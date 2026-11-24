package com.pushwoosh.notification.handlers.message.user;

import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.k0.b;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class MessageHandleChainProvider {
    private static final MessageHandleChainProvider b = new MessageHandleChainProvider();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.pushwoosh.k0.a f5293a;

    private MessageHandleChainProvider() {
    }

    public static Chain<MessageHandler> getHandleProcessor() {
        return b.f5293a;
    }

    public static void init() {
        MessageHandleChainProvider messageHandleChainProvider = b;
        ArrayList arrayList = new ArrayList();
        arrayList.add(new b());
        arrayList.add(new a());
        messageHandleChainProvider.f5293a = new com.pushwoosh.k0.a(arrayList);
    }
}
