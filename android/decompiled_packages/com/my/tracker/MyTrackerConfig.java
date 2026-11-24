package com.my.tracker;

import android.content.pm.PackageInfo;
import com.my.tracker.config.AntiFraudConfig;
import com.my.tracker.obfuscated.y2;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.List;
import okhttp3.OkHttpClient;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTrackerConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final y2 f4894a;

    public interface InstalledPackagesProvider {
        List<PackageInfo> getInstalledPackages();
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface LocationTrackingMode {
        public static final int ACTIVE = 2;
        public static final int CACHED = 1;
        public static final int NONE = 0;
    }

    public interface OkHttpClientProvider {
        OkHttpClient getOkHttpClient();
    }

    private MyTrackerConfig(y2 y2Var) {
        this.f4894a = y2Var;
    }

    static MyTrackerConfig a(y2 y2Var) {
        return new MyTrackerConfig(y2Var);
    }

    public AntiFraudConfig getAntiFraudConfig() {
        return this.f4894a.a();
    }

    public String getApkPreinstallParams() {
        return this.f4894a.b();
    }

    public int getBufferingPeriod() {
        return this.f4894a.e();
    }

    public int getForcingPeriod() {
        return this.f4894a.f();
    }

    public String getId() {
        return this.f4894a.g();
    }

    public int getLaunchTimeout() {
        return this.f4894a.i();
    }

    public int getLocationTrackingMode() {
        return this.f4894a.j();
    }

    @Deprecated
    public String getVendorAppPackage() {
        return this.f4894a.r();
    }

    public boolean isAutotrackingPurchaseEnabled() {
        return this.f4894a.s();
    }

    public boolean isKidMode() {
        return this.f4894a.t();
    }

    public boolean isTrackingEnvironmentEnabled() {
        return this.f4894a.u();
    }

    public boolean isTrackingLaunchEnabled() {
        return this.f4894a.v();
    }

    @Deprecated
    public boolean isTrackingLocationEnabled() {
        int iJ = this.f4894a.j();
        return iJ == 1 || iJ == 2;
    }

    public boolean isTrackingPreinstallEnabled() {
        return this.f4894a.w();
    }

    public boolean isTrackingPreinstallThirdPartyEnabled() {
        return this.f4894a.x();
    }

    public void setAntiFraudConfig(AntiFraudConfig antiFraudConfig) {
        this.f4894a.a(antiFraudConfig);
    }

    public MyTrackerConfig setApkPreinstallParams(String str) {
        this.f4894a.a(str);
        return this;
    }

    public MyTrackerConfig setAutotrackingPurchaseEnabled(boolean z) {
        this.f4894a.b(z);
        return this;
    }

    public MyTrackerConfig setBufferingPeriod(int i) {
        this.f4894a.a(i);
        return this;
    }

    @Deprecated
    public MyTrackerConfig setDefaultVendorAppPackage() {
        this.f4894a.A();
        return this;
    }

    public MyTrackerConfig setForcingPeriod(int i) {
        this.f4894a.b(i);
        return this;
    }

    public MyTrackerConfig setInstalledPackagesProvider(InstalledPackagesProvider installedPackagesProvider) {
        this.f4894a.a(installedPackagesProvider);
        return this;
    }

    public MyTrackerConfig setKidMode(boolean z) {
        this.f4894a.c(z);
        return this;
    }

    public MyTrackerConfig setLaunchTimeout(int i) {
        this.f4894a.c(i);
        return this;
    }

    public MyTrackerConfig setLocationTrackingMode(int i) {
        this.f4894a.d(i);
        return this;
    }

    public MyTrackerConfig setOkHttpClientProvider(OkHttpClientProvider okHttpClientProvider) {
        this.f4894a.a(okHttpClientProvider);
        return this;
    }

    public MyTrackerConfig setProxyHost(String str) {
        this.f4894a.c(str);
        return this;
    }

    public MyTrackerConfig setTrackingEnvironmentEnabled(boolean z) {
        this.f4894a.d(z);
        return this;
    }

    public MyTrackerConfig setTrackingLaunchEnabled(boolean z) {
        this.f4894a.e(z);
        return this;
    }

    @Deprecated
    public MyTrackerConfig setTrackingLocationEnabled(boolean z) {
        if (z) {
            this.f4894a.d(1);
            return this;
        }
        this.f4894a.d(0);
        return this;
    }

    public MyTrackerConfig setTrackingPreinstallEnabled(boolean z) {
        this.f4894a.f(z);
        return this;
    }

    public MyTrackerConfig setTrackingPreinstallThirdPartyEnabled(boolean z) {
        this.f4894a.g(z);
        return this;
    }

    @Deprecated
    public MyTrackerConfig setVendorAppPackage(String str) {
        this.f4894a.e(str);
        return this;
    }
}
