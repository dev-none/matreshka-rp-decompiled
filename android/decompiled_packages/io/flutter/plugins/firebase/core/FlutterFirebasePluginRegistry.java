package io.flutter.plugins.firebase.core;

import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.TaskCompletionSource;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.FirebaseApp;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes7.dex */
public class FlutterFirebasePluginRegistry {
    private static final Map<String, FlutterFirebasePlugin> registeredPlugins = new WeakHashMap();

    public static void registerPlugin(String str, FlutterFirebasePlugin flutterFirebasePlugin) {
        Map<String, FlutterFirebasePlugin> map = registeredPlugins;
        synchronized (map) {
            map.put(str, flutterFirebasePlugin);
        }
    }

    static Task<Map<String, Object>> getPluginConstantsForFirebaseApp(final FirebaseApp firebaseApp) {
        final TaskCompletionSource taskCompletionSource = new TaskCompletionSource();
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.core.FlutterFirebasePluginRegistry$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePluginRegistry.lambda$getPluginConstantsForFirebaseApp$0(firebaseApp, taskCompletionSource);
            }
        });
        return taskCompletionSource.getTask();
    }

    static /* synthetic */ void lambda$getPluginConstantsForFirebaseApp$0(FirebaseApp firebaseApp, TaskCompletionSource taskCompletionSource) {
        HashMap map;
        try {
            Map<String, FlutterFirebasePlugin> map2 = registeredPlugins;
            synchronized (map2) {
                map = new HashMap(map2);
            }
            HashMap map3 = new HashMap(map.size());
            for (Map.Entry entry : map.entrySet()) {
                map3.put((String) entry.getKey(), Tasks.await(((FlutterFirebasePlugin) entry.getValue()).getPluginConstantsForFirebaseApp(firebaseApp)));
            }
            taskCompletionSource.setResult(map3);
        } catch (Exception e) {
            taskCompletionSource.setException(e);
        }
    }

    static Task<Void> didReinitializeFirebaseCore() {
        final TaskCompletionSource taskCompletionSource = new TaskCompletionSource();
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.core.FlutterFirebasePluginRegistry$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePluginRegistry.lambda$didReinitializeFirebaseCore$1(taskCompletionSource);
            }
        });
        return taskCompletionSource.getTask();
    }

    static /* synthetic */ void lambda$didReinitializeFirebaseCore$1(TaskCompletionSource taskCompletionSource) {
        HashMap map;
        try {
            Map<String, FlutterFirebasePlugin> map2 = registeredPlugins;
            synchronized (map2) {
                map = new HashMap(map2);
            }
            Iterator it = map.entrySet().iterator();
            while (it.hasNext()) {
                Tasks.await(((FlutterFirebasePlugin) ((Map.Entry) it.next()).getValue()).didReinitializeFirebaseCore());
            }
            taskCompletionSource.setResult(null);
        } catch (Exception e) {
            taskCompletionSource.setException(e);
        }
    }
}
