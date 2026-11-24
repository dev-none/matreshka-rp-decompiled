package com.matreshkarp.core.keyboard;

import android.content.Context;
import androidx.room.Room;
import androidx.room.RoomDatabase;
import java.util.HashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes6.dex */
public abstract class KeyboardDb extends RoomDatabase {
    private static final HashMap<Integer, KeyboardDb> mInstances = new HashMap<>();
    public static final ExecutorService databaseExecutor = Executors.newFixedThreadPool(1);

    public abstract BindInfoDao bindInfoDao();

    public abstract CmdInfoDao cmdInfoDao();

    public abstract SectionInfoDao sectionInfoDao();

    public static synchronized KeyboardDb getInstance(Context context, int serverId) {
        KeyboardDb keyboardDb;
        HashMap<Integer, KeyboardDb> map = mInstances;
        keyboardDb = map.get(Integer.valueOf(serverId));
        if (keyboardDb == null) {
            keyboardDb = (KeyboardDb) Room.databaseBuilder(context.getApplicationContext(), KeyboardDb.class, "matrp_keyboard" + serverId).allowMainThreadQueries().build();
            map.put(Integer.valueOf(serverId), keyboardDb);
        }
        return keyboardDb;
    }
}
