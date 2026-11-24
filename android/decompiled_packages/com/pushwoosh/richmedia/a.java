package com.pushwoosh.richmedia;

import android.text.TextUtils;
import androidx.media3.exoplayer.upstream.CmcdData;
import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.f.c;
import com.pushwoosh.f.d;
import com.pushwoosh.f.e;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5310a = CmcdData.OBJECT_TYPE_AUDIO_ONLY;
    public final com.pushwoosh.p.a b;
    public final b c;
    public volatile RichMediaPresentingDelegate d;
    public final RichMediaStyle e;

    public a(com.pushwoosh.p.a aVar, b bVar, RichMediaStyle richMediaStyle) {
        this.e = richMediaStyle;
        this.b = aVar;
        this.c = bVar;
        EventBus.subscribe(c.class, new EventListener() { // from class: com.pushwoosh.richmedia.a$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((c) event);
            }
        });
        EventBus.subscribe(e.class, new EventListener() { // from class: com.pushwoosh.richmedia.a$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((e) event);
            }
        });
        EventBus.subscribe(d.class, new EventListener() { // from class: com.pushwoosh.richmedia.a$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((d) event);
            }
        });
    }

    public final void a(com.pushwoosh.q.b bVar) {
        PWLog.noise(this.f5310a, "showResourceWrapper()");
        if (bVar == null) {
            PWLog.warn(this.f5310a, "resourceWrapper is null, aborting show");
            return;
        }
        if (bVar.f5303a == null) {
            PWLog.warn(this.f5310a, "resource is null, aborting show");
            return;
        }
        if (this.d == null) {
            this.b.a(bVar);
            return;
        }
        PWLog.info(this.f5310a, "using delegate to handle show process");
        try {
            RichMediaPresentingDelegate richMediaPresentingDelegate = this.d;
            this.c.getClass();
            if (richMediaPresentingDelegate.shouldPresent(new RichMedia(bVar))) {
                this.b.a(bVar);
            }
        } catch (Exception e) {
            PWLog.error(this.f5310a, "Error in delegate.shouldPresent()", e);
        }
    }

    public final void a(e eVar) {
        PWLog.noise(this.f5310a, "onPresentRichMedia()");
        if (this.d == null) {
            return;
        }
        Resource resource = eVar.f5072a;
        if (resource == null) {
            PWLog.warn(this.f5310a, "resource in event is null");
            return;
        }
        if (TextUtils.isEmpty(resource.getCode())) {
            PWLog.noise(this.f5310a, "code is empty, resource is not RichMedia, abort use delegate");
            return;
        }
        try {
            this.d.onPresent(b.a(resource));
        } catch (Exception e) {
            PWLog.error(this.f5310a, "Error in delegate.onPresent()", e);
        }
    }

    public final void a(d dVar) {
        PWLog.noise(this.f5310a, "onErrorRichMedia()");
        if (dVar == null) {
            return;
        }
        PushwooshException pushwooshException = dVar.b;
        if (pushwooshException != null) {
            PWLog.error(this.f5310a, "RichMedia error", pushwooshException);
        }
        if (this.d == null) {
            return;
        }
        Resource resource = dVar.f5071a;
        if (resource == null) {
            PWLog.warn(this.f5310a, "resource in event is null");
            return;
        }
        if (TextUtils.isEmpty(resource.getCode())) {
            PWLog.noise(this.f5310a, "code is empty, resource is not RichMedia, abort use delegate");
            return;
        }
        try {
            this.d.onError(b.a(resource), dVar.b);
        } catch (Exception e) {
            PWLog.error(this.f5310a, "Error in delegate.onError()", e);
        }
    }

    public final void a(c cVar) {
        PWLog.noise(this.f5310a, "onCloseRichMedia()");
        if (this.d == null) {
            return;
        }
        Resource resource = cVar.f5070a;
        if (resource == null) {
            PWLog.warn(this.f5310a, "resource in event is null");
            return;
        }
        if (TextUtils.isEmpty(resource.getCode())) {
            PWLog.noise(this.f5310a, "code is empty, resource is not RichMedia, abort use delegate");
            return;
        }
        try {
            this.d.onClose(b.a(resource));
        } catch (Exception e) {
            PWLog.error(this.f5310a, "Error in delegate.onClose()", e);
        }
    }
}
