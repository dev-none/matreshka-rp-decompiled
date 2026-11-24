package com.matreshkarp.core.keyboard;

import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface CmdInfoDao {
    void clearCmds();

    void deleteCmd(CmdInfo info);

    void deleteCmdsBySection(int sectionId);

    List<CmdInfo> find(String cmd);

    List<CmdInfo> findBySubstr(String cmd, int limit);

    List<CmdInfo> findBySubstrInHistory(String cmd);

    List<CmdInfo> getCmds(int sectionId);

    List<CmdInfo> getCmdsSorted(int sectionId);

    void insertCmd(CmdInfo info);

    void insertCmdList(List<CmdInfo> info);
}
