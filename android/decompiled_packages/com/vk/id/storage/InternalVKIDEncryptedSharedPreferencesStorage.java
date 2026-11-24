package com.vk.id.storage;

import android.content.Context;
import android.content.SharedPreferences;
import androidx.security.crypto.EncryptedSharedPreferences;
import androidx.security.crypto.MasterKey;
import java.io.IOException;
import java.security.GeneralSecurityException;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDEncryptedSharedPreferencesStorage.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\b\u0001\u0018\u0000 \u00132\u00020\u0001:\u0001\u0013B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000fH\u0016J\u0012\u0010\u0011\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0012\u001a\u00020\u00072\u0006\u0010\u0002\u001a\u00020\u0003H\u0002R\u001b\u0010\u0006\u001a\u00020\u00078BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\b\u0010\t¨\u0006\u0014"}, d2 = {"Lcom/vk/id/storage/InternalVKIDEncryptedSharedPreferencesStorage;", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "sharedPreferences", "Landroid/content/SharedPreferences;", "getSharedPreferences", "()Landroid/content/SharedPreferences;", "sharedPreferences$delegate", "Lkotlin/Lazy;", "set", "", "key", "", "value", "getString", "createSharedPreferences", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDEncryptedSharedPreferencesStorage implements InternalVKIDPreferencesStorage {

    @Deprecated
    public static final String FILE_NAME = "vkid_encrypted_shared_prefs";

    /* JADX INFO: renamed from: sharedPreferences$delegate, reason: from kotlin metadata */
    private final Lazy sharedPreferences;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;

    public InternalVKIDEncryptedSharedPreferencesStorage(final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.sharedPreferences = LazyKt.lazy(new Function0() { // from class: com.vk.id.storage.InternalVKIDEncryptedSharedPreferencesStorage$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return InternalVKIDEncryptedSharedPreferencesStorage.sharedPreferences_delegate$lambda$0(this.f$0, context);
            }
        });
    }

    /* JADX INFO: compiled from: InternalVKIDEncryptedSharedPreferencesStorage.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/storage/InternalVKIDEncryptedSharedPreferencesStorage$Companion;", "", "<init>", "()V", "FILE_NAME", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    private final SharedPreferences getSharedPreferences() {
        return (SharedPreferences) this.sharedPreferences.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SharedPreferences sharedPreferences_delegate$lambda$0(InternalVKIDEncryptedSharedPreferencesStorage internalVKIDEncryptedSharedPreferencesStorage, Context context) {
        try {
            return internalVKIDEncryptedSharedPreferencesStorage.createSharedPreferences(context);
        } catch (Throwable unused) {
            context.deleteSharedPreferences(FILE_NAME);
            return internalVKIDEncryptedSharedPreferencesStorage.createSharedPreferences(context);
        }
    }

    @Override // com.vk.id.storage.InternalVKIDPreferencesStorage
    public void set(String key, String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences.Editor editorEdit = getSharedPreferences().edit();
        editorEdit.putString(key, value);
        editorEdit.commit();
    }

    @Override // com.vk.id.storage.InternalVKIDPreferencesStorage
    public String getString(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return getSharedPreferences().getString(key, null);
    }

    private final SharedPreferences createSharedPreferences(Context context) throws GeneralSecurityException, IOException {
        SharedPreferences sharedPreferencesCreate = EncryptedSharedPreferences.create(context, FILE_NAME, new MasterKey.Builder(context).setKeyScheme(MasterKey.KeyScheme.AES256_GCM).build(), EncryptedSharedPreferences.PrefKeyEncryptionScheme.AES256_SIV, EncryptedSharedPreferences.PrefValueEncryptionScheme.AES256_GCM);
        Intrinsics.checkNotNullExpressionValue(sharedPreferencesCreate, "create(...)");
        return sharedPreferencesCreate;
    }
}
