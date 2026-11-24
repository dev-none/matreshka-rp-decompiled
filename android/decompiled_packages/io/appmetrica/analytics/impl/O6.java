package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.os.ResultReceiver;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.ArrayList;
import java.util.Map;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class O6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CounterConfigurationReporterType f5817a;
    public final C2429rj b;

    public O6(CounterConfigurationReporterType counterConfigurationReporterType) {
        this(counterConfigurationReporterType, C2495ua.k().w());
    }

    /* JADX WARN: Code duplicated, block: B:14:0x003e  */
    public final M6 a(SQLiteDatabase sQLiteDatabase, String str, int i, String str2, boolean z) {
        Cursor cursorRawQuery;
        ArrayList<ContentValues> arrayList;
        int iDelete;
        C2429rj c2429rj;
        C2380pj c2380pj;
        U3 u3;
        Integer num;
        try {
            cursorRawQuery = sQLiteDatabase.rawQuery(String.format("SELECT %s, %s, %s FROM %s WHERE %s", "global_number", "type", "event_description", "events", str), null);
            if (cursorRawQuery != null) {
                try {
                    if (cursorRawQuery.getCount() > 0) {
                        arrayList = new ArrayList(cursorRawQuery.getCount());
                        while (cursorRawQuery.moveToNext()) {
                            ContentValues contentValues = new ContentValues();
                            DatabaseUtils.cursorRowToContentValues(cursorRawQuery, contentValues);
                            arrayList.add(contentValues);
                        }
                    } else {
                        arrayList = null;
                    }
                } catch (Throwable th) {
                    th = th;
                    try {
                        Vj vj = AbstractC2479tj.f6336a;
                        vj.getClass();
                        vj.a(new C2504uj("select_rows_to_delete_exception", th));
                        no.a(cursorRawQuery);
                        arrayList = null;
                    } catch (Throwable th2) {
                        no.a(cursorRawQuery);
                        throw th2;
                    }
                }
            } else {
                arrayList = null;
            }
            no.a(cursorRawQuery);
        } catch (Throwable th3) {
            th = th3;
            cursorRawQuery = null;
        }
        try {
            iDelete = sQLiteDatabase.delete("events", str, null);
        } catch (Throwable unused) {
            iDelete = 0;
        }
        if (arrayList != null && arrayList.size() != 0 && iDelete == arrayList.size() && z && str2 != null && (c2429rj = this.b) != null) {
            CounterConfigurationReporterType counterConfigurationReporterType = this.f5817a;
            synchronized (c2429rj) {
                c2380pj = (C2380pj) c2429rj.c.get(str2);
                if (c2380pj == null) {
                    c2380pj = new C2380pj(str2, c2429rj.b, counterConfigurationReporterType, c2429rj.f6298a);
                    c2429rj.c.put(str2, c2380pj);
                }
            }
            try {
                JSONObject jSONObject = new JSONObject();
                JSONArray jSONArray = new JSONArray();
                JSONArray jSONArray2 = new JSONArray();
                for (ContentValues contentValues2 : arrayList) {
                    Integer asInteger = contentValues2.getAsInteger("global_number");
                    Integer asInteger2 = contentValues2.getAsInteger("type");
                    if (asInteger != null && asInteger2 != null) {
                        jSONArray.put(asInteger);
                        EnumC2195ib enumC2195ibA = EnumC2195ib.a(asInteger2.intValue());
                        if (enumC2195ibA == null) {
                            Map map = Uf.f5919a;
                            num = null;
                        } else {
                            num = (Integer) Uf.c.get(enumC2195ibA);
                        }
                        jSONArray2.put(num);
                    }
                }
                jSONObject.put("global_number", jSONArray).put("event_type", jSONArray2);
                JSONObject jSONObjectPut = new JSONObject().put("details", new JSONObject().put("reason", N6.a(i)).put("cleared", jSONObject).put("actual_deleted_number", iDelete));
                PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(str2);
                String string = jSONObjectPut.toString();
                Set set = D9.f5638a;
                EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
                u3 = new U3(string, "", 12290, 0, orCreatePublicLogger);
            } catch (Throwable unused2) {
                u3 = null;
            }
            if (u3 != null && c2380pj.c != null) {
                try {
                    CounterConfiguration counterConfiguration = new CounterConfiguration(c2380pj.f6258a);
                    counterConfiguration.setReporterType(c2380pj.c);
                    c2380pj.d.f6316a.reportData(1, u3.d(new Kh(new Gf(c2380pj.b, (ResultReceiver) null), counterConfiguration, new I8(new C2531vl(LoggerStorage.getOrCreatePublicLogger(c2380pj.f6258a), "Crash Environment")), null).c()));
                } catch (Throwable unused3) {
                }
            }
        }
        return new M6(arrayList, iDelete);
    }

    public O6(CounterConfigurationReporterType counterConfigurationReporterType, C2429rj c2429rj) {
        this.f5817a = counterConfigurationReporterType;
        this.b = c2429rj;
    }
}
