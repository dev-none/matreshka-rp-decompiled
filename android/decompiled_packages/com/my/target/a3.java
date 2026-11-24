package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Looper;
import android.widget.ImageView;
import com.my.target.common.models.ImageData;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.WeakHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes6.dex */
public final class a3 {
    public static final WeakHashMap e = new WeakHashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f4524a;
    public b b;
    public int c = 0;
    public String d;

    public class a implements u5.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ ImageData f4525a;
        public final /* synthetic */ String b;
        public final /* synthetic */ Context c;
        public final /* synthetic */ p5 d;
        public final /* synthetic */ AtomicInteger e;
        public final /* synthetic */ b f;

        public a(ImageData imageData, String str, Context context, p5 p5Var, AtomicInteger atomicInteger, b bVar) {
            this.f4525a = imageData;
            this.b = str;
            this.c = context;
            this.d = p5Var;
            this.e = atomicInteger;
            this.f = bVar;
        }

        public final void b() {
            if (this.e.decrementAndGet() == 0) {
                this.f.a(true);
            }
        }

        @Override // com.my.target.u5.a
        public void a(Bitmap bitmap) {
            this.f4525a.setData(bitmap);
            int width = bitmap.getWidth();
            int height = bitmap.getHeight();
            if (this.f4525a.getHeight() == 0 || this.f4525a.getWidth() == 0) {
                this.f4525a.setHeight(height);
                this.f4525a.setWidth(width);
            }
            int width2 = this.f4525a.getWidth();
            int height2 = this.f4525a.getHeight();
            if (width2 != width || height2 != height) {
                String str = String.format(Locale.getDefault(), "JSON image params (%d x %d) differ than loaded bitmap params (%d x %d)", Integer.valueOf(width2), Integer.valueOf(height2), Integer.valueOf(width), Integer.valueOf(height));
                gb.d(str);
                a3.this.a(str, this.b, this.c);
            }
            b();
        }

        @Override // com.my.target.u5.a
        public void a() {
            this.d.b.c(0, 4001, "imageUrl=" + this.b);
            b();
        }
    }

    public interface b {
        void a(boolean z);
    }

    public a3(List list) {
        this.f4524a = list;
    }

    public static a3 a(ImageData imageData) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(imageData);
        return a(arrayList);
    }

    public static a3 b(List list) {
        return new a3(list);
    }

    public static void b(ImageData imageData, ImageView imageView) {
        a(imageData, imageView, (b) null);
    }

    public void b(Context context) {
        if (this.f4524a.isEmpty()) {
            a();
        } else {
            a(new b() { // from class: com.my.target.a3$$ExternalSyntheticLambda3
                @Override // com.my.target.a3.b
                public final void a(boolean z) {
                    this.f$0.a(z);
                }
            }, context.getApplicationContext());
        }
    }

    public static a3 a(List list) {
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new p5((ImageData) it.next(), h0.e));
        }
        return b(arrayList);
    }

    public final /* synthetic */ void b() {
        b bVar = this.b;
        if (bVar != null) {
            bVar.a(true);
            this.b = null;
        }
    }

    public static void a(final ImageData imageData, ImageView imageView, final b bVar) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            gb.b("ImageLoaderUtils: Method loadAndDisplay called from worker thread");
            return;
        }
        WeakHashMap weakHashMap = e;
        if (weakHashMap.get(imageView) == imageData) {
            return;
        }
        weakHashMap.remove(imageView);
        if (imageData.getBitmap() != null) {
            a(imageData.getBitmap(), imageView);
            return;
        }
        weakHashMap.put(imageView, imageData);
        final WeakReference weakReference = new WeakReference(imageView);
        a(imageData).a(new b() { // from class: com.my.target.a3$$ExternalSyntheticLambda2
            @Override // com.my.target.a3.b
            public final void a(boolean z) {
                a3.a(weakReference, imageData, bVar, z);
            }
        }).b(imageView.getContext());
    }

    public static /* synthetic */ void a(WeakReference weakReference, ImageData imageData, b bVar, boolean z) {
        ImageView imageView = (ImageView) weakReference.get();
        if (imageView != null) {
            WeakHashMap weakHashMap = e;
            if (imageData == ((ImageData) weakHashMap.get(imageView))) {
                weakHashMap.remove(imageView);
                Bitmap bitmap = imageData.getBitmap();
                if (bitmap != null) {
                    a(bitmap, imageView);
                }
            }
        }
        if (bVar != null) {
            bVar.a(imageData.getBitmap() != null);
        }
    }

    public static void a(ImageData imageData, ImageView imageView) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            gb.b("ImageLoaderUtils: Method cancel called from worker thread");
            return;
        }
        WeakHashMap weakHashMap = e;
        if (weakHashMap.get(imageView) == imageData) {
            weakHashMap.remove(imageView);
        }
    }

    public static void a(Bitmap bitmap, ImageView imageView) {
        if (imageView instanceof ma) {
            ((ma) imageView).setImageBitmap(bitmap, true);
        } else {
            imageView.setImageBitmap(bitmap);
        }
    }

    public a3 a(b bVar) {
        this.b = bVar;
        return this;
    }

    public a3 a(int i, String str) {
        this.c = i;
        this.d = str;
        return this;
    }

    public final /* synthetic */ void a(boolean z) {
        a();
    }

    public void a(Context context) {
        if (f0.a()) {
            gb.b("ImageLoaderUtils: Method load called from main thread");
            return;
        }
        final CountDownLatch countDownLatch = new CountDownLatch(1);
        a(new b() { // from class: com.my.target.a3$$ExternalSyntheticLambda1
            @Override // com.my.target.a3.b
            public final void a(boolean z) {
                countDownLatch.countDown();
            }
        }, context);
        try {
            countDownLatch.await();
            gb.a("ImageLoaderUtils: success media loading");
        } catch (InterruptedException unused) {
            gb.a("ImageLoaderUtils: awaiting media files load failed");
        }
    }

    public void a(String str, String str2, Context context) {
        q5 q5VarC = q5.a("Bad value").f(str).a(Math.max(this.c, 0)).c(str2);
        String str3 = this.d;
        if (str3 == null) {
            str3 = null;
        }
        q5VarC.d(str3).b(context);
    }

    public void a() {
        if (this.b == null) {
            return;
        }
        f0.f(new Runnable() { // from class: com.my.target.a3$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final void a(b bVar, Context context) {
        AtomicInteger atomicInteger = new AtomicInteger(this.f4524a.size());
        int i = 0;
        for (p5 p5Var : this.f4524a) {
            ImageData imageData = (ImageData) p5Var.f4768a;
            if (imageData.getBitmap() != null) {
                atomicInteger.decrementAndGet();
                i++;
            } else {
                String url = imageData.getUrl();
                b bVar2 = bVar;
                z2.a().b(url, new a(imageData, url, context, p5Var, atomicInteger, bVar2), context);
                bVar = bVar2;
            }
        }
        b bVar3 = bVar;
        if (i == this.f4524a.size()) {
            bVar3.a(true);
        }
    }
}
