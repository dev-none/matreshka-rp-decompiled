package com.pushwoosh.richmedia;

import com.pushwoosh.inapp.network.model.Resource;

/* JADX INFO: loaded from: classes6.dex */
public final class b {
    public static RichMedia a(Resource resource) {
        int i = 1;
        if (resource != null && !resource.isInApp()) {
            i = 2;
        }
        return new RichMedia(new com.pushwoosh.q.b(resource, "", false, i, 0L));
    }
}
