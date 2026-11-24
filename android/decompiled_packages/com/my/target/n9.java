package com.my.target;

import android.view.View;
import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public interface n9 {

    public interface a {
        void a(b bVar, int i);

        void a(boolean z);

        void b(int i);

        void c();

        void g();

        void i();

        void l();

        void m();

        void n();
    }

    View a();

    void a(int i, float f);

    void a(int i, String str);

    void a(boolean z);

    void b();

    void b(boolean z);

    void c();

    void c(boolean z);

    void d();

    void e();

    View getCloseButton();

    void setBackgroundImage(ImageData imageData);

    void setBanner(o4 o4Var);

    void setPanelColor(int i);

    void setSoundState(boolean z);
}
