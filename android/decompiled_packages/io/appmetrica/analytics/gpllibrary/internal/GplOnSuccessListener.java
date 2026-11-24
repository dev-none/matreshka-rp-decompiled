package io.appmetrica.analytics.gpllibrary.internal;

import android.location.Location;
import android.location.LocationListener;
import com.google.android.gms.tasks.OnSuccessListener;

/* JADX INFO: loaded from: classes7.dex */
class GplOnSuccessListener implements OnSuccessListener<Location> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final LocationListener f5542a;

    GplOnSuccessListener(LocationListener locationListener) {
        this.f5542a = locationListener;
    }

    @Override // com.google.android.gms.tasks.OnSuccessListener
    public void onSuccess(Location location) {
        this.f5542a.onLocationChanged(location);
    }
}
