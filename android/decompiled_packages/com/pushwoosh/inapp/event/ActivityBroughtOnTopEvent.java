package com.pushwoosh.inapp.event;

import com.pushwoosh.internal.event.Event;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes6.dex */
public class ActivityBroughtOnTopEvent implements Event {
    public static ActivityBroughtOnTopEvent INSTANCE;
    public AtomicInteger count;

    public ActivityBroughtOnTopEvent() {
        AtomicInteger atomicInteger = new AtomicInteger();
        this.count = atomicInteger;
        atomicInteger.set(0);
    }

    public static ActivityBroughtOnTopEvent getInstance() {
        ActivityBroughtOnTopEvent activityBroughtOnTopEvent = INSTANCE;
        if (activityBroughtOnTopEvent == null) {
            INSTANCE = new ActivityBroughtOnTopEvent();
        } else {
            activityBroughtOnTopEvent.count.incrementAndGet();
        }
        return INSTANCE;
    }

    public static void resetCount() {
        INSTANCE.count.set(0);
    }
}
