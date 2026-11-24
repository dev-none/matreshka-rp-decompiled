package androidx.credentials.provider;

import android.app.slice.Slice;
import android.app.slice.SliceItem;
import android.app.slice.SliceSpec;
import android.credentials.ClearCredentialStateException;
import android.credentials.ClearCredentialStateRequest;
import android.credentials.CreateCredentialException;
import android.credentials.CreateCredentialRequest;
import android.credentials.CreateCredentialResponse;
import android.credentials.Credential;
import android.credentials.CredentialManager;
import android.credentials.CredentialOption;
import android.credentials.GetCredentialException;
import android.credentials.GetCredentialRequest;
import android.credentials.GetCredentialResponse;
import android.credentials.PrepareGetCredentialResponse;
import android.net.Uri;
import android.os.Bundle;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes3.dex */
public final /* synthetic */ class Action$Companion$$ExternalSyntheticApiModelOutline0 {
    public static /* synthetic */ Slice.Builder m(Slice.Builder builder) {
        return new Slice.Builder(builder);
    }

    public static /* synthetic */ Slice.Builder m(Uri uri, SliceSpec sliceSpec) {
        return new Slice.Builder(uri, sliceSpec);
    }

    public static /* bridge */ /* synthetic */ SliceItem m(Object obj) {
        return (SliceItem) obj;
    }

    public static /* synthetic */ SliceSpec m(String str, int i) {
        return new SliceSpec(str, i);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ ClearCredentialStateException m7236m(Object obj) {
        return (ClearCredentialStateException) obj;
    }

    public static /* synthetic */ ClearCredentialStateException m(String str, String str2) {
        return new ClearCredentialStateException(str, str2);
    }

    public static /* synthetic */ ClearCredentialStateRequest m(Bundle bundle) {
        return new ClearCredentialStateRequest(bundle);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CreateCredentialException m7237m(Object obj) {
        return (CreateCredentialException) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ CreateCredentialException m7238m(String str, String str2) {
        return new CreateCredentialException(str, str2);
    }

    public static /* synthetic */ CreateCredentialRequest.Builder m(String str, Bundle bundle, Bundle bundle2) {
        return new CreateCredentialRequest.Builder(str, bundle, bundle2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ CreateCredentialResponse m7239m(Bundle bundle) {
        return new CreateCredentialResponse(bundle);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CreateCredentialResponse m7240m(Object obj) {
        return (CreateCredentialResponse) obj;
    }

    public static /* synthetic */ Credential m(String str, Bundle bundle) {
        return new Credential(str, bundle);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ CredentialManager m7241m(Object obj) {
        return (CredentialManager) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ CredentialOption.Builder m7242m(String str, Bundle bundle, Bundle bundle2) {
        return new CredentialOption.Builder(str, bundle, bundle2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ GetCredentialException m7243m(Object obj) {
        return (GetCredentialException) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ GetCredentialException m7244m(String str, String str2) {
        return new GetCredentialException(str, str2);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ GetCredentialRequest.Builder m7245m(Bundle bundle) {
        return new GetCredentialRequest.Builder(bundle);
    }

    public static /* synthetic */ GetCredentialResponse m(Credential credential) {
        return new GetCredentialResponse(credential);
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ GetCredentialResponse m7246m(Object obj) {
        return (GetCredentialResponse) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ PrepareGetCredentialResponse m7247m(Object obj) {
        return (PrepareGetCredentialResponse) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ android.service.credentials.BeginGetCredentialRequest m7249m(Object obj) {
        return (android.service.credentials.BeginGetCredentialRequest) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ android.service.credentials.BeginGetCredentialResponse m7250m(Object obj) {
        return (android.service.credentials.BeginGetCredentialResponse) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ android.service.credentials.CreateCredentialRequest m7252m(Object obj) {
        return (android.service.credentials.CreateCredentialRequest) obj;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* bridge */ /* synthetic */ android.service.credentials.GetCredentialRequest m7253m(Object obj) {
        return (android.service.credentials.GetCredentialRequest) obj;
    }

    public static /* bridge */ /* synthetic */ Class m() {
        return GetCredentialResponse.class;
    }

    /* JADX INFO: renamed from: m, reason: collision with other method in class */
    public static /* synthetic */ void m7261m() {
    }

    public static /* bridge */ /* synthetic */ Class m$1() {
        return android.service.credentials.BeginGetCredentialResponse.class;
    }

    /* JADX INFO: renamed from: m$1, reason: collision with other method in class */
    public static /* synthetic */ void m7264m$1() {
    }

    public static /* synthetic */ void m$10() {
    }

    public static /* synthetic */ void m$11() {
    }

    public static /* bridge */ /* synthetic */ Class m$2() {
        return CreateCredentialException.class;
    }

    /* JADX INFO: renamed from: m$2, reason: collision with other method in class */
    public static /* synthetic */ void m7265m$2() {
    }

    public static /* bridge */ /* synthetic */ Class m$3() {
        return GetCredentialException.class;
    }

    /* JADX INFO: renamed from: m$3, reason: collision with other method in class */
    public static /* synthetic */ void m7266m$3() {
    }

    public static /* bridge */ /* synthetic */ Class m$4() {
        return CreateCredentialResponse.class;
    }

    /* JADX INFO: renamed from: m$4, reason: collision with other method in class */
    public static /* synthetic */ void m7267m$4() {
    }

    public static /* bridge */ /* synthetic */ Class m$5() {
        return android.service.credentials.GetCredentialRequest.class;
    }

    /* JADX INFO: renamed from: m$5, reason: collision with other method in class */
    public static /* synthetic */ void m7268m$5() {
    }

    public static /* bridge */ /* synthetic */ Class m$6() {
        return android.service.credentials.CreateCredentialRequest.class;
    }

    /* JADX INFO: renamed from: m$6, reason: collision with other method in class */
    public static /* synthetic */ void m7269m$6() {
    }

    public static /* bridge */ /* synthetic */ Class m$7() {
        return android.service.credentials.BeginGetCredentialRequest.class;
    }

    /* JADX INFO: renamed from: m$7, reason: collision with other method in class */
    public static /* synthetic */ void m7270m$7() {
    }

    public static /* synthetic */ void m$8() {
    }

    public static /* synthetic */ void m$9() {
    }
}
