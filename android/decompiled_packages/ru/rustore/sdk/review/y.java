package ru.rustore.sdk.review;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ResolveInfo;
import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.core.exception.RuStoreNotInstalledException;
import ru.rustore.sdk.core.exception.RuStoreOutdatedException;
import ru.rustore.sdk.core.util.CollectionExtKt;
import ru.rustore.sdk.core.util.RuStoreUtils;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6717a;
    public final String b;

    public y(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f6717a = context;
        this.b = context.getPackageName();
    }

    public static final void a(y yVar, Context context, Function1 function1, ServiceConnection serviceConnection) {
        yVar.getClass();
        if (!RuStoreUtils.INSTANCE.isRuStoreInstalled(context)) {
            function1.invoke(new RuStoreNotInstalledException());
            return;
        }
        Intent intent = new Intent("ru.vk.store.provider.review.RemoteReviewFlowProvider");
        List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(intent, 0);
        Intrinsics.checkNotNullExpressionValue(listQueryIntentServices, "packageManager.queryIntentServices(intent, 0)");
        ComponentName componentNameFindRuStoreServiceComponentName = CollectionExtKt.findRuStoreServiceComponentName(listQueryIntentServices);
        if (componentNameFindRuStoreServiceComponentName == null) {
            function1.invoke(new RuStoreOutdatedException());
        } else {
            intent.setComponent(componentNameFindRuStoreServiceComponentName);
            context.bindService(intent, serviceConnection, 1);
        }
    }
}
