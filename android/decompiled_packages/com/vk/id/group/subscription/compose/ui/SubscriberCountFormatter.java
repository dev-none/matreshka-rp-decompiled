package com.vk.id.group.subscription.compose.ui;

import kotlin.Metadata;
import kotlin.math.MathKt;
import org.apache.commons.io.FilenameUtils;

/* JADX INFO: compiled from: SubscriberCountFormatter.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\f\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0005J\u0018\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/SubscriberCountFormatter;", "", "<init>", "()V", "TEN", "", "THOUSAND", "MILLION", "format", "", "subscriberCount", "formatForDisplay", "value", "", "decimalSeparator", "", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class SubscriberCountFormatter {
    public static final int $stable = 0;
    public static final SubscriberCountFormatter INSTANCE = new SubscriberCountFormatter();
    private static final int MILLION = 1000000;
    private static final int TEN = 10;
    private static final int THOUSAND = 1000;

    private SubscriberCountFormatter() {
    }

    public final String format(int subscriberCount) {
        if (subscriberCount < 1000) {
            return String.valueOf(subscriberCount);
        }
        if (subscriberCount < 1000000) {
            return formatForDisplay(subscriberCount / 1000.0f, ',') + "K";
        }
        return formatForDisplay(subscriberCount / 1000000.0f, FilenameUtils.EXTENSION_SEPARATOR) + "M";
    }

    private final String formatForDisplay(float value, char decimalSeparator) {
        int i;
        int iRoundToInt = MathKt.roundToInt(value * 10);
        int i2 = iRoundToInt % 10;
        if (i2 == 0 || (i = iRoundToInt / 10) > 10) {
            return String.valueOf(iRoundToInt / 10);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(i);
        sb.append(decimalSeparator);
        sb.append(i2);
        return sb.toString();
    }
}
