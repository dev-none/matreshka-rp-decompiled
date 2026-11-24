package com.my.tracker.obfuscated;

import android.content.Context;
import android.location.Criteria;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import com.google.firebase.analytics.FirebaseAnalytics;

/* JADX INFO: loaded from: classes6.dex */
public final class a1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Location f4906a;
    LocationManager c;
    int d = -1;
    protected final LocationListener b = new a();

    class a implements LocationListener {
        a() {
        }

        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            x2.a("LocationDataProvider: location has been updated");
            a1 a1Var = a1.this;
            a1Var.f4906a = location;
            LocationManager locationManager = a1Var.c;
            if (locationManager != null) {
                locationManager.removeUpdates(this);
            }
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
            x2.a("LocationDataProvider: onProviderDisabled, provider – " + str);
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
            x2.a("LocationDataProvider: onProviderEnabled, provider –" + str);
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
            x2.a("LocationDataProvider: onStatusChanged, provider – " + str + ", status – " + i + ", extras – " + bundle);
        }
    }

    a1() {
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public z0 a(int i, Context context) {
        float accuracy;
        long time;
        String provider;
        int i2;
        if (i == 0) {
            return z0.g;
        }
        this.d = -1;
        if (!m1.a("android.permission.ACCESS_FINE_LOCATION", context) || !m1.a("android.permission.ACCESS_COARSE_LOCATION", context)) {
            return z0.g;
        }
        if (m1.a()) {
            return z0.g;
        }
        LocationManager locationManager = (LocationManager) context.getSystemService(FirebaseAnalytics.Param.LOCATION);
        this.c = locationManager;
        if (locationManager == null) {
            return z0.g;
        }
        int i3 = 2;
        if (i == 2) {
            a();
        }
        Location location = this.f4906a;
        if (location != null) {
            accuracy = location.getAccuracy();
            time = location.getTime();
            provider = location.getProvider();
        } else {
            location = null;
            accuracy = Float.MAX_VALUE;
            time = 0;
            provider = null;
        }
        for (String str : this.c.getAllProviders()) {
            try {
                Location lastKnownLocation = this.c.getLastKnownLocation(str);
                if (lastKnownLocation != null) {
                    float accuracy2 = lastKnownLocation.getAccuracy();
                    long time2 = lastKnownLocation.getTime();
                    if (location == null || (time2 > time && accuracy2 < accuracy)) {
                        provider = str;
                        location = lastKnownLocation;
                        accuracy = accuracy2;
                        time = time2;
                    }
                }
            } catch (SecurityException unused) {
                x2.a("LocationDataProvider: Permission android.permission.ACCESS_COARSE_LOCATION or android.permission.ACCESS_FINE_LOCATION check was positive, but still got security exception on the location provider");
            }
        }
        if (location == null) {
            return z0.g;
        }
        provider.getClass();
        provider.hashCode();
        switch (provider) {
            case "passive":
                i3 = 4;
                i2 = i3;
                break;
            case "gps":
                i2 = i3;
                break;
            case "network":
                i3 = 3;
                i2 = i3;
                break;
            default:
                i2 = 1;
                break;
        }
        return new z0(i2, location.getLatitude(), location.getLongitude(), location.getSpeed(), location.getAccuracy(), location.getTime());
    }

    void a() {
        if (this.c != null) {
            Criteria criteria = new Criteria();
            criteria.setAccuracy(1);
            final String bestProvider = this.c.getBestProvider(criteria, true);
            x2.a("LocationDataProvider: best provider is " + bestProvider);
            if (bestProvider != null) {
                m.f(new Runnable() { // from class: com.my.tracker.obfuscated.a1$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(bestProvider);
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str) {
        this.c.requestLocationUpdates(str, 2000L, 0.0f, this.b);
    }
}
