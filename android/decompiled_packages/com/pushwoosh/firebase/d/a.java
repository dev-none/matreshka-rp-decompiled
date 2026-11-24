package com.pushwoosh.firebase.d;

import com.google.android.gms.tasks.Tasks;
import com.google.firebase.messaging.FirebaseMessaging;
import java.util.concurrent.ExecutionException;

/* JADX INFO: loaded from: classes6.dex */
public abstract class a {
    public static void a() {
        try {
            Tasks.await(FirebaseMessaging.getInstance().deleteToken());
        } catch (InterruptedException e) {
            throw new InterruptedException("Failed to delete Firebase token: " + e.getMessage());
        } catch (ExecutionException e2) {
            throw new ExecutionException(new Throwable("Failed to delete Firebase token: " + e2.getMessage()));
        }
    }

    public static String b() {
        try {
            return (String) Tasks.await(FirebaseMessaging.getInstance().getToken());
        } catch (InterruptedException e) {
            throw new InterruptedException("Failed to fetch push token from FCM: " + e.getMessage());
        } catch (ExecutionException e2) {
            throw new ExecutionException(new Throwable("Failed to fetch push token from FCM: " + e2.getMessage()));
        }
    }
}
