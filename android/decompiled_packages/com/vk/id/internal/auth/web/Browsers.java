package com.vk.id.internal.auth.web;

import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.SetsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Browsers.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0006\b\u0001\u0018\u00002\u00020\u0001:\u0003\u0004\u0005\u0006B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0007"}, d2 = {"Lcom/vk/id/internal/auth/web/Browsers;", "", "<init>", "()V", "Chrome", "Firefox", "SBrowser", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class Browsers {
    public static final int $stable = 0;

    private Browsers() {
    }

    /* JADX INFO: compiled from: Browsers.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005J\u000e\u0010\u000e\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00050\b8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\n8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/auth/web/Browsers$Chrome;", "", "<init>", "()V", "PACKAGE_NAME", "", "SIGNATURE", "SIGNATURE_SET", "", "MINIMUM_VERSION_FOR_CUSTOM_TAB", "Lcom/vk/id/internal/auth/web/DelimitedVersion;", "standaloneBrowser", "Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "version", "customTab", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Chrome {
        public static final String PACKAGE_NAME = "com.android.chrome";
        public static final String SIGNATURE = "7fmduHKTdHHrlMvldlEqAIlSfii1tl35bxj1OXN5Ve8c4lU6URVu4xtSHc3BVZxS6WWJnxMDhIfQN0N0K2NDJg==";
        public static final Chrome INSTANCE = new Chrome();
        public static final Set<String> SIGNATURE_SET = SetsKt.setOf("7fmduHKTdHHrlMvldlEqAIlSfii1tl35bxj1OXN5Ve8c4lU6URVu4xtSHc3BVZxS6WWJnxMDhIfQN0N0K2NDJg==");
        public static final DelimitedVersion MINIMUM_VERSION_FOR_CUSTOM_TAB = DelimitedVersion.INSTANCE.parse("45");
        public static final int $stable = 8;

        private Chrome() {
        }

        public final BrowserDescriptor standaloneBrowser(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("com.android.chrome", SIGNATURE_SET, version, false);
        }

        public final BrowserDescriptor customTab(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("com.android.chrome", SIGNATURE_SET, version, true);
        }
    }

    /* JADX INFO: compiled from: Browsers.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005J\u000e\u0010\u000e\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00050\b8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\n8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/auth/web/Browsers$Firefox;", "", "<init>", "()V", "PACKAGE_NAME", "", "SIGNATURE_HASH", "SIGNATURE_SET", "", "MINIMUM_VERSION_FOR_CUSTOM_TAB", "Lcom/vk/id/internal/auth/web/DelimitedVersion;", "standaloneBrowser", "Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "version", "customTab", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Firefox {
        public static final String PACKAGE_NAME = "org.mozilla.firefox";
        public static final String SIGNATURE_HASH = "2gCe6pR_AO_Q2Vu8Iep-4AsiKNnUHQxu0FaDHO_qa178GByKybdT_BuE8_dYk99G5Uvx_gdONXAOO2EaXidpVQ==";
        public static final Firefox INSTANCE = new Firefox();
        public static final Set<String> SIGNATURE_SET = SetsKt.setOf("2gCe6pR_AO_Q2Vu8Iep-4AsiKNnUHQxu0FaDHO_qa178GByKybdT_BuE8_dYk99G5Uvx_gdONXAOO2EaXidpVQ==");
        public static final DelimitedVersion MINIMUM_VERSION_FOR_CUSTOM_TAB = DelimitedVersion.INSTANCE.parse("57");
        public static final int $stable = 8;

        private Firefox() {
        }

        public final BrowserDescriptor standaloneBrowser(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("org.mozilla.firefox", SIGNATURE_SET, version, false);
        }

        public final BrowserDescriptor customTab(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("org.mozilla.firefox", SIGNATURE_SET, version, true);
        }
    }

    /* JADX INFO: compiled from: Browsers.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005J\u000e\u0010\u000e\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00050\b8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\n8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/auth/web/Browsers$SBrowser;", "", "<init>", "()V", "PACKAGE_NAME", "", "SIGNATURE_HASH", "SIGNATURE_SET", "", "MINIMUM_VERSION_FOR_CUSTOM_TAB", "Lcom/vk/id/internal/auth/web/DelimitedVersion;", "standaloneBrowser", "Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "version", "customTab", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class SBrowser {
        public static final String PACKAGE_NAME = "com.sec.android.app.sbrowser";
        public static final String SIGNATURE_HASH = "ABi2fbt8vkzj7SJ8aD5jc4xJFTDFntdkMrYXL3itsvqY1QIw-dZozdop5rgKNxjbrQAd5nntAGpgh9w84O1Xgg==";
        public static final SBrowser INSTANCE = new SBrowser();
        public static final Set<String> SIGNATURE_SET = SetsKt.setOf("ABi2fbt8vkzj7SJ8aD5jc4xJFTDFntdkMrYXL3itsvqY1QIw-dZozdop5rgKNxjbrQAd5nntAGpgh9w84O1Xgg==");
        public static final DelimitedVersion MINIMUM_VERSION_FOR_CUSTOM_TAB = DelimitedVersion.INSTANCE.parse("4.0");
        public static final int $stable = 8;

        private SBrowser() {
        }

        public final BrowserDescriptor standaloneBrowser(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("com.sec.android.app.sbrowser", SIGNATURE_SET, version, false);
        }

        public final BrowserDescriptor customTab(String version) {
            Intrinsics.checkNotNullParameter(version, "version");
            return new BrowserDescriptor("com.sec.android.app.sbrowser", SIGNATURE_SET, version, true);
        }
    }
}
