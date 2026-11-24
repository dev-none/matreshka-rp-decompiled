package io.appmetrica.analytics.impl;

import com.google.firebase.remoteconfig.RemoteConfigConstants;
import io.appmetrica.analytics.coreutils.internal.services.FrameworkDetector;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.t7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2467t7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6328a;
    public final String b;
    public final String c;
    public final String d;
    public final String e;
    public final String f;
    public final String g;
    public final String h;
    public final String i;
    public final String j;
    public final String k;
    public final String l;
    public final String m;
    public final String n;

    public C2467t7(C2297mb c2297mb) {
        this.f6328a = c2297mb.b("dId");
        this.b = c2297mb.b("uId");
        this.c = c2297mb.b("analyticsSdkVersionName");
        this.d = c2297mb.b("kitBuildNumber");
        this.e = c2297mb.b("kitBuildType");
        this.f = c2297mb.b("appVer");
        this.g = c2297mb.optString("app_debuggable", "0");
        this.h = c2297mb.b(RemoteConfigConstants.RequestFieldKey.APP_BUILD);
        this.i = c2297mb.b("osVer");
        this.k = c2297mb.b("lang");
        this.l = c2297mb.b("root");
        this.m = c2297mb.optString(CommonUrlParts.APP_FRAMEWORK, FrameworkDetector.framework());
        int iOptInt = c2297mb.optInt("osApiLev", -1);
        this.j = iOptInt == -1 ? null : String.valueOf(iOptInt);
        int iOptInt2 = c2297mb.optInt("attribution_id", 0);
        this.n = iOptInt2 > 0 ? String.valueOf(iOptInt2) : null;
    }

    public final String toString() {
        return "DbNetworkTaskConfig{deviceId='" + this.f6328a + "', uuid='" + this.b + "', analyticsSdkVersionName='" + this.c + "', kitBuildNumber='" + this.d + "', kitBuildType='" + this.e + "', appVersion='" + this.f + "', appDebuggable='" + this.g + "', appBuildNumber='" + this.h + "', osVersion='" + this.i + "', osApiLevel='" + this.j + "', locale='" + this.k + "', deviceRootStatus='" + this.l + "', appFramework='" + this.m + "', attributionId='" + this.n + "'}";
    }

    public C2467t7() {
        this.f6328a = null;
        this.b = null;
        this.c = null;
        this.d = null;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.j = null;
        this.k = null;
        this.l = null;
        this.m = null;
        this.n = null;
    }
}
