package com.pushwoosh.n;

import android.app.Activity;
import android.app.ActivityManager;
import android.media.ImageReader;
import android.telephony.CellIdentityNr;
import android.telephony.CellInfoNr;
import android.telephony.CellInfoTdscdma;
import android.telephony.CellSignalStrengthTdscdma;
import android.view.Surface;
import android.view.SurfaceControl;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes6.dex */
public final /* synthetic */ class j$$ExternalSyntheticApiModelOutline0 {
    public static /* bridge */ /* synthetic */ Activity.ScreenCaptureCallback m(Object obj) {
        return (Activity.ScreenCaptureCallback) obj;
    }

    public static /* synthetic */ ActivityManager.TaskDescription m(String str, int i, int i2) {
        return new ActivityManager.TaskDescription(str, i, i2);
    }

    public static /* synthetic */ ImageReader.Builder m(int i, int i2) {
        return new ImageReader.Builder(i, i2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CellIdentityNr m9055m(Object obj) {
        return (CellIdentityNr) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CellInfoNr m9056m(Object obj) {
        return (CellInfoNr) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CellInfoTdscdma m9057m(Object obj) {
        return (CellInfoTdscdma) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CellSignalStrengthTdscdma m9061m(Object obj) {
        return (CellSignalStrengthTdscdma) obj;
    }

    public static /* synthetic */ Surface m(SurfaceControl surfaceControl) {
        return new Surface(surfaceControl);
    }

    public static /* synthetic */ SurfaceControl.Builder m() {
        return new SurfaceControl.Builder();
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ SurfaceControl.Transaction m9062m() {
        return new SurfaceControl.Transaction();
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ SurfaceControl.Transaction m9063m(Object obj) {
        return (SurfaceControl.Transaction) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ void m9069m() {
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ boolean m9074m(Object obj) {
        return obj instanceof CellInfoTdscdma;
    }

    public static /* synthetic */ void m$1() {
    }

    public static /* bridge */ /* synthetic */ boolean m$1(Object obj) {
        return obj instanceof CellInfoNr;
    }

    public static /* synthetic */ void m$2() {
    }
}
