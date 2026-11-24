package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0637 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static volatile boolean f2230;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final C0640 f2231;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final Pattern f2232;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final Pattern f2233;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final Pattern f2234;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final Pattern f2235;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final Pattern f2236;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final Pattern f2237;

    static {
        StringFog.decrypt("GAgWQDk=\n", "VG1uJUsAySg=\n");
        f2237 = Pattern.compile(StringFog.decrypt("UhAM0p5Wkc4oFDCkhTrG1SERXdLdM+PJJg==\n", "DEtt/+QXvJQ=\n"));
        f2236 = Pattern.compile(StringFog.decrypt("fB40BM8zb55eZ0IZqEYZng==\n", "IjwcO/VvM7w=\n"));
        f2235 = Pattern.compile(StringFog.decrypt("om/ZPo2WUB+AE68m6uMmHw==\n", "/EjxAbfKDDg=\n"));
        f2234 = Pattern.compile(StringFog.decrypt("ammDvs1TxGkaaYO+zVPE\n", "NDKzk/QO7zU=\n"));
        f2233 = Pattern.compile(StringFog.decrypt("VLIrl9oKUQ==\n", "CukbuuNXes4=\n"));
        f2232 = Pattern.compile(StringFog.decrypt("trPLgVCJF9zMt/f3S+VAx8WymoET7GWotcL2gkmkW/WbwJWNduAT\n", "6OiqrCrIOoY=\n"));
        f2231 = new C0640();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:118:0x0104 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:119:0x0257 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:120:0x018f A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:125:0x0121 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:126:0x0169 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:127:0x0182 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:136:0x010d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:56:0x0102 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:61:0x0115  */
    /* JADX WARN: Code duplicated, block: B:65:0x012c  */
    /* JADX WARN: Code duplicated, block: B:70:0x0150  */
    /* JADX WARN: Code duplicated, block: B:71:0x015d  */
    /* JADX WARN: Code duplicated, block: B:74:0x0176  */
    /* JADX WARN: Failed to find 'out' block for switch in B:28:0x0049. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:29:0x004c. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:30:0x004f. Please report as an issue. */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8607(String str, String str2, String str3) {
        C1775s c1775s;
        int length;
        int length2;
        String strM8606;
        int length3;
        String strM8607;
        String strM8608;
        synchronized (C1775s.class) {
            c1775s = C1775s.f496;
            if (c1775s == null) {
                c1775s = new C1775s();
                C1775s.f496 = c1775s;
            }
        }
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (i < str3.length()) {
            char cCharAt = str3.charAt(i);
            int i2 = i + 1;
            char cCharAt2 = i2 < str3.length() ? str3.charAt(i2) : (char) 0;
            if (cCharAt != '\n') {
                if (cCharAt != '[' && cCharAt != ']') {
                    if (cCharAt != '!') {
                        if (cCharAt != '\"') {
                            switch (cCharAt) {
                                case '%':
                                case '(':
                                case ')':
                                case '*':
                                case ',':
                                case '.':
                                    break;
                                case '&':
                                    if (cCharAt2 == cCharAt) {
                                        arrayList.add(c1775s.m8421(cCharAt, cCharAt2));
                                        i += 2;
                                    } else if (!Character.isWhitespace(cCharAt)) {
                                        strM8606 = m8606(f2237, str3, i);
                                        if (TextUtils.isEmpty(strM8606)) {
                                            strM8607 = m8606(f2234, str3, i);
                                            if (TextUtils.isEmpty(strM8607)) {
                                                strM8608 = m8606(f2233, str3, i);
                                                if (TextUtils.isEmpty(strM8608)) {
                                                    String strM8497 = AbstractC0343.m8497("joQN9fBS\n", "wuF1kIJ98lk=\n", new StringBuilder(), str);
                                                    StringBuilder sb = new StringBuilder();
                                                    sb.append(StringFog.decrypt("NoBke0BxUFMKlHN6A31fXBHO\n", "Y+4WHiMeNz0=\n"));
                                                    sb.append(cCharAt);
                                                    sb.append(StringFog.decrypt("tDxyLkRfaCngNGlgFA==\n", "lF0GDjQwG0A=\n"));
                                                    sb.append(i);
                                                    AbstractC0728.m8662(strM8497, AbstractC0343.m8497("J+Achg==\n", "B4lypkot8E4=\n", sb, str2), null, null);
                                                } else {
                                                    arrayList.add(c1775s.m8419(strM8608));
                                                    length2 = strM8608.length();
                                                }
                                            } else {
                                                arrayList.add(c1775s.m8422(strM8607));
                                                length2 = strM8607.length();
                                            }
                                            break;
                                        } else {
                                            length3 = strM8606.length() + i;
                                            if (length3 < str3.length() || str3.charAt(length3) != '.') {
                                                arrayList.add(c1775s.m8417(strM8606));
                                                length2 = strM8606.length();
                                            } else {
                                                String strM8609 = m8606(f2232, str3, i);
                                                if (TextUtils.isEmpty(strM8609)) {
                                                    arrayList.add(c1775s.m8417(strM8606));
                                                    length2 = strM8606.length();
                                                } else {
                                                    arrayList.add(new r(EnumC1772q.f481, strM8609));
                                                    length2 = strM8609.length();
                                                }
                                            }
                                        }
                                        i += length2;
                                    }
                                    break;
                                case '\'':
                                    String strM86010 = m8606(f2235, str3, i);
                                    if (strM86010 != null) {
                                        String strSubstring = strM86010.substring(1, strM86010.length() - 1);
                                        if (strSubstring.length() == 1) {
                                            arrayList.add(c1775s.m8419(String.valueOf((int) strSubstring.charAt(0))));
                                        } else {
                                            arrayList.add(c1775s.m8418(strSubstring));
                                        }
                                        length = strSubstring.length();
                                        length2 = length + 2;
                                        i += length2;
                                    } else {
                                        String strM8498 = AbstractC0343.m8497("oLdSlDT2\n", "7NIq8UbZKaY=\n", new StringBuilder(), str);
                                        StringBuilder sb2 = new StringBuilder();
                                        sb2.append(StringFog.decrypt("LgLSry8Q6LEZA8muOhDrpBkZzqd9UezwGx/TqSlZ975L\n", "a3CgwF0wmNA=\n"));
                                        sb2.append(i);
                                        AbstractC0728.m8662(strM8498, AbstractC0343.m8497("qx/l0Q==\n", "i3aL8QLx7wQ=\n", sb2, str2), null, null);
                                    }
                                    break;
                                case '+':
                                    if (cCharAt2 != '+') {
                                        arrayList.add(!c1775s.f506 ? new r(EnumC1772q.f486, String.valueOf(cCharAt)) : c1775s.f505[cCharAt]);
                                    } else {
                                        arrayList.add(c1775s.m8421(cCharAt, cCharAt2));
                                        i += 2;
                                    }
                                    break;
                                case '-':
                                    if (cCharAt2 == '-') {
                                        arrayList.add(c1775s.m8421(cCharAt, cCharAt2));
                                        i += 2;
                                    }
                                    break;
                                case '/':
                                    arrayList.add(!c1775s.f506 ? new r(EnumC1772q.f486, String.valueOf(cCharAt)) : c1775s.f505[cCharAt]);
                                    break;
                                default:
                                    switch (cCharAt) {
                                        case ':':
                                        case ';':
                                        case '?':
                                            break;
                                        case '<':
                                        case '=':
                                        case '>':
                                            break;
                                        default:
                                            switch (cCharAt) {
                                                case '{':
                                                case '}':
                                                    break;
                                                case '|':
                                                    if (cCharAt2 == cCharAt) {
                                                        arrayList.add(c1775s.m8421(cCharAt, cCharAt2));
                                                        i += 2;
                                                    } else if (!Character.isWhitespace(cCharAt)) {
                                                        strM8606 = m8606(f2237, str3, i);
                                                        if (TextUtils.isEmpty(strM8606)) {
                                                            strM8607 = m8606(f2234, str3, i);
                                                            if (TextUtils.isEmpty(strM8607)) {
                                                                strM8608 = m8606(f2233, str3, i);
                                                                if (TextUtils.isEmpty(strM8608)) {
                                                                    String strM8499 = AbstractC0343.m8497("joQN9fBS\n", "wuF1kIJ98lk=\n", new StringBuilder(), str);
                                                                    StringBuilder sb3 = new StringBuilder();
                                                                    sb3.append(StringFog.decrypt("NoBke0BxUFMKlHN6A31fXBHO\n", "Y+4WHiMeNz0=\n"));
                                                                    sb3.append(cCharAt);
                                                                    sb3.append(StringFog.decrypt("tDxyLkRfaCngNGlgFA==\n", "lF0GDjQwG0A=\n"));
                                                                    sb3.append(i);
                                                                    AbstractC0728.m8662(strM8499, AbstractC0343.m8497("J+Achg==\n", "B4lypkot8E4=\n", sb3, str2), null, null);
                                                                } else {
                                                                    arrayList.add(c1775s.m8419(strM8608));
                                                                    length2 = strM8608.length();
                                                                }
                                                            } else {
                                                                arrayList.add(c1775s.m8422(strM8607));
                                                                length2 = strM8607.length();
                                                            }
                                                            break;
                                                        } else {
                                                            length3 = strM8606.length() + i;
                                                            if (length3 < str3.length()) {
                                                                arrayList.add(c1775s.m8417(strM8606));
                                                                length2 = strM8606.length();
                                                            } else {
                                                                arrayList.add(c1775s.m8417(strM8606));
                                                                length2 = strM8606.length();
                                                            }
                                                        }
                                                        i += length2;
                                                    }
                                                    break;
                                                default:
                                                    if (!Character.isWhitespace(cCharAt)) {
                                                        strM8606 = m8606(f2237, str3, i);
                                                        if (TextUtils.isEmpty(strM8606)) {
                                                            strM8607 = m8606(f2234, str3, i);
                                                            if (TextUtils.isEmpty(strM8607)) {
                                                                strM8608 = m8606(f2233, str3, i);
                                                                if (TextUtils.isEmpty(strM8608)) {
                                                                    String strM84910 = AbstractC0343.m8497("joQN9fBS\n", "wuF1kIJ98lk=\n", new StringBuilder(), str);
                                                                    StringBuilder sb4 = new StringBuilder();
                                                                    sb4.append(StringFog.decrypt("NoBke0BxUFMKlHN6A31fXBHO\n", "Y+4WHiMeNz0=\n"));
                                                                    sb4.append(cCharAt);
                                                                    sb4.append(StringFog.decrypt("tDxyLkRfaCngNGlgFA==\n", "lF0GDjQwG0A=\n"));
                                                                    sb4.append(i);
                                                                    AbstractC0728.m8662(strM84910, AbstractC0343.m8497("J+Achg==\n", "B4lypkot8E4=\n", sb4, str2), null, null);
                                                                } else {
                                                                    arrayList.add(c1775s.m8419(strM8608));
                                                                    length2 = strM8608.length();
                                                                }
                                                            } else {
                                                                arrayList.add(c1775s.m8422(strM8607));
                                                                length2 = strM8607.length();
                                                            }
                                                            break;
                                                        } else {
                                                            length3 = strM8606.length() + i;
                                                            if (length3 < str3.length()) {
                                                                arrayList.add(c1775s.m8417(strM8606));
                                                                length2 = strM8606.length();
                                                            } else {
                                                                arrayList.add(c1775s.m8417(strM8606));
                                                                length2 = strM8606.length();
                                                            }
                                                        }
                                                        i += length2;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                            }
                        } else {
                            String strM86011 = m8606(f2236, str3, i);
                            if (strM86011 == null) {
                                String strM84911 = AbstractC0343.m8497("Vm/1iNbC\n", "GgqN7aTtejs=\n", new StringBuilder(), str);
                                StringBuilder sb5 = new StringBuilder();
                                sb5.append(StringFog.decrypt("bCYQl39Me+xbJwuWakx4+Vs9DJ8tDX+tWTsRkXkFZOMJ\n", "KVRi+A1sC40=\n"));
                                sb5.append(i);
                                AbstractC0728.m8662(strM84911, AbstractC0343.m8497("O8p1fg==\n", "G6MbXucAu8A=\n", sb5, str2), null, null);
                            } else {
                                String strSubstring2 = strM86011.substring(1, strM86011.length() - 1);
                                arrayList.add(c1775s.m8418(strSubstring2));
                                length = strSubstring2.length();
                                length2 = length + 2;
                                i += length2;
                            }
                        }
                    }
                    if (cCharAt2 == '=') {
                        arrayList.add(c1775s.m8421(cCharAt, cCharAt2));
                        i += 2;
                    } else {
                        arrayList.add(!c1775s.f506 ? new r(EnumC1772q.f486, String.valueOf(cCharAt)) : c1775s.f505[cCharAt]);
                    }
                }
                arrayList.add(!c1775s.f506 ? new r(EnumC1772q.f486, String.valueOf(cCharAt)) : c1775s.f505[cCharAt]);
            }
            i = i2;
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8606(Pattern pattern, String str, int i) {
        Matcher matcher;
        if (f2230) {
            Map map = (Map) f2231.get();
            matcher = (Matcher) map.get(pattern);
            if (matcher == null) {
                matcher = pattern.matcher("");
                map.put(pattern, matcher);
            }
            matcher.reset(str);
        } else {
            matcher = pattern.matcher(str);
        }
        matcher.region(i, str.length());
        if (matcher.find()) {
            return str.substring(matcher.start(), matcher.end());
        }
        return null;
    }
}
