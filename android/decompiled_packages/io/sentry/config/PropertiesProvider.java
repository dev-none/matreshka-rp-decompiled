package io.sentry.config;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public interface PropertiesProvider {
    Map<String, String> getMap(String str);

    String getProperty(String str);

    default List<String> getList(String str) {
        String property = getProperty(str);
        return property != null ? Arrays.asList(property.split(StringUtils.COMMA)) : Collections.EMPTY_LIST;
    }

    default List<String> getListOrNull(String str) {
        String property = getProperty(str);
        if (property != null) {
            return Arrays.asList(property.split(StringUtils.COMMA));
        }
        return null;
    }

    default String getProperty(String str, String str2) {
        String property = getProperty(str);
        return property != null ? property : str2;
    }

    default Boolean getBooleanProperty(String str) {
        String property = getProperty(str);
        if (property != null) {
            return Boolean.valueOf(property);
        }
        return null;
    }

    default Double getDoubleProperty(String str) {
        String property = getProperty(str);
        if (property == null) {
            return null;
        }
        try {
            return Double.valueOf(property);
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    default Long getLongProperty(String str) {
        String property = getProperty(str);
        if (property == null) {
            return null;
        }
        try {
            return Long.valueOf(property);
        } catch (NumberFormatException unused) {
            return null;
        }
    }
}
