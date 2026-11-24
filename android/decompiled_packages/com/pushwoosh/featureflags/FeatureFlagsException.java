package com.pushwoosh.featureflags;

import com.pushwoosh.exception.PushwooshException;

/* JADX INFO: loaded from: classes6.dex */
public class FeatureFlagsException extends PushwooshException {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5076a;

    public FeatureFlagsException(String str, int i) {
        super(str);
        this.f5076a = i;
    }

    public int getHttpStatus() {
        return this.f5076a;
    }
}
