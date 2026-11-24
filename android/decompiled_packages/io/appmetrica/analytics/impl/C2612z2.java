package io.appmetrica.analytics.impl;

import android.content.Context;
import android.location.LocationManager;
import com.google.firebase.analytics.FirebaseAnalytics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2612z2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LocationManager f6423a;

    public C2612z2(Context context) {
        this((LocationManager) context.getSystemService(FirebaseAnalytics.Param.LOCATION));
    }

    public C2612z2(LocationManager locationManager) {
        this.f6423a = locationManager;
    }
}
