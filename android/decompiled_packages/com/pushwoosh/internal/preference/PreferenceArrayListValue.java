package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.google.common.base.Ascii;
import com.pushwoosh.e0.j;
import com.pushwoosh.internal.utils.PWLog;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collection;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceArrayListValue<T extends Serializable> implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5206a;
    private final String b;
    private final ArrayList c;
    private final int d;

    @Deprecated
    public PreferenceArrayListValue(SharedPreferences sharedPreferences, String str, int i) {
        this(sharedPreferences, str, i, null);
    }

    private void a() throws IOException {
        String string;
        SharedPreferences sharedPreferences = this.f5206a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        String str = this.b;
        ArrayList arrayList = this.c;
        if (arrayList == null) {
            string = "";
        } else {
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                ObjectOutputStream objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
                objectOutputStream.writeObject(arrayList);
                objectOutputStream.close();
                byte[] byteArray = byteArrayOutputStream.toByteArray();
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < byteArray.length; i++) {
                    sb.append((char) (((byteArray[i] >> 4) & 15) + 97));
                    sb.append((char) ((byteArray[i] & Ascii.SI) + 97));
                }
                string = sb.toString();
            } catch (Exception e) {
                throw new IOException("Serialization error: " + e.getMessage(), e);
            }
        }
        editorEdit.putString(str, string);
        editorEdit.apply();
    }

    public void add(T t) {
        try {
            this.c.add(t);
            if (this.c.size() > this.d) {
                this.c.remove(0);
            }
            a();
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public void clear() {
        try {
            this.c.clear();
            a();
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public ArrayList<T> get() {
        return new ArrayList<>(this.c);
    }

    public void remove(T t) {
        try {
            this.c.remove(t);
            a();
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public void replaceAll(Collection<T> collection) {
        try {
            this.c.clear();
            this.c.addAll(collection);
            a();
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    /* JADX WARN: Code duplicated, block: B:10:0x002a A[Catch: Exception -> 0x0039, TRY_LEAVE, TryCatch #0 {Exception -> 0x0039, blocks: (B:5:0x000b, B:7:0x0011, B:9:0x001b, B:10:0x002a), top: B:16:0x000b }] */
    /* JADX WARN: Code duplicated, block: B:7:0x0011 A[Catch: Exception -> 0x0039, TryCatch #0 {Exception -> 0x0039, blocks: (B:5:0x000b, B:7:0x0011, B:9:0x001b, B:10:0x002a), top: B:16:0x000b }] */
    /* JADX WARN: Code duplicated, block: B:8:0x0019 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:9:0x001b A[Catch: Exception -> 0x0039, TryCatch #0 {Exception -> 0x0039, blocks: (B:5:0x000b, B:7:0x0011, B:9:0x001b, B:10:0x002a), top: B:16:0x000b }] */
    public PreferenceArrayListValue(SharedPreferences sharedPreferences, String str, int i, Class<T> cls) {
        this.b = str;
        this.d = i;
        String string = null;
        if (sharedPreferences != null) {
            try {
                string = sharedPreferences.getString(str, null);
                if (string == null) {
                    this.c = new ArrayList();
                } else if (cls == null) {
                    this.c = (ArrayList) j.a(string, ArrayList.class);
                } else {
                    this.c = (ArrayList) j.a(string, ArrayList.class, cls);
                }
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = new ArrayList();
            }
        } else if (string == null) {
            this.c = new ArrayList();
        } else if (cls == null) {
            this.c = (ArrayList) j.a(string, ArrayList.class);
        } else {
            this.c = (ArrayList) j.a(string, ArrayList.class, cls);
        }
        this.f5206a = sharedPreferences;
    }
}
