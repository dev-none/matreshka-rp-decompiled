package com.ironsource.adqualitysdk.sdk;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public enum ISAdQualityLogLevel {
    NONE(0),
    ERROR(1),
    WARNING(2),
    INFO(3),
    DEBUG(4),
    VERBOSE(5);


    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final int f100;

    ISAdQualityLogLevel(int i) {
        this.f100 = i;
    }

    @Deprecated
    public static ISAdQualityLogLevel fromInt(int i) {
        if (i == 0) {
            return NONE;
        }
        if (i == 1) {
            return ERROR;
        }
        if (i == 2) {
            return WARNING;
        }
        if (i == 3) {
            return INFO;
        }
        if (i == 4) {
            return DEBUG;
        }
        if (i != 5) {
            return null;
        }
        return VERBOSE;
    }

    @Deprecated
    public int getValue() {
        return this.f100;
    }

    @Deprecated
    public boolean shouldPrintLog(ISAdQualityLogLevel iSAdQualityLogLevel) {
        int i = this.f100;
        return i != NONE.f100 && i >= iSAdQualityLogLevel.f100;
    }
}
