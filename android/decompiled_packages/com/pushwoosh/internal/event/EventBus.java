package com.pushwoosh.internal.event;

import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class EventBus {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final ConcurrentHashMap f5191a = new ConcurrentHashMap();

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(Event event, List list) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            try {
                ((EventListener) it.next()).onReceive(event);
            } catch (Throwable th) {
                PWLog.error("EventBus", "Listener for " + event.getClass().getSimpleName() + " threw", th);
            }
        }
    }

    public static void clearSubscribersMap() {
        f5191a.clear();
    }

    public static Map<Class<? extends Event>, List<EventListener<?>>> getSubscribersMap() {
        return f5191a;
    }

    public static <T extends Event> boolean sendEvent(final T t) {
        final List list = (List) f5191a.get(t.getClass());
        if (list == null || list.isEmpty()) {
            return false;
        }
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.internal.event.EventBus$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                EventBus.a(t, list);
            }
        });
        return true;
    }

    public static <T extends Event> Subscription<T> subscribe(Class<T> cls, EventListener<T> eventListener) {
        Objects.requireNonNull(cls, "event must not be null");
        Objects.requireNonNull(eventListener, "listener must not be null");
        ConcurrentHashMap concurrentHashMap = f5191a;
        List copyOnWriteArrayList = (List) concurrentHashMap.get(cls);
        if (copyOnWriteArrayList == null) {
            copyOnWriteArrayList = new CopyOnWriteArrayList();
            List list = (List) concurrentHashMap.putIfAbsent(cls, copyOnWriteArrayList);
            if (list != null) {
                copyOnWriteArrayList = list;
            }
        }
        copyOnWriteArrayList.add(eventListener);
        return new Subscription<>(cls, eventListener);
    }

    public static <T extends Event> void unsubscribe(Class<T> cls, EventListener<T> eventListener) {
        List list = (List) f5191a.get(cls);
        if (list == null) {
            return;
        }
        list.remove(eventListener);
    }
}
