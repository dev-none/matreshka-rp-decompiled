package com.matreshkarp.core.keyboard;

import androidx.room.EntityDeleteOrUpdateAdapter;
import androidx.room.EntityInsertAdapter;
import androidx.room.RoomDatabase;
import androidx.room.util.DBUtil;
import androidx.room.util.SQLiteStatementUtil;
import androidx.sqlite.SQLiteConnection;
import androidx.sqlite.SQLiteStatement;
import io.sentry.protocol.Message;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.functions.Function1;

/* JADX INFO: loaded from: classes6.dex */
public final class CmdInfoDao_Impl implements CmdInfoDao {
    private final RoomDatabase __db;
    private final EntityInsertAdapter<CmdInfo> __insertAdapterOfCmdInfo = new EntityInsertAdapter<CmdInfo>() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl.1
        @Override // androidx.room.EntityInsertAdapter
        protected String createQuery() {
            return "INSERT OR REPLACE INTO `cmd_info` (`cmdId`,`cmd`,`params`,`info`,`priority`,`sectionId`) VALUES (?,?,?,?,?,?)";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // androidx.room.EntityInsertAdapter
        public void bind(final SQLiteStatement statement, final CmdInfo entity) {
            statement.mo7741bindLong(1, entity.cmdId);
            if (entity.cmd == null) {
                statement.mo7742bindNull(2);
            } else {
                statement.mo7743bindText(2, entity.cmd);
            }
            if (entity.params == null) {
                statement.mo7742bindNull(3);
            } else {
                statement.mo7743bindText(3, entity.params);
            }
            if (entity.info == null) {
                statement.mo7742bindNull(4);
            } else {
                statement.mo7743bindText(4, entity.info);
            }
            statement.mo7741bindLong(5, entity.priority);
            statement.mo7741bindLong(6, entity.sectionId);
        }
    };
    private final EntityDeleteOrUpdateAdapter<CmdInfo> __deleteAdapterOfCmdInfo = new EntityDeleteOrUpdateAdapter<CmdInfo>() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl.2
        @Override // androidx.room.EntityDeleteOrUpdateAdapter
        protected String createQuery() {
            return "DELETE FROM `cmd_info` WHERE `cmdId` = ? AND `sectionId` = ?";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // androidx.room.EntityDeleteOrUpdateAdapter
        public void bind(final SQLiteStatement statement, final CmdInfo entity) {
            statement.mo7741bindLong(1, entity.cmdId);
            statement.mo7741bindLong(2, entity.sectionId);
        }
    };

    public CmdInfoDao_Impl(final RoomDatabase __db) {
        this.__db = __db;
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public void insertCmd(final CmdInfo info) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8974lambda$insertCmd$0$commatreshkarpcorekeyboardCmdInfoDao_Impl(info, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$insertCmd$0$com-matreshkarp-core-keyboard-CmdInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8974lambda$insertCmd$0$commatreshkarpcorekeyboardCmdInfoDao_Impl(CmdInfo cmdInfo, SQLiteConnection sQLiteConnection) throws Exception {
        this.__insertAdapterOfCmdInfo.insert(sQLiteConnection, cmdInfo);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public void insertCmdList(final List<CmdInfo> info) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8975x11f5aa4b(info, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$insertCmdList$1$com-matreshkarp-core-keyboard-CmdInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8975x11f5aa4b(List list, SQLiteConnection sQLiteConnection) throws Exception {
        this.__insertAdapterOfCmdInfo.insert(sQLiteConnection, list);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public void deleteCmd(final CmdInfo info) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8973lambda$deleteCmd$2$commatreshkarpcorekeyboardCmdInfoDao_Impl(info, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$deleteCmd$2$com-matreshkarp-core-keyboard-CmdInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8973lambda$deleteCmd$2$commatreshkarpcorekeyboardCmdInfoDao_Impl(CmdInfo cmdInfo, SQLiteConnection sQLiteConnection) throws Exception {
        this.__deleteAdapterOfCmdInfo.handle(sQLiteConnection, cmdInfo);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public List<CmdInfo> getCmds(final int sectionId) {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$getCmds$3(sectionId, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$getCmds$3(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("Select * from cmd_info where sectionId = ?");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmdId");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmd");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, Message.JsonKeys.PARAMS);
            int columnIndexOrThrow4 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "info");
            int columnIndexOrThrow5 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "priority");
            int columnIndexOrThrow6 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "sectionId");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                CmdInfo cmdInfo = new CmdInfo();
                cmdInfo.cmdId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    cmdInfo.cmd = null;
                } else {
                    cmdInfo.cmd = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    cmdInfo.params = null;
                } else {
                    cmdInfo.params = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow4)) {
                    cmdInfo.info = null;
                } else {
                    cmdInfo.info = sQLiteStatementPrepare.getText(columnIndexOrThrow4);
                }
                cmdInfo.priority = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow5);
                cmdInfo.sectionId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow6);
                arrayList.add(cmdInfo);
            }
            return arrayList;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public List<CmdInfo> getCmdsSorted(final int sectionId) {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$getCmdsSorted$4(sectionId, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$getCmdsSorted$4(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("Select * from cmd_info where sectionId = ? ORDER BY priority desc");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmdId");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmd");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, Message.JsonKeys.PARAMS);
            int columnIndexOrThrow4 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "info");
            int columnIndexOrThrow5 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "priority");
            int columnIndexOrThrow6 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "sectionId");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                CmdInfo cmdInfo = new CmdInfo();
                cmdInfo.cmdId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    cmdInfo.cmd = null;
                } else {
                    cmdInfo.cmd = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    cmdInfo.params = null;
                } else {
                    cmdInfo.params = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow4)) {
                    cmdInfo.info = null;
                } else {
                    cmdInfo.info = sQLiteStatementPrepare.getText(columnIndexOrThrow4);
                }
                cmdInfo.priority = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow5);
                cmdInfo.sectionId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow6);
                arrayList.add(cmdInfo);
            }
            return arrayList;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public List<CmdInfo> findBySubstr(final String cmd, final int limit) {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$findBySubstr$5(cmd, limit, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$findBySubstr$5(String str, int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("SELECT * FROM cmd_info WHERE sectionId != -2 and cmdId IN (SELECT MIN(cmdId) FROM cmd_info GROUP BY cmd) and cmd not IN (SELECT cmd FROM cmd_info WHERE sectionId = -2 and cmdId IN (SELECT MIN(cmdId) FROM cmd_info where sectionId = -2 GROUP BY cmd) AND cmd LIKE '%' || ? || '%'  ORDER BY cmdId desc limit 20) AND cmd LIKE '%' || ? || '%' ORDER BY sectionId asc, priority desc limit ?");
        try {
            if (str == null) {
                sQLiteStatementPrepare.mo7742bindNull(1);
            } else {
                sQLiteStatementPrepare.mo7743bindText(1, str);
            }
            if (str == null) {
                sQLiteStatementPrepare.mo7742bindNull(2);
            } else {
                sQLiteStatementPrepare.mo7743bindText(2, str);
            }
            sQLiteStatementPrepare.mo7741bindLong(3, i);
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmdId");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmd");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, Message.JsonKeys.PARAMS);
            int columnIndexOrThrow4 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "info");
            int columnIndexOrThrow5 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "priority");
            int columnIndexOrThrow6 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "sectionId");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                CmdInfo cmdInfo = new CmdInfo();
                cmdInfo.cmdId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    cmdInfo.cmd = null;
                } else {
                    cmdInfo.cmd = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    cmdInfo.params = null;
                } else {
                    cmdInfo.params = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow4)) {
                    cmdInfo.info = null;
                } else {
                    cmdInfo.info = sQLiteStatementPrepare.getText(columnIndexOrThrow4);
                }
                cmdInfo.priority = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow5);
                cmdInfo.sectionId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow6);
                arrayList.add(cmdInfo);
            }
            sQLiteStatementPrepare.close();
            return arrayList;
        } catch (Throwable th) {
            sQLiteStatementPrepare.close();
            throw th;
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public List<CmdInfo> findBySubstrInHistory(final String cmd) {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$findBySubstrInHistory$6(cmd, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$findBySubstrInHistory$6(String str, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("SELECT * FROM cmd_info WHERE sectionId = -2 and cmdId IN (SELECT MIN(cmdId) FROM cmd_info where sectionId = -2 GROUP BY cmd) AND cmd LIKE '%' || ? || '%'  ORDER BY cmdId desc limit 20");
        try {
            if (str == null) {
                sQLiteStatementPrepare.mo7742bindNull(1);
            } else {
                sQLiteStatementPrepare.mo7743bindText(1, str);
            }
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmdId");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmd");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, Message.JsonKeys.PARAMS);
            int columnIndexOrThrow4 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "info");
            int columnIndexOrThrow5 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "priority");
            int columnIndexOrThrow6 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "sectionId");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                CmdInfo cmdInfo = new CmdInfo();
                cmdInfo.cmdId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    cmdInfo.cmd = null;
                } else {
                    cmdInfo.cmd = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    cmdInfo.params = null;
                } else {
                    cmdInfo.params = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow4)) {
                    cmdInfo.info = null;
                } else {
                    cmdInfo.info = sQLiteStatementPrepare.getText(columnIndexOrThrow4);
                }
                cmdInfo.priority = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow5);
                cmdInfo.sectionId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow6);
                arrayList.add(cmdInfo);
            }
            sQLiteStatementPrepare.close();
            return arrayList;
        } catch (Throwable th) {
            sQLiteStatementPrepare.close();
            throw th;
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public List<CmdInfo> find(final String cmd) {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$find$7(cmd, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$find$7(String str, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("select * from cmd_info where sectionId != -2 and cmd like ? limit 1");
        try {
            if (str == null) {
                sQLiteStatementPrepare.mo7742bindNull(1);
            } else {
                sQLiteStatementPrepare.mo7743bindText(1, str);
            }
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmdId");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "cmd");
            int columnIndexOrThrow3 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, Message.JsonKeys.PARAMS);
            int columnIndexOrThrow4 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "info");
            int columnIndexOrThrow5 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "priority");
            int columnIndexOrThrow6 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "sectionId");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                CmdInfo cmdInfo = new CmdInfo();
                cmdInfo.cmdId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    cmdInfo.cmd = null;
                } else {
                    cmdInfo.cmd = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow3)) {
                    cmdInfo.params = null;
                } else {
                    cmdInfo.params = sQLiteStatementPrepare.getText(columnIndexOrThrow3);
                }
                if (sQLiteStatementPrepare.isNull(columnIndexOrThrow4)) {
                    cmdInfo.info = null;
                } else {
                    cmdInfo.info = sQLiteStatementPrepare.getText(columnIndexOrThrow4);
                }
                cmdInfo.priority = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow5);
                cmdInfo.sectionId = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow6);
                arrayList.add(cmdInfo);
            }
            sQLiteStatementPrepare.close();
            return arrayList;
        } catch (Throwable th) {
            sQLiteStatementPrepare.close();
            throw th;
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public void deleteCmdsBySection(final int sectionId) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$deleteCmdsBySection$8(sectionId, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$deleteCmdsBySection$8(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("delete from cmd_info where sectionId = ?");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            sQLiteStatementPrepare.step();
            return null;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.CmdInfoDao
    public void clearCmds() {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.CmdInfoDao_Impl$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CmdInfoDao_Impl.lambda$clearCmds$9((SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$clearCmds$9(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("delete from cmd_info where sectionId != -2");
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
