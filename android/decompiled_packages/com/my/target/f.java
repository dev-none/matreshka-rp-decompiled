package com.my.target;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.text.TextUtils;
import com.my.target.common.menu.Menu;
import com.my.target.common.menu.MenuAction;
import com.my.target.common.menu.MenuActionType;
import com.my.target.common.menu.MenuFactory;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class f implements Menu.Listener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f4612a;
    public final MenuFactory b;
    public Map c;
    public Menu d;
    public d.a e;
    public WeakReference f;

    public f(List list, MenuFactory menuFactory) {
        this.f4612a = list;
        this.b = menuFactory;
    }

    public static f a(List list, MenuFactory menuFactory) {
        return new f(list, menuFactory);
    }

    public boolean b() {
        return this.d != null;
    }

    @Override // com.my.target.common.menu.Menu.Listener
    public void onActionClick(MenuAction menuAction) {
        d.a aVar;
        if (menuAction.style == 1) {
            a();
            return;
        }
        WeakReference weakReference = this.f;
        if (weakReference == null) {
            gb.a("AdChoicesOptionsController: there is no context, can't process action click");
            return;
        }
        Context context = (Context) weakReference.get();
        if (context == null) {
            gb.a("AdChoicesOptionsController: there is no context, can't process action click");
            return;
        }
        Map map = this.c;
        if (map == null) {
            gb.a("AdChoicesOptionsController: there are no associatedOptions, can't process action click");
            return;
        }
        c.a aVar2 = (c.a) map.get(menuAction);
        if (aVar2 == null) {
            gb.a("AdChoicesOptionsController: can't obtain option by menu action.");
            return;
        }
        String str = aVar2.c;
        if (!TextUtils.isEmpty(str)) {
            bb.c(str, context);
        }
        if (aVar2.b.equals(MenuActionType.COPY)) {
            String str2 = aVar2.e;
            if (str2 != null) {
                ((ClipboardManager) context.getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("copied id", str2));
            }
            a();
            return;
        }
        String str3 = aVar2.d;
        if (!TextUtils.isEmpty(str3)) {
            y3.a(str3, context);
        }
        if (aVar2.g && (aVar = this.e) != null) {
            aVar.a(context);
        }
        a();
    }

    public void a(Context context) {
        if (this.f4612a.size() == 0) {
            return;
        }
        Menu menuCreateMenu = this.b.createMenu();
        this.d = menuCreateMenu;
        this.f = new WeakReference(context);
        if (this.c == null) {
            this.c = new HashMap();
        }
        for (c.a aVar : this.f4612a) {
            MenuAction menuAction = new MenuAction(aVar.f4561a, 0, aVar.b, aVar.f);
            menuCreateMenu.addAction(menuAction);
            this.c.put(menuAction, aVar);
        }
        menuCreateMenu.addAction(new MenuAction("", 1, "cancel", null));
        menuCreateMenu.setListener(this);
        menuCreateMenu.present(context);
    }

    public void a(d.a aVar) {
        this.e = aVar;
    }

    public final void a() {
        Menu menu = this.d;
        if (menu == null) {
            return;
        }
        menu.dismiss();
        this.d = null;
        this.c = null;
    }
}
