package ru.rustore.sdk.review;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.core.exception.RuStoreException;
import ru.rustore.sdk.core.util.ContextExtKt;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class e implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6696a;
    public final String b;
    public final s c;
    public final t d;

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class a extends d {
        public a() {
        }
    }

    public e(Context context, String applicationId, s onSuccess, t onError) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(applicationId, "applicationId");
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        this.f6696a = context;
        this.b = applicationId;
        this.c = onSuccess;
        this.d = onError;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        x c1227a;
        try {
            int i = x.a.f6715a;
            if (iBinder == null) {
                c1227a = null;
            } else {
                IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("ru.vk.store.provider.review.ReviewProvider");
                c1227a = (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof x)) ? new x.a.C1227a(iBinder) : (x) iInterfaceQueryLocalInterface;
            }
            c1227a.a(this.b, new a());
        } catch (Exception e) {
            t tVar = this.d;
            String message = e.getMessage();
            if (message == null) {
                message = "";
            }
            RuStoreException error = new RuStoreException(message);
            Intrinsics.checkNotNullParameter(error, "error");
            tVar.f6711a.error(error);
            Unit unit = Unit.INSTANCE;
            ContextExtKt.unbindServiceSafely(this.f6696a, this);
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        t tVar = this.d;
        RuStoreException error = new RuStoreException("onServiceDisconnected");
        Intrinsics.checkNotNullParameter(error, "error");
        tVar.f6711a.error(error);
        Unit unit = Unit.INSTANCE;
        ContextExtKt.unbindServiceSafely(this.f6696a, this);
    }
}
