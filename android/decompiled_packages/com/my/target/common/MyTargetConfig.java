package com.my.target.common;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetConfig {
    public final boolean isTrackingEnvironmentEnabled;
    public final boolean isTrackingLocationEnabled;
    public final String[] testDevices;

    public static final class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f4582a = true;
        public boolean b = false;
        public String[] c;

        public MyTargetConfig build() {
            return new MyTargetConfig(this.f4582a, this.b, this.c);
        }

        public Builder from(MyTargetConfig myTargetConfig) {
            this.b = myTargetConfig.isTrackingLocationEnabled;
            this.f4582a = myTargetConfig.isTrackingEnvironmentEnabled;
            this.c = myTargetConfig.testDevices;
            return this;
        }

        public Builder withTestDevices(String... strArr) {
            this.c = strArr;
            return this;
        }

        public Builder withTrackingEnvironment(boolean z) {
            this.f4582a = z;
            return this;
        }

        public Builder withTrackingLocation(boolean z) {
            this.b = z;
            return this;
        }
    }

    public MyTargetConfig(boolean z, boolean z2, String[] strArr) {
        this.isTrackingEnvironmentEnabled = z;
        this.isTrackingLocationEnabled = z2;
        this.testDevices = strArr;
    }
}
