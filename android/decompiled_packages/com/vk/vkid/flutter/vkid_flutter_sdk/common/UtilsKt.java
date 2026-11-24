package com.vk.vkid.flutter.vkid_flutter_sdk.common;

import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.CharsKt;

/* JADX INFO: compiled from: Utils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\b\u0002\u001a!\u0010\u0000\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005H\u0000¢\u0006\u0002\u0010\u0006\u001a\u0012\u0010\u0007\u001a\u0004\u0018\u00010\b2\u0006\u0010\t\u001a\u00020\u0003H\u0000\u001a\u001c\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\rH\u0000\u001a\f\u0010\u000e\u001a\u00020\u0003*\u00020\u0003H\u0000¨\u0006\u000f"}, d2 = {"parseCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "typeArg", "", "radiusArg", "", "(Ljava/lang/String;Ljava/lang/Double;)Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "parseSize", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "arg", "parseOneTapOAuths", "", "Lcom/vk/id/onetap/common/OneTapOAuth;", "", "capitalize", "vkid_flutter_sdk_release"}, k = 2, mv = {2, 2, 0}, xi = 48)
public final class UtilsKt {
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static final OneTapButtonCornersStyle parseCornersStyle(String typeArg, Double d) {
        Intrinsics.checkNotNullParameter(typeArg, "typeArg");
        switch (typeArg.hashCode()) {
            case -1481266862:
                if (typeArg.equals("OneTapCornersCustom")) {
                    return new OneTapButtonCornersStyle.Custom(d != null ? (float) d.doubleValue() : 0.0f);
                }
                return null;
            case 520082317:
                if (typeArg.equals("OneTapCornersRound")) {
                    return OneTapButtonCornersStyle.Round.INSTANCE;
                }
                return null;
            case 1402130777:
                if (typeArg.equals("OneTapCornersNone")) {
                    return OneTapButtonCornersStyle.None.INSTANCE;
                }
                return null;
            case 1582903532:
                if (typeArg.equals("OneTapCornersRounded")) {
                    return OneTapButtonCornersStyle.Rounded.INSTANCE;
                }
                return null;
            case 1742238848:
                if (typeArg.equals("OneTapCornersDefault")) {
                    return OneTapButtonCornersStyle.Default.INSTANCE;
                }
                return null;
            default:
                return null;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static final OneTapButtonSizeStyle parseSize(String arg) {
        Intrinsics.checkNotNullParameter(arg, "arg");
        switch (arg.hashCode()) {
            case -2097777242:
                if (arg.equals("small32")) {
                    return OneTapButtonSizeStyle.SMALL_32;
                }
                return null;
            case -2097777240:
                if (arg.equals("small34")) {
                    return OneTapButtonSizeStyle.SMALL_34;
                }
                return null;
            case -2097777238:
                if (arg.equals("small36")) {
                    return OneTapButtonSizeStyle.SMALL_36;
                }
                return null;
            case -2097777236:
                if (arg.equals("small38")) {
                    return OneTapButtonSizeStyle.SMALL_38;
                }
                return null;
            case -900166479:
                if (arg.equals("medium40")) {
                    return OneTapButtonSizeStyle.MEDIUM_40;
                }
                return null;
            case -900166477:
                if (arg.equals("medium42")) {
                    return OneTapButtonSizeStyle.MEDIUM_42;
                }
                return null;
            case -900166475:
                if (arg.equals("medium44")) {
                    return OneTapButtonSizeStyle.MEDIUM_44;
                }
                return null;
            case -900166473:
                if (arg.equals("medium46")) {
                    return OneTapButtonSizeStyle.MEDIUM_46;
                }
                return null;
            case -48374017:
                if (arg.equals("large48")) {
                    return OneTapButtonSizeStyle.LARGE_48;
                }
                return null;
            case -48373994:
                if (arg.equals("large50")) {
                    return OneTapButtonSizeStyle.LARGE_50;
                }
                return null;
            case -48373992:
                if (arg.equals("large52")) {
                    return OneTapButtonSizeStyle.LARGE_52;
                }
                return null;
            case -48373990:
                if (arg.equals("large54")) {
                    return OneTapButtonSizeStyle.LARGE_54;
                }
                return null;
            case -48373988:
                if (arg.equals("large56")) {
                    return OneTapButtonSizeStyle.LARGE_56;
                }
                return null;
            case 1312628413:
                if (arg.equals("standard")) {
                    return OneTapButtonSizeStyle.DEFAULT;
                }
                return null;
            default:
                return null;
        }
    }

    public static final Set<OneTapOAuth> parseOneTapOAuths(List<String> arg) {
        Intrinsics.checkNotNullParameter(arg, "arg");
        List<String> list = arg;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            String upperCase = ((String) it.next()).toUpperCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
            arrayList.add(OneTapOAuth.valueOf(upperCase));
        }
        return CollectionsKt.toSet(arrayList);
    }

    public static final String capitalize(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str.length() <= 0) {
            return str;
        }
        StringBuilder sb = new StringBuilder();
        char cCharAt = str.charAt(0);
        sb.append((Object) (Character.isLowerCase(cCharAt) ? CharsKt.titlecase(cCharAt) : String.valueOf(cCharAt)));
        String strSubstring = str.substring(1);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
        sb.append(strSubstring);
        return sb.toString();
    }
}
