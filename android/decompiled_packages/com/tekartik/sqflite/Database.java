package com.tekartik.sqflite;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.database.DatabaseErrorHandler;
import android.database.DatabaseUtils;
import android.database.SQLException;
import android.database.sqlite.SQLiteCantOpenDatabaseException;
import android.database.sqlite.SQLiteCursor;
import android.database.sqlite.SQLiteCursorDriver;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteQuery;
import android.database.sqlite.SQLiteStatement;
import android.os.Build;
import android.util.Log;
import com.tekartik.sqflite.operation.BatchOperation;
import com.tekartik.sqflite.operation.MethodCallOperation;
import com.tekartik.sqflite.operation.Operation;
import com.tekartik.sqflite.operation.QueuedOperation;
import com.tekartik.sqflite.operation.SqlErrorInfo;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
class Database {
    static final boolean WAL_ENABLED_BY_DEFAULT = false;
    private static final String WAL_ENABLED_META_NAME = "com.tekartik.sqflite.wal_enabled";
    private static Boolean walGloballyEnabled;
    final Context context;
    private Integer currentTransactionId;
    public DatabaseWorkerPool databaseWorkerPool;
    final int id;
    final int logLevel;
    final String path;
    final boolean singleInstance;
    SQLiteDatabase sqliteDatabase;
    final List<QueuedOperation> noTransactionOperationQueue = new ArrayList();
    final Map<Integer, SqfliteCursor> cursors = new HashMap();
    private int transactionDepth = 0;
    private int lastTransactionId = 0;
    private int lastCursorId = 0;

    Database(Context context, String str, int i, boolean z, int i2) {
        this.context = context;
        this.path = str;
        this.singleInstance = z;
        this.id = i;
        this.logLevel = i2;
    }

    protected static boolean checkWalEnabled(Context context) {
        return checkMetaBoolean(context, WAL_ENABLED_META_NAME, false);
    }

    static ApplicationInfo getApplicationInfoWithMeta32(Context context, String str, int i) throws PackageManager.NameNotFoundException {
        return context.getPackageManager().getApplicationInfo(str, i);
    }

    protected static boolean checkMetaBoolean(Context context, String str, boolean z) {
        ApplicationInfo applicationInfoWithMeta32;
        try {
            String packageName = context.getPackageName();
            if (Build.VERSION.SDK_INT >= 33) {
                applicationInfoWithMeta32 = context.getPackageManager().getApplicationInfo(packageName, PackageManager.ApplicationInfoFlags.of(128L));
            } else {
                applicationInfoWithMeta32 = getApplicationInfoWithMeta32(context, packageName, 128);
            }
            return applicationInfoWithMeta32.metaData.getBoolean(str, z);
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    static void deleteDatabase(String str) {
        SQLiteDatabase.deleteDatabase(new File(str));
    }

    public static boolean existsDatabase(String str) {
        try {
            return new File(str).exists();
        } catch (Exception unused) {
            return false;
        }
    }

    public void open() {
        if (walGloballyEnabled == null) {
            Boolean boolValueOf = Boolean.valueOf(checkWalEnabled(this.context));
            walGloballyEnabled = boolValueOf;
            if (boolValueOf.booleanValue() && LogLevel.hasVerboseLevel(this.logLevel)) {
                Log.d(Constant.TAG, getThreadLogPrefix() + "[sqflite] WAL enabled");
            }
        }
        this.sqliteDatabase = SQLiteDatabase.openDatabase(this.path, null, walGloballyEnabled.booleanValue() ? 805306368 : 268435456);
    }

    public void openReadOnly() {
        this.sqliteDatabase = SQLiteDatabase.openDatabase(this.path, null, 1, new DatabaseErrorHandler() { // from class: com.tekartik.sqflite.Database.1
            @Override // android.database.DatabaseErrorHandler
            public void onCorruption(SQLiteDatabase sQLiteDatabase) {
            }
        });
    }

    public void close() {
        if (!this.cursors.isEmpty() && LogLevel.hasSqlLevel(this.logLevel)) {
            Log.d(Constant.TAG, getThreadLogPrefix() + this.cursors.size() + " cursor(s) are left opened");
        }
        this.sqliteDatabase.close();
    }

    public SQLiteDatabase getWritableDatabase() {
        return this.sqliteDatabase;
    }

    public SQLiteDatabase getReadableDatabase() {
        return this.sqliteDatabase;
    }

    public boolean enableWriteAheadLogging() {
        try {
            return this.sqliteDatabase.enableWriteAheadLogging();
        } catch (Exception e) {
            Log.e(Constant.TAG, getThreadLogPrefix() + "enable WAL error: " + e);
            return false;
        }
    }

    String getThreadLogTag() {
        Thread threadCurrentThread = Thread.currentThread();
        return this.id + StringUtils.COMMA + threadCurrentThread.getName() + "(" + Utils.getThreadId(threadCurrentThread) + ")";
    }

    String getThreadLogPrefix() {
        return "[" + getThreadLogTag() + "] ";
    }

    private Map<String, Object> cursorToResults(Cursor cursor, Integer num) {
        HashMap map = null;
        int columnCount = 0;
        ArrayList arrayList = null;
        while (cursor.moveToNext()) {
            if (map == null) {
                ArrayList arrayList2 = new ArrayList();
                HashMap map2 = new HashMap();
                columnCount = cursor.getColumnCount();
                map2.put(Constant.PARAM_COLUMNS, Arrays.asList(cursor.getColumnNames()));
                map2.put(Constant.PARAM_ROWS, arrayList2);
                arrayList = arrayList2;
                map = map2;
            }
            arrayList.add(Utils.cursorRowToList(cursor, columnCount));
            if (num != null && arrayList.size() >= num.intValue()) {
                break;
            }
        }
        return map == null ? new HashMap() : map;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void runQueuedOperations() {
        while (!this.noTransactionOperationQueue.isEmpty() && this.currentTransactionId == null) {
            this.noTransactionOperationQueue.get(0).run();
            this.noTransactionOperationQueue.remove(0);
        }
    }

    private void postQueuedOperationsIfNotInTransaction() {
        if (this.currentTransactionId != null || this.noTransactionOperationQueue.isEmpty()) {
            return;
        }
        this.databaseWorkerPool.post(this, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.runQueuedOperations();
            }
        });
    }

    private void wrapSqlOperationHandler(Operation operation, Runnable runnable) {
        Integer transactionId = operation.getTransactionId();
        Integer num = this.currentTransactionId;
        if (num == null) {
            runnable.run();
            return;
        }
        if (transactionId != null && (transactionId.equals(num) || transactionId.intValue() == -1)) {
            runnable.run();
            postQueuedOperationsIfNotInTransaction();
        } else {
            this.noTransactionOperationQueue.add(new QueuedOperation(operation, runnable));
        }
    }

    public void query(final Operation operation) {
        wrapSqlOperationHandler(operation, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                this.f$0.m9087lambda$query$0$comtekartiksqfliteDatabase(operation);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: doQuery, reason: merged with bridge method [inline-methods] */
    public boolean m9087lambda$query$0$comtekartiksqfliteDatabase(Operation operation) throws Throwable {
        Cursor cursorRawQueryWithFactory;
        Integer num = (Integer) operation.getArgument(Constant.PARAM_CURSOR_PAGE_SIZE);
        final SqlCommand sqlCommand = operation.getSqlCommand();
        if (LogLevel.hasSqlLevel(this.logLevel)) {
            Log.d(Constant.TAG, getThreadLogPrefix() + sqlCommand);
        }
        SqfliteCursor sqfliteCursor = null;
        try {
            cursorRawQueryWithFactory = getReadableDatabase().rawQueryWithFactory(new SQLiteDatabase.CursorFactory() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda9
                @Override // android.database.sqlite.SQLiteDatabase.CursorFactory
                public final Cursor newCursor(SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
                    return Database.lambda$doQuery$1(sqlCommand, sQLiteDatabase, sQLiteCursorDriver, str, sQLiteQuery);
                }
            }, sqlCommand.getSql(), Constant.EMPTY_STRING_ARRAY, null);
            try {
                try {
                    Map<String, Object> mapCursorToResults = cursorToResults(cursorRawQueryWithFactory, num);
                    if (num != null && !cursorRawQueryWithFactory.isLast() && !cursorRawQueryWithFactory.isAfterLast()) {
                        int i = this.lastCursorId + 1;
                        this.lastCursorId = i;
                        mapCursorToResults.put(Constant.PARAM_CURSOR_ID, Integer.valueOf(i));
                        SqfliteCursor sqfliteCursor2 = new SqfliteCursor(i, num.intValue(), cursorRawQueryWithFactory);
                        try {
                            this.cursors.put(Integer.valueOf(i), sqfliteCursor2);
                            sqfliteCursor = sqfliteCursor2;
                        } catch (Exception e) {
                            e = e;
                            sqfliteCursor = sqfliteCursor2;
                            handleStatementException(e, operation);
                            if (sqfliteCursor != null) {
                                closeCursor(sqfliteCursor);
                            }
                            if (sqfliteCursor != null || cursorRawQueryWithFactory == null) {
                                return false;
                            }
                            cursorRawQueryWithFactory.close();
                            return false;
                        } catch (Throwable th) {
                            th = th;
                            sqfliteCursor = sqfliteCursor2;
                            if (sqfliteCursor == null && cursorRawQueryWithFactory != null) {
                                cursorRawQueryWithFactory.close();
                            }
                            throw th;
                        }
                    }
                    operation.success(mapCursorToResults);
                    if (sqfliteCursor == null && cursorRawQueryWithFactory != null) {
                        cursorRawQueryWithFactory.close();
                    }
                    return true;
                } catch (Exception e2) {
                    e = e2;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            cursorRawQueryWithFactory = null;
        } catch (Throwable th3) {
            th = th3;
            cursorRawQueryWithFactory = null;
        }
    }

    static /* synthetic */ Cursor lambda$doQuery$1(SqlCommand sqlCommand, SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
        sqlCommand.bindTo(sQLiteQuery);
        return new SQLiteCursor(sQLiteCursorDriver, str, sQLiteQuery);
    }

    public void queryCursorNext(final Operation operation) {
        wrapSqlOperationHandler(operation, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                this.f$0.m9088lambda$queryCursorNext$2$comtekartiksqfliteDatabase(operation);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: doQueryCursorNext, reason: merged with bridge method [inline-methods] */
    public boolean m9088lambda$queryCursorNext$2$comtekartiksqfliteDatabase(Operation operation) throws Throwable {
        boolean z;
        Integer num = (Integer) operation.getArgument(Constant.PARAM_CURSOR_ID);
        int iIntValue = num.intValue();
        boolean zEquals = Boolean.TRUE.equals(operation.getArgument("cancel"));
        if (LogLevel.hasVerboseLevel(this.logLevel)) {
            StringBuilder sb = new StringBuilder();
            sb.append(getThreadLogPrefix());
            sb.append("cursor ");
            sb.append(iIntValue);
            sb.append(zEquals ? " cancel" : " next");
            Log.d(Constant.TAG, sb.toString());
        }
        SqfliteCursor sqfliteCursor = null;
        if (zEquals) {
            closeCursor(iIntValue);
            operation.success(null);
            return true;
        }
        SqfliteCursor sqfliteCursor2 = this.cursors.get(num);
        boolean z2 = false;
        try {
            if (sqfliteCursor2 == null) {
                throw new IllegalStateException("Cursor " + iIntValue + " not found");
            }
            Cursor cursor = sqfliteCursor2.cursor;
            Map<String, Object> mapCursorToResults = cursorToResults(cursor, Integer.valueOf(sqfliteCursor2.pageSize));
            boolean z3 = (cursor.isLast() || cursor.isAfterLast()) ? false : true;
            if (z3) {
                try {
                    mapCursorToResults.put(Constant.PARAM_CURSOR_ID, num);
                } catch (Exception e) {
                    z = z3;
                    e = e;
                    try {
                        handleException(e, operation);
                        if (sqfliteCursor2 != null) {
                            closeCursor(sqfliteCursor2);
                        } else {
                            sqfliteCursor = sqfliteCursor2;
                        }
                        if (!z && sqfliteCursor != null) {
                            closeCursor(sqfliteCursor);
                        }
                        return false;
                    } catch (Throwable th) {
                        th = th;
                        z2 = z;
                        if (!z2 && sqfliteCursor2 != null) {
                            closeCursor(sqfliteCursor2);
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    z2 = z3;
                    if (!z2) {
                        closeCursor(sqfliteCursor2);
                    }
                    throw th;
                }
            }
            operation.success(mapCursorToResults);
            if (!z3 && sqfliteCursor2 != null) {
                closeCursor(sqfliteCursor2);
            }
            return true;
        } catch (Exception e2) {
            e = e2;
            z = false;
        } catch (Throwable th3) {
            th = th3;
        }
    }

    private void closeCursor(SqfliteCursor sqfliteCursor) {
        try {
            int i = sqfliteCursor.cursorId;
            if (LogLevel.hasVerboseLevel(this.logLevel)) {
                Log.d(Constant.TAG, getThreadLogPrefix() + "closing cursor " + i);
            }
            this.cursors.remove(Integer.valueOf(i));
            sqfliteCursor.cursor.close();
        } catch (Exception unused) {
        }
    }

    private void closeCursor(int i) {
        SqfliteCursor sqfliteCursor = this.cursors.get(Integer.valueOf(i));
        if (sqfliteCursor != null) {
            closeCursor(sqfliteCursor);
        }
    }

    void handleException(Exception exc, Operation operation) {
        if (exc instanceof SQLiteCantOpenDatabaseException) {
            operation.error("sqlite_error", "open_failed " + this.path, null);
        } else if (exc instanceof SQLException) {
            operation.error("sqlite_error", exc.getMessage(), SqlErrorInfo.getMap(operation));
        } else {
            operation.error("sqlite_error", exc.getMessage(), SqlErrorInfo.getMap(operation));
        }
    }

    private void handleStatementException(Exception exc, Operation operation) {
        if ((exc instanceof SQLException) && !(exc instanceof SQLiteCantOpenDatabaseException) && leaveTransactionIfRolledBack()) {
            Map map = SqlErrorInfo.getMap(operation);
            if (map == null) {
                map = new HashMap();
            }
            map.put(Constant.PARAM_TRANSACTION_CLOSED, true);
            operation.error("sqlite_error", exc.getMessage(), map);
            return;
        }
        handleException(exc, operation);
    }

    private boolean leaveTransactionIfRolledBack() {
        SQLiteDatabase writableDatabase = getWritableDatabase();
        try {
            if (!writableDatabase.inTransaction()) {
                return false;
            }
            writableDatabase.execSQL(";BEGIN");
            while (writableDatabase.inTransaction()) {
                try {
                    try {
                        writableDatabase.endTransaction();
                    } catch (SQLException unused) {
                    }
                } catch (Exception unused2) {
                }
            }
            synchronized (this) {
                this.transactionDepth = 0;
            }
            this.currentTransactionId = null;
            if (!LogLevel.hasSqlLevel(this.logLevel)) {
                return true;
            }
            Log.d(Constant.TAG, getThreadLogPrefix() + "transaction rolled back by SQLite");
            return true;
        } catch (Exception unused3) {
            return false;
        }
    }

    private boolean executeOrError(Operation operation) {
        SqlCommand sqlCommand = operation.getSqlCommand();
        if (LogLevel.hasSqlLevel(this.logLevel)) {
            Log.d(Constant.TAG, getThreadLogPrefix() + sqlCommand);
        }
        Boolean inTransactionChange = operation.getInTransactionChange();
        try {
            execSQL(sqlCommand);
            enterOrLeaveInTransaction(inTransactionChange);
            return true;
        } catch (Exception e) {
            if (Boolean.FALSE.equals(inTransactionChange)) {
                leaveTransactionOnError(sqlCommand.getSql(), e);
            }
            if (inTransactionChange == null) {
                handleStatementException(e, operation);
                return false;
            }
            handleException(e, operation);
            return false;
        }
    }

    private void execSQL(final SqlCommand sqlCommand) {
        SQLiteDatabase writableDatabase = getWritableDatabase();
        try {
            writableDatabase.execSQL(sqlCommand.getSql(), sqlCommand.getSqlArguments());
        } catch (SQLiteException e) {
            String message = e.getMessage();
            if (DatabaseUtils.getSqlStatementType(sqlCommand.getSql()) != 7 || message == null || !message.contains("Queries can be performed")) {
                throw e;
            }
            Cursor cursorRawQueryWithFactory = writableDatabase.rawQueryWithFactory(new SQLiteDatabase.CursorFactory() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda8
                @Override // android.database.sqlite.SQLiteDatabase.CursorFactory
                public final Cursor newCursor(SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
                    return Database.lambda$execSQL$3(sqlCommand, sQLiteDatabase, sQLiteCursorDriver, str, sQLiteQuery);
                }
            }, sqlCommand.getSql(), Constant.EMPTY_STRING_ARRAY, null);
            try {
                cursorRawQueryWithFactory.getCount();
                if (cursorRawQueryWithFactory != null) {
                    cursorRawQueryWithFactory.close();
                }
            } catch (Throwable th) {
                if (cursorRawQueryWithFactory != null) {
                    try {
                        cursorRawQueryWithFactory.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        }
    }

    static /* synthetic */ Cursor lambda$execSQL$3(SqlCommand sqlCommand, SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
        sqlCommand.bindTo(sQLiteQuery);
        return new SQLiteCursor(sQLiteCursorDriver, str, sQLiteQuery);
    }

    private void leaveTransactionOnError(String str, Exception exc) {
        SQLiteDatabase writableDatabase = getWritableDatabase();
        try {
            if (writableDatabase.inTransaction()) {
                return;
            }
        } catch (Exception unused) {
        }
        synchronized (this) {
            this.transactionDepth = 0;
        }
        int sqlStatementType = DatabaseUtils.getSqlStatementType(str);
        if ((sqlStatementType == 5 || sqlStatementType == 6) && (exc instanceof SQLException)) {
            try {
                writableDatabase.execSQL(";ROLLBACK");
                if (LogLevel.hasSqlLevel(this.logLevel)) {
                    Log.d(Constant.TAG, getThreadLogPrefix() + "rolled back the transaction left by the failed " + str);
                }
            } catch (Exception e) {
                if (LogLevel.hasVerboseLevel(this.logLevel)) {
                    Log.d(Constant.TAG, getThreadLogPrefix() + "no transaction to roll back: " + e.getMessage());
                }
            }
        }
    }

    private void bindArgs(SQLiteStatement sQLiteStatement, Object[] objArr) {
        int i = 0;
        while (i < objArr.length) {
            Object obj = objArr[i];
            i++;
            if (obj == null) {
                sQLiteStatement.bindNull(i);
            } else if (obj instanceof byte[]) {
                sQLiteStatement.bindBlob(i, (byte[]) obj);
            } else if ((obj instanceof Double) || (obj instanceof Float)) {
                sQLiteStatement.bindDouble(i, ((Number) obj).doubleValue());
            } else if (obj instanceof Number) {
                sQLiteStatement.bindLong(i, ((Number) obj).longValue());
            } else if (obj instanceof Boolean) {
                sQLiteStatement.bindLong(i, ((Boolean) obj).booleanValue() ? 1L : 0L);
            } else {
                sQLiteStatement.bindString(i, obj.toString());
            }
        }
    }

    public void execute(final Operation operation) {
        wrapSqlOperationHandler(operation, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda7
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m9085lambda$execute$4$comtekartiksqfliteDatabase(operation);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$execute$4$com-tekartik-sqflite-Database, reason: not valid java name */
    /* synthetic */ void m9085lambda$execute$4$comtekartiksqfliteDatabase(Operation operation) {
        Boolean inTransactionChange = operation.getInTransactionChange();
        boolean z = Boolean.TRUE.equals(inTransactionChange) && operation.hasNullTransactionId();
        if (z) {
            int i = this.lastTransactionId + 1;
            this.lastTransactionId = i;
            this.currentTransactionId = Integer.valueOf(i);
        }
        if (!executeOrError(operation)) {
            if (z) {
                this.currentTransactionId = null;
                return;
            } else {
                if (Boolean.FALSE.equals(inTransactionChange)) {
                    this.currentTransactionId = null;
                    return;
                }
                return;
            }
        }
        if (z) {
            HashMap map = new HashMap();
            map.put(Constant.PARAM_TRANSACTION_ID, this.currentTransactionId);
            operation.success(map);
        } else {
            if (Boolean.FALSE.equals(inTransactionChange)) {
                this.currentTransactionId = null;
            }
            operation.success(null);
        }
    }

    private boolean doExecute(Operation operation) {
        if (!executeOrError(operation)) {
            return false;
        }
        operation.success(null);
        return true;
    }

    public void insert(final Operation operation) {
        wrapSqlOperationHandler(operation, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m9086lambda$insert$5$comtekartiksqfliteDatabase(operation);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: doInsert, reason: merged with bridge method [inline-methods] */
    public boolean m9086lambda$insert$5$comtekartiksqfliteDatabase(Operation operation) {
        SqlCommand sqlCommand = operation.getSqlCommand();
        if (LogLevel.hasSqlLevel(this.logLevel)) {
            Log.d(Constant.TAG, getThreadLogPrefix() + sqlCommand);
        }
        try {
            SQLiteStatement sQLiteStatementCompileStatement = getWritableDatabase().compileStatement(sqlCommand.getSql());
            bindArgs(sQLiteStatementCompileStatement, sqlCommand.getSqlArguments());
            long jExecuteInsert = sQLiteStatementCompileStatement.executeInsert();
            if (operation.getNoResult()) {
                operation.success(null);
                return true;
            }
            operation.success(Long.valueOf(jExecuteInsert));
            return true;
        } catch (Exception e) {
            handleStatementException(e, operation);
            return false;
        }
    }

    public void update(final Operation operation) {
        wrapSqlOperationHandler(operation, new Runnable() { // from class: com.tekartik.sqflite.Database$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m9089lambda$update$6$comtekartiksqfliteDatabase(operation);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: doUpdate, reason: merged with bridge method [inline-methods] */
    public boolean m9089lambda$update$6$comtekartiksqfliteDatabase(Operation operation) {
        SqlCommand sqlCommand = operation.getSqlCommand();
        if (LogLevel.hasSqlLevel(this.logLevel)) {
            Log.d(Constant.TAG, getThreadLogPrefix() + sqlCommand);
        }
        try {
            SQLiteStatement sQLiteStatementCompileStatement = getWritableDatabase().compileStatement(sqlCommand.getSql());
            bindArgs(sQLiteStatementCompileStatement, sqlCommand.getSqlArguments());
            int iExecuteUpdateDelete = sQLiteStatementCompileStatement.executeUpdateDelete();
            if (operation.getNoResult()) {
                operation.success(null);
                return true;
            }
            operation.success(Integer.valueOf(iExecuteUpdateDelete));
            return true;
        } catch (Exception e) {
            handleStatementException(e, operation);
            return false;
        }
    }

    void batch(MethodCall methodCall, MethodChannel.Result result) {
        MethodCallOperation methodCallOperation = new MethodCallOperation(methodCall, result);
        boolean noResult = methodCallOperation.getNoResult();
        boolean continueOnError = methodCallOperation.getContinueOnError();
        List list = (List) methodCallOperation.getArgument("operations");
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            BatchOperation batchOperation = new BatchOperation((Map) it.next(), noResult);
            String method = batchOperation.getMethod();
            method.hashCode();
            switch (method) {
                case "execute":
                    if (doExecute(batchOperation)) {
                        batchOperation.handleSuccess(arrayList);
                        break;
                    } else {
                        if (continueOnError && !batchOperation.isTransactionClosed()) {
                            batchOperation.handleErrorContinue(arrayList);
                        } else {
                            batchOperation.handleError(result);
                            postQueuedOperationsIfNotInTransaction();
                            return;
                        }
                        break;
                    }
                    break;
                case "insert":
                    if (m9086lambda$insert$5$comtekartiksqfliteDatabase(batchOperation)) {
                        batchOperation.handleSuccess(arrayList);
                        break;
                    } else {
                        if (continueOnError && !batchOperation.isTransactionClosed()) {
                            batchOperation.handleErrorContinue(arrayList);
                        } else {
                            batchOperation.handleError(result);
                            postQueuedOperationsIfNotInTransaction();
                            return;
                        }
                        break;
                    }
                    break;
                case "update":
                    if (m9089lambda$update$6$comtekartiksqfliteDatabase(batchOperation)) {
                        batchOperation.handleSuccess(arrayList);
                        break;
                    } else {
                        if (continueOnError && !batchOperation.isTransactionClosed()) {
                            batchOperation.handleErrorContinue(arrayList);
                        } else {
                            batchOperation.handleError(result);
                            postQueuedOperationsIfNotInTransaction();
                            return;
                        }
                        break;
                    }
                    break;
                case "query":
                    if (m9087lambda$query$0$comtekartiksqfliteDatabase(batchOperation)) {
                        batchOperation.handleSuccess(arrayList);
                        break;
                    } else {
                        if (continueOnError && !batchOperation.isTransactionClosed()) {
                            batchOperation.handleErrorContinue(arrayList);
                        } else {
                            batchOperation.handleError(result);
                            postQueuedOperationsIfNotInTransaction();
                            return;
                        }
                        break;
                    }
                    break;
                default:
                    result.error("bad_param", "Batch method '" + method + "' not supported", null);
                    return;
            }
        }
        if (noResult) {
            result.success(null);
        } else {
            result.success(arrayList);
        }
    }

    synchronized boolean isInTransaction() {
        return this.transactionDepth > 0;
    }

    synchronized void enterOrLeaveInTransaction(Boolean bool) {
        if (Boolean.TRUE.equals(bool)) {
            this.transactionDepth++;
        } else if (Boolean.FALSE.equals(bool)) {
            this.transactionDepth--;
        }
    }
}
