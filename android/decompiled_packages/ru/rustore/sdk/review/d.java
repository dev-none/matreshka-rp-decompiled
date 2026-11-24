package ru.rustore.sdk.review;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.core.exception.RuStoreApplicationBannedException;
import ru.rustore.sdk.core.exception.RuStoreException;
import ru.rustore.sdk.core.exception.RuStoreUserBannedException;
import ru.rustore.sdk.core.exception.RuStoreUserUnauthorizedException;
import ru.rustore.sdk.core.util.ContextExtKt;
import ru.rustore.sdk.review.errors.RuStoreInvalidReviewInfo;
import ru.rustore.sdk.review.errors.RuStoreRequestLimitReached;
import ru.rustore.sdk.review.errors.RuStoreReviewExists;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public abstract class d extends Binder implements IInterface {
    public d() {
        attachInterface(this, "ru.vk.store.provider.review.RequestReviewFlowCallback");
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this;
    }

    @Override // android.os.Binder
    public final boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        Throwable error;
        if (i >= 1 && i <= 16777215) {
            parcel.enforceInterface("ru.vk.store.provider.review.RequestReviewFlowCallback");
        }
        if (i == 1598968902) {
            parcel2.writeString("ru.vk.store.provider.review.RequestReviewFlowCallback");
            return true;
        }
        if (i == 1) {
            Bundle reviewInfo = (Bundle) (parcel.readInt() != 0 ? Bundle.CREATOR.createFromParcel(parcel) : null);
            e.a aVar = (e.a) this;
            Intrinsics.checkNotNullParameter(reviewInfo, "reviewInfo");
            s sVar = e.this.c;
            ReviewInfo reviewInfo2 = new ReviewInfo(reviewInfo);
            Intrinsics.checkNotNullParameter(reviewInfo2, "reviewInfo");
            sVar.f6710a.success(reviewInfo2);
            Unit unit = Unit.INSTANCE;
            e eVar = e.this;
            ContextExtKt.unbindServiceSafely(eVar.f6696a, eVar);
            parcel2.writeNoException();
        } else {
            if (i != 2) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            int i3 = parcel.readInt();
            String string = parcel.readString();
            e.a aVar2 = (e.a) this;
            t tVar = e.this.d;
            if (i3 == 1001) {
                error = new RuStoreUserUnauthorizedException();
            } else if (i3 == 1004) {
                error = new RuStoreUserBannedException();
            } else if (i3 != 1005) {
                switch (i3) {
                    case 3001:
                        error = new RuStoreRequestLimitReached();
                        break;
                    case 3002:
                        error = new RuStoreReviewExists();
                        break;
                    case 3003:
                        error = new RuStoreInvalidReviewInfo();
                        break;
                    default:
                        if (string == null) {
                            string = "";
                        }
                        error = new RuStoreException(string);
                        break;
                }
            } else {
                error = new RuStoreApplicationBannedException();
            }
            Intrinsics.checkNotNullParameter(error, "error");
            tVar.f6711a.error(error);
            Unit unit2 = Unit.INSTANCE;
            e eVar2 = e.this;
            ContextExtKt.unbindServiceSafely(eVar2.f6696a, eVar2);
            parcel2.writeNoException();
        }
        return true;
    }
}
