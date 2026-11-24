package io.appmetrica.analytics.networktasks.internal;

import android.net.Uri;

/* JADX INFO: loaded from: classes7.dex */
public class NetworkTaskForSendingDataParamsAppender {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final RequestBodyEncrypter f6507a;

    public NetworkTaskForSendingDataParamsAppender(RequestBodyEncrypter requestBodyEncrypter) {
        this.f6507a = requestBodyEncrypter;
    }

    public void appendEncryptedData(Uri.Builder builder) {
        if (this.f6507a.getEncryptionMode() == RequestBodyEncryptionMode.AES_RSA) {
            builder.appendQueryParameter(CommonUrlParts.ENCRYPTED_REQUEST, "1");
        }
    }
}
