package io.sentry;

import java.util.concurrent.Future;

/* JADX INFO: loaded from: classes7.dex */
public interface IDistributionApi {
    Future<UpdateStatus> checkForUpdate();

    UpdateStatus checkForUpdateBlocking();

    void downloadUpdate(UpdateInfo updateInfo);

    boolean isEnabled();
}
