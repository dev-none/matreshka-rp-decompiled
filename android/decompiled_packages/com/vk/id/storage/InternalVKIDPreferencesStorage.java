package com.vk.id.storage;

import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;

/* JADX INFO: compiled from: InternalVKIDEncryptedSharedPreferencesStorage.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\bg\u0018\u00002\u00020\u0001J\u001a\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005H&J\u0012\u0010\u0007\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\b"}, d2 = {"Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "", "set", "", "key", "", "value", "getString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface InternalVKIDPreferencesStorage {
    String getString(String key);

    void set(String key, String value);
}
