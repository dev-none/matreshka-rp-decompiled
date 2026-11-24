package com.my.target.nativeads.banners;

import android.text.TextUtils;
import com.my.target.common.models.ImageData;
import com.my.target.d7;

/* JADX INFO: loaded from: classes6.dex */
public class NativePromoCard {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4732a;
    public final String b;
    public final String c;
    public final ImageData d;
    public final String e;
    public final String f;
    public final String g;
    public final String h;

    public NativePromoCard(d7 d7Var) {
        if (TextUtils.isEmpty(d7Var.A())) {
            this.f4732a = null;
        } else {
            this.f4732a = d7Var.A();
        }
        if (TextUtils.isEmpty(d7Var.k())) {
            this.b = null;
        } else {
            this.b = d7Var.k();
        }
        if (TextUtils.isEmpty(d7Var.i())) {
            this.c = null;
        } else {
            this.c = d7Var.i();
        }
        this.e = d7Var.M();
        this.f = d7Var.O();
        this.g = d7Var.N();
        this.h = d7Var.L();
        this.d = d7Var.s();
    }

    public static NativePromoCard a(d7 d7Var) {
        return new NativePromoCard(d7Var);
    }

    public String getCtaText() {
        return this.c;
    }

    public String getCurrency() {
        return this.h;
    }

    public String getDescription() {
        return this.b;
    }

    public String getDiscount() {
        return this.e;
    }

    public ImageData getImage() {
        return this.d;
    }

    public String getOldPrice() {
        return this.g;
    }

    public String getPrice() {
        return this.f;
    }

    public String getTitle() {
        return this.f4732a;
    }
}
