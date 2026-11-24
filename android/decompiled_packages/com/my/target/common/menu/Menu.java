package com.my.target.common.menu;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public interface Menu {

    public interface Listener {
        void onActionClick(MenuAction menuAction);
    }

    void addAction(MenuAction menuAction);

    void dismiss();

    void present(Context context);

    void setListener(Listener listener);
}
