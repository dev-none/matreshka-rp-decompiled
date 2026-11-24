package com.matreshkarp.core.keyboard;

import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface BindInfoDao {
    void clearBinds();

    void deleteBind(int id);

    int findFreeId();

    List<BindInfo> getBinds();

    void insertBind(BindInfo info);

    void insertBindList(List<BindInfo> info);
}
