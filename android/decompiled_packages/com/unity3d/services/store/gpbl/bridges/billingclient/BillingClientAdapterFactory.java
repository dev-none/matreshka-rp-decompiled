package com.unity3d.services.store.gpbl.bridges.billingclient;

import android.content.Context;
import com.unity3d.services.store.gpbl.bridges.billingclient.v6.BillingClientBuilderBridge;
import com.unity3d.services.store.gpbl.bridges.billingclient.v8.BillingClientBridge;
import com.unity3d.services.store.gpbl.bridges.billingclient.v8.QueryProductDetailsResultsBridge;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BillingClientAdapterFactory.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u001d\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00050\t2\u0006\u0010\u0006\u001a\u00020\u0007H\u0002¢\u0006\u0004\b\n\u0010\u000bJ\u001c\u0010\f\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\r\u001a\u00020\u000eH\u0002¨\u0006\u000f"}, d2 = {"Lcom/unity3d/services/store/gpbl/bridges/billingclient/BillingClientAdapterFactory;", "", "<init>", "()V", "createBillingClientAdapter", "Lcom/unity3d/services/store/gpbl/bridges/billingclient/BillingClientAdapter;", "context", "Landroid/content/Context;", "createV8Adapter", "Lkotlin/Result;", "createV8Adapter-IoAF18A", "(Landroid/content/Context;)Ljava/lang/Object;", "createV6Adapter", "fallbackVersion", "", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class BillingClientAdapterFactory {
    public final BillingClientAdapter createBillingClientAdapter(Context context) {
        BillingClientAdapter billingClientAdapterCreateV6Adapter$default;
        Intrinsics.checkNotNullParameter(context, "context");
        Object objM9250createV8AdapterIoAF18A = m9250createV8AdapterIoAF18A(context);
        Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9250createV8AdapterIoAF18A);
        if (thM9864exceptionOrNullimpl != null) {
            if (thM9864exceptionOrNullimpl instanceof FallbackException) {
                billingClientAdapterCreateV6Adapter$default = createV6Adapter(context, ((FallbackException) thM9864exceptionOrNullimpl).getDetectedVersion());
            } else {
                billingClientAdapterCreateV6Adapter$default = createV6Adapter$default(this, context, 0, 2, null);
            }
            objM9250createV8AdapterIoAF18A = billingClientAdapterCreateV6Adapter$default;
        }
        return (BillingClientAdapter) objM9250createV8AdapterIoAF18A;
    }

    /* JADX INFO: renamed from: createV8Adapter-IoAF18A, reason: not valid java name */
    private final Object m9250createV8AdapterIoAF18A(Context context) {
        try {
            Result.Companion companion = Result.INSTANCE;
            BillingClientAdapterFactory billingClientAdapterFactory = this;
            com.unity3d.services.store.gpbl.bridges.billingclient.v8.BillingClientAdapter billingClientAdapter = new com.unity3d.services.store.gpbl.bridges.billingclient.v8.BillingClientAdapter(BillingClientBridge.INSTANCE.newBuilder(context));
            if (new QueryProductDetailsResultsBridge(new Object()).exists()) {
                return Result.m9861constructorimpl(billingClientAdapter);
            }
            throw new FallbackException(7);
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            return Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
    }

    static /* synthetic */ BillingClientAdapter createV6Adapter$default(BillingClientAdapterFactory billingClientAdapterFactory, Context context, int i, int i2, Object obj) {
        if ((i2 & 2) != 0) {
            i = 6;
        }
        return billingClientAdapterFactory.createV6Adapter(context, i);
    }

    private final BillingClientAdapter createV6Adapter(Context context, int fallbackVersion) {
        Object objM9861constructorimpl;
        try {
            Result.Companion companion = Result.INSTANCE;
            BillingClientAdapterFactory billingClientAdapterFactory = this;
            BillingClientBuilderBridge billingClientBuilderBridgeNewBuilder = com.unity3d.services.store.gpbl.bridges.billingclient.v6.BillingClientBridge.newBuilder(context);
            Intrinsics.checkNotNull(billingClientBuilderBridgeNewBuilder);
            objM9861constructorimpl = Result.m9861constructorimpl(new com.unity3d.services.store.gpbl.bridges.billingclient.v6.BillingClientAdapter(billingClientBuilderBridgeNewBuilder, fallbackVersion));
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        if (Result.m9867isFailureimpl(objM9861constructorimpl)) {
            objM9861constructorimpl = null;
        }
        return (BillingClientAdapter) objM9861constructorimpl;
    }
}
