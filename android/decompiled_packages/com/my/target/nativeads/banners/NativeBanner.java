package com.my.target.nativeads.banners;

import android.text.TextUtils;
import com.my.target.b7;
import com.my.target.c;
import com.my.target.common.NavigationType;
import com.my.target.common.models.Disclaimer;
import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public class NativeBanner {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f4729a;
    public String b;
    public float c;
    public int d;
    public boolean e;
    public String f;
    public String g;
    public String h;
    public String i;
    public Disclaimer j;
    public String k;
    public String l;
    public String m;
    public String n;
    public ImageData o;
    public ImageData p;

    public static final class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final NativeBanner f4730a = new NativeBanner();

        public static Builder createBuilder() {
            return new Builder();
        }

        public NativeBanner build() {
            return this.f4730a;
        }

        public Builder setAdChoicesIcon(ImageData imageData) {
            this.f4730a.p = imageData;
            return this;
        }

        public Builder setAdvertisingLabel(String str) {
            this.f4730a.m = str;
            return this;
        }

        public Builder setAgeRestrictions(String str) {
            this.f4730a.k = str;
            return this;
        }

        public Builder setBundleId(String str) {
            this.f4730a.n = str;
            return this;
        }

        public Builder setCtaText(String str) {
            this.f4730a.g = str;
            return this;
        }

        public Builder setDescription(String str) {
            this.f4730a.h = str;
            return this;
        }

        public Builder setDisclaimer(String str) {
            this.f4730a.i = str;
            return this;
        }

        public Builder setDisclaimerInfo(Disclaimer disclaimer) {
            this.f4730a.j = disclaimer;
            return this;
        }

        public Builder setDomain(String str) {
            this.f4730a.l = str;
            return this;
        }

        public Builder setHasAdChoices(boolean z) {
            this.f4730a.e = z;
            return this;
        }

        public Builder setIcon(ImageData imageData) {
            this.f4730a.o = imageData;
            return this;
        }

        public Builder setNavigationType(String str) {
            if (!NavigationType.WEB.equals(str) && !NavigationType.STORE.equals(str)) {
                return this;
            }
            this.f4730a.f4729a = str;
            return this;
        }

        public Builder setRating(float f) {
            this.f4730a.c = f;
            return this;
        }

        public Builder setStoreType(String str) {
            this.f4730a.b = str;
            return this;
        }

        public Builder setTitle(String str) {
            this.f4730a.f = str;
            return this;
        }

        public Builder setVotes(int i) {
            this.f4730a.d = i;
            return this;
        }
    }

    public NativeBanner(b7 b7Var) {
        this.f4729a = NavigationType.WEB;
        this.f4729a = b7Var.t();
        this.b = b7Var.y();
        this.c = b7Var.w();
        this.d = b7Var.F();
        String strA = b7Var.A();
        this.f = TextUtils.isEmpty(strA) ? null : strA;
        String strI = b7Var.i();
        this.g = TextUtils.isEmpty(strI) ? null : strI;
        String strK = b7Var.k();
        this.h = TextUtils.isEmpty(strK) ? null : strK;
        String strL = b7Var.l();
        this.i = !TextUtils.isEmpty(strL) ? strL : null;
        this.j = !TextUtils.isEmpty(strL) ? new Disclaimer(b7Var.m(), strL) : null;
        String strC = b7Var.c();
        this.k = TextUtils.isEmpty(strC) ? null : strC;
        String strN = b7Var.n();
        this.l = TextUtils.isEmpty(strN) ? null : strN;
        String strB = b7Var.b();
        this.m = TextUtils.isEmpty(strB) ? null : strB;
        this.o = b7Var.q();
        String strE = b7Var.e();
        this.n = TextUtils.isEmpty(strE) ? null : strE;
        c cVarA = b7Var.a();
        if (cVarA == null) {
            this.e = false;
            this.p = null;
        } else {
            this.e = true;
            this.p = cVarA.c();
        }
    }

    public static NativeBanner a(b7 b7Var) {
        return new NativeBanner(b7Var);
    }

    public ImageData getAdChoicesIcon() {
        return this.p;
    }

    public String getAdvertisingLabel() {
        return this.m;
    }

    public String getAgeRestrictions() {
        return this.k;
    }

    public String getBundleId() {
        return this.n;
    }

    public String getCtaText() {
        return this.g;
    }

    public String getDescription() {
        return this.h;
    }

    @Deprecated
    public String getDisclaimer() {
        return this.i;
    }

    public Disclaimer getDisclaimerInfo() {
        return this.j;
    }

    public String getDomain() {
        return this.l;
    }

    public ImageData getIcon() {
        return this.o;
    }

    public String getNavigationType() {
        return this.f4729a;
    }

    public float getRating() {
        return this.c;
    }

    public String getStoreType() {
        return this.b;
    }

    public String getTitle() {
        return this.f;
    }

    public int getVotes() {
        return this.d;
    }

    public boolean hasAdChoices() {
        return this.e;
    }

    public String toString() {
        return "NativeBanner{navigationType='" + this.f4729a + "', storeType='" + this.b + "', rating=" + this.c + ", votes=" + this.d + ", hasAdChoices=" + this.e + ", title='" + this.f + "', ctaText='" + this.g + "', description='" + this.h + "', disclaimer='" + this.i + "', disclaimerInfo=" + this.j + ", ageRestrictions='" + this.k + "', domain='" + this.l + "', advertisingLabel='" + this.m + "', bundleId='" + this.n + "', icon=" + this.o + ", adChoicesIcon=" + this.p + '}';
    }

    public NativeBanner(String str, String str2, String str3, String str4, String str5, ImageData imageData, float f, String str6, String str7, Disclaimer disclaimer, int i, String str8, String str9, boolean z, ImageData imageData2, String str10) {
        this.f = str;
        this.g = str2;
        this.h = str3;
        this.l = str4;
        this.m = str5;
        this.o = imageData;
        this.c = f;
        this.k = str6;
        this.i = str7;
        this.j = disclaimer;
        this.d = i;
        this.f4729a = str8;
        this.b = str9;
        this.e = z;
        this.p = imageData2;
        this.n = str10;
    }

    public NativeBanner() {
        this.f4729a = NavigationType.WEB;
    }
}
