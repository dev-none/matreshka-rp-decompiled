package io.appmetrica.analytics.gpllibrary.internal;

import android.location.LocationListener;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationResult;

/* JADX INFO: loaded from: classes7.dex */
class GplLocationCallback extends LocationCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final LocationListener f5541a;

    GplLocationCallback(LocationListener locationListener) {
        this.f5541a = locationListener;
    }

    @Override // com.google.android.gms.location.LocationCallback
    public void onLocationResult(LocationResult locationResult) {
        this.f5541a.onLocationChanged(locationResult.getLastLocation());
    }
}
