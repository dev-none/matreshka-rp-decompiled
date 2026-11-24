package ru.rustore.sdk.review;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public interface x extends IInterface {
    void a(Bundle bundle, String str, ru.rustore.sdk.review.a.BinderC1226a binderC1226a);

    void a(String str, e.a aVar);

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static abstract class a extends Binder implements x {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final /* synthetic */ int f6715a = 0;

        /* JADX INFO: renamed from: ru.rustore.sdk.review.x$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
        public static class C1227a implements x {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final IBinder f6716a;

            public C1227a(IBinder iBinder) {
                this.f6716a = iBinder;
            }

            @Override // ru.rustore.sdk.review.x
            public final void a(String str, e.a aVar) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("ru.vk.store.provider.review.ReviewProvider");
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongInterface(aVar);
                    this.f6716a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.f6716a;
            }

            @Override // ru.rustore.sdk.review.x
            public final void a(Bundle bundle, String str, ru.rustore.sdk.review.a.BinderC1226a binderC1226a) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("ru.vk.store.provider.review.ReviewProvider");
                    if (bundle != null) {
                        parcelObtain.writeInt(1);
                        bundle.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongInterface(binderC1226a);
                    this.f6716a.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }
    }
}
