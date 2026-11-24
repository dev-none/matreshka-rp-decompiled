package com.my.target.common;

/* JADX INFO: loaded from: classes6.dex */
public class MyTargetPrivacy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static Boolean f4585a;
    public static Boolean b;
    public static Boolean c;
    public static boolean d;
    public final Boolean ccpaUserConsent;
    public final Boolean iabUserConsent;
    public final boolean userAgeRestricted;
    public final Boolean userConsent;

    public MyTargetPrivacy(Boolean bool, Boolean bool2, Boolean bool3, boolean z) {
        this.userConsent = bool;
        this.ccpaUserConsent = bool2;
        this.iabUserConsent = bool3;
        this.userAgeRestricted = z;
    }

    public static MyTargetPrivacy currentPrivacy() {
        return new MyTargetPrivacy(f4585a, b, c, d);
    }

    public static void setCcpaUserConsent(boolean z) {
        b = Boolean.valueOf(z);
    }

    public static void setIabUserConsent(boolean z) {
        c = Boolean.valueOf(z);
    }

    public static void setUserAgeRestricted(boolean z) {
        d = z;
    }

    public static void setUserConsent(boolean z) {
        f4585a = Boolean.valueOf(z);
    }

    public boolean isConsent() {
        Boolean bool = Boolean.FALSE;
        return (bool.equals(this.userConsent) || bool.equals(this.ccpaUserConsent) || bool.equals(this.iabUserConsent)) ? false : true;
    }
}
