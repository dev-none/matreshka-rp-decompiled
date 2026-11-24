package com.pushwoosh.internal.registrar;

import com.pushwoosh.tags.TagsBundle;

/* JADX INFO: loaded from: classes6.dex */
public interface PushRegistrar {
    void checkDevice(String str) throws Exception;

    void init();

    void registerPW(TagsBundle tagsBundle);

    void unregisterPW();
}
