package io.appmetrica.analytics.logger.common.impl;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes7.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Pattern f6471a = Pattern.compile("[\\p{Space},;]");

    public static int a(Matcher matcher, int i, int i2) {
        if (i2 >= i) {
            int i3 = ((i2 - i) / 2) + i;
            matcher.region(i3, i2);
            if (matcher.find()) {
                int iStart = matcher.start();
                int iA = a(matcher, iStart + 1, i2);
                return iA == -1 ? iStart : iA;
            }
            matcher.region(i, i3);
            if (matcher.find()) {
                int iStart2 = matcher.start();
                int iA2 = a(matcher, iStart2 + 1, i3);
                return iA2 == -1 ? iStart2 : iA2;
            }
        }
        return -1;
    }
}
