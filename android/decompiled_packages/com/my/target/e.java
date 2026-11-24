package com.my.target;

import android.content.Context;
import com.my.target.common.menu.Menu;
import com.my.target.common.menu.MenuAction;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class e implements Menu {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f4599a = new ArrayList();
    public WeakReference b = null;
    public WeakReference c;

    @Override // com.my.target.common.menu.Menu
    public void addAction(MenuAction menuAction) {
        this.f4599a.add(menuAction);
    }

    @Override // com.my.target.common.menu.Menu
    public void dismiss() {
        WeakReference weakReference = this.c;
        if (weakReference == null) {
            gb.a("AdChoicesOptionMenu: can't dismiss not existing view");
            return;
        }
        g gVar = (g) weakReference.get();
        if (gVar == null) {
            gb.a("AdChoicesOptionMenu: can't dismiss not existing or garbage-collected view");
        } else {
            gVar.a();
        }
    }

    @Override // com.my.target.common.menu.Menu
    public void present(Context context) {
        if (this.f4599a.isEmpty()) {
            gb.a("AdChoicesOptionMenu: there are no actions, can't present.");
        } else {
            if (this.b == null) {
                gb.a("AdChoicesOptionMenu: there is no listener, can't present");
                return;
            }
            g gVar = new g(context, this.f4599a, this.b);
            this.c = new WeakReference(gVar);
            gVar.b();
        }
    }

    @Override // com.my.target.common.menu.Menu
    public void setListener(Menu.Listener listener) {
        this.b = new WeakReference(listener);
    }
}
