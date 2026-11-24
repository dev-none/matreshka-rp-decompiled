package ru.rustore.sdk.metrics.internal;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class x0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final s0 f6678a;
    public final w0 b;

    public x0(s0 persistentMetricsEventRepository, w0 remoteMetricsEventRepository) {
        Intrinsics.checkNotNullParameter(persistentMetricsEventRepository, "persistentMetricsEventRepository");
        Intrinsics.checkNotNullParameter(remoteMetricsEventRepository, "remoteMetricsEventRepository");
        this.f6678a = persistentMetricsEventRepository;
        this.b = remoteMetricsEventRepository;
    }

    public final a1 a() throws JSONException, IOException {
        Object objM9861constructorimpl;
        s0 s0Var = this.f6678a;
        k0 k0Var = s0Var.f6669a;
        k0Var.getClass();
        String strTrimIndent = StringsKt.trimIndent("\n            SELECT * FROM metrics_event_table\n            LIMIT 10\n        ");
        ArrayList arrayList = new ArrayList();
        Cursor cursorRawQuery = ((SQLiteDatabase) k0Var.c.getValue()).rawQuery(strTrimIndent, new String[0]);
        try {
            int columnIndexOrThrow = cursorRawQuery.getColumnIndexOrThrow("uuid");
            int columnIndexOrThrow2 = cursorRawQuery.getColumnIndexOrThrow("metrics_event");
            while (cursorRawQuery.moveToNext()) {
                String value = cursorRawQuery.getString(columnIndexOrThrow);
                Intrinsics.checkNotNullExpressionValue(value, "cursor.getString(uuidColumnIndex)");
                Intrinsics.checkNotNullParameter(value, "value");
                byte[] blob = cursorRawQuery.getBlob(columnIndexOrThrow2);
                Intrinsics.checkNotNullExpressionValue(blob, "cursor.getBlob(serializedMetricsEventColumnIndex)");
                arrayList.add(new o0(value, blob));
            }
            Unit unit = Unit.INSTANCE;
            CloseableKt.closeFinally(cursorRawQuery, null);
            List<o0> list = CollectionsKt.toList(arrayList);
            k0Var.b.a(new n0(list));
            q0 q0Var = s0Var.c;
            ArrayList arrayList2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
            for (o0 dto : list) {
                q0Var.getClass();
                Intrinsics.checkNotNullParameter(dto, "dto");
                String str = dto.f6657a;
                String jsonString = StringsKt.decodeToString(dto.b);
                Intrinsics.checkNotNullParameter(jsonString, "jsonString");
                JSONObject jSONObject = new JSONObject(jsonString);
                String string = jSONObject.getString("name");
                Intrinsics.checkNotNullExpressionValue(string, "jsonObject.getString(NAME_KEY)");
                JSONObject jSONObject2 = jSONObject.getJSONObject("data");
                Intrinsics.checkNotNullExpressionValue(jSONObject2, "jsonObject.getJSONObject(DATA_KEY)");
                Intrinsics.checkNotNullParameter(jSONObject2, "<this>");
                ArrayList arrayList3 = new ArrayList();
                Iterator<String> itKeys = jSONObject2.keys();
                Intrinsics.checkNotNullExpressionValue(itKeys, "keys()");
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    arrayList3.add(TuplesKt.to(next, jSONObject2.get(next).toString()));
                }
                arrayList2.add(new j0(str, new MetricsEvent(string, MapsKt.toMap(arrayList3), jSONObject.getLong("time"))));
            }
            if (arrayList2.isEmpty()) {
                return a1.b.f6594a;
            }
            try {
                Result.Companion companion = Result.INSTANCE;
                this.b.a(arrayList2);
                objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
            }
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
            if (thM9864exceptionOrNullimpl != null) {
                return thM9864exceptionOrNullimpl instanceof l ? new a1.c(arrayList2) : a1.a.f6593a;
            }
            return new a1.d(arrayList2);
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                CloseableKt.closeFinally(cursorRawQuery, th2);
                throw th3;
            }
        }
    }
}
