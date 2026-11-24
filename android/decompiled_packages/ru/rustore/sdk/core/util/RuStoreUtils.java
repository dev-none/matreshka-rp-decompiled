package ru.rustore.sdk.core.util;

import android.content.Context;
import android.widget.Toast;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.core.Constants;
import ru.rustore.sdk.core.R;

/* JADX INFO: compiled from: RuStoreUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006J\u000e\u0010\t\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006J\u000e\u0010\n\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006J\f\u0010\u000b\u001a\u00020\b*\u00020\u0006H\u0002¨\u0006\f"}, d2 = {"Lru/rustore/sdk/core/util/RuStoreUtils;", "", "()V", "isRuStoreInstalled", "", "context", "Landroid/content/Context;", "openRuStore", "", "openRuStoreAuthorization", "openRuStoreDownloadInstruction", "showOpenAppError", "sdk-public-core_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class RuStoreUtils {
    public static final RuStoreUtils INSTANCE = new RuStoreUtils();

    private RuStoreUtils() {
    }

    public final boolean isRuStoreInstalled(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return ContextExtKt.isAppInstalled(context, "ru.vk.store.qa") || ContextExtKt.isAppInstalled(context, "ru.vk.store");
    }

    public final void openRuStoreDownloadInstruction(final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        ContextExtKt.openUrl(context, Constants.RU_STORE_DOWNLOAD_URL, new Function0<Unit>() { // from class: ru.rustore.sdk.core.util.RuStoreUtils.openRuStoreDownloadInstruction.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Unit invoke() {
                invoke2();
                return Unit.INSTANCE;
            }

            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
            public final void invoke2() {
                RuStoreUtils.INSTANCE.showOpenAppError(context);
            }
        });
    }

    public final void openRuStore(final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        if (ContextExtKt.isAppInstalled(context, "ru.vk.store.qa")) {
            ContextExtKt.openApp(context, "ru.vk.store.qa", new Function0<Unit>() { // from class: ru.rustore.sdk.core.util.RuStoreUtils$openRuStore$1$1
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Unit invoke() {
                    invoke2();
                    return Unit.INSTANCE;
                }

                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final void invoke2() {
                    RuStoreUtils.INSTANCE.showOpenAppError(context);
                }
            });
        } else {
            ContextExtKt.openApp(context, "ru.vk.store", new Function0<Unit>() { // from class: ru.rustore.sdk.core.util.RuStoreUtils$openRuStore$1$2
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Unit invoke() {
                    invoke2();
                    return Unit.INSTANCE;
                }

                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final void invoke2() {
                    RuStoreUtils.INSTANCE.showOpenAppError(context);
                }
            });
        }
    }

    public final void openRuStoreAuthorization(final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        ContextExtKt.openUrl(context, Constants.DEEPLINK_RU_STORE_AUTH + context.getPackageName(), new Function0<Unit>() { // from class: ru.rustore.sdk.core.util.RuStoreUtils.openRuStoreAuthorization.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Unit invoke() {
                invoke2();
                return Unit.INSTANCE;
            }

            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
            public final void invoke2() {
                RuStoreUtils.INSTANCE.showOpenAppError(context);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void showOpenAppError(Context context) {
        Toast.makeText(context, context.getString(R.string.default_open_error), 0).show();
    }
}
