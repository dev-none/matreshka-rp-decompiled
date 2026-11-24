package com.adjust.sdk.flutter;

import java.text.NumberFormat;
import java.text.ParsePosition;

/* JADX INFO: loaded from: classes4.dex */
public class AdjustUtils {
    private static NumberFormat numberFormat = NumberFormat.getInstance();

    public static boolean isNumber(String str) {
        if (str == null || str.length() == 0) {
            return false;
        }
        ParsePosition parsePosition = new ParsePosition(0);
        numberFormat.parse(str, parsePosition);
        return str.length() == parsePosition.getIndex();
    }
}
