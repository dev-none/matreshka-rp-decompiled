package com.pushwoosh.tags;

import java.util.Date;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class Tags {
    public static TagsBundle appendList(String str, List<String> list) {
        return new TagsBundle.Builder().appendList(str, list).build();
    }

    public static TagsBundle booleanTag(String str, boolean z) {
        return new TagsBundle.Builder().putBoolean(str, z).build();
    }

    public static TagsBundle dateTag(String str, Date date) {
        return new TagsBundle.Builder().putDate(str, date).build();
    }

    public static TagsBundle empty() {
        return a.f5315a;
    }

    public static TagsBundle fromJson(JSONObject jSONObject) {
        return new TagsBundle.Builder().putAll(jSONObject).build();
    }

    public static TagsBundle incrementInt(String str, int i) {
        return new TagsBundle.Builder().incrementInt(str, i).build();
    }

    public static TagsBundle intTag(String str, int i) {
        return new TagsBundle.Builder().putInt(str, i).build();
    }

    public static TagsBundle listTag(String str, List<String> list) {
        return new TagsBundle.Builder().putList(str, list).build();
    }

    public static TagsBundle longTag(String str, long j) {
        return new TagsBundle.Builder().putLong(str, j).build();
    }

    public static TagsBundle removeFromList(String str, List<String> list) {
        return new TagsBundle.Builder().removeFromList(str, list).build();
    }

    public static TagsBundle removeTag(String str) {
        return new TagsBundle.Builder().remove(str).build();
    }

    public static TagsBundle stringTag(String str, String str2) {
        return new TagsBundle.Builder().putString(str, str2).build();
    }
}
