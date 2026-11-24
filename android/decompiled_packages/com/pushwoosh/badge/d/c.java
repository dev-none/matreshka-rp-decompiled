package com.pushwoosh.badge.d;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ResolveInfo;
import android.os.Build;
import android.util.Log;
import com.pushwoosh.badge.e.d;
import com.pushwoosh.badge.e.e;
import com.pushwoosh.badge.e.f;
import com.pushwoosh.badge.e.g;
import com.pushwoosh.badge.e.h;
import com.pushwoosh.badge.e.i;
import com.pushwoosh.badge.e.j;
import com.pushwoosh.badge.e.k;
import com.pushwoosh.badge.e.l;
import com.pushwoosh.badge.e.m;
import com.pushwoosh.badge.e.n;
import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final LinkedList f5047a;
    public static a b;
    public static ComponentName c;

    static {
        LinkedList linkedList = new LinkedList();
        f5047a = linkedList;
        linkedList.add(com.pushwoosh.badge.e.a.class);
        linkedList.add(com.pushwoosh.badge.e.b.class);
        linkedList.add(g.class);
        linkedList.add(h.class);
        linkedList.add(k.class);
        linkedList.add(com.pushwoosh.badge.e.c.class);
        linkedList.add(f.class);
        linkedList.add(i.class);
        linkedList.add(j.class);
        linkedList.add(n.class);
        linkedList.add(l.class);
        linkedList.add(m.class);
        linkedList.add(e.class);
    }

    public static void a(Context context, int i) throws b {
        ActivityInfo activityInfo;
        String str;
        a aVar;
        if (b == null) {
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(context.getPackageName());
            if (launchIntentForPackage != null) {
                c = launchIntentForPackage.getComponent();
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addCategory("android.intent.category.HOME");
                ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 65536);
                if (resolveInfoResolveActivity != null && (activityInfo = resolveInfoResolveActivity.activityInfo) != null && (str = activityInfo.name) != null && !str.toLowerCase().contains("resolver")) {
                    String str2 = resolveInfoResolveActivity.activityInfo.packageName;
                    Iterator it = f5047a.iterator();
                    while (it.hasNext()) {
                        try {
                            aVar = (a) ((Class) it.next()).newInstance();
                        } catch (Exception unused) {
                            aVar = null;
                        }
                        if (aVar != null && aVar.a().contains(str2)) {
                            b = aVar;
                            break;
                        }
                    }
                    if (b == null) {
                        String str3 = Build.MANUFACTURER;
                        if (str3.equalsIgnoreCase("ZUK")) {
                            b = new n();
                        } else if (str3.equalsIgnoreCase("OPPO")) {
                            b = new i();
                        } else if (str3.equalsIgnoreCase("VIVO")) {
                            b = new l();
                        } else if (str3.equalsIgnoreCase("ZTE")) {
                            b = new m();
                        } else {
                            b = new d();
                        }
                    }
                }
            } else {
                Log.e("ShortcutBadger", "Unable to find launch intent for package " + context.getPackageName());
            }
            throw new b("No default launcher available");
        }
        try {
            b.a(context, c, i);
        } catch (Exception e) {
            throw new b(e);
        }
    }
}
