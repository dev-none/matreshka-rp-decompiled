package com.my.target.instreamads.postview;

import android.view.ViewGroup;
import com.my.target.instreamads.postview.models.PostViewData;

/* JADX INFO: loaded from: classes6.dex */
public interface InstreamAdPostViewPlayer {
    ViewGroup getView();

    void hide();

    void pause();

    void resume();

    void show(PostViewData postViewData);

    void updateProgress(int i, int i2);
}
