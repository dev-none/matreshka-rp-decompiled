package com.my.target;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public final class za {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final h0 f4890a;
    public final Set b = new HashSet();
    public final Set c = new HashSet();
    public final Set d = new HashSet();
    public final Set e = new HashSet();
    public final List f = new ArrayList();
    public final List g = new ArrayList();
    public final Comparator h = new Comparator() { // from class: com.my.target.za$$ExternalSyntheticLambda0
        @Override // java.util.Comparator
        public final int compare(Object obj, Object obj2) {
            return e2.a(((o8) obj2).f(), ((o8) obj).f());
        }
    };

    public za(h0 h0Var) {
        this.f4890a = h0Var;
    }

    public static za a(h0 h0Var) {
        return new za(h0Var);
    }

    public ab b(int i) {
        ArrayList arrayList = new ArrayList();
        for (o8 o8Var : this.f) {
            if (o8Var.d() == i) {
                arrayList.add(o8Var);
            }
        }
        return ab.a(arrayList, this.f4890a);
    }

    public ArrayList c(String str) {
        ArrayList arrayList = new ArrayList();
        for (ya yaVar : this.b) {
            if (str.equals(yaVar.a())) {
                arrayList.add(yaVar);
            }
        }
        return arrayList;
    }

    public boolean d(String str) {
        Iterator it = this.b.iterator();
        while (it.hasNext()) {
            if (str.equals(((ya) it.next()).a())) {
                return true;
            }
        }
        return false;
    }

    public h0 a() {
        return this.f4890a;
    }

    public void a(ya yaVar) {
        if (yaVar instanceof n8) {
            String strD = ((n8) yaVar).d();
            if ("landscape".equals(strD)) {
                this.e.add(yaVar);
                return;
            } else {
                if ("portrait".equals(strD)) {
                    this.d.add(yaVar);
                    return;
                }
                return;
            }
        }
        if (yaVar instanceof w8) {
            this.c.add((w8) yaVar);
            return;
        }
        if (yaVar instanceof o8) {
            o8 o8Var = (o8) yaVar;
            int iBinarySearch = Collections.binarySearch(this.f, o8Var, this.h);
            if (iBinarySearch < 0) {
                iBinarySearch = (-iBinarySearch) - 1;
            }
            this.f.add(iBinarySearch, o8Var);
            return;
        }
        if (yaVar instanceof t6) {
            this.g.add((t6) yaVar);
        } else {
            this.b.add(yaVar);
        }
    }

    public boolean c() {
        return (this.b.isEmpty() && this.c.isEmpty() && this.f.isEmpty() && this.g.isEmpty() && this.e.isEmpty() && this.d.isEmpty()) ? false : true;
    }

    public ab b() {
        return ab.a(new ArrayList(this.c), this.f4890a);
    }

    public ab b(String str) {
        ArrayList arrayList = new ArrayList();
        for (ya yaVar : this.b) {
            if (str.equals(yaVar.a())) {
                arrayList.add(yaVar);
            }
        }
        return ab.a(arrayList, this.f4890a);
    }

    public void b(List list) {
        list.addAll(this.c);
        Collections.sort(list, new Comparator() { // from class: com.my.target.za$$ExternalSyntheticLambda2
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return za.a((w8) obj, (w8) obj2);
            }
        });
    }

    public static /* synthetic */ int b(w8 w8Var, w8 w8Var2) {
        return (int) (w8Var2.e() - w8Var.e());
    }

    public void b(za zaVar, float f) {
        this.b.addAll(zaVar.c("playbackStarted"));
        this.b.addAll(zaVar.c("playbackResumed"));
        this.b.addAll(zaVar.c("playbackPaused"));
        this.b.addAll(zaVar.c("playbackStopped"));
        this.b.addAll(zaVar.c("playbackCompleted"));
        this.b.addAll(zaVar.c("playbackError"));
        this.b.addAll(zaVar.c("volumeOn"));
        this.b.addAll(zaVar.c("volumeOff"));
        this.b.addAll(zaVar.c("fullscreenOn"));
        this.b.addAll(zaVar.c("fullscreenOff"));
        this.b.addAll(zaVar.c("error"));
        this.b.addAll(zaVar.c("playbackTimeout"));
        this.g.addAll(zaVar.a(2).f4536a);
        if (f <= 0.0f) {
            this.c.addAll(zaVar.c);
            this.f.addAll(zaVar.b(2).f4536a);
            return;
        }
        for (w8 w8Var : zaVar.c) {
            float fD = w8Var.d();
            if (fD >= 0.0f) {
                w8Var.b((fD * f) / 100.0f);
                w8Var.a(-1.0f);
            }
            a(w8Var);
        }
        for (o8 o8Var : zaVar.b(2).f4536a) {
            float fE = o8Var.e();
            if (fE >= 0.0f) {
                o8Var.b((fE * f) / 100.0f);
                o8Var.a(-1.0f);
            }
            a(o8Var);
        }
    }

    public ab a(int i) {
        ArrayList arrayList = new ArrayList();
        for (t6 t6Var : this.g) {
            if (t6Var.d() == i) {
                arrayList.add(t6Var);
            }
        }
        return ab.a(arrayList, this.f4890a);
    }

    public List a(String str) {
        return new ArrayList(str.equals("portrait") ? this.d : this.e);
    }

    public static /* synthetic */ int a(w8 w8Var, w8 w8Var2) {
        return (int) (w8Var2.e() - w8Var.e());
    }

    public void a(ab abVar) {
        abVar.f4536a.addAll(this.c);
        Collections.sort(abVar.f4536a, new Comparator() { // from class: com.my.target.za$$ExternalSyntheticLambda1
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return za.b((w8) obj, (w8) obj2);
            }
        });
    }

    public void a(za zaVar, float f) {
        this.b.addAll(zaVar.b);
        this.g.addAll(zaVar.g);
        this.d.addAll(zaVar.d);
        this.e.addAll(zaVar.e);
        if (f <= 0.0f) {
            this.c.addAll(zaVar.c);
            this.f.addAll(zaVar.f);
            return;
        }
        for (w8 w8Var : zaVar.c) {
            float fD = w8Var.d();
            if (fD >= 0.0f) {
                w8Var.b((fD * f) / 100.0f);
                w8Var.a(-1.0f);
            }
            a(w8Var);
        }
        for (o8 o8Var : zaVar.f) {
            float fE = o8Var.e();
            if (fE >= 0.0f) {
                o8Var.b((fE * f) / 100.0f);
                o8Var.a(-1.0f);
            }
            a(o8Var);
        }
    }

    public void a(List list) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            a((ya) it.next());
        }
    }

    public void a(ArrayList arrayList) {
        this.c.addAll(arrayList);
    }

    public boolean a(i0 i0Var) {
        Iterator it = this.b.iterator();
        boolean z = false;
        boolean z2 = false;
        while (it.hasNext()) {
            String strA = ((ya) it.next()).a();
            if ("show".equals(strA) || "playbackStarted".equals(strA)) {
                z = true;
            }
            if ("click".equals(strA)) {
                z2 = true;
            }
        }
        if (!z) {
            i0Var.b(3008, "show or playbackStarted stat is not found");
        }
        if (!z2) {
            i0Var.b(3008, "click stat is not found");
        }
        return z && z2;
    }
}
