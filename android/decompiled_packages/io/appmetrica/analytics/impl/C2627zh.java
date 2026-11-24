package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.db.DBUtils;
import io.appmetrica.analytics.coreutils.internal.io.GZIPCompressor;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.networktasks.internal.DefaultNetworkResponseHandler;
import io.appmetrica.analytics.networktasks.internal.FullUrlFormer;
import io.appmetrica.analytics.networktasks.internal.RequestBodyEncrypter;
import io.appmetrica.analytics.networktasks.internal.RequestDataHolder;
import io.appmetrica.analytics.networktasks.internal.ResponseDataHolder;
import io.appmetrica.analytics.networktasks.internal.RetryPolicyConfig;
import io.appmetrica.analytics.networktasks.internal.SendingDataTaskHelper;
import io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.net.ssl.SSLSocketFactory;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2627zh implements UnderlyingNetworkTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f6432a;
    public final LinkedHashMap b;
    public C2467t7 c;
    public C2395q9 d;
    public final S6 e;
    public List f;
    public int g;
    public int h;
    public int i;
    public C2602yh j;
    public final C2161h3 k;
    public final PublicLogger l;
    public final zo m;
    public final Ya n;
    public final C2097eh o;
    public final FullUrlFormer p;
    public final Fb q;
    public final RequestDataHolder r;
    public final ResponseDataHolder s;
    public final SendingDataTaskHelper t;
    public int u;
    public boolean v;

    public C2627zh(C2085e5 c2085e5, C2097eh c2097eh, Fb fb, FullUrlFormer<C2378ph> fullUrlFormer, RequestDataHolder requestDataHolder, ResponseDataHolder responseDataHolder, RequestBodyEncrypter requestBodyEncrypter) {
        this(c2085e5, c2097eh, fb, fullUrlFormer, requestDataHolder, responseDataHolder, c2085e5.i(), c2085e5.p(), c2085e5.u(), requestBodyEncrypter);
    }

    public final C2395q9 a(C2602yh c2602yh, List list, C2378ph c2378ph) {
        C2395q9 c2395q9 = new C2395q9();
        C2193i9 c2193i9 = new C2193i9();
        c2193i9.f6129a = WrapUtils.getOrDefaultIfEmpty(this.c.b, c2378ph.getUuid());
        c2193i9.b = WrapUtils.getOrDefaultIfEmpty(this.c.f6328a, c2378ph.getDeviceId());
        this.g = CodedOutputByteBufferNano.computeMessageSize(4, c2193i9) + this.g;
        c2395q9.b = c2193i9;
        C2409qn c2409qnC = C2495ua.H.C();
        C2552wh c2552wh = new C2552wh(this, c2395q9);
        synchronized (c2409qnC) {
            c2409qnC.f6281a.a(c2552wh);
        }
        c2395q9.f6270a = (C2320n9[]) c2602yh.f6417a.toArray(new C2320n9[0]);
        c2395q9.c = a(c2602yh.c);
        c2395q9.e = (String[]) list.toArray(new String[0]);
        Set set = c2378ph.x;
        String[] strArr = (String[]) set.toArray(new String[0]);
        c2395q9.f = new byte[strArr.length][];
        for (int i = 0; i < set.size(); i++) {
            c2395q9.f[i] = StringUtils.getUTF8Bytes(strArr[i]);
        }
        return c2395q9;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final String description() {
        return "ReportTask_" + ApiKeyUtils.createPartialApiKey(this.f6432a.b.b);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final FullUrlFormer<?> getFullUrlFormer() {
        return this.p;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final RequestDataHolder getRequestDataHolder() {
        return this.r;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final ResponseDataHolder getResponseDataHolder() {
        return this.s;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final RetryPolicyConfig getRetryPolicyConfig() {
        return ((C2378ph) this.f6432a.k.a()).getRetryPolicyConfig();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final SSLSocketFactory getSslSocketFactory() {
        ((El) C2495ua.H.A()).getClass();
        return null;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final boolean onCreateTask() {
        Cursor cursorRawQuery;
        int iOptInt;
        S6 s6 = this.f6432a.e;
        s6.getClass();
        ArrayList arrayList = new ArrayList();
        s6.f5878a.lock();
        try {
            SQLiteDatabase readableDatabase = s6.c.getReadableDatabase();
            if (readableDatabase != null) {
                cursorRawQuery = readableDatabase.rawQuery(B5.b, null);
                while (cursorRawQuery.moveToNext()) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        DatabaseUtils.cursorRowToContentValues(cursorRawQuery, contentValues);
                        arrayList.add(contentValues);
                    } catch (Throwable unused) {
                        try {
                            arrayList = new ArrayList();
                            no.a(cursorRawQuery);
                            s6.f5878a.unlock();
                        } catch (Throwable th) {
                            no.a(cursorRawQuery);
                            s6.f5878a.unlock();
                            throw th;
                        }
                    }
                }
            } else {
                cursorRawQuery = null;
            }
            no.a(cursorRawQuery);
            s6.f5878a.unlock();
        } catch (Throwable unused2) {
            cursorRawQuery = null;
        }
        if (arrayList.isEmpty()) {
            return false;
        }
        ContentValues contentValues2 = (ContentValues) arrayList.get(0);
        this.b.clear();
        for (Map.Entry<String, Object> entry : contentValues2.valueSet()) {
            this.b.put(entry.getKey(), entry.getValue().toString());
        }
        String asString = contentValues2.getAsString("report_request_parameters");
        if (TextUtils.isEmpty(asString)) {
            C2467t7 c2467t7 = new C2467t7();
            this.c = c2467t7;
            this.o.c = c2467t7;
        } else {
            try {
                C2467t7 c2467t8 = new C2467t7(new C2297mb(asString));
                this.c = c2467t8;
                this.o.c = c2467t8;
            } catch (Throwable unused3) {
                C2467t7 c2467t9 = new C2467t7();
                this.c = c2467t9;
                this.o.c = c2467t9;
            }
        }
        C2378ph config = this.q.getConfig();
        List list = config.w;
        if (no.a((Collection) list)) {
            return false;
        }
        this.p.setHosts(config.q);
        if (!config.u() || no.a((Collection) this.p.getAllHosts())) {
            this.v = true;
            return false;
        }
        this.f = null;
        C2602yh c2602yhA = a(config);
        this.j = c2602yhA;
        if (c2602yhA.f6417a.isEmpty()) {
            return false;
        }
        zo zoVar = this.m;
        synchronized (zoVar) {
            iOptInt = zoVar.f6438a.a().optInt("report_request_id", -1);
        }
        int i = iOptInt + 1;
        this.u = i;
        this.o.e = i;
        C2395q9 c2395q9A = a(this.j, list, config);
        this.d = c2395q9A;
        this.f = this.j.b;
        this.t.prepareAndSetPostData(MessageNano.toByteArray(c2395q9A));
        return true;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onPerformRequest() {
        this.t.onPerformRequest();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onPostRequestComplete(boolean z) {
        String strA;
        if (z) {
            a(false);
        } else if (this.s.getResponseCode() == 400) {
            a(true);
        }
        if (z) {
            for (int i = 0; i < this.j.f6417a.size(); i++) {
                for (C2270l9 c2270l9 : ((C2320n9) this.j.f6417a.get(i)).c) {
                    if (c2270l9 != null && (strA = Vf.a(c2270l9)) != null) {
                        this.l.info(strA, new Object[0]);
                    }
                }
            }
        }
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final boolean onRequestComplete() {
        return this.t.isResponseValid();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onRequestError(Throwable th) {
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onShouldNotExecute() {
        this.v = true;
        this.f6432a.e.a();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onSuccessfulTaskFinished() {
        this.v = true;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onTaskAdded() {
        ((C2415r5) this.f6432a.p).d.set(false);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onTaskFinished() {
        this.f6432a.e.a();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onTaskRemoved() {
        ((C2415r5) this.f6432a.p).d.set(true);
        if (this.v) {
            ((C2415r5) this.f6432a.p).f();
        }
    }

    @Override // io.appmetrica.analytics.networktasks.internal.UnderlyingNetworkTask
    public final void onUnsuccessfulTaskFinished() {
    }

    public C2627zh(C2085e5 c2085e5, C2097eh c2097eh, Fb fb, FullUrlFormer fullUrlFormer, RequestDataHolder requestDataHolder, ResponseDataHolder responseDataHolder, S6 s6, PublicLogger publicLogger, zo zoVar, RequestBodyEncrypter requestBodyEncrypter) {
        this(c2085e5, publicLogger, s6, c2097eh, zoVar, fb, new C2161h3(1024000, "event value in ReportTask", publicLogger), AbstractC2536w1.a(), fullUrlFormer, requestDataHolder, responseDataHolder, requestBodyEncrypter);
    }

    public C2627zh(C2085e5 c2085e5, PublicLogger publicLogger, S6 s6, C2097eh c2097eh, zo zoVar, Fb fb, C2161h3 c2161h3, Vj vj, FullUrlFormer fullUrlFormer, RequestDataHolder requestDataHolder, ResponseDataHolder responseDataHolder, RequestBodyEncrypter requestBodyEncrypter) {
        this.b = new LinkedHashMap();
        this.g = 0;
        this.h = 0;
        this.i = -1;
        this.v = false;
        this.t = new SendingDataTaskHelper(requestBodyEncrypter, new GZIPCompressor(), requestDataHolder, responseDataHolder, new DefaultNetworkResponseHandler());
        this.o = c2097eh;
        this.f6432a = c2085e5;
        this.e = s6;
        this.l = publicLogger;
        this.k = c2161h3;
        this.m = zoVar;
        this.q = fb;
        this.n = vj;
        this.r = requestDataHolder;
        this.s = responseDataHolder;
        this.p = fullUrlFormer;
    }

    public static C2115f9[] a(JSONObject jSONObject) {
        int length = jSONObject.length();
        if (length <= 0) {
            return null;
        }
        C2115f9[] c2115f9Arr = new C2115f9[length];
        Iterator<String> itKeys = jSONObject.keys();
        int i = 0;
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            try {
                C2115f9 c2115f9 = new C2115f9();
                c2115f9.f6073a = next;
                c2115f9.b = jSONObject.getString(next);
                c2115f9Arr[i] = c2115f9;
            } catch (Throwable unused) {
            }
            i++;
        }
        return c2115f9Arr;
    }

    public final void a(boolean z) {
        boolean z2;
        zo zoVar = this.m;
        int i = this.u;
        synchronized (zoVar) {
            Ao ao = zoVar.f6438a;
            ao.a(ao.a().put("report_request_id", i));
        }
        C2320n9[] c2320n9Arr = this.d.f6270a;
        int i2 = 0;
        while (i2 < c2320n9Arr.length) {
            try {
                C2320n9 c2320n9 = c2320n9Arr[i2];
                long jLongValue = ((Long) this.f.get(i2)).longValue();
                EnumC1998al enumC1998al = (EnumC1998al) Uf.b.get(c2320n9.b.c);
                if (enumC1998al == null) {
                    enumC1998al = EnumC1998al.FOREGROUND;
                }
                z2 = z;
                try {
                    this.e.a(jLongValue, enumC1998al.f6005a, c2320n9.c.length, z2);
                    Uf.a(c2320n9);
                } catch (Throwable unused) {
                }
            } catch (Throwable unused2) {
                z2 = z;
            }
            i2++;
            z = z2;
        }
        S6 s6 = this.e;
        long jA = this.f6432a.j.a();
        s6.b.lock();
        try {
            if (D5.f5637a.booleanValue()) {
                s6.d();
            }
            SQLiteDatabase writableDatabase = s6.c.getWritableDatabase();
            if (writableDatabase != null) {
                writableDatabase.delete("sessions", B5.c, new String[]{String.valueOf(jA)});
            }
        } catch (Throwable unused3) {
        }
        s6.b.unlock();
    }

    public final C2602yh a(C2378ph c2378ph) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        JSONObject jSONObject = new JSONObject();
        ArrayList arrayList3 = new ArrayList();
        Cursor cursor = null;
        try {
            Cursor cursorA = a();
            if (cursorA != null) {
                JSONObject jSONObject2 = jSONObject;
                C2184i0 c2184i0 = null;
                while (cursorA.moveToNext() && this.h < 100) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        DBUtils.cursorRowToContentValues(cursorA, contentValues);
                        A7 model = new B7(null, 1, null).toModel(contentValues);
                        Long l = model.f5592a;
                        if (l != null) {
                            C2617z7 c2617z7 = model.d;
                            C2370p9 c2370p9A = Uf.a(c2617z7.f6426a, c2617z7.b, c2617z7.c);
                            String locale = c2378ph.getLocale();
                            EnumC1998al enumC1998al = model.b;
                            C2295m9 c2295m9 = new C2295m9();
                            c2295m9.f6206a = c2370p9A;
                            c2295m9.b = locale;
                            if (enumC1998al != null) {
                                Integer num = (Integer) Uf.f5919a.get(enumC1998al);
                                c2295m9.c = num != null ? num.intValue() : 0;
                            }
                            int iComputeUInt64Size = this.g + CodedOutputByteBufferNano.computeUInt64Size(1, Long.MAX_VALUE);
                            this.g = iComputeUInt64Size;
                            int iComputeMessageSize = iComputeUInt64Size + CodedOutputByteBufferNano.computeMessageSize(2, c2295m9);
                            this.g = iComputeMessageSize;
                            if (iComputeMessageSize >= 250880) {
                                break;
                            }
                            C2577xh c2577xhA = a(l.longValue(), c2295m9, c2378ph, arrayList3, arrayList.size());
                            if (c2577xhA == null) {
                                continue;
                            } else {
                                if (c2184i0 == null) {
                                    c2184i0 = c2577xhA.b;
                                } else {
                                    if (!c2184i0.equals(c2577xhA.b)) {
                                        break;
                                    }
                                    break;
                                }
                                arrayList2.add(l);
                                arrayList.add(c2577xhA.f6402a);
                                if (!TextUtils.isEmpty(c2577xhA.b.f6120a)) {
                                    try {
                                        jSONObject2 = new JSONObject(c2577xhA.b.f6120a);
                                    } catch (Throwable unused) {
                                    }
                                }
                                if (c2577xhA.c) {
                                    break;
                                }
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorA;
                        jSONObject = jSONObject2;
                        try {
                            arrayList3.add(th);
                            no.a(cursor);
                        } catch (Throwable th2) {
                            no.a(cursor);
                            throw th2;
                        }
                    }
                }
                jSONObject = jSONObject2;
            }
            no.a(cursorA);
        } catch (Throwable th3) {
            th = th3;
        }
        Iterator it = arrayList3.iterator();
        while (it.hasNext()) {
            this.n.reportError("protobuf_serialization_error", (Throwable) it.next());
        }
        return new C2602yh(arrayList, arrayList2, jSONObject);
    }

    public static C2184i0 a(ContentValues contentValues) {
        C2293m7 model = new C2318n7(null, 1, null).toModel(contentValues);
        return new C2184i0((String) WrapUtils.getOrDefault(model.g.g, ""), ((Long) WrapUtils.getOrDefault(model.g.h, 0L)).longValue());
    }

    /* JADX WARN: Code duplicated, block: B:71:0x010e  */
    public final C2577xh a(long j, C2295m9 c2295m9, C2378ph c2378ph, ArrayList arrayList, int i) {
        Cursor cursorA;
        boolean z;
        C2577xh c2577xh;
        C2270l9 c2270l9A;
        int iComputeMessageSize;
        C2012b9 c2012b9;
        C2320n9 c2320n9 = new C2320n9();
        c2320n9.f6223a = j;
        c2320n9.b = c2295m9;
        EnumC1998al enumC1998al = (EnumC1998al) Uf.b.get(c2295m9.c);
        if (enumC1998al == null) {
            enumC1998al = EnumC1998al.FOREGROUND;
        }
        try {
            cursorA = a(j, enumC1998al);
            if (cursorA != null) {
                try {
                    ArrayList arrayList2 = new ArrayList();
                    C2184i0 c2184i0 = null;
                    while (true) {
                        z = false;
                        if (!cursorA.moveToNext() || this.h >= 100) {
                            break;
                        }
                        ContentValues contentValues = new ContentValues();
                        DBUtils.cursorRowToContentValues(cursorA, contentValues);
                        try {
                            S8 s8 = new S8(contentValues);
                            EnumC2195ib enumC2195ib = s8.h;
                            if (enumC2195ib != null) {
                                c2012b9 = (C2012b9) Uf.d.get(enumC2195ib);
                            } else {
                                Map map = Uf.f5919a;
                                c2012b9 = null;
                            }
                            if (c2012b9 == null) {
                                c2012b9 = C2012b9.i;
                            }
                            try {
                                c2270l9A = c2012b9.a(s8, c2378ph);
                            } catch (Throwable th) {
                                th = th;
                                arrayList.add(th);
                                c2270l9A = null;
                            }
                        } catch (Throwable th2) {
                            th = th2;
                        }
                        if (c2270l9A != null) {
                            C2184i0 c2184i0A = a(contentValues);
                            if (c2184i0 == null) {
                                if (this.i < 0) {
                                    try {
                                        C2115f9[] c2115f9ArrA = a(new JSONObject(c2184i0A.f6120a));
                                        if (c2115f9ArrA != null) {
                                            iComputeMessageSize = 0;
                                            for (C2115f9 c2115f9 : c2115f9ArrA) {
                                                iComputeMessageSize += CodedOutputByteBufferNano.computeMessageSize(7, c2115f9);
                                            }
                                        } else {
                                            iComputeMessageSize = 0;
                                        }
                                    } catch (Throwable unused) {
                                    }
                                    this.i = iComputeMessageSize;
                                    this.g += iComputeMessageSize;
                                }
                                c2184i0 = c2184i0A;
                            } else if (!c2184i0.equals(c2184i0A)) {
                                z = true;
                                break;
                            }
                            C2161h3 c2161h3 = this.k;
                            byte[] bArr = c2270l9A.e;
                            c2161h3.getClass();
                            byte[] bArrA = c2161h3.a(bArr);
                            byte[] bArr2 = c2270l9A.e;
                            if (bArr2 != bArrA) {
                                c2270l9A.i = ((bArr2 == null ? 0 : bArr2.length) - (bArrA == null ? 0 : bArrA.length)) + c2270l9A.i;
                                c2270l9A.e = bArrA;
                            }
                            this.g += CodedOutputByteBufferNano.computeMessageSize(3, c2270l9A);
                            if (arrayList2.isEmpty() && i == 0) {
                                if (this.g >= 1048576) {
                                    break;
                                }
                            } else if (this.g >= 250880) {
                                break;
                            }
                        }
                        arrayList2.add(c2270l9A);
                        this.h++;
                    }
                    if (arrayList2.size() > 0) {
                        c2320n9.c = (C2270l9[]) arrayList2.toArray(new C2270l9[arrayList2.size()]);
                        c2577xh = new C2577xh(c2320n9, c2184i0, z);
                    } else {
                        c2577xh = null;
                    }
                } catch (Throwable th3) {
                    th = th3;
                    try {
                        arrayList.add(th);
                        return null;
                    } finally {
                        no.a(cursorA);
                    }
                }
            } else {
                c2577xh = null;
            }
            no.a(cursorA);
            return c2577xh;
        } catch (Throwable th4) {
            th = th4;
            cursorA = null;
        }
    }

    public final Cursor a() {
        Cursor cursorQuery;
        S6 s6 = this.e;
        LinkedHashMap linkedHashMap = this.b;
        s6.f5878a.lock();
        try {
            SQLiteDatabase readableDatabase = s6.c.getReadableDatabase();
            cursorQuery = readableDatabase != null ? readableDatabase.query("sessions", null, S6.a(linkedHashMap), S6.a(new String[]{Long.toString(0L)}, linkedHashMap), null, null, "id ASC", null) : null;
        } catch (Throwable unused) {
        }
        s6.f5878a.unlock();
        return cursorQuery;
    }

    public final Cursor a(long j, EnumC1998al enumC1998al) {
        Cursor cursorQuery;
        S6 s6 = this.e;
        s6.f5878a.lock();
        try {
            SQLiteDatabase readableDatabase = s6.c.getReadableDatabase();
            cursorQuery = readableDatabase != null ? readableDatabase.query("events", null, "session_id = ? AND session_type = ?", new String[]{Long.toString(j), Integer.toString(enumC1998al.f6005a)}, null, null, "number_in_session ASC", null) : null;
        } catch (Throwable unused) {
        }
        s6.f5878a.unlock();
        return cursorQuery;
    }
}
