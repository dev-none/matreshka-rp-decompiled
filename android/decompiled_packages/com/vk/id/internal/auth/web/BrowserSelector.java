package com.vk.id.internal.auth.web;

import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import androidx.browser.customtabs.CustomTabsService;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BrowserSelector.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\r2\u0006\u0010\u000f\u001a\u00020\u0010H\u0007J\u001a\u0010\u0011\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u0013H\u0007J\u0018\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\u0010\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0019H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/vk/id/internal/auth/web/BrowserSelector;", "", "<init>", "()V", "SCHEME_HTTP", "", "SCHEME_HTTPS", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "ACTION_CUSTOM_TABS_CONNECTION", "BROWSER_INTENT", "Landroid/content/Intent;", "getAllBrowsers", "", "Lcom/vk/id/internal/auth/web/BrowserDescriptor;", "pm", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "select", "browserMatcher", "Lcom/vk/id/internal/auth/web/BrowserMatcher;", "hasWarmupService", "", "packageName", "isFullBrowser", "resolveInfo", "Landroid/content/pm/ResolveInfo;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class BrowserSelector {
    public static final int $stable;
    private static final String ACTION_CUSTOM_TABS_CONNECTION;
    private static final Intent BROWSER_INTENT;
    public static final BrowserSelector INSTANCE = new BrowserSelector();
    private static final String SCHEME_HTTP = "http";
    private static final String SCHEME_HTTPS = "https";
    private static final InternalVKIDLogger logger;

    private BrowserSelector() {
    }

    public final List<BrowserDescriptor> getAllBrowsers(InternalVKIDPackageManager pm) {
        int i;
        Intrinsics.checkNotNullParameter(pm, "pm");
        ArrayList arrayList = new ArrayList();
        Intent intent = BROWSER_INTENT;
        ResolveInfo resolveInfoResolveActivity = pm.resolveActivity(intent, 0);
        String str = resolveInfoResolveActivity != null ? resolveInfoResolveActivity.activityInfo.packageName : null;
        for (ResolveInfo resolveInfo : pm.queryIntentActivities(intent, 131136)) {
            if (isFullBrowser(resolveInfo)) {
                try {
                    String packageName = resolveInfo.activityInfo.packageName;
                    Intrinsics.checkNotNullExpressionValue(packageName, "packageName");
                    PackageInfo packageInfo = pm.getPackageInfo(packageName, 64);
                    String packageName2 = resolveInfo.activityInfo.packageName;
                    Intrinsics.checkNotNullExpressionValue(packageName2, "packageName");
                    if (hasWarmupService(pm, packageName2)) {
                        i = 1;
                        BrowserDescriptor browserDescriptor = new BrowserDescriptor(packageInfo, true);
                        if (Intrinsics.areEqual(resolveInfo.activityInfo.packageName, str)) {
                            arrayList.add(0, browserDescriptor);
                        } else {
                            arrayList.add(browserDescriptor);
                            i = 0;
                        }
                    } else {
                        i = 0;
                    }
                    BrowserDescriptor browserDescriptor2 = new BrowserDescriptor(packageInfo, false);
                    if (Intrinsics.areEqual(resolveInfo.activityInfo.packageName, str)) {
                        arrayList.add(i, browserDescriptor2);
                    } else {
                        arrayList.add(browserDescriptor2);
                    }
                } catch (PackageManager.NameNotFoundException e) {
                    logger.error("Can't generate browser descriptor without the package info", e);
                }
            }
        }
        return arrayList;
    }

    public final BrowserDescriptor select(InternalVKIDPackageManager pm, BrowserMatcher browserMatcher) {
        Intrinsics.checkNotNullParameter(pm, "pm");
        Intrinsics.checkNotNullParameter(browserMatcher, "browserMatcher");
        BrowserDescriptor browserDescriptor = null;
        for (BrowserDescriptor browserDescriptor2 : getAllBrowsers(pm)) {
            if (browserMatcher.matches(browserDescriptor2)) {
                if (browserDescriptor2.getUseCustomTab()) {
                    return browserDescriptor2;
                }
                if (browserDescriptor == null) {
                    browserDescriptor = browserDescriptor2;
                }
            }
        }
        return browserDescriptor;
    }

    private final boolean hasWarmupService(InternalVKIDPackageManager pm, String packageName) {
        Intent intent = new Intent();
        intent.setAction(ACTION_CUSTOM_TABS_CONNECTION);
        intent.setPackage(packageName);
        return pm.resolveService(intent, 0) != null;
    }

    private final boolean isFullBrowser(ResolveInfo resolveInfo) {
        if (!resolveInfo.filter.hasAction("android.intent.action.VIEW") || !resolveInfo.filter.hasCategory("android.intent.category.BROWSABLE") || resolveInfo.filter.schemesIterator() == null || resolveInfo.filter.authoritiesIterator() != null) {
            return false;
        }
        Iterator<String> itSchemesIterator = resolveInfo.filter.schemesIterator();
        boolean zAreEqual = false;
        boolean zAreEqual2 = false;
        while (itSchemesIterator.hasNext()) {
            String next = itSchemesIterator.next();
            zAreEqual |= Intrinsics.areEqual("http", next);
            zAreEqual2 |= Intrinsics.areEqual("https", next);
            if (zAreEqual && zAreEqual2) {
                return true;
            }
        }
        return false;
    }

    static {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("BrowserSelector", "getSimpleName(...)");
        logger = internalVKIDLog.createLoggerForTag("BrowserSelector");
        Intrinsics.checkNotNullExpressionValue(CustomTabsService.ACTION_CUSTOM_TABS_CONNECTION, "toString(...)");
        ACTION_CUSTOM_TABS_CONNECTION = CustomTabsService.ACTION_CUSTOM_TABS_CONNECTION;
        Intent intentAddCategory = new Intent("android.intent.action.VIEW", Uri.parse("http://www.example.com")).addCategory("android.intent.category.BROWSABLE");
        Intrinsics.checkNotNullExpressionValue(intentAddCategory, "addCategory(...)");
        BROWSER_INTENT = intentAddCategory;
        $stable = 8;
    }
}
