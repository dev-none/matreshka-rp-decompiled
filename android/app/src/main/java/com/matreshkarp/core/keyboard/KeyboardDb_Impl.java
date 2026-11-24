package com.matreshkarp.core.keyboard;

import androidx.room.InvalidationTracker;
import androidx.room.RoomMasterTable;
import androidx.room.RoomOpenDelegate;
import androidx.room.migration.AutoMigrationSpec;
import androidx.room.migration.Migration;
import androidx.room.util.DBUtil;
import androidx.room.util.TableInfo;
import androidx.sqlite.SQLite;
import androidx.sqlite.SQLiteConnection;
import io.sentry.protocol.Message;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public final class KeyboardDb_Impl extends KeyboardDb {
    private volatile BindInfoDao _bindInfoDao;
    private volatile CmdInfoDao _cmdInfoDao;
    private volatile SectionInfoDao _sectionInfoDao;

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // androidx.room.RoomDatabase
    public RoomOpenDelegate createOpenDelegate() {
        return new RoomOpenDelegate(1, "6936a641389bc7c485daf9278895886d", "a1a983b24430fa3496fda2c54560cfe8") { // from class: com.matreshkarp.core.keyboard.KeyboardDb_Impl.1
            @Override // androidx.room.RoomOpenDelegate
            public void onCreate(final SQLiteConnection connection) {
            }

            @Override // androidx.room.RoomOpenDelegate
            public void onPostMigrate(final SQLiteConnection connection) {
            }

            @Override // androidx.room.RoomOpenDelegate
            public void createAllTables(final SQLiteConnection connection) {
                SQLite.execSQL(connection, "CREATE TABLE IF NOT EXISTS `sections` (`id` INTEGER NOT NULL, `name` TEXT, PRIMARY KEY(`id`))");
                SQLite.execSQL(connection, "CREATE TABLE IF NOT EXISTS `cmd_info` (`cmdId` INTEGER NOT NULL, `cmd` TEXT, `params` TEXT, `info` TEXT, `priority` INTEGER NOT NULL, `sectionId` INTEGER NOT NULL, PRIMARY KEY(`cmdId`, `sectionId`))");
                SQLite.execSQL(connection, "CREATE TABLE IF NOT EXISTS `bind_info` (`id` INTEGER NOT NULL, `name` TEXT, `textsJsonArray` TEXT, PRIMARY KEY(`id`))");
                SQLite.execSQL(connection, RoomMasterTable.CREATE_QUERY);
                SQLite.execSQL(connection, "INSERT OR REPLACE INTO room_master_table (id,identity_hash) VALUES(42, '6936a641389bc7c485daf9278895886d')");
            }

            @Override // androidx.room.RoomOpenDelegate
            public void dropAllTables(final SQLiteConnection connection) {
                SQLite.execSQL(connection, "DROP TABLE IF EXISTS `sections`");
                SQLite.execSQL(connection, "DROP TABLE IF EXISTS `cmd_info`");
                SQLite.execSQL(connection, "DROP TABLE IF EXISTS `bind_info`");
            }

            @Override // androidx.room.RoomOpenDelegate
            public void onOpen(final SQLiteConnection connection) {
                KeyboardDb_Impl.this.internalInitInvalidationTracker(connection);
            }

            @Override // androidx.room.RoomOpenDelegate
            public void onPreMigrate(final SQLiteConnection connection) {
                DBUtil.dropFtsSyncTriggers(connection);
            }

            @Override // androidx.room.RoomOpenDelegate
            public RoomOpenDelegate.ValidationResult onValidateSchema(final SQLiteConnection connection) {
                HashMap map = new HashMap(2);
                map.put("id", new TableInfo.Column("id", "INTEGER", true, 1, null, 1));
                map.put("name", new TableInfo.Column("name", "TEXT", false, 0, null, 1));
                TableInfo tableInfo = new TableInfo("sections", map, new HashSet(0), new HashSet(0));
                TableInfo tableInfo2 = TableInfo.read(connection, "sections");
                if (!tableInfo.equals(tableInfo2)) {
                    return new RoomOpenDelegate.ValidationResult(false, "sections(com.matreshkarp.core.keyboard.SectionInfo).\n Expected:\n" + tableInfo + "\n Found:\n" + tableInfo2);
                }
                HashMap map2 = new HashMap(6);
                map2.put("cmdId", new TableInfo.Column("cmdId", "INTEGER", true, 1, null, 1));
                map2.put("cmd", new TableInfo.Column("cmd", "TEXT", false, 0, null, 1));
                map2.put(Message.JsonKeys.PARAMS, new TableInfo.Column(Message.JsonKeys.PARAMS, "TEXT", false, 0, null, 1));
                map2.put("info", new TableInfo.Column("info", "TEXT", false, 0, null, 1));
                map2.put("priority", new TableInfo.Column("priority", "INTEGER", true, 0, null, 1));
                map2.put("sectionId", new TableInfo.Column("sectionId", "INTEGER", true, 2, null, 1));
                TableInfo tableInfo3 = new TableInfo("cmd_info", map2, new HashSet(0), new HashSet(0));
                TableInfo tableInfo4 = TableInfo.read(connection, "cmd_info");
                if (!tableInfo3.equals(tableInfo4)) {
                    return new RoomOpenDelegate.ValidationResult(false, "cmd_info(com.matreshkarp.core.keyboard.CmdInfo).\n Expected:\n" + tableInfo3 + "\n Found:\n" + tableInfo4);
                }
                HashMap map3 = new HashMap(3);
                map3.put("id", new TableInfo.Column("id", "INTEGER", true, 1, null, 1));
                map3.put("name", new TableInfo.Column("name", "TEXT", false, 0, null, 1));
                map3.put("textsJsonArray", new TableInfo.Column("textsJsonArray", "TEXT", false, 0, null, 1));
                TableInfo tableInfo5 = new TableInfo("bind_info", map3, new HashSet(0), new HashSet(0));
                TableInfo tableInfo6 = TableInfo.read(connection, "bind_info");
                if (!tableInfo5.equals(tableInfo6)) {
                    return new RoomOpenDelegate.ValidationResult(false, "bind_info(com.matreshkarp.core.keyboard.BindInfo).\n Expected:\n" + tableInfo5 + "\n Found:\n" + tableInfo6);
                }
                return new RoomOpenDelegate.ValidationResult(true, null);
            }
        };
    }

    @Override // androidx.room.RoomDatabase
    protected InvalidationTracker createInvalidationTracker() {
        return new InvalidationTracker(this, new HashMap(0), new HashMap(0), "sections", "cmd_info", "bind_info");
    }

    @Override // androidx.room.RoomDatabase
    public void clearAllTables() {
        super.performClear(false, "sections", "cmd_info", "bind_info");
    }

    @Override // androidx.room.RoomDatabase
    protected Map<Class<?>, List<Class<?>>> getRequiredTypeConverters() {
        HashMap map = new HashMap();
        map.put(SectionInfoDao.class, SectionInfoDao_Impl.getRequiredConverters());
        map.put(CmdInfoDao.class, CmdInfoDao_Impl.getRequiredConverters());
        map.put(BindInfoDao.class, BindInfoDao_Impl.getRequiredConverters());
        return map;
    }

    @Override // androidx.room.RoomDatabase
    public Set<Class<? extends AutoMigrationSpec>> getRequiredAutoMigrationSpecs() {
        return new HashSet();
    }

    @Override // androidx.room.RoomDatabase
    public List<Migration> getAutoMigrations(final Map<Class<? extends AutoMigrationSpec>, AutoMigrationSpec> autoMigrationSpecs) {
        return new ArrayList();
    }

    @Override // com.matreshkarp.core.keyboard.KeyboardDb
    public SectionInfoDao sectionInfoDao() {
        SectionInfoDao sectionInfoDao;
        if (this._sectionInfoDao != null) {
            return this._sectionInfoDao;
        }
        synchronized (this) {
            if (this._sectionInfoDao == null) {
                this._sectionInfoDao = new SectionInfoDao_Impl(this);
            }
            sectionInfoDao = this._sectionInfoDao;
        }
        return sectionInfoDao;
    }

    @Override // com.matreshkarp.core.keyboard.KeyboardDb
    public CmdInfoDao cmdInfoDao() {
        CmdInfoDao cmdInfoDao;
        if (this._cmdInfoDao != null) {
            return this._cmdInfoDao;
        }
        synchronized (this) {
            if (this._cmdInfoDao == null) {
                this._cmdInfoDao = new CmdInfoDao_Impl(this);
            }
            cmdInfoDao = this._cmdInfoDao;
        }
        return cmdInfoDao;
    }

    @Override // com.matreshkarp.core.keyboard.KeyboardDb
    public BindInfoDao bindInfoDao() {
        BindInfoDao bindInfoDao;
        if (this._bindInfoDao != null) {
            return this._bindInfoDao;
        }
        synchronized (this) {
            if (this._bindInfoDao == null) {
                this._bindInfoDao = new BindInfoDao_Impl(this);
            }
            bindInfoDao = this._bindInfoDao;
        }
        return bindInfoDao;
    }
}
