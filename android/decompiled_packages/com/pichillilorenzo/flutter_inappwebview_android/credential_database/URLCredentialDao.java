package com.pichillilorenzo.flutter_inappwebview_android.credential_database;

import android.content.ContentValues;
import android.database.Cursor;
import com.pichillilorenzo.flutter_inappwebview_android.types.URLCredential;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class URLCredentialDao {
    CredentialDatabaseHelper credentialDatabaseHelper;
    String[] projection = {"_id", "username", "password", URLCredentialContract.FeedEntry.COLUMN_NAME_PROTECTION_SPACE_ID};

    public URLCredentialDao(CredentialDatabaseHelper credentialDatabaseHelper) {
        this.credentialDatabaseHelper = credentialDatabaseHelper;
    }

    public long delete(URLCredential uRLCredential) {
        return this.credentialDatabaseHelper.getWritableDatabase().delete("credential", "_id = ?", new String[]{uRLCredential.getId().toString()});
    }

    public URLCredential find(String str, String str2, Long l) {
        Cursor cursorQuery = this.credentialDatabaseHelper.getReadableDatabase().query("credential", this.projection, "username = ? AND password = ? AND protection_space_id = ?", new String[]{str, str2, l.toString()}, null, null, null);
        URLCredential uRLCredential = cursorQuery.moveToNext() ? new URLCredential(Long.valueOf(cursorQuery.getLong(cursorQuery.getColumnIndexOrThrow("_id"))), cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("username")), cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("password")), l) : null;
        cursorQuery.close();
        return uRLCredential;
    }

    public List<URLCredential> getAllByProtectionSpaceId(Long l) {
        Cursor cursorQuery = this.credentialDatabaseHelper.getReadableDatabase().query("credential", this.projection, "protection_space_id = ?", new String[]{l.toString()}, null, null, null);
        ArrayList arrayList = new ArrayList();
        while (cursorQuery.moveToNext()) {
            arrayList.add(new URLCredential(Long.valueOf(cursorQuery.getLong(cursorQuery.getColumnIndexOrThrow("_id"))), cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("username")), cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("password")), l));
        }
        cursorQuery.close();
        return arrayList;
    }

    public long insert(URLCredential uRLCredential) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("username", uRLCredential.getUsername());
        contentValues.put("password", uRLCredential.getPassword());
        contentValues.put(URLCredentialContract.FeedEntry.COLUMN_NAME_PROTECTION_SPACE_ID, uRLCredential.getProtectionSpaceId());
        return this.credentialDatabaseHelper.getWritableDatabase().insert("credential", null, contentValues);
    }

    public long update(URLCredential uRLCredential) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("username", uRLCredential.getUsername());
        contentValues.put("password", uRLCredential.getPassword());
        return this.credentialDatabaseHelper.getWritableDatabase().update("credential", contentValues, "protection_space_id = ?", new String[]{uRLCredential.getProtectionSpaceId().toString()});
    }
}
