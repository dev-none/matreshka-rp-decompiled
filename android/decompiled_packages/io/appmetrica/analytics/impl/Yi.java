package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Yi implements Zi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5973a;
    public final String b = "content://" + a() + "/clids";
    public final String c = "clid_key";
    public final String d = "clid_value";

    public Yi(Context context) {
        this.f5973a = context;
    }

    public final String a() {
        return "com.yandex.preinstallsatellite.appmetrica.provider";
    }

    @Override // kotlin.jvm.functions.Function0
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2613z3 invoke() {
        Cursor cursorQuery;
        if (!PackageManagerUtils.hasContentProvider(this.f5973a, "com.yandex.preinstallsatellite.appmetrica.provider")) {
            AbstractC2254kj.a("Satellite content provider with clids was not found.", new Object[0]);
            return null;
        }
        try {
            cursorQuery = this.f5973a.getContentResolver().query(Uri.parse(this.b), null, null, null, null);
            try {
                if (cursorQuery == null) {
                    AbstractC2254kj.a("No Satellite content provider found", new Object[0]);
                    no.a(cursorQuery);
                    return null;
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                while (cursorQuery.moveToNext()) {
                    try {
                        String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(this.c));
                        String string2 = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(this.d));
                        if (TextUtils.isEmpty(string) || TextUtils.isEmpty(string2)) {
                            AbstractC2254kj.a("Invalid clid {%s : %s}", string, string2);
                        } else {
                            linkedHashMap.put(string, string2);
                        }
                    } catch (Throwable unused) {
                    }
                }
                AbstractC2254kj.a("Clids from satellite: %s", linkedHashMap);
                C2613z3 c2613z3 = new C2613z3(linkedHashMap, Y7.d);
                no.a(cursorQuery);
                return c2613z3;
            } catch (Throwable th) {
                th = th;
                try {
                    ImportantLogger.INSTANCE.info("AppMetrica-Attribution", String.format("Error while getting satellite clids", new Object[0]) + "\n" + StringUtils.throwableToString(th), new Object[0]);
                } finally {
                    no.a(cursorQuery);
                }
            }
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
    }
}
