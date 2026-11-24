package com.my.tracker.personalize;

/* JADX INFO: loaded from: classes6.dex */
public final class PersonalizeResponse<T> {
    public final String error;
    public final String rawData;
    public final T result;

    /* JADX WARN: Multi-variable type inference failed */
    PersonalizeResponse(Object obj, String str, String str2) {
        this.result = obj;
        this.error = str;
        this.rawData = str2;
    }
}
