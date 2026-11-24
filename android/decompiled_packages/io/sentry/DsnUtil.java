package io.sentry;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.net.URI;
import java.util.Locale;

/* JADX INFO: loaded from: classes7.dex */
public final class DsnUtil {
    public static boolean urlContainsDsnHost(SentryOptions sentryOptions, String str) {
        URI sentryUri;
        String host;
        if (sentryOptions == null || str == null || sentryOptions.getDsn() == null || (host = (sentryUri = sentryOptions.retrieveParsedDsn().getSentryUri()).getHost()) == null) {
            return false;
        }
        String lowerCase = host.toLowerCase(Locale.ROOT);
        int port = sentryUri.getPort();
        if (port > 0) {
            return str.toLowerCase(Locale.ROOT).contains(lowerCase + StringUtils.PROCESS_POSTFIX_DELIMITER + port);
        }
        return str.toLowerCase(Locale.ROOT).contains(lowerCase);
    }
}
