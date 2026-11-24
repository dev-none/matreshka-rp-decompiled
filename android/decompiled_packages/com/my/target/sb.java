package com.my.target;

import android.content.Context;
import com.my.target.common.models.VideoData;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes6.dex */
public final class sb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f4818a;

    public class a implements u5.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ VideoData f4819a;
        public final /* synthetic */ CountDownLatch b;
        public final /* synthetic */ p5 c;
        public final /* synthetic */ String d;

        public a(VideoData videoData, CountDownLatch countDownLatch, p5 p5Var, String str) {
            this.f4819a = videoData;
            this.b = countDownLatch;
            this.c = p5Var;
            this.d = str;
        }

        @Override // com.my.target.u5.a
        public void a(String str) {
            this.f4819a.a(str);
            this.b.countDown();
        }

        @Override // com.my.target.u5.a
        public void a() {
            this.f4819a.a(null);
            this.b.countDown();
            this.c.b.c(0, 4001, "videoUrl=" + this.d);
        }
    }

    public sb(List list) {
        this.f4818a = list;
    }

    public static sb a(VideoData videoData) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(new p5(videoData, h0.e));
        return a(arrayList);
    }

    public static sb a(List list) {
        return new sb(list);
    }

    public void a(Context context) {
        if (f0.a()) {
            gb.b("VideoLoaderUtils: Method load called from main thread");
            return;
        }
        CountDownLatch countDownLatch = new CountDownLatch(this.f4818a.size());
        for (p5 p5Var : this.f4818a) {
            VideoData videoData = (VideoData) p5Var.f4768a;
            String url = videoData.getUrl();
            rb.a().b(url, new a(videoData, countDownLatch, p5Var, url), context);
        }
        try {
            countDownLatch.await();
            gb.a("VideoLoaderUtils: success media loading");
        } catch (InterruptedException unused) {
            gb.a("VideoLoaderUtils: awaiting media files load failed");
        }
    }
}
