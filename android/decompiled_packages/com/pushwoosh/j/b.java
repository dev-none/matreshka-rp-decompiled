package com.pushwoosh.j;

import com.pushwoosh.inapp.network.model.Resource;
import java.io.File;

/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.m.c f5220a;
    public final com.pushwoosh.m.a b;

    public b(com.pushwoosh.m.c cVar, com.pushwoosh.m.a aVar) {
        this.f5220a = cVar;
        this.b = aVar;
    }

    public final boolean a(Resource resource) {
        Resource resourceA = ((com.pushwoosh.m.b) this.f5220a).a(resource.getCode());
        if (resourceA != null && resourceA.getUpdated() == resource.getUpdated()) {
            File fileA = this.b.a(resource.getCode());
            File file = fileA == null ? null : new File(fileA, "index.html");
            if (file != null && file.exists()) {
                return true;
            }
            File fileA2 = this.b.a(resource.getCode());
            File file2 = fileA2 != null ? new File(fileA2, "native-config.json") : null;
            if (file2 != null && file2.exists()) {
                return true;
            }
        }
        return false;
    }
}
