package com.vk.id;

import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: VKIDFetchUserFail.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\b7\u0018\u00002\u00020\u0001B\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/VKIDFetchUserFail;", "", "description", "", "<init>", "(Ljava/lang/String;)V", "getDescription", "()Ljava/lang/String;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class VKIDFetchUserFail {
    public static final int $stable = 0;
    private final String description;

    public /* synthetic */ VKIDFetchUserFail(String str, DefaultConstructorMarker defaultConstructorMarker) {
        this(str);
    }

    private VKIDFetchUserFail(String str) {
        this.description = str;
    }

    public final String getDescription() {
        return this.description;
    }
}
