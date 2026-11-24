package com.vk.silentauth;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface ISilentAuthInfoProvider extends IInterface {
    public static final String DESCRIPTOR = "com.vk.silentauth.ISilentAuthInfoProvider";

    public static class Default implements ISilentAuthInfoProvider {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.vk.silentauth.ISilentAuthInfoProvider
        public List<SilentAuthInfo> getSilentAuthInfos(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
            return null;
        }

        @Override // com.vk.silentauth.ISilentAuthInfoProvider
        public void updateTokenByExtendedHash(Bundle bundle) throws RemoteException {
        }
    }

    List<SilentAuthInfo> getSilentAuthInfos(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException;

    void updateTokenByExtendedHash(Bundle bundle) throws RemoteException;

    public static abstract class Stub extends Binder implements ISilentAuthInfoProvider {
        static final int TRANSACTION_getSilentAuthInfos = 1;
        static final int TRANSACTION_updateTokenByExtendedHash = 2;

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, ISilentAuthInfoProvider.DESCRIPTOR);
        }

        public static ISilentAuthInfoProvider asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(ISilentAuthInfoProvider.DESCRIPTOR);
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof ISilentAuthInfoProvider)) {
                return (ISilentAuthInfoProvider) iInterfaceQueryLocalInterface;
            }
            return new Proxy(iBinder);
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(ISilentAuthInfoProvider.DESCRIPTOR);
            }
            if (i == 1598968902) {
                parcel2.writeString(ISilentAuthInfoProvider.DESCRIPTOR);
                return true;
            }
            if (i == 1) {
                List<SilentAuthInfo> silentAuthInfos = getSilentAuthInfos(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                _Parcel.writeTypedList(parcel2, silentAuthInfos, 1);
            } else if (i == 2) {
                updateTokenByExtendedHash((Bundle) _Parcel.readTypedObject(parcel, Bundle.CREATOR));
                parcel2.writeNoException();
            } else {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            return true;
        }

        private static class Proxy implements ISilentAuthInfoProvider {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return ISilentAuthInfoProvider.DESCRIPTOR;
            }

            @Override // com.vk.silentauth.ISilentAuthInfoProvider
            public List<SilentAuthInfo> getSilentAuthInfos(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ISilentAuthInfoProvider.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    parcelObtain.writeString(str4);
                    parcelObtain.writeString(str5);
                    parcelObtain.writeString(str6);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(SilentAuthInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.vk.silentauth.ISilentAuthInfoProvider
            public void updateTokenByExtendedHash(Bundle bundle) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ISilentAuthInfoProvider.DESCRIPTOR);
                    _Parcel.writeTypedObject(parcelObtain, bundle, 0);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }
    }

    public static class _Parcel {
        /* JADX INFO: Access modifiers changed from: private */
        public static <T> T readTypedObject(Parcel parcel, Parcelable.Creator<T> creator) {
            if (parcel.readInt() != 0) {
                return creator.createFromParcel(parcel);
            }
            return null;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static <T extends Parcelable> void writeTypedObject(Parcel parcel, T t, int i) {
            if (t != null) {
                parcel.writeInt(1);
                t.writeToParcel(parcel, i);
            } else {
                parcel.writeInt(0);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static <T extends Parcelable> void writeTypedList(Parcel parcel, List<T> list, int i) {
            if (list == null) {
                parcel.writeInt(-1);
                return;
            }
            int size = list.size();
            parcel.writeInt(size);
            for (int i2 = 0; i2 < size; i2++) {
                writeTypedObject(parcel, list.get(i2), i);
            }
        }
    }
}
