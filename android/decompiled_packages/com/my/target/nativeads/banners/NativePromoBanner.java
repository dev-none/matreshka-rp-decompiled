package com.my.target.nativeads.banners;

import android.text.TextUtils;
import com.my.target.b7;
import com.my.target.common.NavigationType;
import com.my.target.common.models.Disclaimer;
import com.my.target.common.models.ImageData;
import com.my.target.d7;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class NativePromoBanner extends NativeBanner {
    public final boolean q;
    public final ImageData r;
    public final ArrayList s;
    public String t;
    public String u;

    public static final class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f4731a;
        public float b;
        public int c;
        public boolean d;
        public String e = NavigationType.WEB;
        public String f;
        public ImageData g;
        public String h;
        public String i;
        public String j;
        public String k;
        public String l;
        public ImageData m;
        public String n;
        public String o;
        public Disclaimer p;
        public String q;
        public ImageData r;

        public static Builder createBuilder() {
            return new Builder();
        }

        public NativePromoBanner build() {
            return new NativePromoBanner(this.h, this.i, this.j, this.k, this.m, this.b, this.n, this.o, this.p, this.c, this.e, this.f, this.d, this.q, this.r, this.f4731a, this.g, this.l);
        }

        public Builder setAdChoicesIcon(ImageData imageData) {
            this.g = imageData;
            return this;
        }

        public Builder setAdvertisingLabel(String str) {
            this.k = str;
            return this;
        }

        public Builder setAgeRestrictions(String str) {
            this.n = str;
            return this;
        }

        public Builder setBundleId(String str) {
            this.l = str;
            return this;
        }

        public Builder setCtaText(String str) {
            this.i = str;
            return this;
        }

        public Builder setDescription(String str) {
            this.q = str;
            return this;
        }

        public Builder setDisclaimer(String str) {
            this.o = str;
            return this;
        }

        public Builder setDisclaimerInfo(Disclaimer disclaimer) {
            this.p = disclaimer;
            return this;
        }

        public Builder setDomain(String str) {
            this.j = str;
            return this;
        }

        public Builder setHasAdChoices(boolean z) {
            this.f4731a = z;
            return this;
        }

        public Builder setHasVideo(boolean z) {
            this.d = z;
            return this;
        }

        public Builder setIcon(ImageData imageData) {
            this.m = imageData;
            return this;
        }

        public Builder setImage(ImageData imageData) {
            this.r = imageData;
            return this;
        }

        public Builder setNavigationType(String str) {
            if (!NavigationType.WEB.equals(str) && !NavigationType.STORE.equals(str)) {
                return this;
            }
            this.e = str;
            return this;
        }

        public Builder setRating(float f) {
            this.b = f;
            return this;
        }

        public Builder setStoreType(String str) {
            this.f = str;
            return this;
        }

        public Builder setTitle(String str) {
            this.h = str;
            return this;
        }

        public Builder setVotes(int i) {
            this.c = i;
            return this;
        }
    }

    public NativePromoBanner(String str, String str2, String str3, String str4, ImageData imageData, float f, String str5, String str6, Disclaimer disclaimer, int i, String str7, String str8, boolean z, String str9, ImageData imageData2, boolean z2, ImageData imageData3, String str10) {
        super(str, str2, str9, str3, str4, imageData, f, str5, str6, disclaimer, i, str7, str8, z2, imageData3, str10);
        this.s = new ArrayList();
        this.q = z;
        this.r = imageData2;
    }

    public static NativePromoBanner b(b7 b7Var) {
        return new NativePromoBanner(b7Var);
    }

    public final void c(b7 b7Var) {
        if (this.q) {
            return;
        }
        List listO = b7Var.O();
        if (listO.isEmpty()) {
            return;
        }
        Iterator it = listO.iterator();
        while (it.hasNext()) {
            this.s.add(NativePromoCard.a((d7) it.next()));
        }
    }

    public ArrayList<NativePromoCard> getCards() {
        return this.s;
    }

    public String getCategory() {
        return this.t;
    }

    public ImageData getImage() {
        return this.r;
    }

    public String getSubCategory() {
        return this.u;
    }

    public boolean hasVideo() {
        return this.q;
    }

    @Override // com.my.target.nativeads.banners.NativeBanner
    public String toString() {
        return "NativePromoBanner{hasVideo=" + this.q + ", image=" + this.r + ", nativePromoCards=" + this.s + ", category='" + this.t + "', subCategory='" + this.u + "', navigationType='" + this.f4729a + "', storeType='" + this.b + "', rating=" + this.c + ", votes=" + this.d + ", hasAdChoices=" + this.e + ", title='" + this.f + "', ctaText='" + this.g + "', description='" + this.h + "', disclaimer='" + this.i + "', disclaimerInfo='" + this.j + "', ageRestrictions='" + this.k + "', domain='" + this.l + "', advertisingLabel='" + this.m + "', bundleId='" + this.n + "', icon=" + this.o + ", adChoicesIcon=" + this.p + '}';
    }

    public NativePromoBanner(b7 b7Var) {
        super(b7Var);
        this.s = new ArrayList();
        this.q = b7Var.P() != null;
        String strF = b7Var.f();
        this.t = TextUtils.isEmpty(strF) ? null : strF;
        String strZ = b7Var.z();
        this.u = TextUtils.isEmpty(strZ) ? null : strZ;
        this.r = b7Var.s();
        c(b7Var);
    }
}
