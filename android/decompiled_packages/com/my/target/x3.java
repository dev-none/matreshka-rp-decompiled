package com.my.target;

import android.content.Context;
import com.my.target.instreamads.InstreamAd;
import com.my.target.instreamads.InstreamAdVideoMotionPlayer;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public final class x3 implements InstreamAdVideoMotionPlayer.VideoMotionPlayerListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final e1 f4859a;
    public InstreamAdVideoMotionPlayer b;
    public a c;
    public tb d;
    public Set e;

    public interface a {
        void a(tb tbVar);

        void b(tb tbVar);
    }

    public x3(e1 e1Var) {
        this.f4859a = e1Var;
    }

    public static x3 a(e1 e1Var) {
        return new x3(e1Var);
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onBannerComplete(Context context) {
        a aVar;
        tb tbVar = this.d;
        if (tbVar == null || (aVar = this.c) == null) {
            return;
        }
        bb.b(tbVar.x(), "playbackCompleted", 1, context);
        aVar.a(tbVar);
        this.d = null;
        this.e = null;
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onBannerShow(Context context) {
        a aVar;
        tb tbVar = this.d;
        if (tbVar == null || (aVar = this.c) == null) {
            return;
        }
        za zaVarX = tbVar.x();
        bb.b(zaVarX, "playbackStarted", 1, context);
        String strD = kb.d(context);
        if (strD != null) {
            bb.a(zaVarX, strD, 1, context);
        }
        aVar.b(tbVar);
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onCloseByUser(Context context) {
        a aVar;
        tb tbVar = this.d;
        if (tbVar == null || (aVar = this.c) == null) {
            return;
        }
        bb.b(tbVar.x(), "closedByUser", 1, context);
        aVar.a(tbVar);
        this.d = null;
        this.e = null;
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onError(String str, Context context) {
        tb tbVar = this.d;
        if (tbVar == null) {
            return;
        }
        bb.b(tbVar.x(), "playbackError", 1, context);
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onHeaderClick(Context context) {
        c4 c4VarK0;
        tb tbVar = this.d;
        if (tbVar == null || (c4VarK0 = tbVar.k0()) == null) {
            return;
        }
        a4 a4Var = c4VarK0.f4571a;
        bb.b(a4Var.f, "click", 2, context);
        this.f4859a.a(tbVar, a4Var.h, a4Var.i, a4Var.g, context);
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onItemClick(String str, Context context) {
        c4 c4VarK0;
        d4 d4Var;
        tb tbVar = this.d;
        if (tbVar == null || (c4VarK0 = tbVar.k0()) == null) {
            return;
        }
        Iterator it = c4VarK0.b.iterator();
        do {
            if (!it.hasNext()) {
                d4Var = null;
                break;
            }
            d4Var = (d4) it.next();
        } while (!d4Var.f4590a.equals(str));
        if (d4Var == null) {
            return;
        }
        bb.b(d4Var.f, "click", 2, context);
        d4 d4Var2 = d4Var;
        this.f4859a.a(tbVar, d4Var2.j, d4Var2.k, d4Var2.i, context);
    }

    @Override // com.my.target.instreamads.InstreamAdVideoMotionPlayer.VideoMotionPlayerListener
    public void onItemShow(String str, Context context) {
        tb tbVar;
        c4 c4VarK0;
        d4 d4Var;
        Set set = this.e;
        if (set == null || set.contains(str) || (tbVar = this.d) == null || (c4VarK0 = tbVar.k0()) == null) {
            return;
        }
        Iterator it = c4VarK0.b.iterator();
        do {
            if (!it.hasNext()) {
                d4Var = null;
                break;
            }
            d4Var = (d4) it.next();
        } while (!d4Var.f4590a.equals(str));
        if (d4Var == null) {
            return;
        }
        this.e.add(str);
        bb.b(d4Var.f, "show", 1, context);
    }

    public void a(tb tbVar, InstreamAd.InstreamAdVideoMotionBanner instreamAdVideoMotionBanner) {
        this.d = tbVar;
        this.e = new HashSet();
        InstreamAdVideoMotionPlayer instreamAdVideoMotionPlayer = this.b;
        if (instreamAdVideoMotionPlayer != null) {
            instreamAdVideoMotionPlayer.playVideoMotionBanner(instreamAdVideoMotionBanner);
            return;
        }
        gb.a("InstreamVideoMotionController: can't start videoMotionBanner. VideoMotionPlayer is null");
        a aVar = this.c;
        if (aVar == null) {
            return;
        }
        aVar.a(tbVar);
    }

    public void a(a aVar) {
        this.c = aVar;
    }

    public void a(InstreamAdVideoMotionPlayer instreamAdVideoMotionPlayer) {
        this.b = instreamAdVideoMotionPlayer;
        instreamAdVideoMotionPlayer.setVideoMotionPlayerListener(this);
    }
}
