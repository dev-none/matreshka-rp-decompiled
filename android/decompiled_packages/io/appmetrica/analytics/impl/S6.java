package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.google.firebase.remoteconfig.RemoteConfigConstants;
import com.vk.id.analytics.stat.StatTracker;
import io.appmetrica.analytics.coreutils.internal.db.DBUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class S6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ReentrantReadWriteLock.ReadLock f5878a;
    public final ReentrantReadWriteLock.WriteLock b;
    public final C2113f7 c;
    public final R6 d;
    public final Object e;
    public final ArrayList f;
    public final Context g;
    public final C2085e5 h;
    public final AtomicLong i;
    public final ArrayList j;
    public final O6 k;
    public final C2318n7 l;

    static {
        HashSet hashSet = new HashSet();
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        hashSet.add(0);
        hashSet.add(6400);
    }

    public S6(C2085e5 c2085e5, C2113f7 c2113f7, O6 o6, C2318n7 c2318n7) {
        ReentrantReadWriteLock reentrantReadWriteLock = new ReentrantReadWriteLock();
        this.f5878a = reentrantReadWriteLock.readLock();
        this.b = reentrantReadWriteLock.writeLock();
        this.e = new Object();
        this.f = new ArrayList(3);
        AtomicLong atomicLong = new AtomicLong();
        this.i = atomicLong;
        this.j = new ArrayList();
        this.c = c2113f7;
        this.g = c2085e5.getContext();
        this.h = c2085e5;
        this.k = o6;
        this.l = c2318n7;
        atomicLong.set(c());
        R6 r6 = new R6(this, c2085e5);
        this.d = r6;
        r6.setName(a(c2085e5));
    }

    public final long a(Set set) {
        this.f5878a.lock();
        Cursor cursorRawQuery = null;
        long j = 0;
        try {
            SQLiteDatabase readableDatabase = this.c.getReadableDatabase();
            if (readableDatabase != null) {
                StringBuilder sb = new StringBuilder("SELECT count() FROM events");
                if (!set.isEmpty()) {
                    sb.append(" WHERE ");
                }
                Iterator it = set.iterator();
                int i = 0;
                while (it.hasNext()) {
                    Integer num = (Integer) it.next();
                    if (i > 0) {
                        sb.append(" OR ");
                    }
                    sb.append("type == " + num);
                    i++;
                }
                cursorRawQuery = readableDatabase.rawQuery(sb.toString(), null);
                if (cursorRawQuery.moveToFirst()) {
                    j = cursorRawQuery.getLong(0);
                }
            }
        } catch (Throwable unused) {
        }
        no.a(cursorRawQuery);
        this.f5878a.unlock();
        return j;
    }

    public final long b() {
        this.f5878a.lock();
        try {
            return this.i.get();
        } finally {
            this.f5878a.unlock();
        }
    }

    public final long c() {
        long jQueryRowsCount;
        this.f5878a.lock();
        try {
            SQLiteDatabase readableDatabase = this.c.getReadableDatabase();
            jQueryRowsCount = readableDatabase != null ? DBUtils.queryRowsCount(readableDatabase, "events") : 0L;
        } catch (Throwable unused) {
        }
        this.f5878a.unlock();
        return jQueryRowsCount;
    }

    public final void d() {
        Cursor cursor;
        Cursor cursorRawQuery;
        this.f5878a.lock();
        Cursor cursorRawQuery2 = null;
        try {
            SQLiteDatabase readableDatabase = this.c.getReadableDatabase();
            if (readableDatabase != null) {
                cursorRawQuery = readableDatabase.rawQuery(" SELECT DISTINCT id From sessions order by id asc ", new String[0]);
                try {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append("All sessions in db: ");
                    while (cursorRawQuery.moveToNext()) {
                        stringBuffer.append(cursorRawQuery.getString(0)).append(", ");
                    }
                    cursorRawQuery2 = readableDatabase.rawQuery(" SELECT DISTINCT session_id From events order by session_id asc ", new String[0]);
                    StringBuffer stringBuffer2 = new StringBuffer();
                    stringBuffer2.append("All sessions in reports db: ");
                    while (cursorRawQuery2.moveToNext()) {
                        stringBuffer2.append(cursorRawQuery2.getString(0)).append(", ");
                    }
                } catch (Throwable unused) {
                    cursor = cursorRawQuery2;
                    cursorRawQuery2 = cursorRawQuery;
                    cursorRawQuery = cursorRawQuery2;
                    cursorRawQuery2 = cursor;
                }
            } else {
                cursorRawQuery = null;
            }
        } catch (Throwable unused2) {
            cursor = null;
        }
        this.f5878a.unlock();
        no.a(cursorRawQuery);
        no.a(cursorRawQuery2);
    }

    public final void e() {
        this.d.start();
    }

    public final void a(X8 x8) {
        this.j.add(x8);
    }

    public static String a(La la) {
        return "DatabaseWorker [" + la.b().e() + "]";
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void a(long j, EnumC1998al enumC1998al, long j2) {
        JSONObject jSONObject;
        boolean zB;
        B7 b7 = new B7(null, 1, 0 == true ? 1 : 0);
        C2378ph c2378ph = (C2378ph) this.h.k.a();
        Long lValueOf = Long.valueOf(j);
        Long lValueOf2 = Long.valueOf(j2);
        try {
            jSONObject = new JSONObject().put("dId", c2378ph.getDeviceId()).put("uId", c2378ph.getUuid()).put("appVer", c2378ph.getAppVersion()).put(RemoteConfigConstants.RequestFieldKey.APP_BUILD, c2378ph.getAppBuildNumber()).put("kitBuildType", c2378ph.getAnalyticsSdkBuildType()).put("osVer", c2378ph.getOsVersion()).put("osApiLev", c2378ph.getOsApiLevel()).put("lang", c2378ph.getLocale()).put("root", c2378ph.getDeviceRootStatus()).put("app_debuggable", ((U5) c2378ph).f5917a).put(CommonUrlParts.APP_FRAMEWORK, c2378ph.getAppFramework()).put("attribution_id", c2378ph.r).put("analyticsSdkVersionName", c2378ph.getAnalyticsSdkVersionName()).put("kitBuildNumber", c2378ph.getAnalyticsSdkBuildNumber());
        } catch (Throwable unused) {
            jSONObject = new JSONObject();
        }
        String string = jSONObject.toString();
        Long lValueOf3 = Long.valueOf(Kn.a());
        C2049ck c2049ck = AbstractC2023bk.f6018a;
        synchronized (c2049ck) {
            zB = c2049ck.b.b(true);
        }
        ContentValues contentValuesA = b7.fromModel(new A7(lValueOf, enumC1998al, string, new C2617z7(lValueOf2, lValueOf3, Boolean.valueOf(zB))));
        if (contentValuesA == null) {
            return;
        }
        this.b.lock();
        try {
            SQLiteDatabase writableDatabase = this.c.getWritableDatabase();
            if (writableDatabase != null) {
                writableDatabase.insertOrThrow("sessions", null, contentValuesA);
            }
        } catch (Throwable unused2) {
        }
        this.b.unlock();
    }

    public final void a(ContentValues contentValues) {
        synchronized (this.e) {
            this.f.add(contentValues);
        }
        synchronized (this.d) {
            this.d.notifyAll();
        }
    }

    public final void a() {
        SQLiteDatabase writableDatabase;
        try {
            this.b.lock();
            if (this.i.get() > ((C2378ph) this.h.k.a()).v && (writableDatabase = this.c.getWritableDatabase()) != null) {
                int iA = a(writableDatabase);
                this.i.addAndGet(-iA);
                if (iA != 0) {
                    Iterator it = this.j.iterator();
                    while (it.hasNext()) {
                        ((X8) it.next()).a();
                    }
                }
            }
        } catch (Throwable unused) {
        }
        this.b.unlock();
    }

    public final int a(SQLiteDatabase sQLiteDatabase) {
        try {
            return this.k.a(sQLiteDatabase, String.format("id IN (SELECT id FROM events ORDER BY CASE WHEN type IN (%1$s) THEN 2 WHEN type IN (%2$s) THEN 1 ELSE 0 END, id LIMIT (SELECT count() FROM events) / %3$s)", TextUtils.join(", ", D9.i), TextUtils.join(", ", D9.j), 10), 2, this.h.b.b, true).b;
        } catch (Throwable th) {
            Vj vj = AbstractC2479tj.f6336a;
            vj.getClass();
            vj.a(new C2504uj("deleteExcessiveReports exception", th));
            return 0;
        }
    }

    public final void a(long j, int i, int i2, boolean z) {
        if (i2 <= 0) {
            return;
        }
        this.b.lock();
        try {
            String str = String.format(Locale.US, "%1$s = %2$s AND %3$s = %4$s AND %5$s <= (SELECT %5$s FROM %6$s WHERE %1$s = %2$s AND %3$s = %4$s ORDER BY %5$s ASC LIMIT %7$s, 1)", StatTracker.EXTERNAL_PARAM_SESSION_ID, Long.toString(j), "session_type", Integer.toString(i), "id", "events", Integer.toString(i2 - 1));
            SQLiteDatabase writableDatabase = this.c.getWritableDatabase();
            if (writableDatabase != null) {
                M6 m6A = this.k.a(writableDatabase, str, 1, this.h.b.b, z);
                if (m6A.f5786a != null) {
                    ArrayList arrayList = new ArrayList();
                    Iterator it = m6A.f5786a.iterator();
                    while (it.hasNext()) {
                        Integer asInteger = ((ContentValues) it.next()).getAsInteger("type");
                        asInteger.intValue();
                        arrayList.add(asInteger);
                    }
                    Iterator it2 = this.j.iterator();
                    while (it2.hasNext()) {
                        ((X8) it2.next()).b(arrayList);
                    }
                }
                List list = m6A.f5786a;
                if (list != null) {
                    for (int i3 = 0; i3 < list.size(); i3++) {
                        a((ContentValues) list.get(i3), "Event removed from db");
                    }
                }
                this.i.addAndGet(-m6A.b);
            }
        } catch (Throwable unused) {
        }
        this.b.unlock();
    }

    public final ContentValues a(long j, EnumC1998al enumC1998al) {
        ContentValues contentValues = new ContentValues();
        this.f5878a.lock();
        Cursor cursorRawQuery = null;
        try {
            SQLiteDatabase readableDatabase = this.c.getReadableDatabase();
            if (readableDatabase != null) {
                cursorRawQuery = readableDatabase.rawQuery(String.format(Locale.US, "SELECT report_request_parameters FROM sessions WHERE id = %s AND type = %s ORDER BY id DESC LIMIT 1", Long.valueOf(j), Integer.valueOf(enumC1998al.f6005a)), null);
                if (cursorRawQuery.moveToNext()) {
                    ContentValues contentValues2 = new ContentValues();
                    DatabaseUtils.cursorRowToContentValues(cursorRawQuery, contentValues2);
                    contentValues = contentValues2;
                }
            }
        } catch (Throwable unused) {
        }
        no.a(cursorRawQuery);
        this.f5878a.unlock();
        return contentValues;
    }

    public static String a(LinkedHashMap linkedHashMap) {
        StringBuilder sb = new StringBuilder("id >= ?");
        for (String str : linkedHashMap.keySet()) {
            sb.append(sb.length() > 0 ? " AND " : "");
            sb.append(str + " = ? ");
        }
        if (TextUtils.isEmpty(sb.toString())) {
            return null;
        }
        return sb.toString();
    }

    public static String[] a(String[] strArr, LinkedHashMap linkedHashMap) {
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(Arrays.asList(strArr));
        Iterator it = linkedHashMap.entrySet().iterator();
        while (it.hasNext()) {
            arrayList.add((String) ((Map.Entry) it.next()).getValue());
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void a(ContentValues contentValues, String str) {
        Integer asInteger = contentValues.getAsInteger("type");
        if (D9.d.contains(EnumC2195ib.a(asInteger != null ? asInteger.intValue() : -1))) {
            C2293m7 c2293m7A = new C2318n7(null, 1, 0 == true ? 1 : 0).toModel(contentValues);
            PublicLogger publicLogger = this.h.m;
            EnumC2195ib enumC2195ib = c2293m7A.d;
            C2268l7 c2268l7 = c2293m7A.g;
            publicLogger.info(Vf.a(str, enumC2195ib, c2268l7.b, c2268l7.c), new Object[0]);
        }
    }

    public static boolean a(S6 s6) {
        boolean zIsEmpty;
        synchronized (s6.e) {
            zIsEmpty = s6.f.isEmpty();
        }
        return zIsEmpty;
    }
}
