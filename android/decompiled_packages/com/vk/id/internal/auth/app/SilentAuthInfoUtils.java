package com.vk.id.internal.auth.app;

import android.content.pm.Signature;
import android.util.Base64;
import com.unity3d.ads.metadata.InAppPurchaseMetaData;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: compiled from: SilentAuthInfoUtils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0012\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0005J\u000e\u0010\t\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u000bJ\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u000bH\u0002J.\u0010\f\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00052\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00050\u000eH\u0002J$\u0010\f\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u000b2\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u00050\u000eH\u0002¨\u0006\u0010"}, d2 = {"Lcom/vk/id/internal/auth/app/SilentAuthInfoUtils;", "", "<init>", "()V", "calculateDigestHex", "", "packageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "pkg", "calculateDigestBase64", InAppPurchaseMetaData.KEY_SIGNATURE, "Landroid/content/pm/Signature;", "calculateDigest", "transform", "Lkotlin/Function1;", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class SilentAuthInfoUtils {
    public static final int $stable = 0;
    public static final SilentAuthInfoUtils INSTANCE = new SilentAuthInfoUtils();

    private SilentAuthInfoUtils() {
    }

    /* JADX INFO: renamed from: com.vk.id.internal.auth.app.SilentAuthInfoUtils$calculateDigestHex$1, reason: invalid class name */
    /* JADX INFO: compiled from: SilentAuthInfoUtils.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    /* synthetic */ class AnonymousClass1 extends FunctionReferenceImpl implements Function1<Signature, String> {
        AnonymousClass1(Object obj) {
            super(1, obj, SilentAuthInfoUtils.class, "calculateDigestHex", "calculateDigestHex(Landroid/content/pm/Signature;)Ljava/lang/String;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final String invoke(Signature p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ((SilentAuthInfoUtils) this.receiver).calculateDigestHex(p0);
        }
    }

    public final String calculateDigestHex(InternalVKIDPackageManager packageManager, String pkg) {
        Intrinsics.checkNotNullParameter(packageManager, "packageManager");
        Intrinsics.checkNotNullParameter(pkg, "pkg");
        return calculateDigest(packageManager, pkg, new AnonymousClass1(INSTANCE));
    }

    public final String calculateDigestBase64(Signature signature) {
        Intrinsics.checkNotNullParameter(signature, "signature");
        return calculateDigest(signature, new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthInfoUtils$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SilentAuthInfoUtils.calculateDigestBase64$lambda$0((byte[]) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String calculateDigestBase64$lambda$0(byte[] bytes) {
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        String strEncodeToString = Base64.encodeToString(bytes, 0);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
        return strEncodeToString;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String calculateDigestHex(Signature signature) {
        return calculateDigest(signature, new Function1() { // from class: com.vk.id.internal.auth.app.SilentAuthInfoUtils$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SilentAuthInfoUtils.calculateDigestHex$lambda$1((byte[]) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String calculateDigestHex$lambda$1(byte[] bytes) {
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        BigInteger bigInteger = new BigInteger(1, bytes);
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String str = String.format("%0" + (bytes.length << 1) + "X", Arrays.copyOf(new Object[]{bigInteger}, 1));
        Intrinsics.checkNotNullExpressionValue(str, "format(...)");
        Locale ENGLISH = Locale.ENGLISH;
        Intrinsics.checkNotNullExpressionValue(ENGLISH, "ENGLISH");
        String lowerCase = str.toLowerCase(ENGLISH);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        return lowerCase;
    }

    private final String calculateDigest(InternalVKIDPackageManager packageManager, String pkg, Function1<? super Signature, String> transform) {
        try {
            Signature[] signatures = packageManager.getPackageInfo(pkg, 64).signatures;
            Intrinsics.checkNotNullExpressionValue(signatures, "signatures");
            Signature signature = (Signature) ArraysKt.firstOrNull(signatures);
            if (signature != null) {
                return transform.invoke(signature);
            }
        } catch (Exception unused) {
        }
        return null;
    }

    private final String calculateDigest(Signature signature, Function1<? super byte[], String> transform) throws NoSuchAlgorithmException {
        MessageDigest messageDigest = MessageDigest.getInstance("SHA");
        messageDigest.update(signature.toByteArray());
        Object objDigest = messageDigest.digest();
        Intrinsics.checkNotNullExpressionValue(objDigest, "digest(...)");
        return transform.invoke(objDigest);
    }
}
