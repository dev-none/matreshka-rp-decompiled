package com.pushwoosh.firebase.internal.checker;

import com.pushwoosh.internal.checker.Checker;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class FirebaseChecker implements Checker {
    @Override // com.pushwoosh.internal.checker.Checker
    public boolean check() {
        try {
            Class.forName("com.google.firebase.messaging.FirebaseMessaging");
            return false;
        } catch (ClassNotFoundException | LinkageError e) {
            PWLog.error("com.google.firebase:firebase-messaging is missing or failed to load. It is normally pulled in transitively by pushwoosh-firebase; add it explicitly only if you excluded it, preferably via the Firebase BoM:\n    implementation(platform(\"com.google.firebase:firebase-bom:<version>\"))\n    implementation(\"com.google.firebase:firebase-messaging\")\nSee https://firebase.google.com/docs/android/setup#available-libraries");
            throw new IllegalStateException("com.google.firebase:firebase-messaging is missing or failed to load. It is normally pulled in transitively by pushwoosh-firebase; add it explicitly only if you excluded it, preferably via the Firebase BoM:\n    implementation(platform(\"com.google.firebase:firebase-bom:<version>\"))\n    implementation(\"com.google.firebase:firebase-messaging\")\nSee https://firebase.google.com/docs/android/setup#available-libraries", e);
        }
    }
}
