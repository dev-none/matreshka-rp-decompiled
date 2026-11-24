package com.pushwoosh.inapp.nativeui;

/* JADX INFO: loaded from: classes6.dex */
public final class NativeInAppPresenterProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile NativeInAppPresenter f5101a;

    public static NativeInAppPresenter get() {
        return f5101a;
    }

    public static void set(NativeInAppPresenter nativeInAppPresenter) {
        f5101a = nativeInAppPresenter;
    }
}
