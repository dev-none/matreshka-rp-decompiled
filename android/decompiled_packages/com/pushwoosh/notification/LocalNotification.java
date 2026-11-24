package com.pushwoosh.notification;

import android.os.Bundle;

/* JADX INFO: loaded from: classes6.dex */
public class LocalNotification {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f5276a;
    private final Bundle b;

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final LocalNotification f5277a = new LocalNotification();

        public LocalNotification build() {
            return this.f5277a;
        }

        public Builder setBanner(String str) {
            PushBundleDataProvider.setBanner(this.f5277a.b(), str);
            return this;
        }

        public Builder setDelay(int i) {
            LocalNotification.a(this.f5277a, i);
            return this;
        }

        public Builder setExtras(Bundle bundle) {
            if (bundle != null) {
                this.f5277a.b().putAll(bundle);
            }
            return this;
        }

        public Builder setLargeIcon(String str) {
            PushBundleDataProvider.setLargeIcon(this.f5277a.b(), str);
            return this;
        }

        public Builder setLink(String str) {
            PushBundleDataProvider.setLink(this.f5277a.b(), str);
            return this;
        }

        public Builder setMessage(String str) {
            PushBundleDataProvider.setMessage(this.f5277a.b(), str);
            return this;
        }

        public Builder setSmallIcon(String str) {
            PushBundleDataProvider.setSmallIcon(this.f5277a.b(), str);
            return this;
        }

        public Builder setTag(String str) {
            PushBundleDataProvider.setTag(this.f5277a.b(), str);
            return this;
        }
    }

    LocalNotification() {
        Bundle bundle = new Bundle();
        this.b = bundle;
        PushBundleDataProvider.setLocal(bundle, true);
    }

    final int a() {
        return this.f5276a;
    }

    final Bundle b() {
        return this.b;
    }

    static void a(LocalNotification localNotification, int i) {
        localNotification.f5276a = i;
    }
}
