package com.my.target.instreamads.postview.models;

import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public final class PostViewData {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ImageData f4664a;
    public final String b;
    public final double c;
    public final Integer d;

    public PostViewData(ImageData imageData, String str, double d, Integer num) {
        this.f4664a = imageData;
        this.b = str;
        this.c = d;
        this.d = num;
    }

    public static PostViewData a(ImageData imageData, String str, double d, Integer num) {
        return new PostViewData(imageData, str, d, num);
    }

    public ImageData getBackgroundImage() {
        return this.f4664a;
    }

    public double getDuration() {
        return this.c;
    }

    public Integer getOverlay() {
        return this.d;
    }

    public String getText() {
        return this.b;
    }
}
