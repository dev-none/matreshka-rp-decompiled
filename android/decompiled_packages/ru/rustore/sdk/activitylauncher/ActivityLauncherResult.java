package ru.rustore.sdk.activitylauncher;

import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: ActivityLauncherResult.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u0000 \r2\u00020\u0001:\u0007\u0007\b\t\n\u000b\f\rB\u000f\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006\u0082\u0001\u0006\u000e\u000f\u0010\u0011\u0012\u0013¨\u0006\u0014"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "", "code", "", "(I)V", "getCode", "()I", "ActivityNotFound", "ActivityResultCanceled", "ActivityResultOk", "ActivityResultUnknown", "ActivitySendIntentError", "ActivityUnknownError", "Companion", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityNotFound;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultCanceled;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultOk;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultUnknown;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivitySendIntentError;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityUnknownError;", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public abstract class ActivityLauncherResult {
    public static final int ACTIVITY_SEND_INTENT_ERROR = 9901;
    public static final int ACTIVITY_UNKNOWN_ERROR = 9902;
    private final int code;

    public /* synthetic */ ActivityLauncherResult(int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(i);
    }

    private ActivityLauncherResult(int i) {
        this.code = i;
    }

    public int getCode() {
        return this.code;
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivitySendIntentError;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "()V", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivitySendIntentError extends ActivityLauncherResult {
        public static final ActivitySendIntentError INSTANCE = new ActivitySendIntentError();

        private ActivitySendIntentError() {
            super(ActivityLauncherResult.ACTIVITY_SEND_INTENT_ERROR, null);
        }
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityUnknownError;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "()V", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivityUnknownError extends ActivityLauncherResult {
        public static final ActivityUnknownError INSTANCE = new ActivityUnknownError();

        private ActivityUnknownError() {
            super(ActivityLauncherResult.ACTIVITY_UNKNOWN_ERROR, null);
        }
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityNotFound;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "()V", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivityNotFound extends ActivityLauncherResult {
        public static final ActivityNotFound INSTANCE = new ActivityNotFound();

        private ActivityNotFound() {
            super(2, null);
        }
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultOk;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "()V", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivityResultOk extends ActivityLauncherResult {
        public static final ActivityResultOk INSTANCE = new ActivityResultOk();

        private ActivityResultOk() {
            super(-1, null);
        }
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultCanceled;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "()V", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivityResultCanceled extends ActivityLauncherResult {
        public static final ActivityResultCanceled INSTANCE = new ActivityResultCanceled();

        private ActivityResultCanceled() {
            super(0, null);
        }
    }

    /* JADX INFO: compiled from: ActivityLauncherResult.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lru/rustore/sdk/activitylauncher/ActivityLauncherResult$ActivityResultUnknown;", "Lru/rustore/sdk/activitylauncher/ActivityLauncherResult;", "code", "", "(I)V", "getCode", "()I", "sdk-public-activitylauncher_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class ActivityResultUnknown extends ActivityLauncherResult {
        private final int code;

        public ActivityResultUnknown(int i) {
            super(i, null);
            this.code = i;
        }

        @Override // ru.rustore.sdk.activitylauncher.ActivityLauncherResult
        public int getCode() {
            return this.code;
        }
    }
}
