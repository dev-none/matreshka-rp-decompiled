package io.flutter.plugins.sharedpreferences;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Base64;
import android.util.Log;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: LegacySharedPreferencesPlugin.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0010 \n\u0000\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0010\"\n\u0002\b\u0004\b\u0007\u0018\u0000 ,2\u00020\u00012\u00020\u0002:\u0002+,B\u0011\b\u0001\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006B\t\b\u0016¢\u0006\u0004\b\u0005\u0010\u0007J\u0018\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0002J\u0010\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0018\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0015H\u0016J\u0018\u0010\u0019\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0017H\u0016J\u0018\u0010\u001a\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u001bH\u0016J\u0018\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u001dH\u0016J\u0010\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0016J\u0018\u0010\u001f\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0017H\u0016J\u001e\u0010 \u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\f\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u00170!H\u0017J,\u0010\"\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020$0#2\u0006\u0010%\u001a\u00020\u00172\u000e\u0010&\u001a\n\u0012\u0004\u0012\u00020\u0017\u0018\u00010!H\u0016J \u0010'\u001a\u00020\u00152\u0006\u0010%\u001a\u00020\u00172\u000e\u0010&\u001a\n\u0012\u0004\u0012\u00020\u0017\u0018\u00010!H\u0016J,\u0010(\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020$0#2\u0006\u0010%\u001a\u00020\u00172\u000e\u0010&\u001a\n\u0012\u0004\u0012\u00020\u0017\u0018\u00010)H\u0002J\u0018\u0010*\u001a\u00020$2\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020$H\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082.¢\u0006\u0002\n\u0000¨\u0006-"}, d2 = {"Lio/flutter/plugins/sharedpreferences/LegacySharedPreferencesPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugins/sharedpreferences/SharedPreferencesApi;", "listEncoder", "Lio/flutter/plugins/sharedpreferences/SharedPreferencesListEncoder;", "<init>", "(Lio/flutter/plugins/sharedpreferences/SharedPreferencesListEncoder;)V", "()V", "preferences", "Landroid/content/SharedPreferences;", "setUp", "", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "context", "Landroid/content/Context;", "onAttachedToEngine", "binding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onDetachedFromEngine", "setBool", "", "key", "", "value", "setString", "setInt", "", "setDouble", "", "remove", "setEncodedStringList", "setDeprecatedStringList", "", "getAll", "", "", "prefix", "allowList", "clear", "getAllPrefs", "", "transformPref", "ListEncoder", "Companion", "shared_preferences_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class LegacySharedPreferencesPlugin implements FlutterPlugin, SharedPreferencesApi {
    private static final String BIG_INTEGER_PREFIX = "VGhpcyBpcyB0aGUgcHJlZml4IGZvciBCaWdJbnRlZ2Vy";
    private final SharedPreferencesListEncoder listEncoder;
    private SharedPreferences preferences;

    public LegacySharedPreferencesPlugin(SharedPreferencesListEncoder listEncoder) {
        Intrinsics.checkNotNullParameter(listEncoder, "listEncoder");
        this.listEncoder = listEncoder;
    }

    public LegacySharedPreferencesPlugin() {
        this(new ListEncoder());
    }

    private final void setUp(BinaryMessenger messenger, Context context) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(SharedPreferencesPluginKt.SHARED_PREFERENCES_NAME, 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        this.preferences = sharedPreferences;
        try {
            SharedPreferencesApi.Companion.setUp$default(SharedPreferencesApi.INSTANCE, messenger, this, null, 4, null);
        } catch (Exception e) {
            Log.e(SharedPreferencesPluginKt.TAG, "Received exception while setting up SharedPreferencesPlugin", e);
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        Context applicationContext = binding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        setUp(binaryMessenger, applicationContext);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        SharedPreferencesApi.Companion companion = SharedPreferencesApi.INSTANCE;
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        SharedPreferencesApi.Companion.setUp$default(companion, binaryMessenger, null, null, 4, null);
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean setBool(String key, boolean value) {
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().putBoolean(key, value).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean setString(String key, String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        SharedPreferences sharedPreferences = null;
        if (StringsKt.startsWith$default(value, SharedPreferencesPluginKt.LIST_PREFIX, false, 2, (Object) null) || StringsKt.startsWith$default(value, BIG_INTEGER_PREFIX, false, 2, (Object) null) || StringsKt.startsWith$default(value, SharedPreferencesPluginKt.DOUBLE_PREFIX, false, 2, (Object) null)) {
            throw new RuntimeException("StorageError: This string cannot be stored as it clashes with special identifier prefixes");
        }
        SharedPreferences sharedPreferences2 = this.preferences;
        if (sharedPreferences2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
        } else {
            sharedPreferences = sharedPreferences2;
        }
        return sharedPreferences.edit().putString(key, value).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean setInt(String key, long value) {
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().putLong(key, value).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean setDouble(String key, double value) {
        Intrinsics.checkNotNullParameter(key, "key");
        String strValueOf = String.valueOf(value);
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().putString(key, SharedPreferencesPluginKt.DOUBLE_PREFIX + strValueOf).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean remove(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().remove(key).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean setEncodedStringList(String key, String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().putString(key, value).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    @Deprecated(message = "Exists for testing purposes only")
    public boolean setDeprecatedStringList(String key, List<String> value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        return sharedPreferences.edit().putString(key, SharedPreferencesPluginKt.LIST_PREFIX + this.listEncoder.encode(value)).commit();
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public Map<String, Object> getAll(String prefix, List<String> allowList) {
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        return getAllPrefs(prefix, allowList != null ? CollectionsKt.toSet(allowList) : null);
    }

    @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesApi
    public boolean clear(String prefix, List<String> allowList) {
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        Set set = allowList != null ? CollectionsKt.toSet(allowList) : null;
        SharedPreferences sharedPreferences2 = this.preferences;
        if (sharedPreferences2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences2 = null;
        }
        Set<String> setKeySet = sharedPreferences2.getAll().keySet();
        ArrayList arrayList = new ArrayList();
        for (Object obj : setKeySet) {
            String str = (String) obj;
            Intrinsics.checkNotNull(str);
            if (StringsKt.startsWith$default(str, prefix, false, 2, (Object) null) && (set == null || set.contains(str))) {
                arrayList.add(obj);
            }
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            editorEdit.remove((String) it.next());
        }
        return editorEdit.commit();
    }

    private final Map<String, Object> getAllPrefs(String prefix, Set<String> allowList) {
        Map mapCreateMapBuilder = MapsKt.createMapBuilder();
        SharedPreferences sharedPreferences = this.preferences;
        if (sharedPreferences == null) {
            Intrinsics.throwUninitializedPropertyAccessException("preferences");
            sharedPreferences = null;
        }
        Map<String, ?> all = sharedPreferences.getAll();
        Intrinsics.checkNotNullExpressionValue(all, "getAll(...)");
        for (Map.Entry<String, ?> entry : all.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            Intrinsics.checkNotNull(key);
            if (StringsKt.startsWith$default(key, prefix, false, 2, (Object) null) && value != null && (allowList == null || allowList.contains(key))) {
                mapCreateMapBuilder.put(key, transformPref(key, value));
            }
        }
        return MapsKt.build(mapCreateMapBuilder);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private final Object transformPref(String key, Object value) {
        Object obj;
        SharedPreferences sharedPreferences = null;
        if (value instanceof String) {
            String str = (String) value;
            if (StringsKt.startsWith$default(str, SharedPreferencesPluginKt.LIST_PREFIX, false, 2, (Object) null)) {
                if (!StringsKt.startsWith$default(str, SharedPreferencesPluginKt.JSON_LIST_PREFIX, false, 2, (Object) null)) {
                    obj = value;
                    SharedPreferencesListEncoder sharedPreferencesListEncoder = this.listEncoder;
                    String strSubstring = str.substring(40);
                    Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
                    return sharedPreferencesListEncoder.decode(strSubstring);
                }
            } else {
                if (StringsKt.startsWith$default(str, BIG_INTEGER_PREFIX, false, 2, (Object) null)) {
                    String strSubstring2 = str.substring(44);
                    Intrinsics.checkNotNullExpressionValue(strSubstring2, "substring(...)");
                    return new BigInteger(strSubstring2, 36);
                }
                if (StringsKt.startsWith$default(str, SharedPreferencesPluginKt.DOUBLE_PREFIX, false, 2, (Object) null)) {
                    obj = value;
                    String strSubstring3 = str.substring(40);
                    Intrinsics.checkNotNullExpressionValue(strSubstring3, "substring(...)");
                    return Double.valueOf(Double.parseDouble(strSubstring3));
                }
            }
        } else if (value instanceof Set) {
            List<String> list = CollectionsKt.toList((Set) value);
            SharedPreferences sharedPreferences2 = this.preferences;
            if (sharedPreferences2 == null) {
                obj = value;
                Intrinsics.throwUninitializedPropertyAccessException("preferences");
            } else {
                obj = value;
                sharedPreferences = sharedPreferences2;
            }
            sharedPreferences.edit().remove(key).putString(key, SharedPreferencesPluginKt.LIST_PREFIX + this.listEncoder.encode(list)).apply();
            obj = list;
        }
        obj = value;
        obj = value;
        obj = value;
        return obj;
    }

    /* JADX INFO: compiled from: LegacySharedPreferencesPlugin.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u0007H\u0016J\u0016\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00050\u00072\u0006\u0010\t\u001a\u00020\u0005H\u0016¨\u0006\n"}, d2 = {"Lio/flutter/plugins/sharedpreferences/LegacySharedPreferencesPlugin$ListEncoder;", "Lio/flutter/plugins/sharedpreferences/SharedPreferencesListEncoder;", "<init>", "()V", "encode", "", "list", "", "decode", "listString", "shared_preferences_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class ListEncoder implements SharedPreferencesListEncoder {
        @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesListEncoder
        public String encode(List<String> list) {
            Intrinsics.checkNotNullParameter(list, "list");
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                ObjectOutputStream objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
                objectOutputStream.writeObject(list);
                objectOutputStream.flush();
                String strEncodeToString = Base64.encodeToString(byteArrayOutputStream.toByteArray(), 0);
                Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
                return strEncodeToString;
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }

        @Override // io.flutter.plugins.sharedpreferences.SharedPreferencesListEncoder
        public List<String> decode(String listString) {
            Intrinsics.checkNotNullParameter(listString, "listString");
            try {
                Object object = new StringListObjectInputStream(new ByteArrayInputStream(Base64.decode(listString, 0))).readObject();
                Intrinsics.checkNotNull(object, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
                return (List) object;
            } catch (IOException e) {
                throw new RuntimeException(e);
            } catch (ClassNotFoundException e2) {
                throw new RuntimeException(e2);
            }
        }
    }
}
