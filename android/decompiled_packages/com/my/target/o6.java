package com.my.target;

import com.google.common.base.Ascii;

/* JADX INFO: loaded from: classes6.dex */
public class o6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f4757a;
    public final String b;

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public o6(String str, String str2) {
        str.getClass();
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -1910759310:
                if (str.equals("vpaidInit")) {
                    b = 0;
                }
                break;
            case -1886160473:
                if (str.equals("playVideo")) {
                    b = 1;
                }
                break;
            case -1289167206:
                if (str.equals("expand")) {
                    b = 2;
                }
                break;
            case -934437708:
                if (str.equals("resize")) {
                    b = 3;
                }
                break;
            case -733616544:
                if (str.equals("createCalendarEvent")) {
                    b = 4;
                }
                break;
            case 3417674:
                if (str.equals("open")) {
                    b = 5;
                }
                break;
            case 94756344:
                if (str.equals("close")) {
                    b = 6;
                }
                break;
            case 133423073:
                if (str.equals("setOrientationProperties")) {
                    b = 7;
                }
                break;
            case 459238621:
                if (str.equals("storePicture")) {
                    b = 8;
                }
                break;
            case 624734601:
                if (str.equals("setResizeProperties")) {
                    b = 9;
                }
                break;
            case 892543864:
                if (str.equals("vpaidEvent")) {
                    b = 10;
                }
                break;
            case 1797992422:
                if (str.equals("playheadEvent")) {
                    b = Ascii.VT;
                }
                break;
        }
        switch (b) {
            case 0:
            case 6:
            case 7:
            case 9:
            case 10:
            case 11:
                this.f4757a = false;
                this.b = str;
                break;
            case 1:
            case 2:
                this.f4757a = "inline".equals(str2);
                this.b = str;
                break;
            case 3:
            case 4:
            case 5:
            case 8:
                this.f4757a = true;
                this.b = str;
                break;
            default:
                this.f4757a = false;
                this.b = "";
                break;
        }
    }

    public String toString() {
        return this.b;
    }
}
