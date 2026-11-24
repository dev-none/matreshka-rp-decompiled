package com.matreshkarp.core.keyboard;

import androidx.room.EntityInsertAdapter;
import androidx.room.RoomDatabase;
import androidx.room.util.DBUtil;
import androidx.room.util.SQLiteStatementUtil;
import androidx.sqlite.SQLiteConnection;
import androidx.sqlite.SQLiteStatement;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.functions.Function1;

/* JADX INFO: loaded from: classes6.dex */
public final class BindInfoDao_Impl implements BindInfoDao {
    private final RoomDatabase __db;
    private final EntityInsertAdapter<BindInfo> __insertAdapterOfBindInfo = new EntityInsertAdapter<BindInfo>() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl.1
        @Override // androidx.room.EntityInsertAdapter
        protected String createQuery() {
            return "INSERT OR REPLACE INTO `bind_info` (`id`,`name`,`textsJsonArray`) VALUES (?,?,?)";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // androidx.room.EntityInsertAdapter
        public void bind(final SQLiteStatement statement, final BindInfo entity) {
            statement.mo7741bindLong(1, entity.id);
            if (entity.name == null) {
                statement.mo7742bindNull(2);
            } else {
                statement.mo7743bindText(2, entity.name);
            }
            if (entity.textsJsonArray == null) {
                statement.mo7742bindNull(3);
            } else {
                statement.mo7743bindText(3, entity.textsJsonArray);
            }
        }
    };

    public BindInfoDao_Impl(final RoomDatabase __db) {
        this.__db = __db;
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public void insertBind(final BindInfo info) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8971xcdcadf72(info, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$insertBind$0$com-matreshkarp-core-keyboard-BindInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8971xcdcadf72(BindInfo bindInfo, SQLiteConnection sQLiteConnection) throws Exception {
        this.__insertAdapterOfBindInfo.insert(sQLiteConnection, bindInfo);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public void insertBindList(final List<BindInfo> info) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8972x4d87f9d3(info, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$insertBindList$1$com-matreshkarp-core-keyboard-BindInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8972x4d87f9d3(List list, SQLiteConnection sQLiteConnection) throws Exception {
        this.__insertAdapterOfBindInfo.insert(sQLiteConnection, list);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public List<BindInfo> getBinds() {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return BindInfoDao_Impl.lambda$getBinds$2((SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$getBinds$2(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("Select * from bind_info order by id asc");
        try {
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "id");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "name");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "textsJsonArray");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                BindInfo bindInfo = new BindInfo();
                bindInfo.id = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    bindInfo.name = null;
                } else {
                    bindInfo.name = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    bindInfo.textsJsonArray = null;
                } else {
                    bindInfo.textsJsonArray = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                arrayList.add(bindInfo);
            }
            return arrayList;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public int findFreeId() {
        return ((Integer) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return BindInfoDao_Impl.lambda$findFreeId$3((SQLiteConnection) obj);
            }
        })).intValue();
    }

    static /* synthetic */ Integer lambda$findFreeId$3(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("SELECT COUNT(*) FROM bind_info");
        try {
            return Integer.valueOf(sQLiteStatementPrepare.step() ? (int) sQLiteStatementPrepare.getLong(0) : 0);
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public void deleteBind(final int id) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return BindInfoDao_Impl.lambda$deleteBind$4(id, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$deleteBind$4(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("delete from bind_info where id = ?");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            sQLiteStatementPrepare.step();
            return null;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.BindInfoDao
    public void clearBinds() {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.BindInfoDao_Impl$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return BindInfoDao_Impl.lambda$clearBinds$5((SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$clearBinds$5(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("delete from bind_info");
        try {
            sQLiteStatementPrepare.step();
            return null;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    public static List<Class<?>> getRequiredConverters() {
        return Collections.EMPTY_LIST;
    }
}
