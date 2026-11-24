package io.appmetrica.analytics.impl;

import android.net.Uri;
import android.text.TextUtils;
import com.adjust.sdk.Constants;
import io.appmetrica.analytics.coreapi.internal.control.DataSendingRestrictionController;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdTrackingInfoResult;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdvertisingIdsHolder;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.appmetrica.analytics.networktasks.internal.IParamsAppender;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2025bm implements IParamsAppender {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2325ne f6020a;
    public final InterfaceC2523vd b;
    public final Ob c = new Ob();

    public C2025bm(C2325ne c2325ne, InterfaceC2523vd interfaceC2523vd) {
        this.f6020a = c2325ne;
        this.b = interfaceC2523vd;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.IParamsAppender
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void appendParams(Uri.Builder builder, C2128fm c2128fm) {
        String str;
        C2451sg c2451sg;
        builder.path("analytics/startup");
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.DEVICE_ID), c2128fm.getDeviceId());
        a(builder, C2495ua.H.h(), this.c);
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.APP_SET_ID), c2128fm.getAppSetId());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.APP_SET_ID_SCOPE), c2128fm.getAppSetIdScope());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.APP_PLATFORM), c2128fm.getAppPlatform());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.PROTOCOL_VERSION), c2128fm.getProtocolVersion());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.ANALYTICS_SDK_VERSION_NAME), c2128fm.getAnalyticsSdkVersionName());
        builder.appendQueryParameter(this.f6020a.a("model"), c2128fm.getModel());
        builder.appendQueryParameter(this.f6020a.a("manufacturer"), c2128fm.getManufacturer());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.OS_VERSION), c2128fm.getOsVersion());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.SCREEN_WIDTH), String.valueOf(c2128fm.getScreenWidth()));
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.SCREEN_HEIGHT), String.valueOf(c2128fm.getScreenHeight()));
        builder.appendQueryParameter(this.f6020a.a("screen_dpi"), String.valueOf(c2128fm.getScreenDpi()));
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.SCALE_FACTOR), String.valueOf(c2128fm.getScaleFactor()));
        builder.appendQueryParameter(this.f6020a.a("locale"), c2128fm.getLocale());
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.DEVICE_TYPE), c2128fm.getDeviceType());
        builder.appendQueryParameter(this.f6020a.a("queries"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("query_hosts"), String.valueOf(2));
        String strA = this.f6020a.a("features");
        List<String> listH = ((Ck) this.b).h();
        String[] strArr = {this.f6020a.a("permissions_collecting"), this.f6020a.a("features_collecting"), this.f6020a.a("google_aid"), this.f6020a.a("huawei_oaid"), this.f6020a.a("sim_info"), this.f6020a.a("ssl_pinning")};
        ArrayList arrayList = new ArrayList(listH);
        arrayList.addAll(Arrays.asList(strArr));
        builder.appendQueryParameter(strA, StringUtils.wrapFeatures((String[]) arrayList.toArray(new String[0])));
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.APP_ID), c2128fm.getPackageName());
        builder.appendQueryParameter(this.f6020a.a("app_debuggable"), ((U5) c2128fm).f5917a);
        if (c2128fm.l) {
            String str2 = c2128fm.m;
            if (!TextUtils.isEmpty(str2)) {
                builder.appendQueryParameter(this.f6020a.a("country_init"), str2);
            }
        } else {
            builder.appendQueryParameter(this.f6020a.a("detect_locale"), String.valueOf(1));
        }
        C2613z3 c2613z3 = c2128fm.i;
        if (!no.a(c2613z3.f6424a)) {
            builder.appendQueryParameter(this.f6020a.a("distribution_customization"), String.valueOf(1));
            builder.appendQueryParameter(this.f6020a.a("clids_set"), Jm.a(c2613z3.f6424a));
            int iOrdinal = c2613z3.b.ordinal();
            if (iOrdinal == 1) {
                str = "api";
            } else if (iOrdinal != 2) {
                str = iOrdinal != 3 ? "" : "retail";
            } else {
                str = "satellite";
            }
            builder.appendQueryParameter(this.f6020a.a("clids_set_source"), str);
            String str3 = c2128fm.f;
            String str4 = c2128fm.g;
            if (TextUtils.isEmpty(str3) && (c2451sg = c2128fm.o.b) != null) {
                str3 = c2451sg.f6314a;
                str4 = c2451sg.d.f6296a;
            }
            if (!TextUtils.isEmpty(str3)) {
                builder.appendQueryParameter(this.f6020a.a(Constants.INSTALL_REFERRER), str3);
                if (str4 == null) {
                    str4 = "null";
                }
                builder.appendQueryParameter(this.f6020a.a("install_referrer_source"), str4);
            }
        }
        String uuid = c2128fm.getUuid();
        if (!TextUtils.isEmpty(uuid)) {
            builder.appendQueryParameter(this.f6020a.a("uuid"), uuid);
        }
        builder.appendQueryParameter(this.f6020a.a("time"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("stat_sending"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("retry_policy"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("cache_control"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("permissions_collecting"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("app_system_flag"), ((U5) c2128fm).b);
        builder.appendQueryParameter(this.f6020a.a("attribution"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("startup_update"), String.valueOf(1));
        builder.appendQueryParameter(this.f6020a.a("external_attribution"), String.valueOf(1));
        Map<String, Integer> mapD = ((Ck) this.b).d();
        for (String str5 : mapD.keySet()) {
            builder.appendQueryParameter(str5, String.valueOf(mapD.get(str5)));
        }
    }

    public final void a(Uri.Builder builder, DataSendingRestrictionController dataSendingRestrictionController, Ob ob) {
        ob.getClass();
        AdvertisingIdsHolder identifiers = C2495ua.H.c().getIdentifiers();
        if (identifiers != null && !dataSendingRestrictionController.isRestrictedForSdk()) {
            AdTrackingInfoResult google = identifiers.getGoogle();
            if (!google.isValid()) {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.ADV_ID), "");
            } else {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.ADV_ID), google.mAdTrackingInfo.advId);
            }
            AdTrackingInfoResult huawei = identifiers.getHuawei();
            if (!huawei.isValid()) {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.HUAWEI_OAID), "");
            } else {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.HUAWEI_OAID), huawei.mAdTrackingInfo.advId);
            }
            AdTrackingInfoResult yandex = identifiers.getYandex();
            if (!yandex.isValid()) {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.YANDEX_ADV_ID), "");
                return;
            } else {
                builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.YANDEX_ADV_ID), yandex.mAdTrackingInfo.advId);
                return;
            }
        }
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.ADV_ID), "");
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.HUAWEI_OAID), "");
        builder.appendQueryParameter(this.f6020a.a(CommonUrlParts.YANDEX_ADV_ID), "");
    }
}
