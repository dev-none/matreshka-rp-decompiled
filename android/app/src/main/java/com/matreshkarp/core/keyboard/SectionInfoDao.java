package com.matreshkarp.core.keyboard;

import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface SectionInfoDao {
    void clearSections();

    void deleteSection(SectionInfo sectionInfo);

    void deleteSectionById(int sectionId);

    SectionInfo getSection(int sectionId);

    List<SectionInfo> getSections();

    void insertSection(SectionInfo sectionInfo);
}
