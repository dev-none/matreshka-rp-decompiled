package com.my.target.nativeads;

import android.view.View;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface IAd {
    int getAdChoicesPlacement();

    int getCachePolicy();

    void handleData(String str);

    void load();

    void loadFromBid(String str);

    @Deprecated
    void registerView(View view);

    @Deprecated
    void registerView(View view, List<View> list);

    void setAdChoicesPlacement(int i);

    void setCachePolicy(int i);

    void unregisterView();
}
