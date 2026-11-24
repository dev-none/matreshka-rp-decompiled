package ru.rustore.sdk.metrics.internal;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Map;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class h0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f0 f6635a;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function1<String, CharSequence> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final a f6636a = new a();

        public a() {
            super(1);
        }

        @Override // kotlin.jvm.functions.Function1
        public final CharSequence invoke(String str) {
            String it = str;
            Intrinsics.checkNotNullParameter(it, "it");
            return "'" + it + '\'';
        }
    }

    public h0(c0 migrationDtoVer1Factory, d0 migrationDtoVer1Serializer, f0 migrationDtoVer2Mapper, g0 migrationDtoVer2Serializer) {
        Intrinsics.checkNotNullParameter(migrationDtoVer1Factory, "migrationDtoVer1Factory");
        Intrinsics.checkNotNullParameter(migrationDtoVer1Serializer, "migrationDtoVer1Serializer");
        Intrinsics.checkNotNullParameter(migrationDtoVer2Mapper, "migrationDtoVer2Mapper");
        Intrinsics.checkNotNullParameter(migrationDtoVer2Serializer, "migrationDtoVer2Serializer");
        this.f6635a = migrationDtoVer2Mapper;
    }

    public final void a(SQLiteDatabase db) throws JSONException, IOException {
        Intrinsics.checkNotNullParameter(db, "db");
        ArrayList arrayList = new ArrayList();
        Cursor cursorRawQuery = db.rawQuery("\n                SELECT * FROM metrics_event_table\n                ", new String[0]);
        try {
            int columnIndexOrThrow = cursorRawQuery.getColumnIndexOrThrow("uuid");
            int columnIndexOrThrow2 = cursorRawQuery.getColumnIndexOrThrow("metrics_event");
            while (cursorRawQuery.moveToNext()) {
                String value = cursorRawQuery.getString(columnIndexOrThrow);
                Intrinsics.checkNotNullExpressionValue(value, "cursor.getString(uuidColumnIndex)");
                Intrinsics.checkNotNullParameter(value, "value");
                byte[] blob = cursorRawQuery.getBlob(columnIndexOrThrow2);
                Intrinsics.checkNotNullExpressionValue(blob, "cursor.getBlob(serializedMetricsEventColumnIndex)");
                arrayList.add(c0.a(value, StringsKt.decodeToString(blob)));
            }
            Unit unit = Unit.INSTANCE;
            CloseableKt.closeFinally(cursorRawQuery, null);
            if (arrayList.isEmpty()) {
                return;
            }
            StringBuilder sb = new StringBuilder("\n                UPDATE metrics_event_table\n                SET metrics_event = CASE\n             ");
            ArrayList arrayList2 = new ArrayList();
            int size = arrayList.size();
            int i = 0;
            while (i < size) {
                Object obj = arrayList.get(i);
                int i2 = i + 1;
                b0 dto = (b0) obj;
                this.f6635a.getClass();
                Intrinsics.checkNotNullParameter(dto, "dto");
                e0 dto2 = new e0(dto.f6598a, dto.b, dto.c, System.currentTimeMillis());
                Intrinsics.checkNotNullParameter(dto, "dto");
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("name", dto.b);
                JSONObject jSONObject2 = new JSONObject();
                for (Map.Entry<String, String> entry : dto.c.entrySet()) {
                    jSONObject2.put(entry.getKey(), entry.getValue());
                }
                jSONObject.put("data", jSONObject2);
                String string = jSONObject.toString(0);
                Intrinsics.checkNotNullExpressionValue(string, "jsonObject.toString(0)");
                byte[] bytes = string.getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
                Intrinsics.checkNotNullParameter(bytes, "<this>");
                String strJoinToString$default = ArraysKt.joinToString$default(bytes, (CharSequence) "", (CharSequence) null, (CharSequence) null, 0, (CharSequence) null, (Function1) ru.rustore.sdk.metrics.internal.a.f6591a, 30, (Object) null);
                Intrinsics.checkNotNullParameter(dto2, "dto");
                JSONObject jSONObject3 = new JSONObject();
                ArrayList arrayList3 = arrayList;
                jSONObject3.put("name", dto2.b);
                JSONObject jSONObject4 = new JSONObject();
                for (Map.Entry<String, String> entry2 : dto2.c.entrySet()) {
                    jSONObject4.put(entry2.getKey(), entry2.getValue());
                    i2 = i2;
                    size = size;
                }
                jSONObject3.put("data", jSONObject4);
                jSONObject3.put("time", dto2.d);
                String string2 = jSONObject3.toString(0);
                Intrinsics.checkNotNullExpressionValue(string2, "jsonObject.toString(0)");
                byte[] bytes2 = string2.getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes2, "this as java.lang.String).getBytes(charset)");
                Intrinsics.checkNotNullParameter(bytes2, "<this>");
                String str = "\n                WHEN metrics_event = x'" + strJoinToString$default + "' THEN x'" + ArraysKt.joinToString$default(bytes2, (CharSequence) "", (CharSequence) null, (CharSequence) null, 0, (CharSequence) null, (Function1) ru.rustore.sdk.metrics.internal.a.f6591a, 30, (Object) null) + "'\n            ";
                arrayList2.add(dto.f6598a);
                sb.append(str);
                arrayList = arrayList3;
                i = i2;
                size = size;
            }
            sb.append("\n                END\n                WHERE uuid IN (" + CollectionsKt.joinToString$default(arrayList2, null, null, null, 0, null, a.f6636a, 31, null) + ")\n            ");
            String string3 = sb.toString();
            Intrinsics.checkNotNullExpressionValue(string3, "updateQuery.toString()");
            db.execSQL(StringsKt.trimIndent(string3));
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Throwable th2) {
                CloseableKt.closeFinally(cursorRawQuery, th);
                throw th2;
            }
        }
    }
}
