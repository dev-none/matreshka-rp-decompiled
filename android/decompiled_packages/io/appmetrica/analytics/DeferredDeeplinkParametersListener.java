package io.appmetrica.analytics;

import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public interface DeferredDeeplinkParametersListener {

    public enum Error {
        NOT_A_FIRST_LAUNCH("Deferred deeplink parameters can be requested during first launch only."),
        PARSE_ERROR("Google Play referrer did not contain valid deferred deeplink parameters."),
        NO_REFERRER("No referrer was found"),
        UNKNOWN("Unknown error");


        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f5382a;

        Error(String str) {
            this.f5382a = str;
        }

        public String getDescription() {
            return this.f5382a;
        }
    }

    void onError(Error error, String str);

    void onParametersLoaded(Map<String, String> map);
}
