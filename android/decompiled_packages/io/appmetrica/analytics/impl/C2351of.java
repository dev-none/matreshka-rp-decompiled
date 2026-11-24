package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.parsing.ParseUtils;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.of, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2351of implements Zi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6240a;
    public final String b = "content://" + a() + "/preload_info";
    public final String c = "tracking_id";
    public final String d = "additional_parameters";

    public C2351of(Context context) {
        this.f6240a = context;
    }

    public final String a() {
        return "com.yandex.preinstallsatellite.appmetrica.provider";
    }

    @Override // kotlin.jvm.functions.Function0
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2525vf invoke() {
        Cursor cursorQuery;
        JSONObject jSONObject;
        if (!PackageManagerUtils.hasContentProvider(this.f6240a, "com.yandex.preinstallsatellite.appmetrica.provider")) {
            AbstractC2254kj.a("Satellite content provider with preload info was not found.", new Object[0]);
            return null;
        }
        try {
            cursorQuery = this.f6240a.getContentResolver().query(Uri.parse(this.b), null, null, null, null);
            try {
                if (cursorQuery == null) {
                    AbstractC2254kj.a("No Satellite content provider found", new Object[0]);
                } else {
                    if (cursorQuery.moveToFirst()) {
                        String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(this.c));
                        String string2 = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(this.d));
                        if (string2 == null) {
                            JSONObject jSONObject2 = jSONObject;
                            if (!TextUtils.isEmpty(string)) {
                                AbstractC2254kj.a("Tracking id from Satellite is not a number.", new Object[0]);
                            }
                            AbstractC2254kj.a("Preload info from Satellite: {tracking id = %s, additional parameters = %s}", string, jSONObject2);
                            C2525vf c2525vf = new C2525vf(string, jSONObject2, !TextUtils.isEmpty(string), false, Y7.d);
                            no.a(cursorQuery);
                            return c2525vf;
                        }
                        try {
                            jSONObject = string2.length() == 0 ? new JSONObject() : new JSONObject(string2);
                        } catch (Throwable unused) {
                            jSONObject = new JSONObject();
                        }
                        JSONObject jSONObject3 = jSONObject;
                        if (!TextUtils.isEmpty(string) && ParseUtils.parseLong(string) == null) {
                            AbstractC2254kj.a("Tracking id from Satellite is not a number.", new Object[0]);
                        }
                        AbstractC2254kj.a("Preload info from Satellite: {tracking id = %s, additional parameters = %s}", string, jSONObject3);
                        C2525vf c2525vf2 = new C2525vf(string, jSONObject3, !TextUtils.isEmpty(string), false, Y7.d);
                        no.a(cursorQuery);
                        return c2525vf2;
                    }
                    AbstractC2254kj.a("No Preload Info data in Satellite content provider", new Object[0]);
                }
            } catch (Throwable unused2) {
            }
        } catch (Throwable unused3) {
            cursorQuery = null;
        }
        no.a(cursorQuery);
        return null;
    }
}
