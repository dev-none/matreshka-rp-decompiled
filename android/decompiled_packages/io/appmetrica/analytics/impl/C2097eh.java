package io.appmetrica.analytics.impl;

import android.net.Uri;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.networktasks.internal.AdvIdWithLimitedAppender;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.appmetrica.analytics.networktasks.internal.IParamsAppender;
import io.appmetrica.analytics.networktasks.internal.NetworkTaskForSendingDataParamsAppender;
import io.appmetrica.analytics.networktasks.internal.RequestBodyEncrypter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.eh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2097eh implements IParamsAppender {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AdvIdWithLimitedAppender f6063a;
    public final NetworkTaskForSendingDataParamsAppender b;
    public C2467t7 c;
    public final Ob d;
    public long e;

    public C2097eh(RequestBodyEncrypter requestBodyEncrypter) {
        this(new AdvIdWithLimitedAppender(), new NetworkTaskForSendingDataParamsAppender(requestBodyEncrypter), new Ob());
    }

    public final void a(C2467t7 c2467t7) {
        this.c = c2467t7;
    }

    public C2097eh(AdvIdWithLimitedAppender advIdWithLimitedAppender, NetworkTaskForSendingDataParamsAppender networkTaskForSendingDataParamsAppender, Ob ob) {
        this.f6063a = advIdWithLimitedAppender;
        this.b = networkTaskForSendingDataParamsAppender;
        this.d = ob;
    }

    public final void a(long j) {
        this.e = j;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.IParamsAppender
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void appendParams(Uri.Builder builder, C2378ph c2378ph) {
        builder.path("report");
        this.b.appendEncryptedData(builder);
        C2467t7 c2467t7 = this.c;
        if (c2467t7 != null) {
            builder.appendQueryParameter(CommonUrlParts.DEVICE_ID, StringUtils.ifIsEmptyToDef(c2467t7.f6328a, c2378ph.getDeviceId()));
            builder.appendQueryParameter("uuid", StringUtils.ifIsEmptyToDef(this.c.b, c2378ph.getUuid()));
            a(builder, CommonUrlParts.ANALYTICS_SDK_VERSION_NAME, this.c.c);
            builder.appendQueryParameter(CommonUrlParts.APP_VERSION, StringUtils.ifIsEmptyToDef(this.c.f, c2378ph.getAppVersion()));
            builder.appendQueryParameter(CommonUrlParts.APP_VERSION_CODE, StringUtils.ifIsEmptyToDef(this.c.h, c2378ph.getAppBuildNumber()));
            builder.appendQueryParameter(CommonUrlParts.OS_VERSION, StringUtils.ifIsEmptyToDef(this.c.i, c2378ph.getOsVersion()));
            a(builder, CommonUrlParts.OS_API_LEVEL, this.c.j);
            a(builder, CommonUrlParts.ANALYTICS_SDK_BUILD_NUMBER, this.c.d);
            a(builder, CommonUrlParts.ANALYTICS_SDK_BUILD_TYPE, this.c.e);
            a(builder, "app_debuggable", this.c.g);
            builder.appendQueryParameter("locale", StringUtils.ifIsEmptyToDef(this.c.k, c2378ph.getLocale()));
            builder.appendQueryParameter(CommonUrlParts.ROOT_STATUS, StringUtils.ifIsEmptyToDef(this.c.l, c2378ph.getDeviceRootStatus()));
            builder.appendQueryParameter(CommonUrlParts.APP_FRAMEWORK, StringUtils.ifIsEmptyToDef(this.c.m, c2378ph.getAppFramework()));
            a(builder, "attribution_id", this.c.n);
        }
        builder.appendQueryParameter("api_key_128", c2378ph.m);
        builder.appendQueryParameter(CommonUrlParts.APP_ID, c2378ph.getPackageName());
        builder.appendQueryParameter(CommonUrlParts.APP_PLATFORM, c2378ph.getAppPlatform());
        builder.appendQueryParameter("model", c2378ph.getModel());
        builder.appendQueryParameter("manufacturer", c2378ph.getManufacturer());
        builder.appendQueryParameter(CommonUrlParts.SCREEN_WIDTH, String.valueOf(c2378ph.getScreenWidth()));
        builder.appendQueryParameter(CommonUrlParts.SCREEN_HEIGHT, String.valueOf(c2378ph.getScreenHeight()));
        builder.appendQueryParameter("screen_dpi", String.valueOf(c2378ph.getScreenDpi()));
        builder.appendQueryParameter(CommonUrlParts.SCALE_FACTOR, String.valueOf(c2378ph.getScaleFactor()));
        builder.appendQueryParameter(CommonUrlParts.DEVICE_TYPE, c2378ph.getDeviceType());
        a(builder, "clids_set", (String) WrapUtils.getOrDefault(c2378ph.p, ""));
        builder.appendQueryParameter(CommonUrlParts.APP_SET_ID, c2378ph.getAppSetId());
        builder.appendQueryParameter(CommonUrlParts.APP_SET_ID_SCOPE, c2378ph.getAppSetIdScope());
        AdvIdWithLimitedAppender advIdWithLimitedAppender = this.f6063a;
        this.d.getClass();
        advIdWithLimitedAppender.appendParams(builder, C2495ua.H.c().getIdentifiers());
        builder.appendQueryParameter(CommonUrlParts.REQUEST_ID, String.valueOf(this.e));
    }

    public static void a(Uri.Builder builder, String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        builder.appendQueryParameter(str, str2);
    }
}
