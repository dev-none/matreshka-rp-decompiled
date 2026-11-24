package com.my.tracker.config;

import com.my.tracker.obfuscated.m1;

/* JADX INFO: loaded from: classes6.dex */
public final class AntiFraudConfig {
    public final boolean useGyroscope;
    public final boolean useLightSensor;
    public final boolean useMagneticFieldSensor;
    public final boolean usePressureSensor;
    public final boolean useProximitySensor;

    public static final class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f4899a = m1.f4972a;
        boolean b = true;
        boolean c = true;
        boolean d = true;
        boolean e = m1.b;

        Builder() {
        }

        public AntiFraudConfig build() {
            return new AntiFraudConfig(this.f4899a, this.b, this.c, this.d, this.e);
        }

        public Builder useGyroscopeSensor(boolean z) {
            this.c = z;
            return this;
        }

        public Builder useLightSensor(boolean z) {
            this.f4899a = z;
            return this;
        }

        public Builder useMagneticFieldSensor(boolean z) {
            this.b = z;
            return this;
        }

        public Builder usePressureSensor(boolean z) {
            this.d = z;
            return this;
        }

        public Builder useProximitySensor(boolean z) {
            this.e = z;
            return this;
        }
    }

    AntiFraudConfig(boolean z, boolean z2, boolean z3, boolean z4, boolean z5) {
        this.useLightSensor = z;
        this.useMagneticFieldSensor = z2;
        this.useGyroscope = z3;
        this.usePressureSensor = z4;
        this.useProximitySensor = z5;
    }

    public static Builder newBuilder() {
        return new Builder();
    }
}
