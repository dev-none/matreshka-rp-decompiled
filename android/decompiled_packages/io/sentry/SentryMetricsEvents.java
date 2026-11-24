package io.sentry;

import io.sentry.vendor.gson.stream.JsonToken;
import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class SentryMetricsEvents implements JsonUnknown, JsonSerializable {
    private List<SentryMetricsEvent> items;
    private Map<String, Object> unknown;

    public static final class JsonKeys {
        public static final String ITEMS = "items";
    }

    public SentryMetricsEvents(List<SentryMetricsEvent> list) {
        this.items = list;
    }

    public List<SentryMetricsEvent> getItems() {
        return this.items;
    }

    @Override // io.sentry.JsonSerializable
    public void serialize(ObjectWriter objectWriter, ILogger iLogger) throws IOException {
        objectWriter.beginObject();
        objectWriter.name("items").value(iLogger, this.items);
        Map<String, Object> map = this.unknown;
        if (map != null) {
            for (String str : map.keySet()) {
                objectWriter.name(str).value(iLogger, this.unknown.get(str));
            }
        }
        objectWriter.endObject();
    }

    @Override // io.sentry.JsonUnknown
    public Map<String, Object> getUnknown() {
        return this.unknown;
    }

    @Override // io.sentry.JsonUnknown
    public void setUnknown(Map<String, Object> map) {
        this.unknown = map;
    }

    public static final class Deserializer implements JsonDeserializer<SentryMetricsEvents> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // io.sentry.JsonDeserializer
        public SentryMetricsEvents deserialize(ObjectReader objectReader, ILogger iLogger) throws Exception {
            objectReader.beginObject();
            List listNextListOrNull = null;
            HashMap map = null;
            while (objectReader.peek() == JsonToken.NAME) {
                String strNextName = objectReader.nextName();
                strNextName.hashCode();
                if (strNextName.equals("items")) {
                    listNextListOrNull = objectReader.nextListOrNull(iLogger, new SentryMetricsEvent.Deserializer());
                } else {
                    if (map == null) {
                        map = new HashMap();
                    }
                    objectReader.nextUnknown(iLogger, map, strNextName);
                }
            }
            objectReader.endObject();
            if (listNextListOrNull == null) {
                IllegalStateException illegalStateException = new IllegalStateException("Missing required field \"items\"");
                iLogger.log(SentryLevel.ERROR, "Missing required field \"items\"", illegalStateException);
                throw illegalStateException;
            }
            SentryMetricsEvents sentryMetricsEvents = new SentryMetricsEvents(listNextListOrNull);
            sentryMetricsEvents.setUnknown(map);
            return sentryMetricsEvents;
        }
    }
}
