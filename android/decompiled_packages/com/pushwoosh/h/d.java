package com.pushwoosh.h;

import androidx.media3.exoplayer.upstream.CmcdData;
import com.pushwoosh.internal.utils.PWLog;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.TimeZone;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes6.dex */
public abstract class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Pattern f5089a = Pattern.compile("\\{\\{(.[^\\}]+?)\\|(.[^\\}]+?)\\|(.[^\\}]*?)\\}\\}", 32);
    public static final Pattern b = Pattern.compile("\\{\\{(.[^\\}]+?)\\|(.[^\\}]+?)\\|(.[^\\}]*?)\\}\\}");
    public static final Pattern c = Pattern.compile("\\{\\{(.[^\\}]+?)\\|(.[^\\}]+?)\\}\\}");
    public static final Pattern d = Pattern.compile("\\{(.[^\\}]+?)\\|(.[^\\}]+?)\\|\\}");
    public static final Pattern e = Pattern.compile("\\{(.[^\\}]+?)\\|(.[^\\}]+?)\\|(.[^\\}]*?)\\}");

    public static String a(String str, Pattern pattern, Map map) {
        Matcher matcher = pattern.matcher(str);
        String strA = str;
        while (matcher.find()) {
            if (matcher.groupCount() == 3) {
                strA = a(strA, matcher.group(0), matcher.group(1), matcher.group(2), matcher.group(3), map);
            } else {
                Map map2 = map;
                if (matcher.groupCount() == 2) {
                    if (pattern == d) {
                        strA = a(strA, matcher.group(0), matcher.group(1), matcher.group(2), "", map2);
                    }
                    strA = a(strA, matcher.group(0), matcher.group(1), matcher.group(2), matcher.group(1), map2);
                    map = map2;
                } else {
                    PWLog.warn("[InApp]PlaceholderSubstitutor", "Incorrect matching count");
                    map = map2;
                }
            }
        }
        return strA;
    }

    public static String a(String str, String str2, String str3, String str4, String str5, Map map) {
        if (map.containsKey(str3)) {
            str5 = (String) map.get(str3);
            HashMap map2 = a.f5088a;
            String strC = "";
            if (str5 == null || str4 == null) {
                str5 = strC;
            } else {
                try {
                    if ("lowercase".equals(str4)) {
                        strC = str5.toLowerCase();
                    } else if ("UPPERCASE".equals(str4)) {
                        strC = str5.toUpperCase();
                    } else {
                        boolean zIsWhitespace = true;
                        if ("CapitalizeAllFirst".equals(str4)) {
                            char[] charArray = str5.toCharArray();
                            for (int i = 0; i < charArray.length; i++) {
                                if (zIsWhitespace && Character.isLetter(charArray[i])) {
                                    charArray[i] = Character.toUpperCase(charArray[i]);
                                }
                                zIsWhitespace = Character.isWhitespace(charArray[i]);
                            }
                            strC = String.valueOf(charArray);
                        } else if ("CapitalizeFirst".equals(str4)) {
                            if (str5.length() != 0) {
                                strC = Character.toUpperCase(str5.charAt(0)) + str5.substring(1);
                            }
                        } else if ("cent".equals(str4)) {
                            strC = a.b(str5);
                        } else if ("dollar".equals(str4)) {
                            strC = str5.length() == 0 ? "$0" : "$" + a.c(str5);
                        } else if ("comma".equals(str4)) {
                            strC = a.c(str5);
                        } else if ("euro".equals(str4)) {
                            strC = str5.length() == 0 ? "€0" : "€" + a.c(str5);
                        } else if ("jpy".equals(str4)) {
                            strC = str5.length() == 0 ? "¥0" : "¥" + a.c(str5);
                        } else if ("lira".equals(str4)) {
                            strC = str5.length() == 0 ? "₤0" : "₤" + a.c(str5);
                        } else if ("M-d-y".equals(str4)) {
                            Date date = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("MMM-dd-yy");
                            simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat.format(date);
                        } else if ("m-d-y".equals(str4)) {
                            Date date2 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat2 = new SimpleDateFormat("MM-dd-yy");
                            simpleDateFormat2.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat2.format(date2);
                        } else if ("M d y".equals(str4)) {
                            Date date3 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat3 = new SimpleDateFormat("MMM dd yy");
                            simpleDateFormat3.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat3.format(date3);
                        } else if ("M d Y".equals(str4)) {
                            Date date4 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat4 = new SimpleDateFormat("MMM dd yyyy");
                            simpleDateFormat4.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat4.format(date4);
                        } else if (CmcdData.STREAM_TYPE_LIVE.equals(str4)) {
                            Date date5 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat5 = new SimpleDateFormat("EEEE");
                            simpleDateFormat5.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat5.format(date5);
                        } else if ("M d".equals(str4)) {
                            Date date6 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat6 = new SimpleDateFormat("MMM dd");
                            simpleDateFormat6.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat6.format(date6);
                        } else if ("H:i".equals(str4)) {
                            Date date7 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat7 = new SimpleDateFormat("hh:mm");
                            simpleDateFormat7.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat7.format(date7);
                        } else if ("m-d-y H:i".equals(str4)) {
                            Date date8 = new Date(Long.parseLong(str5) * 1000);
                            SimpleDateFormat simpleDateFormat8 = new SimpleDateFormat("MM-dd-yy hh:mm");
                            simpleDateFormat8.setTimeZone(TimeZone.getTimeZone("GMT-0"));
                            strC = simpleDateFormat8.format(date8);
                        }
                    }
                    str5 = strC;
                } catch (Exception e2) {
                    PWLog.exception(e2);
                }
            }
        }
        return str.replace(str2, str5);
    }
}
