package com.pushwoosh.featureflags;

import com.pushwoosh.d.i;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.utils.BackgroundExecutor;

/* JADX INFO: loaded from: classes6.dex */
public final class PushwooshFeatureFlags {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final i f5077a;

    PushwooshFeatureFlags(i iVar) {
        this.f5077a = iVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Callback callback) {
        callback.process(Result.fromException(new FeatureFlagsException("SDK is not initialized", 0)));
    }

    public void addUpdateListener(FeatureFlagsUpdateListener featureFlagsUpdateListener) {
        a aVarA = this.f5077a.a();
        if (aVarA != null) {
            aVarA.a(featureFlagsUpdateListener);
        }
    }

    public FeatureFlag get(String str) {
        a aVarA = this.f5077a.a();
        if (aVarA != null) {
            return aVarA.a(str);
        }
        return null;
    }

    public boolean isEnabled(String str, boolean z) {
        FeatureFlag featureFlag = get(str);
        return featureFlag != null ? featureFlag.isEnabled() : z;
    }

    public void logImpression(String str) {
        a aVarA = this.f5077a.a();
        if (aVarA != null) {
            aVarA.c(str);
        }
    }

    public void refresh(final Callback<Void, FeatureFlagsException> callback) {
        a aVarA = this.f5077a.a();
        if (aVarA != null) {
            aVarA.b((Callback) callback, false);
        } else if (callback != null) {
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.featureflags.PushwooshFeatureFlags$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    PushwooshFeatureFlags.a(callback);
                }
            });
        }
    }

    public void removeUpdateListener(FeatureFlagsUpdateListener featureFlagsUpdateListener) {
        a aVarA = this.f5077a.a();
        if (aVarA != null) {
            aVarA.b(featureFlagsUpdateListener);
        }
    }
}
