package com.my.target.common.models;

import android.graphics.Bitmap;
import android.util.LruCache;
import com.my.target.gb;
import com.my.target.t5;
import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public final class ImageData extends t5 {
    public static volatile LruCache f = new a(31457280);
    public volatile boolean e;

    public static class a extends LruCache {
        public a(int i) {
            super(i);
        }

        @Override // android.util.LruCache
        public int sizeOf(String str, Bitmap bitmap) {
            return bitmap.getAllocationByteCount();
        }
    }

    public ImageData(String str) {
        super(str);
    }

    public static void clearCache() {
        f.evictAll();
    }

    public static ImageData newImageData(String str) {
        return new ImageData(str);
    }

    public static void setCacheSize(int i) {
        if (i < 5242880) {
            gb.a("ImageData: Setting cache size ignored - size should be >= 5242880");
        } else {
            f.resize(i);
        }
    }

    @Override // com.my.target.t5
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && ImageData.class == obj.getClass() && super.equals(obj) && this.e == ((ImageData) obj).e;
    }

    public Bitmap getBitmap() {
        return getData();
    }

    public Bitmap getData() {
        return this.e ? (Bitmap) f.get(this.f4824a) : (Bitmap) super.a();
    }

    @Override // com.my.target.t5
    public int hashCode() {
        return Objects.hash(Integer.valueOf(super.hashCode()), Boolean.valueOf(this.e));
    }

    public boolean isUseCache() {
        return this.e;
    }

    public void setBitmap(Bitmap bitmap) {
        setData(bitmap);
    }

    public void setData(Bitmap bitmap) {
        if (!this.e) {
            super.a(bitmap);
        } else if (bitmap == null) {
            f.remove(this.f4824a);
        } else {
            f.put(this.f4824a, bitmap);
        }
    }

    public String toString() {
        return "ImageData{url='" + this.f4824a + "', width=" + this.b + ", height=" + this.c + ", bitmap=" + getData() + '}';
    }

    public void useCache(boolean z) {
        if (z == this.e) {
            return;
        }
        this.e = z;
        if (!z) {
            super.a((Bitmap) f.remove(this.f4824a));
            return;
        }
        Bitmap bitmap = (Bitmap) super.a();
        if (bitmap != null) {
            super.a(null);
            f.put(this.f4824a, bitmap);
        }
    }

    public ImageData(String str, int i, int i2) {
        super(str);
        this.b = i;
        this.c = i2;
    }

    public static ImageData newImageData(String str, int i, int i2) {
        return new ImageData(str, i, i2);
    }
}
