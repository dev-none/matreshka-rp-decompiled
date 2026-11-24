package com.my.target;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class u5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f4831a = new HashMap();

    public interface a {
        void a();

        void a(Object obj);
    }

    public void a(String str, Object obj) {
        synchronized (this.f4831a) {
            List list = (List) this.f4831a.get(str);
            if (list == null) {
                return;
            }
            if (obj == null) {
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    ((a) it.next()).a();
                }
            } else {
                Iterator it2 = list.iterator();
                while (it2.hasNext()) {
                    ((a) it2.next()).a(obj);
                }
            }
            this.f4831a.remove(str);
        }
    }

    public boolean a(String str, a aVar) {
        boolean z;
        synchronized (this.f4831a) {
            if (this.f4831a.containsKey(str)) {
                List list = (List) this.f4831a.get(str);
                if (list != null) {
                    list.add(aVar);
                }
                z = true;
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.add(aVar);
                this.f4831a.put(str, arrayList);
                z = false;
            }
        }
        return z;
    }
}
