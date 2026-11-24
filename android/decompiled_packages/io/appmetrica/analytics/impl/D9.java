package io.appmetrica.analytics.impl;

import androidx.fragment.app.FragmentTransaction;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public abstract class D9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Set f5638a;
    public static final EnumSet b;
    public static final EnumSet c;
    public static final EnumSet d;
    public static final EnumSet e;
    public static final EnumSet f;
    public static final EnumSet g;
    public static final EnumSet h;
    public static final List i;
    public static final List j;

    static {
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_PROTOBUF;
        EnumC2195ib enumC2195ib2 = EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_CUSTOM_PROTOBUF;
        EnumC2195ib enumC2195ib3 = EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_PROTOBUF;
        EnumC2195ib enumC2195ib4 = EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_FROM_FILE;
        EnumC2195ib enumC2195ib5 = EnumC2195ib.EVENT_TYPE_PREV_SESSION_EXCEPTION_UNHANDLED_FROM_FILE;
        EnumC2195ib enumC2195ib6 = EnumC2195ib.EVENT_TYPE_ANR;
        f5638a = CollectionUtils.unmodifiableSetOf(5892, 5896, 5891, 5889, 5890, 5968);
        EnumC2195ib enumC2195ib7 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        EnumC2195ib enumC2195ib8 = EnumC2195ib.EVENT_TYPE_PURGE_BUFFER;
        EnumC2195ib enumC2195ib9 = EnumC2195ib.EVENT_TYPE_SEND_REFERRER;
        EnumC2195ib enumC2195ib10 = EnumC2195ib.EVENT_TYPE_APP_ENVIRONMENT_UPDATED;
        EnumC2195ib enumC2195ib11 = EnumC2195ib.EVENT_TYPE_APP_ENVIRONMENT_CLEARED;
        EnumC2195ib enumC2195ib12 = EnumC2195ib.EVENT_TYPE_PREV_SESSION_NATIVE_CRASH_PROTOBUF;
        EnumC2195ib enumC2195ib13 = EnumC2195ib.EVENT_TYPE_SET_SESSION_EXTRA;
        b = EnumSet.of(enumC2195ib7, enumC2195ib8, enumC2195ib9, enumC2195ib10, enumC2195ib11, EnumC2195ib.EVENT_TYPE_ACTIVATION, enumC2195ib12, enumC2195ib5, enumC2195ib13);
        EnumC2195ib enumC2195ib14 = EnumC2195ib.EVENT_TYPE_UPDATE_FOREGROUND_TIME;
        EnumC2195ib enumC2195ib15 = EnumC2195ib.EVENT_TYPE_CURRENT_SESSION_NATIVE_CRASH_PROTOBUF;
        c = EnumSet.of(enumC2195ib14, enumC2195ib4, enumC2195ib5, enumC2195ib12, enumC2195ib15);
        EnumC2195ib enumC2195ib16 = EnumC2195ib.EVENT_TYPE_REGULAR;
        d = EnumSet.of(enumC2195ib4, enumC2195ib5, enumC2195ib3, enumC2195ib, enumC2195ib2, enumC2195ib15, enumC2195ib12, enumC2195ib16, EnumC2195ib.EVENT_CLIENT_EXTERNAL_ATTRIBUTION, EnumC2195ib.EVENT_TYPE_SEND_ECOMMERCE_EVENT, EnumC2195ib.EVENT_TYPE_SEND_REVENUE_EVENT, EnumC2195ib.EVENT_TYPE_SEND_AD_REVENUE_EVENT, enumC2195ib8, EnumC2195ib.EVENT_TYPE_INIT, EnumC2195ib.EVENT_TYPE_SEND_USER_PROFILE, EnumC2195ib.EVENT_TYPE_SET_USER_PROFILE_ID, enumC2195ib9, enumC2195ib10, enumC2195ib11, EnumC2195ib.EVENT_TYPE_FIRST_ACTIVATION, EnumC2195ib.EVENT_TYPE_START, EnumC2195ib.EVENT_TYPE_APP_OPEN, EnumC2195ib.EVENT_TYPE_APP_UPDATE, enumC2195ib6);
        e = EnumSet.of(enumC2195ib16);
        f = EnumSet.of(enumC2195ib16);
        g = EnumSet.of(enumC2195ib12);
        h = EnumSet.of(EnumC2195ib.EVENT_TYPE_ALIVE, enumC2195ib8, enumC2195ib13, enumC2195ib5, enumC2195ib12);
        i = Arrays.asList(0, 6145, Integer.valueOf(FragmentTransaction.TRANSIT_FRAGMENT_OPEN), 8224);
        EnumC2195ib enumC2195ib17 = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        j = Arrays.asList(12290);
    }
}
