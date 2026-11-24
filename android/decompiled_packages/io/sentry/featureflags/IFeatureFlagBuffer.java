package io.sentry.featureflags;

import io.sentry.protocol.FeatureFlags;

/* JADX INFO: loaded from: classes7.dex */
public interface IFeatureFlagBuffer {
    void add(String str, Boolean bool);

    IFeatureFlagBuffer clone();

    FeatureFlags getFeatureFlags();
}
