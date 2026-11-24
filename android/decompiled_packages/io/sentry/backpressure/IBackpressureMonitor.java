package io.sentry.backpressure;

/* JADX INFO: loaded from: classes7.dex */
public interface IBackpressureMonitor {
    void close();

    int getDownsampleFactor();

    void start();
}
