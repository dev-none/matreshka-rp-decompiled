package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.eb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2091eb implements Parcelable {
    public static final Parcelable.Creator<C2091eb> CREATOR = new C2066db();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ResultReceiver f6060a;
    public final List b;
    public final HashMap c;
    public final boolean d;

    public C2091eb(I6 i6, List list, Map map, boolean z) {
        this.b = list;
        this.f6060a = i6;
        this.c = map == null ? new HashMap() : new HashMap(map);
        this.d = z;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        Bundle bundle = new Bundle();
        bundle.putParcelable("io.appmetrica.analytics.internal.CounterConfiguration.receiver", this.f6060a);
        if (this.b != null) {
            bundle.putStringArrayList("io.appmetrica.analytics.internal.CounterConfiguration.identifiersList", new ArrayList<>(this.b));
        }
        HashMap map = this.c;
        if (map != null) {
            bundle.putString("io.appmetrica.analytics.internal.CounterConfiguration.clidsForVerification", Jm.a((Map) map));
        }
        bundle.putBoolean("io.appmetrica.analytics.internal.CounterConfiguration.forceRefreshConfiguration", this.d);
        parcel.writeBundle(bundle);
    }

    public C2091eb(Parcel parcel) {
        Bundle bundle = parcel.readBundle(I6.class.getClassLoader());
        if (bundle != null) {
            this.f6060a = (ResultReceiver) bundle.getParcelable("io.appmetrica.analytics.internal.CounterConfiguration.receiver");
            this.b = bundle.getStringArrayList("io.appmetrica.analytics.internal.CounterConfiguration.identifiersList");
            this.c = Jm.a(bundle.getString("io.appmetrica.analytics.internal.CounterConfiguration.clidsForVerification"));
            this.d = bundle.getBoolean("io.appmetrica.analytics.internal.CounterConfiguration.forceRefreshConfiguration");
            return;
        }
        this.c = new HashMap();
    }
}
