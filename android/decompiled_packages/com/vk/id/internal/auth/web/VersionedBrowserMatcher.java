package com.vk.id.internal.auth.web;

import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.SetsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VersionedBrowserMatcher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\"\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bB)\b\u0016\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\u0006\u0010\u000e\u001a\u00020\u0007\u0012\u0006\u0010\u000f\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u00072\u0006\u0010\u0012\u001a\u00020\u0013H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/vk/id/internal/auth/web/VersionedBrowserMatcher;", "Lcom/vk/id/internal/auth/web/BrowserMatcher;", "mPackageName", "", "mSignatureHashes", "", "mUsingCustomTab", "", "mVersionRange", "Lcom/vk/id/internal/auth/web/VersionRange;", "<init>", "(Ljava/lang/String;Ljava/util/Set;ZLcom/vk/id/internal/auth/web/VersionRange;)V", "packageName", "signatureHash", "usingCustomTab", "versionRange", "(Ljava/lang/String;Ljava/lang/String;ZLcom/vk/id/internal/auth/web/VersionRange;)V", "matches", "descriptor", "Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VersionedBrowserMatcher implements BrowserMatcher {
    private final String mPackageName;
    private final Set<String> mSignatureHashes;
    private final boolean mUsingCustomTab;
    private final VersionRange mVersionRange;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;
    public static final VersionedBrowserMatcher CHROME_CUSTOM_TAB = new VersionedBrowserMatcher("com.android.chrome", Browsers.Chrome.SIGNATURE_SET, true, VersionRange.INSTANCE.atLeast(Browsers.Chrome.MINIMUM_VERSION_FOR_CUSTOM_TAB));
    public static final VersionedBrowserMatcher CHROME_BROWSER = new VersionedBrowserMatcher("com.android.chrome", Browsers.Chrome.SIGNATURE_SET, false, VersionRange.ANY_VERSION);
    public static final VersionedBrowserMatcher FIREFOX_CUSTOM_TAB = new VersionedBrowserMatcher("org.mozilla.firefox", Browsers.Firefox.SIGNATURE_SET, true, VersionRange.INSTANCE.atLeast(Browsers.Firefox.MINIMUM_VERSION_FOR_CUSTOM_TAB));
    public static final VersionedBrowserMatcher FIREFOX_BROWSER = new VersionedBrowserMatcher("org.mozilla.firefox", Browsers.Firefox.SIGNATURE_SET, false, VersionRange.ANY_VERSION);
    public static final VersionedBrowserMatcher SAMSUNG_BROWSER = new VersionedBrowserMatcher("com.sec.android.app.sbrowser", Browsers.SBrowser.SIGNATURE_SET, false, VersionRange.ANY_VERSION);
    private static final BrowserMatcher ANY_BROWSER = new BrowserMatcher() { // from class: com.vk.id.internal.auth.web.VersionedBrowserMatcher$Companion$ANY_BROWSER$1
        @Override // com.vk.id.internal.auth.web.BrowserMatcher
        public boolean matches(BrowserDescriptor descriptor) {
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            return true;
        }
    };
    public static final VersionedBrowserMatcher SAMSUNG_CUSTOM_TAB = new VersionedBrowserMatcher("com.sec.android.app.sbrowser", Browsers.SBrowser.SIGNATURE_SET, true, VersionRange.INSTANCE.atLeast(Browsers.SBrowser.MINIMUM_VERSION_FOR_CUSTOM_TAB));

    public VersionedBrowserMatcher(String mPackageName, Set<String> mSignatureHashes, boolean z, VersionRange mVersionRange) {
        Intrinsics.checkNotNullParameter(mPackageName, "mPackageName");
        Intrinsics.checkNotNullParameter(mSignatureHashes, "mSignatureHashes");
        Intrinsics.checkNotNullParameter(mVersionRange, "mVersionRange");
        this.mPackageName = mPackageName;
        this.mSignatureHashes = mSignatureHashes;
        this.mUsingCustomTab = z;
        this.mVersionRange = mVersionRange;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public VersionedBrowserMatcher(String packageName, String signatureHash, boolean z, VersionRange versionRange) {
        this(packageName, (Set<String>) SetsKt.setOf(signatureHash), z, versionRange);
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        Intrinsics.checkNotNullParameter(signatureHash, "signatureHash");
        Intrinsics.checkNotNullParameter(versionRange, "versionRange");
    }

    @Override // com.vk.id.internal.auth.web.BrowserMatcher
    public boolean matches(BrowserDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return Intrinsics.areEqual(this.mPackageName, descriptor.getPackageName()) && this.mUsingCustomTab == descriptor.getUseCustomTab() && this.mVersionRange.matches(descriptor.getVersion()) && Intrinsics.areEqual(this.mSignatureHashes, descriptor.getSignatureHashes());
    }

    /* JADX INFO: compiled from: VersionedBrowserMatcher.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0010\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0010\u0010\u000e\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/auth/web/VersionedBrowserMatcher$Companion;", "", "<init>", "()V", "CHROME_CUSTOM_TAB", "Lcom/vk/id/internal/auth/web/VersionedBrowserMatcher;", "CHROME_BROWSER", "FIREFOX_CUSTOM_TAB", "FIREFOX_BROWSER", "SAMSUNG_BROWSER", "ANY_BROWSER", "Lcom/vk/id/internal/auth/web/BrowserMatcher;", "getANY_BROWSER", "()Lcom/vk/id/internal/auth/web/BrowserMatcher;", "SAMSUNG_CUSTOM_TAB", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final BrowserMatcher getANY_BROWSER() {
            return VersionedBrowserMatcher.ANY_BROWSER;
        }
    }
}
