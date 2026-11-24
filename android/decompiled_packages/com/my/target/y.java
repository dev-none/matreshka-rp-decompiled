package com.my.target;

import android.content.Context;
import android.net.Uri;

/* JADX INFO: loaded from: classes6.dex */
public interface y {

    public interface a {
        void a(float f);

        void a(float f, float f2);

        void a(String str);

        void b();

        void d();

        void e();

        void f();

        void l();

        void n();

        void p();
    }

    void a();

    void a(Uri uri, Context context);

    void a(Uri uri, z zVar);

    void a(a aVar);

    void a(z zVar);

    boolean b();

    void c();

    void d();

    void destroy();

    boolean e();

    void f();

    boolean g();

    float getDuration();

    Uri getUri();

    void h();

    long i();

    boolean isPlaying();

    void pause();

    void resume();

    void seekTo(long j);

    void setVolume(float f);

    void stop();
}
