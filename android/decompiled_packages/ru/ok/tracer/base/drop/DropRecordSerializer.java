package ru.ok.tracer.base.drop;

import androidx.core.app.NotificationCompat;
import java.util.Collection;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: DropRecordSerializer.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u001e\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001b\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u00042\u0006\u0010\u0006\u001a\u00020\u0007H\u0000¢\u0006\u0002\b\bJ\u0014\u0010\t\u001a\u00020\u00072\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00050\u000b¨\u0006\f"}, d2 = {"Lru/ok/tracer/base/drop/DropRecordSerializer;", "", "()V", "fromJsonArray", "", "Lru/ok/tracer/base/drop/DropRecord;", "array", "Lorg/json/JSONArray;", "fromJsonArray$tracer_base_release", "toJsonArray", "records", "", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class DropRecordSerializer {
    public static final DropRecordSerializer INSTANCE = new DropRecordSerializer();

    private DropRecordSerializer() {
    }

    public final JSONArray toJsonArray(Collection<DropRecord> records) throws JSONException {
        Intrinsics.checkNotNullParameter(records, "records");
        JSONArray jSONArray = new JSONArray();
        for (DropRecord dropRecord : records) {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NotificationCompat.CATEGORY_EVENT, dropRecord.getEvent());
            jSONObject.put("reason", dropRecord.getReason());
            jSONObject.put("count", dropRecord.getCount());
            jSONArray.put(jSONObject);
        }
        return jSONArray;
    }

    public final List<DropRecord> fromJsonArray$tracer_base_release(JSONArray array) throws JSONException {
        Intrinsics.checkNotNullParameter(array, "array");
        List listCreateListBuilder = CollectionsKt.createListBuilder();
        int length = array.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObject = array.getJSONObject(i);
            String string = jSONObject.getString(NotificationCompat.CATEGORY_EVENT);
            Intrinsics.checkNotNullExpressionValue(string, "obj.getString(\"event\")");
            String string2 = jSONObject.getString("reason");
            Intrinsics.checkNotNullExpressionValue(string2, "obj.getString(\"reason\")");
            listCreateListBuilder.add(new DropRecord(string, string2, jSONObject.getInt("count")));
        }
        return CollectionsKt.build(listCreateListBuilder);
    }
}
