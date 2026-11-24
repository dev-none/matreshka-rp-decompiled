package com.pushwoosh.inapp.ui;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pushwoosh.internal.utils.PWLog;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.silentauth.SilentAuthInfo;
import io.appmetrica.analytics.impl.H2;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class g0 {
    /* JADX WARN: Code duplicated, block: B:36:0x007b  */
    /* JADX WARN: Code duplicated, block: B:56:0x00c8  */
    public static s0 a(String str, boolean z) {
        r0 r0VarA;
        r0 r0Var;
        JSONObject jSONObject;
        String string;
        String str2;
        Long lValueOf = null;
        if (str != null && str.length() != 0) {
            try {
                JSONObject jSONObject2 = new JSONObject(str);
                Object objOpt = jSONObject2.opt("displayType");
                String str3 = objOpt instanceof String ? (String) objOpt : null;
                if (str3 != null) {
                    Locale ROOT = Locale.ROOT;
                    Intrinsics.checkNotNullExpressionValue(ROOT, "ROOT");
                    String lowerCase = str3.toLowerCase(ROOT);
                    Intrinsics.checkNotNullExpressionValue(lowerCase, "this as java.lang.String).toLowerCase(locale)");
                    if (lowerCase != null) {
                        JSONObject block = jSONObject2.optJSONObject(lowerCase);
                        if (block == null) {
                            r0Var = null;
                        } else {
                            if (z && block.has("dark") && !block.isNull("dark")) {
                                Set set = i0.f5131a;
                                Intrinsics.checkNotNullParameter(block, "block");
                                Object objOpt2 = block.opt("dark");
                                JSONObject jSONObject3 = objOpt2 instanceof JSONObject ? (JSONObject) objOpt2 : null;
                                if (jSONObject3 == null || (string = block.toString()) == null) {
                                    jSONObject = null;
                                } else {
                                    jSONObject = new JSONObject(string);
                                    jSONObject.remove("dark");
                                    if (!i0.a(jSONObject, jSONObject3)) {
                                        jSONObject = null;
                                    }
                                }
                                if (jSONObject == null || (r0VarA = a(jSONObject, lowerCase)) == null) {
                                    PWLog.warn("InAppConfigParser", "native-config: 'dark' overlay is invalid, showing the light variant");
                                    r0VarA = a(block, lowerCase);
                                }
                            } else {
                                r0VarA = a(block, lowerCase);
                            }
                            r0Var = r0VarA;
                        }
                        if (r0Var == null) {
                            PWLog.warn("InAppConfigParser", "native-config: '" + lowerCase + "' config is invalid, not shown");
                            return null;
                        }
                        if (!jSONObject2.has("inAppId") || jSONObject2.isNull("inAppId")) {
                            str2 = null;
                        } else {
                            String strOptString = jSONObject2.optString("inAppId", "");
                            if (strOptString.length() == 0) {
                                str2 = null;
                            } else {
                                str2 = strOptString;
                            }
                        }
                        Double dB = h0.b(jSONObject2, "maxDisplays");
                        Integer numValueOf = dB != null ? Integer.valueOf((int) dB.doubleValue()) : null;
                        Double dB2 = h0.b(jSONObject2, "cooldown");
                        Long lValueOf2 = dB2 != null ? Long.valueOf((long) dB2.doubleValue()) : null;
                        Double dB3 = h0.b(jSONObject2, "expireDate");
                        if (dB3 != null) {
                            lValueOf = Long.valueOf((long) dB3.doubleValue());
                        } else {
                            Double dB4 = h0.b(jSONObject2, SilentAuthInfo.KEY_TTL);
                            if (dB4 != null && dB4.doubleValue() > 0.0d) {
                                lValueOf = Long.valueOf((System.currentTimeMillis() / ((long) 1000)) + ((long) dB4.doubleValue()));
                            }
                        }
                        return new s0(str2, r0Var, numValueOf, lValueOf2, lValueOf, str);
                    }
                }
            } catch (Exception unused) {
            }
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:28:0x007c  */
    public static ArrayList b(JSONObject jSONObject) {
        c0 c0Var;
        Integer numA;
        Integer numA2;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS);
        if (jSONArrayOptJSONArray == null) {
            PWLog.warn("InAppConfigParser", "native-config: 'buttons' is missing or not an array");
            jSONArrayOptJSONArray = null;
        }
        if (jSONArrayOptJSONArray == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(jSONArrayOptJSONArray.length());
        int length = jSONArrayOptJSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject == null) {
                return null;
            }
            k1 k1VarC = c(h0.c(jSONObjectOptJSONObject, "text"));
            if (k1VarC == null || (numA = h0.a(jSONObjectOptJSONObject, H2.g)) == null) {
                c0Var = null;
            } else {
                int iIntValue = numA.intValue();
                JSONObject jSONObjectC = h0.c(jSONObjectOptJSONObject, "border");
                if (jSONObjectC == null || (numA2 = h0.a(jSONObjectC, TtmlNode.ATTR_TTS_COLOR)) == null) {
                    c0Var = null;
                } else {
                    int iIntValue2 = numA2.intValue();
                    Double dE = h0.e(jSONObjectC, "radius");
                    if (dE != null) {
                        double dDoubleValue = dE.doubleValue();
                        x xVarA = a(h0.c(jSONObjectOptJSONObject, HandleInvocationsFromAdViewer.KEY_ACTION));
                        if (xVarA == null) {
                            c0Var = null;
                        } else {
                            c0Var = new c0(k1VarC, iIntValue, iIntValue2, (float) dDoubleValue, xVarA);
                        }
                    } else {
                        c0Var = null;
                    }
                }
            }
            if (c0Var == null) {
                return null;
            }
            arrayList.add(c0Var);
        }
        return arrayList;
    }

    public static k1 c(JSONObject jSONObject) {
        String strF;
        Integer numA;
        if (jSONObject == null || (strF = h0.f(jSONObject, "text")) == null || (numA = h0.a(jSONObject, TtmlNode.ATTR_TTS_COLOR)) == null) {
            return null;
        }
        return new k1(strF, numA.intValue());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:110:0x015a  */
    /* JADX WARN: Code duplicated, block: B:158:0x01e7  */
    /* JADX WARN: Code duplicated, block: B:206:0x0273  */
    /* JADX WARN: Code duplicated, block: B:220:0x02a0  */
    /* JADX WARN: Code duplicated, block: B:294:0x0398  */
    /* JADX WARN: Code duplicated, block: B:310:0x03cf  */
    /* JADX WARN: Code duplicated, block: B:61:0x00ce  */
    public static r0 a(JSONObject jSONObject, String str) {
        j2 j2Var;
        a aVar;
        f fVar;
        String str2;
        k1 k1Var;
        k1 k1Var2;
        Double dE;
        g gVar;
        q1 q1Var;
        String str3;
        k1 k1Var3;
        k1 k1Var4;
        a2 a2Var;
        String str4;
        k1 k1Var5;
        k1 k1Var6;
        q qVar;
        Integer numA;
        String str5;
        k1 k1Var7;
        k1 k1Var8;
        q2 q2Var;
        ArrayList arrayListB;
        String str6;
        String str7;
        k1 k1Var9;
        k1 k1Var10;
        switch (str) {
            case "stories":
                Boolean boolD = h0.d(jSONObject, "showClose");
                if (boolD != null) {
                    boolean zBooleanValue = boolD.booleanValue();
                    Boolean boolD2 = h0.d(jSONObject, "loop");
                    if (boolD2 != null) {
                        boolean zBooleanValue2 = boolD2.booleanValue();
                        ArrayList arrayListA = h0.a(jSONObject, f0.f5121a);
                        if (arrayListA == null) {
                            j2Var = null;
                        } else {
                            j2Var = new j2(arrayListA, zBooleanValue2, zBooleanValue);
                        }
                    } else {
                        j2Var = null;
                    }
                } else {
                    j2Var = null;
                }
                if (j2Var != null) {
                    return new p0(j2Var);
                }
            case "banner":
                Boolean boolD3 = h0.d(jSONObject, "showClose");
                if (boolD3 != null) {
                    boolean zBooleanValue3 = boolD3.booleanValue();
                    String strF = h0.f(jSONObject, "position");
                    if (strF == null) {
                        aVar = null;
                    } else {
                        Locale ROOT = Locale.ROOT;
                        Intrinsics.checkNotNullExpressionValue(ROOT, "ROOT");
                        String lowerCase = strF.toLowerCase(ROOT);
                        Intrinsics.checkNotNullExpressionValue(lowerCase, "this as java.lang.String).toLowerCase(locale)");
                        if (Intrinsics.areEqual(lowerCase, RRWebVideoEvent.JsonKeys.TOP)) {
                            fVar = f.TOP;
                        } else {
                            if (Intrinsics.areEqual(lowerCase, "bottom")) {
                                fVar = f.BOTTOM;
                            } else {
                                PWLog.warn("InAppConfigParser", "native-config: banner 'position' must be top|bottom");
                            }
                            aVar = null;
                        }
                        f fVar2 = fVar;
                        Integer numA2 = h0.a(jSONObject, H2.g);
                        if (numA2 != null) {
                            int iIntValue = numA2.intValue();
                            x xVarA = a(h0.c(jSONObject, HandleInvocationsFromAdViewer.KEY_ACTION));
                            if (xVarA != null) {
                                if (!jSONObject.has("image") || jSONObject.isNull("image")) {
                                    str2 = null;
                                } else {
                                    String strF2 = h0.f(jSONObject, "image");
                                    if (strF2 == null) {
                                        aVar = null;
                                    } else {
                                        str2 = strF2;
                                    }
                                }
                                if (!jSONObject.has("title") || jSONObject.isNull("title")) {
                                    k1Var = null;
                                } else {
                                    k1 k1VarC = c(jSONObject.optJSONObject("title"));
                                    if (k1VarC == null) {
                                        aVar = null;
                                    } else {
                                        k1Var = k1VarC;
                                    }
                                }
                                if (!jSONObject.has("message") || jSONObject.isNull("message")) {
                                    k1Var2 = null;
                                } else {
                                    k1 k1VarC2 = c(jSONObject.optJSONObject("message"));
                                    if (k1VarC2 == null) {
                                        aVar = null;
                                    } else {
                                        k1Var2 = k1VarC2;
                                    }
                                }
                                if (!jSONObject.has("autoDismiss") || jSONObject.isNull("autoDismiss")) {
                                    dE = null;
                                } else {
                                    dE = h0.e(jSONObject, "autoDismiss");
                                    if (dE != null) {
                                        if (dE.doubleValue() <= 0.0d) {
                                            dE = null;
                                        }
                                        if (dE != null) {
                                        }
                                    }
                                    aVar = null;
                                }
                                aVar = new a(fVar2, str2, k1Var, k1Var2, iIntValue, xVarA, (long) ((dE != null ? dE.doubleValue() : 0.0d) * ((double) 1000)), zBooleanValue3);
                            } else {
                                aVar = null;
                            }
                        } else {
                            aVar = null;
                        }
                    }
                } else {
                    aVar = null;
                }
                if (aVar != null) {
                    return new k0(aVar);
                }
                return null;
            case "carousel":
                Boolean boolD4 = h0.d(jSONObject, "showClose");
                if (boolD4 != null) {
                    boolean zBooleanValue4 = boolD4.booleanValue();
                    ArrayList arrayListA2 = h0.a(jSONObject, e0.f5118a);
                    if (arrayListA2 == null) {
                        gVar = null;
                    } else {
                        gVar = new g(arrayListA2, zBooleanValue4);
                    }
                } else {
                    gVar = null;
                }
                if (gVar != null) {
                    return new l0(gVar);
                }
                return null;
            case "modal":
                Boolean boolD5 = h0.d(jSONObject, "showClose");
                if (boolD5 != null) {
                    boolean zBooleanValue5 = boolD5.booleanValue();
                    Boolean boolD6 = h0.d(jSONObject, "dimBackground");
                    if (boolD6 != null) {
                        boolean zBooleanValue6 = boolD6.booleanValue();
                        Integer numA3 = h0.a(jSONObject, H2.g);
                        if (numA3 != null) {
                            int iIntValue2 = numA3.intValue();
                            ArrayList arrayListB2 = b(jSONObject);
                            if (arrayListB2 != null) {
                                if (!jSONObject.has("image") || jSONObject.isNull("image")) {
                                    str3 = null;
                                } else {
                                    String strF3 = h0.f(jSONObject, "image");
                                    if (strF3 == null) {
                                        q1Var = null;
                                    } else {
                                        str3 = strF3;
                                    }
                                }
                                if (!jSONObject.has("title") || jSONObject.isNull("title")) {
                                    k1Var3 = null;
                                } else {
                                    k1 k1VarC3 = c(jSONObject.optJSONObject("title"));
                                    if (k1VarC3 == null) {
                                        q1Var = null;
                                    } else {
                                        k1Var3 = k1VarC3;
                                    }
                                }
                                if (!jSONObject.has("message") || jSONObject.isNull("message")) {
                                    k1Var4 = null;
                                } else {
                                    k1 k1VarC4 = c(jSONObject.optJSONObject("message"));
                                    if (k1VarC4 == null) {
                                        q1Var = null;
                                    } else {
                                        k1Var4 = k1VarC4;
                                    }
                                }
                                q1Var = new q1(iIntValue2, k1Var3, k1Var4, str3, zBooleanValue5, arrayListB2, zBooleanValue6);
                            } else {
                                q1Var = null;
                            }
                        } else {
                            q1Var = null;
                        }
                    } else {
                        q1Var = null;
                    }
                } else {
                    q1Var = null;
                }
                if (q1Var != null) {
                    return new n0(q1Var);
                }
                return null;
            case "sheet":
                Boolean boolD7 = h0.d(jSONObject, "showClose");
                if (boolD7 != null) {
                    boolean zBooleanValue7 = boolD7.booleanValue();
                    Boolean boolD8 = h0.d(jSONObject, "dimBackground");
                    if (boolD8 != null) {
                        boolean zBooleanValue8 = boolD8.booleanValue();
                        Integer numA4 = h0.a(jSONObject, H2.g);
                        if (numA4 != null) {
                            int iIntValue3 = numA4.intValue();
                            ArrayList arrayListB3 = b(jSONObject);
                            if (arrayListB3 != null) {
                                if (!jSONObject.has("image") || jSONObject.isNull("image")) {
                                    str4 = null;
                                } else {
                                    String strF4 = h0.f(jSONObject, "image");
                                    if (strF4 == null) {
                                        a2Var = null;
                                    } else {
                                        str4 = strF4;
                                    }
                                }
                                if (!jSONObject.has("title") || jSONObject.isNull("title")) {
                                    k1Var5 = null;
                                } else {
                                    k1 k1VarC5 = c(jSONObject.optJSONObject("title"));
                                    if (k1VarC5 == null) {
                                        a2Var = null;
                                    } else {
                                        k1Var5 = k1VarC5;
                                    }
                                }
                                if (!jSONObject.has("message") || jSONObject.isNull("message")) {
                                    k1Var6 = null;
                                } else {
                                    k1 k1VarC6 = c(jSONObject.optJSONObject("message"));
                                    if (k1VarC6 == null) {
                                        a2Var = null;
                                    } else {
                                        k1Var6 = k1VarC6;
                                    }
                                }
                                a2Var = new a2(iIntValue3, k1Var5, k1Var6, str4, zBooleanValue7, arrayListB3, zBooleanValue8);
                            } else {
                                a2Var = null;
                            }
                        } else {
                            a2Var = null;
                        }
                    } else {
                        a2Var = null;
                    }
                } else {
                    a2Var = null;
                }
                if (a2Var != null) {
                    return new o0(a2Var);
                }
                return null;
            case "fullscreen":
                Boolean boolD9 = h0.d(jSONObject, "showClose");
                if (boolD9 != null) {
                    boolean zBooleanValue9 = boolD9.booleanValue();
                    JSONObject jSONObjectC = h0.c(jSONObject, "cover");
                    if (jSONObjectC == null || (numA = h0.a(jSONObjectC, H2.g)) == null) {
                        qVar = null;
                    } else {
                        int iIntValue4 = numA.intValue();
                        if (!jSONObjectC.has("image") || jSONObjectC.isNull("image")) {
                            str5 = null;
                        } else {
                            String strF5 = h0.f(jSONObjectC, "image");
                            if (strF5 == null) {
                                qVar = null;
                            } else {
                                str5 = strF5;
                            }
                        }
                        ArrayList arrayListB4 = b(jSONObject);
                        if (arrayListB4 != null) {
                            if (!jSONObject.has("title") || jSONObject.isNull("title")) {
                                k1Var7 = null;
                            } else {
                                k1 k1VarC7 = c(jSONObject.optJSONObject("title"));
                                if (k1VarC7 == null) {
                                    qVar = null;
                                } else {
                                    k1Var7 = k1VarC7;
                                }
                            }
                            if (!jSONObject.has("message") || jSONObject.isNull("message")) {
                                k1Var8 = null;
                            } else {
                                k1 k1VarC8 = c(jSONObject.optJSONObject("message"));
                                if (k1VarC8 == null) {
                                    qVar = null;
                                } else {
                                    k1Var8 = k1VarC8;
                                }
                            }
                            qVar = new q(str5, iIntValue4, k1Var7, k1Var8, arrayListB4, zBooleanValue9);
                        } else {
                            qVar = null;
                        }
                    }
                } else {
                    qVar = null;
                }
                if (qVar != null) {
                    return new m0(qVar);
                }
                return null;
            case "video":
                Boolean boolD10 = h0.d(jSONObject, "showClose");
                if (boolD10 != null) {
                    boolean zBooleanValue10 = boolD10.booleanValue();
                    Boolean boolD11 = h0.d(jSONObject, "loop");
                    if (boolD11 != null) {
                        boolean zBooleanValue11 = boolD11.booleanValue();
                        Boolean boolD12 = h0.d(jSONObject, "muted");
                        if (boolD12 != null) {
                            boolean zBooleanValue12 = boolD12.booleanValue();
                            String strF6 = h0.f(jSONObject, "url");
                            if (strF6 == null || (arrayListB = b(jSONObject)) == null) {
                                q2Var = null;
                            } else {
                                if (!jSONObject.has("poster") || jSONObject.isNull("poster")) {
                                    str6 = null;
                                } else {
                                    String strF7 = h0.f(jSONObject, "poster");
                                    if (strF7 == null) {
                                        q2Var = null;
                                    } else {
                                        str6 = strF7;
                                    }
                                }
                                if (!jSONObject.has("fallback") || jSONObject.isNull("fallback")) {
                                    str7 = null;
                                } else {
                                    String strF8 = h0.f(jSONObject, "fallback");
                                    if (strF8 == null) {
                                        q2Var = null;
                                    } else {
                                        str7 = strF8;
                                    }
                                }
                                if (!jSONObject.has("title") || jSONObject.isNull("title")) {
                                    k1Var9 = null;
                                } else {
                                    k1 k1VarC9 = c(jSONObject.optJSONObject("title"));
                                    if (k1VarC9 == null) {
                                        q2Var = null;
                                    } else {
                                        k1Var9 = k1VarC9;
                                    }
                                }
                                if (!jSONObject.has("message") || jSONObject.isNull("message")) {
                                    k1Var10 = null;
                                } else {
                                    k1 k1VarC10 = c(jSONObject.optJSONObject("message"));
                                    if (k1VarC10 == null) {
                                        q2Var = null;
                                    } else {
                                        k1Var10 = k1VarC10;
                                    }
                                }
                                q2Var = new q2(strF6, str6, str7, k1Var9, k1Var10, arrayListB, zBooleanValue11, zBooleanValue12, zBooleanValue10);
                            }
                        } else {
                            q2Var = null;
                        }
                    } else {
                        q2Var = null;
                    }
                } else {
                    q2Var = null;
                }
                if (q2Var != null) {
                    return new q0(q2Var);
                }
                return null;
            default:
                if (str.equals("stories")) {
                    Boolean boolD13 = h0.d(jSONObject, "showClose");
                    if (boolD13 != null) {
                        boolean zBooleanValue13 = boolD13.booleanValue();
                        Boolean boolD14 = h0.d(jSONObject, "loop");
                        if (boolD14 != null) {
                            boolean zBooleanValue14 = boolD14.booleanValue();
                            ArrayList arrayListA3 = h0.a(jSONObject, f0.f5121a);
                            if (arrayListA3 == null) {
                                j2Var = null;
                            } else {
                                j2Var = new j2(arrayListA3, zBooleanValue14, zBooleanValue13);
                            }
                        } else {
                            j2Var = null;
                        }
                    } else {
                        j2Var = null;
                    }
                    if (j2Var != null) {
                        return new p0(j2Var);
                    }
                }
                return null;
        }
    }

    public static x a(JSONObject jSONObject) {
        String strF;
        if (jSONObject == null || (strF = h0.f(jSONObject, "type")) == null) {
            return null;
        }
        Locale ROOT = Locale.ROOT;
        Intrinsics.checkNotNullExpressionValue(ROOT, "ROOT");
        String lowerCase = strF.toLowerCase(ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "this as java.lang.String).toLowerCase(locale)");
        if (Intrinsics.areEqual(lowerCase, "close")) {
            return v.f5171a;
        }
        if (Intrinsics.areEqual(lowerCase, "url")) {
            String strF2 = h0.f(jSONObject, "url");
            if (strF2 != null) {
                return new w(strF2);
            }
            return null;
        }
        PWLog.warn("InAppConfigParser", "native-config: action 'type' must be close|url");
        return null;
    }
}
