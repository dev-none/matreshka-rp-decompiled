package com.pushwoosh.d0;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;
import android.os.AsyncTask;
import android.text.TextUtils;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public final class c extends AsyncTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5057a = new ArrayList();

    public final void a(b bVar) {
        synchronized (this.f5057a) {
            this.f5057a.add(bVar);
        }
    }

    @Override // android.os.AsyncTask
    public final Object doInBackground(Object[] objArr) {
        Exception exc;
        String str = null;
        try {
            Context applicationContext = AndroidPlatformModule.getApplicationContext();
            if (applicationContext == null) {
                return null;
            }
            ArrayList<ProviderInfo> arrayListA = d.a(applicationContext.getPackageManager().queryContentProviders((String) null, 0, 0));
            if (arrayListA.size() == 0) {
                return null;
            }
            String str2 = applicationContext.getPackageName() + ".PushwooshSharedDataProvider";
            for (ProviderInfo providerInfo : arrayListA) {
                if (providerInfo.authority.endsWith(".PushwooshSharedDataProvider") && !providerInfo.authority.equals(str2)) {
                    Cursor cursorQuery = applicationContext.getContentResolver().query(Uri.parse("content://" + providerInfo.authority + "/hwid"), null, null, null, GeneralUtils.md5(applicationContext.getPackageName()));
                    if (cursorQuery == null) {
                        continue;
                    } else {
                        if (cursorQuery.getColumnCount() > 0 && cursorQuery.getColumnName(0).equals("hwid") && cursorQuery.moveToFirst()) {
                            String string = cursorQuery.getString(0);
                            if (!TextUtils.isEmpty(string)) {
                                try {
                                    cursorQuery.close();
                                    return string;
                                } catch (Exception e) {
                                    exc = e;
                                    str = string;
                                }
                            }
                        }
                        cursorQuery.close();
                    }
                }
            }
            return null;
        } catch (Exception e2) {
            exc = e2;
        }
        PWLog.error("DeviceUtils", "Failed to get UUID from foreign instance", exc);
        return str;
    }

    @Override // android.os.AsyncTask
    public final void onCancelled() {
        super.onCancelled();
        a((String) null);
    }

    @Override // android.os.AsyncTask
    public final void onPostExecute(Object obj) {
        String str = (String) obj;
        super.onPostExecute(str);
        a(str);
    }

    public final void a(String str) {
        ArrayList arrayList;
        if (TextUtils.isEmpty(str)) {
            str = UUID.randomUUID().toString();
        }
        RepositoryModule.getRegistrationPreferences().deviceId().set(str);
        synchronized (this.f5057a) {
            arrayList = new ArrayList(this.f5057a);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((b) it.next()).a(str);
        }
    }
}
