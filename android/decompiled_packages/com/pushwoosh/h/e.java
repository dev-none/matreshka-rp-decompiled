package com.pushwoosh.h;

import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.m.a f5090a;
    public final com.pushwoosh.e.a b;

    public e(com.pushwoosh.m.a aVar) {
        this.f5090a = aVar;
        this.b = new com.pushwoosh.e.a(aVar);
    }

    public final com.pushwoosh.i.a a(Resource resource) throws IOException {
        String str = "https://appassets.androidplatform.net/pushwoosh_richmedia/" + resource.getCode() + "/";
        String code = resource.getCode();
        Map<String, String> tags = resource.getTags();
        File fileA = this.f5090a.a(code);
        String strB = com.pushwoosh.e0.e.b(fileA == null ? null : new File(fileA, "index.html"));
        try {
            HashMap mapA = this.b.a(code);
            strB = d.a(d.a(d.a(d.a(d.a(strB, d.f5089a, mapA), d.b, tags), d.c, mapA), d.d, tags), d.e, tags);
        } catch (Exception e) {
            PWLog.warn("[InApp]ResourceMapper", "Failed to process html", e);
        }
        return new com.pushwoosh.i.a(resource.getCode(), str, strB);
    }
}
