package io.appmetrica.analytics.internal;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.UriMatcher;
import android.database.Cursor;
import android.net.Uri;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.impl.AbstractC2254kj;
import io.appmetrica.analytics.impl.C2271la;
import io.appmetrica.analytics.impl.C2276lf;
import io.appmetrica.analytics.impl.C2301mf;
import io.appmetrica.analytics.impl.C2563x3;
import io.appmetrica.analytics.impl.C2588y3;
import io.appmetrica.analytics.impl.H5;
import io.appmetrica.analytics.impl.I5;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes7.dex */
public class PreloadInfoContentProvider extends ContentProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f6442a = false;
    private final UriMatcher b = new UriMatcher(-1);

    private void a(I5 i5, ContentValues contentValues) {
        Context context = getContext();
        Context applicationContext = context == null ? null : context.getApplicationContext();
        if (applicationContext != null) {
            try {
                Object objInvoke = i5.f5720a.invoke(contentValues);
                if (objInvoke != null) {
                    i5.c.b(applicationContext);
                    if (((Boolean) i5.b.invoke(objInvoke)).booleanValue()) {
                        AbstractC2254kj.a("Successfully saved " + i5.d, new Object[0]);
                    } else {
                        AbstractC2254kj.a("Did not save " + i5.d + " because data is already present", new Object[0]);
                    }
                }
            } catch (Throwable th) {
                ImportantLogger.INSTANCE.info("AppMetrica-Attribution", String.format("Unexpected error occurred", new Object[0]) + "\n" + StringUtils.throwableToString(th), new Object[0]);
            }
        }
    }

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        AbstractC2254kj.a("Deleting is not supported", new Object[0]);
        return -1;
    }

    public synchronized void disable() {
        this.f6442a = true;
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        synchronized (this) {
            if (this.f6442a) {
                return null;
            }
            if (contentValues != null) {
                int iMatch = this.b.match(uri);
                if (iMatch == 1) {
                    a(new I5(new C2276lf(), new C2301mf(), C2271la.d, "preload info"), contentValues);
                } else if (iMatch != 2) {
                    AbstractC2254kj.a("Bad content provider uri.", new Object[0]);
                } else {
                    a(new I5(new C2563x3(), new C2588y3(), C2271la.d, "clids"), contentValues);
                }
            }
            CountDownLatch countDownLatch = H5.f5702a;
            if (countDownLatch != null) {
                countDownLatch.countDown();
            }
            return null;
        }
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        Context context = getContext();
        Context applicationContext = context == null ? null : context.getApplicationContext();
        String str = (applicationContext != null ? applicationContext.getPackageName() : "") + ".appmetrica.preloadinfo.retail";
        this.b.addURI(str, "preloadinfo", 1);
        this.b.addURI(str, "clids", 2);
        H5.f5702a = new CountDownLatch(1);
        H5.b = this;
        return true;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        AbstractC2254kj.a("Query is not supported", new Object[0]);
        return null;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        AbstractC2254kj.a("Updating is not supported", new Object[0]);
        return -1;
    }
}
