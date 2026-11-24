package com.matreshkarp.core.keyboard;

import androidx.room.EntityDeleteOrUpdateAdapter;
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
public final class SectionInfoDao_Impl implements SectionInfoDao {
    private final RoomDatabase __db;
    private final EntityInsertAdapter<SectionInfo> __insertAdapterOfSectionInfo = new EntityInsertAdapter<SectionInfo>() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl.1
        @Override // androidx.room.EntityInsertAdapter
        protected String createQuery() {
            return "INSERT OR REPLACE INTO `sections` (`id`,`name`) VALUES (?,?)";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // androidx.room.EntityInsertAdapter
        public void bind(final SQLiteStatement statement, final SectionInfo entity) {
            statement.mo7741bindLong(1, entity.id);
            if (entity.name == null) {
                statement.mo7742bindNull(2);
            } else {
                statement.mo7743bindText(2, entity.name);
            }
        }
    };
    private final EntityDeleteOrUpdateAdapter<SectionInfo> __deleteAdapterOfSectionInfo = new EntityDeleteOrUpdateAdapter<SectionInfo>() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl.2
        @Override // androidx.room.EntityDeleteOrUpdateAdapter
        protected String createQuery() {
            return "DELETE FROM `sections` WHERE `id` = ?";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // androidx.room.EntityDeleteOrUpdateAdapter
        public void bind(final SQLiteStatement statement, final SectionInfo entity) {
            statement.mo7741bindLong(1, entity.id);
        }
    };

    public SectionInfoDao_Impl(final RoomDatabase __db) {
        this.__db = __db;
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public void insertSection(final SectionInfo sectionInfo) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8977x8bf02022(sectionInfo, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$insertSection$0$com-matreshkarp-core-keyboard-SectionInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8977x8bf02022(SectionInfo sectionInfo, SQLiteConnection sQLiteConnection) throws Exception {
        this.__insertAdapterOfSectionInfo.insert(sQLiteConnection, sectionInfo);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public void deleteSection(final SectionInfo sectionInfo) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return this.f$0.m8976x4b1a7bb1(sectionInfo, (SQLiteConnection) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$deleteSection$1$com-matreshkarp-core-keyboard-SectionInfoDao_Impl, reason: not valid java name */
    /* synthetic */ Object m8976x4b1a7bb1(SectionInfo sectionInfo, SQLiteConnection sQLiteConnection) throws Exception {
        this.__deleteAdapterOfSectionInfo.handle(sQLiteConnection, sectionInfo);
        return null;
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public List<SectionInfo> getSections() {
        return (List) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SectionInfoDao_Impl.lambda$getSections$2((SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ List lambda$getSections$2(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("SELECT * FROM sections ORDER BY id asc");
        try {
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "id");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "name");
            ArrayList arrayList = new ArrayList();
            while (sQLiteStatementPrepare.step()) {
                arrayList.add(new SectionInfo((int) sQLiteStatementPrepare.getLong(columnIndexOrThrow), sQLiteStatementPrepare.isNull(columnIndexOrThrow2) ? null : sQLiteStatementPrepare.getText(columnIndexOrThrow2)));
            }
            return arrayList;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public SectionInfo getSection(final int sectionId) {
        return (SectionInfo) DBUtil.performBlocking(this.__db, true, false, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SectionInfoDao_Impl.lambda$getSection$3(sectionId, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ SectionInfo lambda$getSection$3(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("SELECT * FROM sections where id = ?");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            int columnIndexOrThrow = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "id");
            int columnIndexOrThrow2 = SQLiteStatementUtil.getColumnIndexOrThrow(sQLiteStatementPrepare, "name");
            SectionInfo sectionInfo = null;
            String text = null;
            if (sQLiteStatementPrepare.step()) {
                int i2 = (int) sQLiteStatementPrepare.getLong(columnIndexOrThrow);
                if (!sQLiteStatementPrepare.isNull(columnIndexOrThrow2)) {
                    text = sQLiteStatementPrepare.getText(columnIndexOrThrow2);
                }
                sectionInfo = new SectionInfo(i2, text);
            }
            return sectionInfo;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public void deleteSectionById(final int sectionId) {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SectionInfoDao_Impl.lambda$deleteSectionById$4(sectionId, (SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$deleteSectionById$4(int i, SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("DELETE FROM sections where id = ?");
        try {
            sQLiteStatementPrepare.mo7741bindLong(1, i);
            sQLiteStatementPrepare.step();
            return null;
        } finally {
            sQLiteStatementPrepare.close();
        }
    }

    @Override // com.matreshkarp.core.keyboard.SectionInfoDao
    public void clearSections() {
        DBUtil.performBlocking(this.__db, false, true, new Function1() { // from class: com.matreshkarp.core.keyboard.SectionInfoDao_Impl$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SectionInfoDao_Impl.lambda$clearSections$5((SQLiteConnection) obj);
            }
        });
    }

    static /* synthetic */ Object lambda$clearSections$5(SQLiteConnection sQLiteConnection) {
        SQLiteStatement sQLiteStatementPrepare = sQLiteConnection.prepare("delete from sections");
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
