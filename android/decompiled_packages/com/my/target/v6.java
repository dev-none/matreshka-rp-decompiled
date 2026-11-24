package com.my.target;

import android.content.Context;
import android.content.SharedPreferences;
import androidx.webkit.ProxyConfig;
import java.net.CookieStore;
import java.net.HttpCookie;
import java.net.URI;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public class v6 implements CookieStore {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SharedPreferences f4845a;
    public final Map b = new HashMap();

    public v6(Context context) {
        this.f4845a = context.getSharedPreferences("mytarget_httpcookie_prefs", 0);
        a();
    }

    public static URI a(URI uri, HttpCookie httpCookie) {
        if (httpCookie.getDomain() != null) {
            String domain = httpCookie.getDomain();
            if (domain.charAt(0) == '.') {
                domain = domain.substring(1);
            }
            try {
                return new URI(uri.getScheme() == null ? ProxyConfig.MATCH_HTTP : uri.getScheme(), domain, httpCookie.getPath() == null ? "/" : httpCookie.getPath(), null);
            } catch (Throwable th) {
                gb.a("MyTargetCookieStore: Error - " + th.getMessage());
            }
        }
        return uri;
    }

    @Override // java.net.CookieStore
    public synchronized void add(URI uri, HttpCookie httpCookie) {
        URI uriA = a(uri, httpCookie);
        Set hashSet = (Set) this.b.get(uriA);
        if (hashSet == null) {
            hashSet = new HashSet();
            this.b.put(uriA, hashSet);
        }
        hashSet.remove(httpCookie);
        hashSet.add(httpCookie);
        c(uriA, httpCookie);
    }

    public final boolean b(String str, String str2) {
        return str2.equals(str) || (str2.startsWith(str) && str.charAt(str.length() - 1) == '/') || (str2.startsWith(str) && str2.substring(str.length()).charAt(0) == '/');
    }

    public final void c(URI uri, HttpCookie httpCookie) {
        SharedPreferences.Editor editorEdit = this.f4845a.edit();
        editorEdit.putString(uri + "|" + httpCookie.getName(), new w6().a(httpCookie));
        editorEdit.apply();
    }

    @Override // java.net.CookieStore
    public synchronized List get(URI uri) {
        return a(uri);
    }

    @Override // java.net.CookieStore
    public synchronized List getCookies() {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Iterator it = this.b.keySet().iterator();
        while (it.hasNext()) {
            arrayList.addAll(a((URI) it.next()));
        }
        return arrayList;
    }

    @Override // java.net.CookieStore
    public synchronized List getURIs() {
        return new ArrayList(this.b.keySet());
    }

    @Override // java.net.CookieStore
    public synchronized boolean remove(URI uri, HttpCookie httpCookie) {
        Set set = (Set) this.b.get(uri);
        boolean z = set != null && set.remove(httpCookie);
        if (!z) {
            return z;
        }
        b(uri, httpCookie);
        return z;
    }

    @Override // java.net.CookieStore
    public synchronized boolean removeAll() {
        this.b.clear();
        b();
        return true;
    }

    public final void b(URI uri, HttpCookie httpCookie) {
        SharedPreferences.Editor editorEdit = this.f4845a.edit();
        editorEdit.remove(uri + "|" + httpCookie.getName());
        editorEdit.apply();
    }

    public final void b() {
        this.f4845a.edit().clear().apply();
    }

    public final void a() {
        for (Map.Entry<String, ?> entry : this.f4845a.getAll().entrySet()) {
            try {
                URI uri = new URI(entry.getKey().split("\\|", 2)[0]);
                HttpCookie httpCookieA = new w6().a((String) entry.getValue());
                Set hashSet = (Set) this.b.get(uri);
                if (hashSet == null) {
                    hashSet = new HashSet();
                    this.b.put(uri, hashSet);
                }
                hashSet.add(httpCookieA);
            } catch (Throwable th) {
                gb.a("MyTargetCookieStore: Error - " + th.getMessage());
            }
        }
    }

    public final List a(URI uri) {
        HashSet hashSet = new HashSet();
        for (Map.Entry entry : this.b.entrySet()) {
            URI uri2 = (URI) entry.getKey();
            if (a(uri2.getHost(), uri.getHost()) && b(uri2.getPath(), uri.getPath())) {
                hashSet.addAll((Collection) entry.getValue());
            }
        }
        ArrayList arrayList = new ArrayList();
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            HttpCookie httpCookie = (HttpCookie) it.next();
            if (httpCookie.hasExpired()) {
                arrayList.add(httpCookie);
                it.remove();
            }
        }
        if (!arrayList.isEmpty()) {
            a(uri, arrayList);
        }
        return new ArrayList(hashSet);
    }

    public final boolean a(String str, String str2) {
        if (str2.equals(str)) {
            return true;
        }
        StringBuilder sb = new StringBuilder(".");
        sb.append(str);
        return str2.endsWith(sb.toString());
    }

    public final void a(URI uri, List list) {
        SharedPreferences.Editor editorEdit = this.f4845a.edit();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            editorEdit.remove(uri + "|" + ((HttpCookie) it.next()).getName());
        }
        editorEdit.apply();
    }
}
