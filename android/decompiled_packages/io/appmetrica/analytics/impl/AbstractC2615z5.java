package io.appmetrica.analytics.impl;

import com.vk.id.analytics.stat.StatTracker;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2615z5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final List f6425a = CollectionUtils.createSortedListWithoutRepetitions("id", StatTracker.EXTERNAL_PARAM_SESSION_ID, "session_type", "number_in_session", "type", "global_number", "time", "event_description");
}
