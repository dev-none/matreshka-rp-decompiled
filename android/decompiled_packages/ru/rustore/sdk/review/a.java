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
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class a implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6685a;
    public final ReviewInfo b;
    public final String c;
    public final n d;
    public final o e;

    /* JADX INFO: renamed from: ru.rustore.sdk.review.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class BinderC1226a extends b {
        public BinderC1226a() {
        }
    }

    public a(Context context, ReviewInfo reviewInfo, String applicationId, n onSuccess, o onError) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(reviewInfo, "reviewInfo");
        Intrinsics.checkNotNullParameter(applicationId, "applicationId");
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        this.f6685a = context;
        this.b = reviewInfo;
        this.c = applicationId;
        this.d = onSuccess;
        this.e = onError;
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
            c1227a.a(this.b.toBundle$sdk_public_review_release(), this.c, new BinderC1226a());
        } catch (Exception e) {
            o oVar = this.e;
            String message = e.getMessage();
            if (message == null) {
                message = "";
            }
            RuStoreException error = new RuStoreException(message);
            Intrinsics.checkNotNullParameter(error, "error");
            oVar.f6707a.error(error);
            Unit unit = Unit.INSTANCE;
            ContextExtKt.unbindServiceSafely(this.f6685a, this);
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        o oVar = this.e;
        RuStoreException error = new RuStoreException("onServiceDisconnected");
        Intrinsics.checkNotNullParameter(error, "error");
        oVar.f6707a.error(error);
        Unit unit = Unit.INSTANCE;
        ContextExtKt.unbindServiceSafely(this.f6685a, this);
    }
}
