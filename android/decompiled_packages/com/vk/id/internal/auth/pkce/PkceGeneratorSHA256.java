package com.vk.id.internal.auth.pkce;

import android.util.Base64;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PkceGeneratorSHA256.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0001\u0018\u0000 \f2\u00020\u0001:\u0001\fB\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tJ\u000e\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/vk/id/internal/auth/pkce/PkceGeneratorSHA256;", "", "<init>", "()V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "generateRandomCodeVerifier", "", "entropySource", "Ljava/security/SecureRandom;", "deriveCodeVerifierChallenge", "codeVerifier", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class PkceGeneratorSHA256 {
    private static final String ALGORITHM = "SHA-256";
    private static final String CHARSET_NAME = "ISO_8859_1";
    private static final int MIN_CODE_VERIFIER_ENTROPY = 128;
    private static final int PKCE_BASE64_ENCODE_SETTINGS = 11;
    private final InternalVKIDLogger logger;
    public static final int $stable = 8;

    public PkceGeneratorSHA256() {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("PkceGeneratorSHA256", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("PkceGeneratorSHA256");
    }

    public final String generateRandomCodeVerifier(SecureRandom entropySource) {
        Intrinsics.checkNotNullParameter(entropySource, "entropySource");
        byte[] bArr = new byte[128];
        entropySource.nextBytes(bArr);
        String strEncodeToString = Base64.encodeToString(bArr, 11);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
        return strEncodeToString;
    }

    public final String deriveCodeVerifierChallenge(String codeVerifier) {
        Intrinsics.checkNotNullParameter(codeVerifier, "codeVerifier");
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(ALGORITHM);
            Charset charsetForName = Charset.forName(CHARSET_NAME);
            Intrinsics.checkNotNullExpressionValue(charsetForName, "forName(...)");
            byte[] bytes = codeVerifier.getBytes(charsetForName);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            messageDigest.update(bytes);
            return Base64.encodeToString(messageDigest.digest(), 11);
        } catch (UnsupportedEncodingException e) {
            UnsupportedEncodingException unsupportedEncodingException = e;
            this.logger.error("Can't encode codeVerifier", unsupportedEncodingException);
            throw new IllegalStateException("ISO_8859_1 encoding not supported", unsupportedEncodingException);
        } catch (NoSuchAlgorithmException e2) {
            this.logger.error("SHA-256 algorithm not available", e2);
            return codeVerifier;
        }
    }
}
