package com.pushwoosh.richmedia;

import com.pushwoosh.exception.PushwooshException;

/* JADX INFO: loaded from: classes6.dex */
public interface RichMediaPresentingDelegate {
    void onClose(RichMedia richMedia);

    void onError(RichMedia richMedia, PushwooshException pushwooshException);

    void onPresent(RichMedia richMedia);

    boolean shouldPresent(RichMedia richMedia);
}
