package com.my.target;

import com.my.target.common.models.ImageData;
import com.my.target.common.models.ShareButtonData;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public abstract class k0 extends b {
    public String P;
    public ImageData Q;
    public o1 U;
    public u8 V;
    public final ArrayList L = new ArrayList();
    public final ArrayList M = new ArrayList();
    public fa N = null;
    public da O = null;
    public String R = "Close";
    public String S = "Replay";
    public String T = "Ad can be skipped after %ds";
    public boolean W = false;
    public boolean X = true;
    public boolean Y = true;
    public boolean Z = true;
    public boolean a0 = true;
    public boolean b0 = true;
    public boolean c0 = false;
    public boolean d0 = false;
    public boolean e0 = false;
    public boolean f0 = true;
    public float g0 = 0.0f;
    public float h0 = -1.0f;
    public float i0 = -1.0f;
    public int j0 = 0;

    public String L() {
        return this.P;
    }

    public float M() {
        return this.g0;
    }

    public String N() {
        return this.R;
    }

    public String O() {
        return this.T;
    }

    public ArrayList P() {
        return new ArrayList(this.L);
    }

    public o1 Q() {
        return this.U;
    }

    public int R() {
        return this.j0;
    }

    public float S() {
        return this.h0;
    }

    public float T() {
        return this.i0;
    }

    public u8 U() {
        return this.V;
    }

    public ImageData V() {
        return this.Q;
    }

    public String W() {
        return this.S;
    }

    public ArrayList X() {
        return new ArrayList(this.M);
    }

    public da Y() {
        return this.O;
    }

    public fa Z() {
        return this.N;
    }

    public void a(k1 k1Var) {
        this.L.add(k1Var);
    }

    public boolean a0() {
        return this.b0;
    }

    public boolean b0() {
        return this.f0;
    }

    public void c(ImageData imageData) {
        this.Q = imageData;
    }

    public boolean c0() {
        return this.Z;
    }

    public void d(float f) {
        this.h0 = f;
    }

    public boolean d0() {
        return this.c0;
    }

    public void e(boolean z) {
        this.b0 = z;
    }

    public boolean e0() {
        return this.d0;
    }

    public void f(boolean z) {
        this.f0 = z;
    }

    public boolean f0() {
        return this.e0;
    }

    public void g(boolean z) {
        this.Z = z;
    }

    public boolean g0() {
        return this.W;
    }

    public void h(boolean z) {
        this.c0 = z;
    }

    public boolean h0() {
        return this.X;
    }

    public void i(boolean z) {
        this.d0 = z;
    }

    public boolean i0() {
        return this.Y;
    }

    public void j(boolean z) {
        this.e0 = z;
    }

    public boolean j0() {
        return this.a0;
    }

    public void k(boolean z) {
        this.W = z;
    }

    public void l(boolean z) {
        this.X = z;
    }

    public void m(boolean z) {
        this.Y = z;
    }

    public void n(boolean z) {
        this.a0 = z;
    }

    public void t(String str) {
        this.P = str;
    }

    public void u(String str) {
        this.R = str;
    }

    public void v(String str) {
        this.T = str;
    }

    public void w(String str) {
        this.S = str;
    }

    public void a(fa faVar) {
        this.N = faVar;
    }

    public void c(float f) {
        this.g0 = f;
    }

    public void e(float f) {
        this.i0 = f;
    }

    @Override // com.my.target.b
    public String h() {
        o1 o1VarQ = Q();
        return o1VarQ != null ? o1VarQ.f() : super.h();
    }

    public void a(da daVar) {
        this.O = daVar;
    }

    public void e(int i) {
        this.j0 = i;
    }

    public void a(ShareButtonData shareButtonData) {
        this.M.add(shareButtonData);
    }

    public void a(o1 o1Var) {
        this.U = o1Var;
    }

    public void a(u8 u8Var) {
        this.V = u8Var;
    }
}
