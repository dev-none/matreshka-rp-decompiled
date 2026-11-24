package com.pushwoosh.notification.handlers.notification;

import com.pushwoosh.internal.chain.Chain;
import com.pushwoosh.l0.a;
import com.pushwoosh.l0.b;
import com.pushwoosh.l0.c;
import com.pushwoosh.l0.d;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class NotificationOpenHandlerChainProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f5296a;

    public static Chain<PushNotificationOpenHandler> getNotificationOpenHandlerChain() {
        return f5296a;
    }

    public static void init() {
        ArrayList arrayList = new ArrayList();
        arrayList.add(new c());
        arrayList.add(new d());
        arrayList.add(new a());
        f5296a = new b(arrayList);
    }
}
