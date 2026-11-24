package com.my.target;

import com.my.target.common.models.ImageData;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ImageData f4560a;
    public final String b;
    public List c;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4561a;
        public final String b;
        public final String c;
        public final String d;
        public final String e;
        public final String f;
        public final boolean g;

        public a(String str, String str2, String str3, String str4, String str5, String str6, boolean z) {
            this.f4561a = str;
            this.b = str2;
            this.c = str3;
            this.d = str4;
            this.e = str5;
            this.f = str6;
            this.g = z;
        }

        public static a a(String str, String str2, String str3, String str4, String str5, String str6, boolean z) {
            return new a(str, str2, str3, str4, str5, str6, z);
        }
    }

    public c(ImageData imageData, String str) {
        this.f4560a = imageData;
        this.b = str;
    }

    public static c a(ImageData imageData, String str) {
        return new c(imageData, str);
    }

    public String b() {
        return this.b;
    }

    public ImageData c() {
        return this.f4560a;
    }

    public List a() {
        return this.c;
    }

    public void a(List list) {
        this.c = list;
    }
}
