package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0738 {

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static Field f2529;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static Field f2530;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static Field f2531;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static Field f2532;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static Object f2533;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static Class f2534;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f2546 = StringFog.decrypt("MMYoJFp2meYFwSAl\n", "cahMVjUf/bM=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f2545 = StringFog.decrypt("V9YApdcGK6p28B2S3gEtsw==\n", "Oplu5rtvSME=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f2544 = StringFog.decrypt("c7/YDfa5bApSmcUt/KJqEA==\n", "HvC2WZnMD2I=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f2543 = StringFog.decrypt("IY6IQAjp\n", "TNjhJX+ajzA=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f2542 = StringFog.decrypt("s7ZmzDGNofiss2HZKg==\n", "3voPv0Xoz50=\n");

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f2541 = StringFog.decrypt("cSR/XYB8fYR4Im4=\n", "FkELFO4PCeU=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f2540 = StringFog.decrypt("Xv3MC616b81V7A==\n", "OZi4T8gcDrg=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f2539 = StringFog.decrypt("cPQfE7j/hUZ0yAU/uPyY\n", "HbtxWtaZ6go=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f2538 = StringFog.decrypt("ynDyTg4t6KbCS/ViDwzxudNa8mgT\n", "pz+cDWFAmMo=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f2537 = StringFog.decrypt("d1JBAMeHHtloeEsc3JEa3XR4XQ==\n", "Gh0vULXibrg=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f2536 = StringFog.decrypt("sxP2B5EMDNuxMeg4kR0C1Lcv7DGaDBU=\n", "3lyYVPRpZ5g=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f2535 = StringFog.decrypt("1xuCBpH1FqnbL4IQ\n", "ulbnYviURsU=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static View.OnTouchListener m8667(View view) {
        try {
            Object objM8669 = m8669(view);
            if (objM8669 == null) {
                return null;
            }
            Class<?> cls = objM8669.getClass();
            synchronized (AbstractC0202.class) {
                if (f2529 == null) {
                    f2529 = m8670(cls, f2544);
                }
            }
            return (View.OnTouchListener) f2529.get(objM8669);
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static View.OnClickListener m8668(View view) {
        try {
            Object objM8669 = m8669(view);
            if (objM8669 == null) {
                return null;
            }
            Class<?> cls = objM8669.getClass();
            synchronized (AbstractC0202.class) {
                if (f2530 == null) {
                    f2530 = m8670(cls, f2545);
                }
            }
            return (View.OnClickListener) f2530.get(objM8669);
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8671() {
        try {
            if (f2534 == null || f2533 == null) {
                Class<?> cls = Class.forName(StringFog.decrypt("c+G8uvBFZWZk5r2/sXtoJnbgr4X+QmAvd/2fpPBOYCQ=\n", "Eo/YyJ8sAUg=\n"));
                f2534 = cls;
                f2533 = cls.getMethod(f2541, null).invoke(null, null);
            }
            Class cls2 = f2534;
            Object obj = f2533;
            if (f2532 == null) {
                Field declaredField = cls2.getDeclaredField(f2543);
                f2532 = declaredField;
                declaredField.setAccessible(true);
            }
            Object obj2 = f2532.get(obj);
            if (obj2 instanceof List) {
                return new ArrayList((List) obj2);
            }
            if (obj2 instanceof View[]) {
                return new ArrayList(Arrays.asList((View[]) obj2));
            }
            return new ArrayList();
        } catch (Throwable th) {
            AbstractC0323.m8471(f2546, StringFog.decrypt("w08lBIY0657yST4FkzTbkuhZOBy5deKa4VglS4J96Yz1B3c=\n", "hj1Xa/QUjPs=\n") + th.getLocalizedMessage());
            return new ArrayList();
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8672(MediaPlayer mediaPlayer, InterfaceC0186 interfaceC0186) {
        try {
            Field fieldM8670 = m8670(MediaPlayer.class, f2539);
            MediaPlayer.OnInfoListener onInfoListener = (MediaPlayer.OnInfoListener) fieldM8670.get(mediaPlayer);
            if (onInfoListener instanceof C0184) {
                return;
            }
            fieldM8670.set(mediaPlayer, new C0184(onInfoListener, interfaceC0186));
        } catch (Exception e) {
            AbstractC1104.m8887(f2546, StringFog.decrypt("6PeblIoDn1at94yLlEKVXcLrpJ6cSpdx4+OGt5FQgl3j4Js=\n", "jYXp+/gj9jg=\n"), (Throwable) e, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8673(MediaPlayer mediaPlayer, InterfaceC0197 interfaceC0197) {
        try {
            Field fieldM8670 = m8670(MediaPlayer.class, f2538);
            MediaPlayer.OnCompletionListener onCompletionListener = (MediaPlayer.OnCompletionListener) fieldM8670.get(mediaPlayer);
            if (onCompletionListener instanceof C0195) {
                return;
            }
            fieldM8670.set(mediaPlayer, new C0195(onCompletionListener, interfaceC0197));
        } catch (Exception e) {
            AbstractC1104.m8887(f2546, StringFog.decrypt("ZMDZB4RWqSshwM4YmhejIE7c5g2SH6EGbt/bBJMCqSpv/sIbghOuIHM=\n", "AbKraPZ2wEU=\n"), (Throwable) e, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8675(MediaPlayer mediaPlayer, InterfaceC1111 interfaceC1111) {
        try {
            Field fieldM8670 = m8670(MediaPlayer.class, f2537);
            MediaPlayer.OnPreparedListener onPreparedListener = (MediaPlayer.OnPreparedListener) fieldM8670.get(mediaPlayer);
            if (onPreparedListener instanceof C1088) {
                return;
            }
            fieldM8670.set(mediaPlayer, new C1088(onPreparedListener, interfaceC1111));
        } catch (Exception e) {
            AbstractC1104.m8887(f2546, StringFog.decrypt("hF3iD/dCwdDBXfUQ6QPL265B3QXhC8nuk0rgAfcHzPKIXOQF6wfa\n", "4S+QYIViqL4=\n"), (Throwable) e, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8674(MediaPlayer mediaPlayer, InterfaceC1068 interfaceC1068) {
        try {
            Field fieldM8670 = m8670(MediaPlayer.class, f2536);
            MediaPlayer.OnSeekCompleteListener onSeekCompleteListener = (MediaPlayer.OnSeekCompleteListener) fieldM8670.get(mediaPlayer);
            if (onSeekCompleteListener instanceof C1062) {
                return;
            }
            fieldM8670.set(mediaPlayer, new C1062(onSeekCompleteListener, interfaceC1068));
        } catch (Exception e) {
            AbstractC1104.m8887(f2546, StringFog.decrypt("qSWiaFf1CpTsJbV3SbQAn4M5g2JAviCVoSe8YlGwL5O/I7VpQKc=\n", "zFfQByXVY/o=\n"), (Throwable) e, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Object m8669(View view) {
        try {
            synchronized (AbstractC0202.class) {
                if (f2531 == null) {
                    f2531 = m8670(View.class, f2542);
                }
            }
            return f2531.get(view);
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Field m8670(Class cls, String str) {
        try {
            Field declaredField = cls.getDeclaredField(str);
            declaredField.setAccessible(true);
            return declaredField;
        } catch (Exception e) {
            AbstractC1104.m8887(f2546, StringFog.decrypt("k+CQZHOv38zW9Yd/RerVzpfgh29H5tPOkg==\n", "9pLiCwGPtqI=\n"), (Throwable) e, false);
            return null;
        }
    }
}
