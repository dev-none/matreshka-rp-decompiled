package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.view.View;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.ImageData;
import java.lang.ref.WeakReference;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final c f4587a;
    public final f b;
    public final a3.b c;
    public final String d;
    public final View.OnClickListener e;
    public WeakReference f;

    public interface a {
        void a(Context context);
    }

    public d(c cVar, MenuFactory menuFactory, a3.b bVar) {
        this.f4587a = cVar;
        this.c = bVar;
        if (cVar == null) {
            this.b = null;
            this.e = null;
            this.d = null;
            return;
        }
        List listA = cVar.a();
        if (listA == null || listA.isEmpty()) {
            this.b = null;
        } else {
            this.b = f.a(listA, menuFactory == null ? new q1() : menuFactory);
        }
        this.d = cVar.b();
        this.e = new View.OnClickListener() { // from class: com.my.target.d$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(view);
            }
        };
    }

    public static d a(c cVar) {
        return a(cVar, null, null);
    }

    public static d a(c cVar, MenuFactory menuFactory, a3.b bVar) {
        return new d(cVar, menuFactory, bVar);
    }

    public final /* synthetic */ void a(View view) {
        a(view.getContext());
    }

    public void a(i iVar, a aVar) {
        if (this.f4587a == null) {
            a(iVar);
            return;
        }
        f fVar = this.b;
        if (fVar != null) {
            fVar.a(aVar);
        }
        this.f = new WeakReference(iVar);
        iVar.setVisibility(0);
        iVar.setOnClickListener(this.e);
        if (iVar.hasImage()) {
            return;
        }
        ImageData imageDataC = this.f4587a.c();
        Bitmap bitmap = imageDataC.getBitmap();
        if (bitmap != null) {
            iVar.setImageBitmap(bitmap);
        } else {
            a3.a(imageDataC, iVar, this.c);
        }
    }

    public void a() {
        f fVar = this.b;
        if (fVar != null) {
            fVar.a((a) null);
        }
        WeakReference weakReference = this.f;
        i iVar = weakReference != null ? (i) weakReference.get() : null;
        if (iVar == null) {
            return;
        }
        c cVar = this.f4587a;
        if (cVar != null) {
            a3.a(cVar.c(), iVar);
        }
        a(iVar);
        this.f.clear();
        this.f = null;
    }

    public void a(Context context) {
        f fVar = this.b;
        if (fVar == null) {
            String str = this.d;
            if (str != null) {
                y3.a(str, context);
                return;
            }
            return;
        }
        if (fVar.b()) {
            return;
        }
        this.b.a(context);
    }

    public void a(i iVar) {
        iVar.setImageBitmap(null);
        iVar.setImageDrawable(null);
        iVar.setVisibility(8);
        iVar.setOnClickListener(null);
    }
}
