package com.pushwoosh.richmedia;

import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class RichMedia {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5309a;
    private final Source b;
    private final com.pushwoosh.q.b c;
    private final boolean d;
    private final boolean e;

    public enum Source {
        PushMessageSource,
        InAppSource
    }

    RichMedia(com.pushwoosh.q.b bVar) {
        this.c = bVar;
        Resource resource = bVar.f5303a;
        this.d = bVar.c;
        if (resource == null) {
            PWLog.error("RichMedia", "resource is empty");
            return;
        }
        this.e = resource.isRequired();
        this.d = bVar.c;
        int iA = com.pushwoosh.f.a.a(bVar.d);
        if (iA == 0) {
            this.f5309a = resource.getCode();
            this.b = Source.InAppSource;
        } else {
            if (iA != 1) {
                return;
            }
            this.f5309a = resource.getCode();
            this.b = Source.PushMessageSource;
        }
    }

    final com.pushwoosh.q.b a() {
        return this.c;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            RichMedia richMedia = (RichMedia) obj;
            if (this.f5309a.equals(richMedia.f5309a) && this.b == richMedia.b) {
                return true;
            }
        }
        return false;
    }

    public String getContent() {
        return this.f5309a;
    }

    public Source getSource() {
        return this.b;
    }

    public int hashCode() {
        return this.b.hashCode() + (this.f5309a.hashCode() * 31);
    }

    public boolean isLockScreen() {
        return this.d;
    }

    public boolean isRequired() {
        return this.e;
    }

    public String toString() {
        return "RichMedia{content='" + this.f5309a + "', resourceType=" + this.b + '}';
    }
}
