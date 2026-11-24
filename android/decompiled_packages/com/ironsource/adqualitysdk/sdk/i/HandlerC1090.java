package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class HandlerC1090 extends Handler {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1069 f3879;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public HandlerC1090(C1069 c1069, Looper looper) {
        super(looper);
        this.f3879 = c1069;
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        int size;
        AbstractC1087[] abstractC1087Arr;
        if (message.what != 1) {
            super.handleMessage(message);
            return;
        }
        C1069 c1069 = this.f3879;
        do {
            synchronized (c1069.f3851) {
                size = c1069.f3849.size();
                if (size <= 0) {
                    return;
                }
                abstractC1087Arr = new AbstractC1087[size];
                c1069.f3849.toArray(abstractC1087Arr);
                c1069.f3849.clear();
            }
        } while (size <= 0);
        AbstractC1087 abstractC1087 = abstractC1087Arr[0];
        throw null;
    }
}
