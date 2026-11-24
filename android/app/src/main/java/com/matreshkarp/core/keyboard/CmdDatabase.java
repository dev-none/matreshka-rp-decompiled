package com.matreshkarp.core.keyboard;

import android.content.Context;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class CmdDatabase {
    public static ArrayList<BindInfo> GetBindList(Context context, int serverId) {
        return new ArrayList<>(KeyboardDb.getInstance(context, serverId).bindInfoDao().getBinds());
    }

    public static void ClearBinds(Context context, int serverId) {
        final KeyboardDb keyboardDb = KeyboardDb.getInstance(context, serverId);
        KeyboardDb.databaseExecutor.execute(new Runnable() { // from class: com.matreshkarp.core.keyboard.CmdDatabase.1
            @Override // java.lang.Runnable
            public void run() {
                keyboardDb.bindInfoDao().clearBinds();
            }
        });
    }
}
