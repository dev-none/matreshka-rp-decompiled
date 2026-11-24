package com.pushwoosh.notification;

import android.os.Build;
import com.pushwoosh.function.Callback;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.NotificationPermissionEvent;
import com.pushwoosh.tags.TagsBundle;

/* JADX INFO: loaded from: classes6.dex */
public final class b implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Callback f5291a;
    public final /* synthetic */ TagsBundle b;
    public final /* synthetic */ PushwooshNotificationManager c;

    public b(PushwooshNotificationManager pushwooshNotificationManager, Callback callback, TagsBundle tagsBundle) {
        this.c = pushwooshNotificationManager;
        this.f5291a = callback;
        this.b = tagsBundle;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        this.c.b(this.f5291a, Build.VERSION.SDK_INT >= 33 ? ((NotificationPermissionEvent) event).getGrantedPermissions().contains("android.permission.POST_NOTIFICATIONS") : true, this.b);
    }
}
