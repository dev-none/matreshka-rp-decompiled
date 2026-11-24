package com.vk.id.internal.auth.web;

import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.util.Base64;
import com.unity3d.ads.metadata.InAppPurchaseMetaData;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import io.sentry.protocol.Request;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BrowserDescriptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\"\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\b\n\u0002\b\u0002\b\u0001\u0018\u0000 \u001b2\u00020\u0001:\u0001\u001bB-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nB\u0019\b\u0016\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\rJ\u000e\u0010\u0015\u001a\u00020\u00002\u0006\u0010\u0016\u001a\u00020\bJ\u0013\u0010\u0017\u001a\u00020\b2\b\u0010\u0018\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0019\u001a\u00020\u001aH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014¨\u0006\u001c"}, d2 = {"Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "", "packageName", "", "signatureHashes", "", "version", "useCustomTab", "", "<init>", "(Ljava/lang/String;Ljava/util/Set;Ljava/lang/String;Z)V", "packageInfo", "Landroid/content/pm/PackageInfo;", "(Landroid/content/pm/PackageInfo;Z)V", "getPackageName", "()Ljava/lang/String;", "getSignatureHashes", "()Ljava/util/Set;", "getVersion", "getUseCustomTab", "()Z", "changeUseCustomTab", "newUseCustomTabValue", "equals", Request.JsonKeys.OTHER, "hashCode", "", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class BrowserDescriptor {
    private static final String DIGEST_SHA_512 = "SHA-512";
    private static final int PRIME_HASH_FACTOR = 92821;
    private static final InternalVKIDLogger logger;
    private final String packageName;
    private final Set<String> signatureHashes;
    private final boolean useCustomTab;
    private final String version;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    public BrowserDescriptor(String packageName, Set<String> signatureHashes, String version, boolean z) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        Intrinsics.checkNotNullParameter(signatureHashes, "signatureHashes");
        Intrinsics.checkNotNullParameter(version, "version");
        this.packageName = packageName;
        this.signatureHashes = signatureHashes;
        this.version = version;
        this.useCustomTab = z;
    }

    public final String getPackageName() {
        return this.packageName;
    }

    public final Set<String> getSignatureHashes() {
        return this.signatureHashes;
    }

    public final String getVersion() {
        return this.version;
    }

    public final boolean getUseCustomTab() {
        return this.useCustomTab;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public BrowserDescriptor(PackageInfo packageInfo, boolean z) {
        Intrinsics.checkNotNullParameter(packageInfo, "packageInfo");
        String packageName = packageInfo.packageName;
        Intrinsics.checkNotNullExpressionValue(packageName, "packageName");
        Companion companion = INSTANCE;
        Signature[] signatures = packageInfo.signatures;
        Intrinsics.checkNotNullExpressionValue(signatures, "signatures");
        Set<String> setGenerateSignatureHashes = companion.generateSignatureHashes(signatures);
        String versionName = packageInfo.versionName;
        Intrinsics.checkNotNullExpressionValue(versionName, "versionName");
        this(packageName, setGenerateSignatureHashes, versionName, z);
    }

    public final BrowserDescriptor changeUseCustomTab(boolean newUseCustomTabValue) {
        return new BrowserDescriptor(this.packageName, this.signatureHashes, this.version, newUseCustomTabValue);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (other != null && (other instanceof BrowserDescriptor)) {
            BrowserDescriptor browserDescriptor = (BrowserDescriptor) other;
            if (Intrinsics.areEqual(this.packageName, browserDescriptor.packageName) && Intrinsics.areEqual(this.version, browserDescriptor.version) && this.useCustomTab == browserDescriptor.useCustomTab && Intrinsics.areEqual(this.signatureHashes, browserDescriptor.signatureHashes)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        int iHashCode = (((this.packageName.hashCode() * PRIME_HASH_FACTOR) + this.version.hashCode()) * PRIME_HASH_FACTOR) + (this.useCustomTab ? 1 : 0);
        Iterator<String> it = this.signatureHashes.iterator();
        while (it.hasNext()) {
            iHashCode = (iHashCode * PRIME_HASH_FACTOR) + it.next().hashCode();
        }
        return iHashCode;
    }

    /* JADX INFO: compiled from: BrowserDescriptor.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0000\n\u0002\u0010\u0011\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\fJ\u001f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u00070\u000e2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\f0\u0010¢\u0006\u0002\u0010\u0011R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/vk/id/internal/auth/web/BrowserDescriptor$Companion;", "", "<init>", "()V", "PRIME_HASH_FACTOR", "", "DIGEST_SHA_512", "", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "generateSignatureHash", InAppPurchaseMetaData.KEY_SIGNATURE, "Landroid/content/pm/Signature;", "generateSignatureHashes", "", "signatures", "", "([Landroid/content/pm/Signature;)Ljava/util/Set;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final String generateSignatureHash(Signature signature) {
            Intrinsics.checkNotNullParameter(signature, "signature");
            try {
                return Base64.encodeToString(MessageDigest.getInstance(BrowserDescriptor.DIGEST_SHA_512).digest(signature.toByteArray()), 10);
            } catch (NoSuchAlgorithmException e) {
                BrowserDescriptor.logger.error("Can't generate signature hash", e);
                throw new IllegalStateException("Platform does not supportSHA-512 hashing".toString());
            }
        }

        public final Set<String> generateSignatureHashes(Signature[] signatures) {
            Intrinsics.checkNotNullParameter(signatures, "signatures");
            HashSet hashSet = new HashSet();
            for (Signature signature : signatures) {
                hashSet.add(generateSignatureHash(signature));
            }
            return hashSet;
        }
    }

    static {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        String simpleName = Companion.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        logger = internalVKIDLog.createLoggerForTag(simpleName);
    }
}
