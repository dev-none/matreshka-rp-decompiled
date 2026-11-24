package com.my.target.nativeads;

import android.content.Context;
import com.my.target.b7;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.h6;
import com.my.target.i7;
import com.my.target.j6;
import com.my.target.l;
import com.my.target.m;
import com.my.target.o;
import com.my.target.o7;
import com.my.target.t;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class NativeAdLoader extends BaseAd {
    public final Context e;
    public final MenuFactory f;
    public OnLoad g;
    public l h;

    public interface OnLoad {
        void onLoad(List<NativeAd> list);
    }

    public NativeAdLoader(int i, int i2, Context context, MenuFactory menuFactory) {
        super(i, "nativeads");
        int iMax = Math.max(1, i2);
        if (iMax != i2) {
            gb.a("NativeAdLoader: Invalid bannersCount < 1, bannersCount set to " + iMax);
        }
        this.f4578a.a(iMax);
        this.f4578a.a(false);
        this.e = context.getApplicationContext();
        this.f = menuFactory;
        gb.c("Native ad loader created. Version - " + MyTargetVersion.VERSION);
    }

    public static NativeAdLoader newLoader(int i, int i2, Context context) {
        return new NativeAdLoader(i, i2, context, null);
    }

    public final /* synthetic */ void a(l lVar, o7 o7Var, m mVar) {
        if (lVar == this.h) {
            this.h = null;
            a(o7Var, mVar);
        }
    }

    public int getCachePolicy() {
        return this.f4578a.f();
    }

    public NativeAdLoader load() {
        o oVarA = o.a(this.d, this.f4578a.i(), 1, j6.f4671a);
        this.f4578a.a(oVarA);
        oVarA.b(0, 0);
        h6 h6VarA = this.b.a();
        final l lVarA = i7.a(new i7.a(), this.f4578a, this.b);
        this.h = lVarA;
        lVarA.a(new l.b() { // from class: com.my.target.nativeads.NativeAdLoader$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a(lVarA, (o7) tVar, mVar);
            }
        }).a(h6VarA, this.e);
        return this;
    }

    public void setCachePolicy(int i) {
        this.f4578a.b(i);
    }

    public NativeAdLoader setOnLoad(OnLoad onLoad) {
        this.g = onLoad;
        return this;
    }

    public static NativeAdLoader newLoader(int i, int i2, Context context, MenuFactory menuFactory) {
        return new NativeAdLoader(i, i2, context, menuFactory);
    }

    private void a(o7 o7Var, IAdLoadingError iAdLoadingError) {
        if (this.g == null) {
            return;
        }
        List<b7> listC = o7Var == null ? null : o7Var.c();
        if (listC != null && listC.size() >= 1) {
            ArrayList arrayList = new ArrayList();
            for (b7 b7Var : listC) {
                NativeAd nativeAd = new NativeAd(this.f4578a.i(), this.f, this.e);
                nativeAd.a(this.f4578a, b7Var);
                arrayList.add(nativeAd);
            }
            this.g.onLoad(arrayList);
            return;
        }
        this.g.onLoad(new ArrayList());
    }
}
