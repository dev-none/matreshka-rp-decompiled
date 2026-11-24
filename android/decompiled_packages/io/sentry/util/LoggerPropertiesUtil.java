package io.sentry.util;

import io.sentry.SentryAttribute;
import io.sentry.SentryAttributes;
import io.sentry.SentryEvent;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class LoggerPropertiesUtil {
    public static void applyPropertiesToEvent(SentryEvent sentryEvent, List<String> list, Map<String, String> map, String str) {
        if (!list.isEmpty() && !map.isEmpty()) {
            for (String str2 : list) {
                String strRemove = map.remove(str2);
                if (strRemove != null) {
                    sentryEvent.setTag(str2, strRemove);
                }
            }
        }
        if (map.isEmpty()) {
            return;
        }
        sentryEvent.getContexts().put(str, map);
    }

    public static void applyPropertiesToEvent(SentryEvent sentryEvent, List<String> list, Map<String, String> map) {
        applyPropertiesToEvent(sentryEvent, list, map, "MDC");
    }

    public static void applyPropertiesToAttributes(SentryAttributes sentryAttributes, List<String> list, Map<String, String> map) {
        if (list.isEmpty() || map.isEmpty()) {
            return;
        }
        for (String str : list) {
            String str2 = map.get(str);
            if (str2 != null) {
                sentryAttributes.add(SentryAttribute.stringAttribute("mdc." + str, str2));
            }
        }
    }
}
