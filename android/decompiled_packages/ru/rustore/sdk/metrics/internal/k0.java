package ru.rustore.sdk.metrics.internal;

import android.content.ContentValues;
import android.database.sqlite.SQLiteDatabase;
import java.util.ArrayList;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.text.StringsKt;
import ru.rustore.sdk.metrics.MetricsException;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class k0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u f6642a;
    public final k b;
    public final Lazy c;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<SQLiteDatabase> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final SQLiteDatabase invoke() {
            SQLiteDatabase writableDatabase = k0.this.f6642a.getWritableDatabase();
            writableDatabase.enableWriteAheadLogging();
            return writableDatabase;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class b extends Lambda implements Function0<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ String f6644a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public b(String str) {
            super(0);
            this.f6644a = str;
        }

        @Override // kotlin.jvm.functions.Function0
        public final String invoke() {
            return this.f6644a;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class c extends Lambda implements Function0<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ o0 f6645a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public c(o0 o0Var) {
            super(0);
            this.f6645a = o0Var;
        }

        @Override // kotlin.jvm.functions.Function0
        public final String invoke() {
            return "Create row in storage " + ((Object) a0.a(this.f6645a.f6657a));
        }
    }

    public k0(u metricsEventDataBaseHelper, k logger) {
        Intrinsics.checkNotNullParameter(metricsEventDataBaseHelper, "metricsEventDataBaseHelper");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.f6642a = metricsEventDataBaseHelper;
        this.b = logger;
        this.c = LazyKt.lazy(new a());
    }

    public final void a(o0 persistentMetricsEventDto) throws MetricsException.SaveMetricsEventError {
        Intrinsics.checkNotNullParameter(persistentMetricsEventDto, "persistentMetricsEventDto");
        ContentValues contentValues = new ContentValues();
        contentValues.put("uuid", persistentMetricsEventDto.f6657a);
        contentValues.put("metrics_event", persistentMetricsEventDto.b);
        try {
            ((SQLiteDatabase) this.c.getValue()).beginTransactionNonExclusive();
            long jInsert = ((SQLiteDatabase) this.c.getValue()).insert("metrics_event_table", null, contentValues);
            ((SQLiteDatabase) this.c.getValue()).execSQL("DELETE FROM metrics_event_table\nWHERE _id NOT IN (\n    SELECT _id FROM metrics_event_table\n    ORDER BY _id DESC LIMIT 1000\n)");
            ((SQLiteDatabase) this.c.getValue()).setTransactionSuccessful();
            ((SQLiteDatabase) this.c.getValue()).endTransaction();
            if (jInsert != -1) {
                this.b.a(new c(persistentMetricsEventDto));
                return;
            }
            String str = "Saving error " + ((Object) a0.a(persistentMetricsEventDto.f6657a));
            this.b.a(new b(str));
            throw new MetricsException.SaveMetricsEventError(str);
        } catch (Throwable th) {
            try {
                throw new MetricsException.MetricsDbError("Interaction with database failed", th);
            } catch (Throwable th2) {
                ((SQLiteDatabase) this.c.getValue()).endTransaction();
                throw th2;
            }
        }
    }

    public final void a(ArrayList persistentMetricsEventsDto) {
        Intrinsics.checkNotNullParameter(persistentMetricsEventsDto, "persistentMetricsEventsDto");
        String strJoinToString$default = CollectionsKt.joinToString$default(persistentMetricsEventsDto, null, null, null, 0, null, m0.f6650a, 31, null);
        String strTrimIndent = StringsKt.trimIndent("\n            DELETE FROM metrics_event_table\n            WHERE _id IN (\n                SELECT _id FROM metrics_event_table\n                WHERE uuid IN (" + strJoinToString$default + ")\n            )\n        ");
        try {
            ((SQLiteDatabase) this.c.getValue()).beginTransactionNonExclusive();
            ((SQLiteDatabase) this.c.getValue()).execSQL(strTrimIndent);
            ((SQLiteDatabase) this.c.getValue()).setTransactionSuccessful();
            ((SQLiteDatabase) this.c.getValue()).endTransaction();
            this.b.a(new l0(strJoinToString$default));
        } catch (Throwable th) {
            try {
                throw new MetricsException.MetricsDbError("Interaction with database failed", th);
            } catch (Throwable th2) {
                ((SQLiteDatabase) this.c.getValue()).endTransaction();
                throw th2;
            }
        }
    }
}
