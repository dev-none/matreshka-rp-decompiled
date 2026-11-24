package com.my.target.instreamads.postview.models;

import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public final class CallToActionData {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4663a;
    public final Integer b;
    public final Integer c;
    public final String d;
    public final ImageData e;

    public CallToActionData(String str, Integer num, Integer num2, String str2, ImageData imageData) {
        this.f4663a = str;
        this.b = num;
        this.c = num2;
        this.d = str2;
        this.e = imageData;
    }

    public static CallToActionData a(String str, Integer num, Integer num2, String str2, ImageData imageData) {
        return new CallToActionData(str, num, num2, str2, imageData);
    }

    public String getAdditionalText() {
        return this.d;
    }

    public Integer getButtonColor() {
        return this.b;
    }

    public String getButtonText() {
        return this.f4663a;
    }

    public ImageData getIcon() {
        return this.e;
    }

    public Integer getTextColor() {
        return this.c;
    }

    public String toString() {
        return "CallToActionData{buttonText=" + this.f4663a + ", buttonColor=" + this.b + ", textColor=" + this.c + ", additionalText=" + this.d + '}';
    }
}
