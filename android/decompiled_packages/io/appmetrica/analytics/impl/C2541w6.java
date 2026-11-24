package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.crypto.CryptoProvider;
import io.appmetrica.analytics.coreapi.internal.crypto.Encrypter;
import io.appmetrica.analytics.coreutils.internal.encryption.AESRSAEncrypter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.w6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2541w6 implements CryptoProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AESRSAEncrypter f6380a = new AESRSAEncrypter();

    @Override // io.appmetrica.analytics.coreapi.internal.crypto.CryptoProvider
    public final Encrypter getAesRsaEncrypter() {
        return this.f6380a;
    }
}
