package androidx.media3.common.util;

import android.app.slice.Slice;
import android.content.pm.SigningInfo;
import android.credentials.CredentialOption;
import android.media.session.MediaSessionManager;
import android.net.http.HttpEngine;
import android.net.http.NetworkException;
import android.net.http.UrlResponseInfo;
import android.os.Bundle;
import android.service.credentials.Action;
import android.service.credentials.BeginCreateCredentialRequest;
import android.service.credentials.BeginCreateCredentialResponse;
import android.service.credentials.BeginGetCredentialOption;
import android.service.credentials.BeginGetCredentialRequest;
import android.service.credentials.BeginGetCredentialResponse;
import android.service.credentials.CallingAppInfo;
import android.service.credentials.CreateEntry;
import android.service.credentials.CredentialEntry;
import android.service.credentials.RemoteEntry;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes3.dex */
public final /* synthetic */ class Util$$ExternalSyntheticApiModelOutline0 {
    public static /* bridge */ /* synthetic */ CredentialOption m(Object obj) {
        return (CredentialOption) obj;
    }

    public static /* synthetic */ MediaSessionManager.RemoteUserInfo m(String str, int i, int i2) {
        return new MediaSessionManager.RemoteUserInfo(str, i, i2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ HttpEngine m7336m(Object obj) {
        return (HttpEngine) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ NetworkException m7337m(Object obj) {
        return (NetworkException) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ UrlResponseInfo m7338m(Object obj) {
        return (UrlResponseInfo) obj;
    }

    public static /* synthetic */ Action m(Slice slice) {
        return new Action(slice);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ Action m7339m(Object obj) {
        return (Action) obj;
    }

    public static /* synthetic */ BeginCreateCredentialRequest m(String str, Bundle bundle, CallingAppInfo callingAppInfo) {
        return new BeginCreateCredentialRequest(str, bundle, callingAppInfo);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ BeginCreateCredentialResponse.Builder m7340m() {
        return new BeginCreateCredentialResponse.Builder();
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ BeginGetCredentialOption m7341m(Object obj) {
        return (BeginGetCredentialOption) obj;
    }

    public static /* synthetic */ BeginGetCredentialOption m(String str, String str2, Bundle bundle) {
        return new BeginGetCredentialOption(str, str2, bundle);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ BeginGetCredentialRequest.Builder m7342m() {
        return new BeginGetCredentialRequest.Builder();
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ BeginGetCredentialResponse.Builder m7343m() {
        return new BeginGetCredentialResponse.Builder();
    }

    public static /* synthetic */ CallingAppInfo m(String str, SigningInfo signingInfo, String str2) {
        return new CallingAppInfo(str, signingInfo, str2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ CreateEntry m7345m(Slice slice) {
        return new CreateEntry(slice);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CreateEntry m7346m(Object obj) {
        return (CreateEntry) obj;
    }

    public static /* synthetic */ CredentialEntry m(BeginGetCredentialOption beginGetCredentialOption, Slice slice) {
        return new CredentialEntry(beginGetCredentialOption, slice);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CredentialEntry m7347m(Object obj) {
        return (CredentialEntry) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ RemoteEntry m7348m(Slice slice) {
        return new RemoteEntry(slice);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ void m7357m() {
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ boolean m7360m(Object obj) {
        return obj instanceof NetworkException;
    }

    public static /* synthetic */ void m$1() {
    }

    public static /* synthetic */ void m$2() {
    }

    public static /* synthetic */ void m$3() {
    }

    public static /* synthetic */ void m$4() {
    }

    public static /* synthetic */ void m$5() {
    }
}
