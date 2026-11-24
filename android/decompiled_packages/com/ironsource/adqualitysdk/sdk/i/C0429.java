package com.ironsource.adqualitysdk.sdk.i;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;
import android.media.MediaPlayer;
import android.os.SystemClock;
import android.widget.VideoView;
import com.google.common.base.Ascii;
import com.google.common.primitives.SignedBytes;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Array;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import kotlin.io.encoding.Base64;
import okio.Utf8;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.י, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0429 implements InterfaceC0462 {

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f1551 = StringFog.decrypt("GxuBRIiJyB8hEIlM\n", "SHTuKeToim0=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0882 f1564 = new C0882();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C1771p0 f1563 = new C1771p0();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0517 f1562 = new C0517();

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final C0917 f1561 = new C0917();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final C0445 f1560 = new C0445();

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final C0606 f1559 = new C0606();

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final C1137 f1558 = new C1137();

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final C1075 f1557 = new C1075();

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final C0710 f1556 = new C0710();

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final C0914 f1555 = new C0914();

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final C1764m f1554 = new C1764m();

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final C0737 f1553 = new C0737();

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final C0943 f1552 = new C0943();

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:347:0x082b  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        JSONObject jSONObject;
        switch (str.hashCode()) {
            case -2004702861:
                if (str.equals(StringFog.decrypt("aZ7/yunAi4Jvm9XFycqoiGKg89jpwLOOeA==\n", "Cuyaq52l3es=\n"))) {
                    b = 37;
                } else {
                    b = -1;
                }
                break;
            case -2004586504:
                if (str.equals(StringFog.decrypt("jcd2Xq5cOAaR8WNXpHwyJI/OY0aqczQ6i8doV70=\n", "/6IGMs8/XUk=\n"))) {
                    b = 46;
                } else {
                    b = -1;
                }
                break;
            case -1940880443:
                if (str.equals(StringFog.decrypt("BEXCL1GSNrcXZt8FX5w=\n", "YyC2YDP4U9Q=\n"))) {
                    b = Ascii.DC4;
                } else {
                    b = -1;
                }
                break;
            case -1935452010:
                if (str.equals(StringFog.decrypt("BNS4uqGLEUkA142Fu4g3Qj7TjYmmnA==\n", "baf/4Mj7UiY=\n"))) {
                    b = Ascii.GS;
                } else {
                    b = -1;
                }
                break;
            case -1926335428:
                if (str.equals(StringFog.decrypt("9lAaSOQkGiLlYw9r8ys=\n", "kTVuB4ZOf0E=\n"))) {
                    b = Ascii.NAK;
                } else {
                    b = -1;
                }
                break;
            case -1862527602:
                if (str.equals(StringFog.decrypt("u8Bmt4f6uzm50lGMi/2DJA==\n", "3KUS4OKY7VA=\n"))) {
                    b = 57;
                } else {
                    b = -1;
                }
                break;
            case -1811057601:
                if (str.equals(StringFog.decrypt("uB9/wLOuuomlDkHwqbI=\n", "y3oLg8bcyOw=\n"))) {
                    b = 3;
                } else {
                    b = -1;
                }
                break;
            case -1784213698:
                if (str.equals(StringFog.decrypt("uN0EhZEMedi80DyjjCxzw7rK\n", "37hwyv9YFq0=\n"))) {
                    b = 39;
                } else {
                    b = -1;
                }
                break;
            case -1759122910:
                if (str.equals(StringFog.decrypt("WiytUI+3KTxGBLhYh7UcAU05vE6LsAAaWz24Uoum\n", "KEndPO7UTHM=\n"))) {
                    b = 47;
                } else {
                    b = -1;
                }
                break;
            case -1673354837:
                if (str.equals(StringFog.decrypt("GdOveZqNqxUtwqlWnZg=\n", "frbbP/P/2GE=\n"))) {
                    b = Ascii.DLE;
                } else {
                    b = -1;
                }
                break;
            case -1654145783:
                if (str.equals(StringFog.decrypt("jikZsAEd2h6MCAiCBjvKHp0lAp8=\n", "6Uxt8WVJo24=\n"))) {
                    b = 80;
                } else {
                    b = -1;
                }
                break;
            case -1475737971:
                if (str.equals(StringFog.decrypt("mcmH8X7FteWF6IHMdemw\n", "67zpvhCI1Iw=\n"))) {
                    b = 98;
                } else {
                    b = -1;
                }
                break;
            case -1424907981:
                if (str.equals(StringFog.decrypt("4BVVeIgbrTHk\n", "gWcnGfFP1EE=\n"))) {
                    b = 95;
                } else {
                    b = -1;
                }
                break;
            case -1412269250:
                if (str.equals(StringFog.decrypt("ZO0LdoETpExL9h1jkBiVfA==\n", "B59uF/V28A4=\n"))) {
                    b = 52;
                } else {
                    b = -1;
                }
                break;
            case -1333092465:
                if (str.equals(StringFog.decrypt("QHHVPJkvh0pjcdksjB2HXU563A==\n", "JxS7WetO8y8=\n"))) {
                    b = Ascii.CAN;
                } else {
                    b = -1;
                }
                break;
            case -1296960936:
                if (str.equals(StringFog.decrypt("GCssOTpldAwtKz8aK1pmDBwm\n", "f05Yf1MXB3g=\n"))) {
                    b = Ascii.FS;
                } else {
                    b = -1;
                }
                break;
            case -1296887564:
                if (str.equals(StringFog.decrypt("NZdIbN7EEdcli3h71swGwCGKTlvczgfKNpxI\n", "QPk6CbmtYqM=\n"))) {
                    b = 106;
                } else {
                    b = -1;
                }
                break;
            case -1274492040:
                if (str.equals(StringFog.decrypt("Ws2WY+ZW\n", "PKT6F4Mk0bw=\n"))) {
                    b = 113;
                } else {
                    b = -1;
                }
                break;
            case -1253789331:
                if (str.equals(StringFog.decrypt("dLkQfwgjenpErhh3HzR+e3KOEnUePmltdA==\n", "Btx3FntXHwg=\n"))) {
                    b = 105;
                } else {
                    b = -1;
                }
                break;
            case -1242814655:
                if (str.equals(StringFog.decrypt("u4B2fUiH0v+/kW1McYzO6bWKbA==\n", "3OUCPifpvJo=\n"))) {
                    b = 77;
                } else {
                    b = -1;
                }
                break;
            case -1214823651:
                if (str.equals(StringFog.decrypt("JW5F0B95BtA2Zk3zAG80xzluWg==\n", "Vwsov2kcQKI=\n"))) {
                    b = 33;
                } else {
                    b = -1;
                }
                break;
            case -1198560170:
                if (str.equals(StringFog.decrypt("OPcHZym0NgEx/RBcA5I1Dib9F2cCow4IOv0Vdw==\n", "SJh0E23RWmA=\n"))) {
                    b = 103;
                } else {
                    b = -1;
                }
                break;
            case -1145074375:
                if (str.equals(StringFog.decrypt("CCHJTQr0gIkPOs18EvC0iRkcwnwM9L2NGTbIYBfiuYkFNt4=\n", "a1OsLH6Rzew=\n"))) {
                    b = 40;
                } else {
                    b = -1;
                }
                break;
            case -1124602405:
                if (str.equals(StringFog.decrypt("Zgv7IiWjStZoA+oJKYddxWga\n", "AW6PZ13TL6Q=\n"))) {
                    b = 89;
                } else {
                    b = -1;
                }
                break;
            case -1071201617:
                if (str.equals(StringFog.decrypt("l4hLWLCMZkKggV5ssJo=\n", "8O0/FdXoDyM=\n"))) {
                    b = 109;
                } else {
                    b = -1;
                }
                break;
            case -1029444991:
                if (str.equals(StringFog.decrypt("SjGCCKnBLpVWGZcAocMItVUkngG8yyS0dD2BEK3MLqg=\n", "OFTyZMiiS9o=\n"))) {
                    b = 49;
                } else {
                    b = -1;
                }
                break;
            case -1029356152:
                if (str.equals(StringFog.decrypt("FaV4LdbreS4ctFoH3PI=\n", "csAMbrmFDUs=\n"))) {
                    b = 7;
                } else {
                    b = -1;
                }
                break;
            case -1013936139:
                if (str.equals(StringFog.decrypt("FRdHNItMAdkcBnAYkFAW3wYdQTmfUxY=\n", "cnIzd/4+c7w=\n"))) {
                    b = 81;
                } else {
                    b = -1;
                }
                break;
            case -997695964:
                if (str.equals(StringFog.decrypt("n6BFh+v8DlWWqlK8wdQDXYGbXoHK+AY=\n", "788286+ZYjQ=\n"))) {
                    b = 100;
                } else {
                    b = -1;
                }
                break;
            case -992018155:
                if (str.equals(StringFog.decrypt("SHrpbDJb0vFGcvhHPmjY7Ul2+g==\n", "Lx+dKUort4M=\n"))) {
                    b = 86;
                } else {
                    b = -1;
                }
                break;
            case -952854909:
                if (str.equals(StringFog.decrypt("hPR6k80KB3ae7k6WzQ==\n", "7Ycs+qh9UR8=\n"))) {
                    b = 5;
                } else {
                    b = -1;
                }
                break;
            case -924373867:
                if (str.equals(StringFog.decrypt("9UURzv93f2fgUgbb4mFbcd9ZEsA=\n", "ljd0r4sSPgM=\n"))) {
                    b = 69;
                } else {
                    b = -1;
                }
                break;
            case -899502102:
                if (str.equals(StringFog.decrypt("c2Cd2xOslVZFc5bRLQ==\n", "AAXzv1nf+jg=\n"))) {
                    b = 60;
                } else {
                    b = -1;
                }
                break;
            case -834290483:
                if (str.equals(StringFog.decrypt("DgB2AW1D91IJG3IwdUfDUh89fTN8Q9F0Ah9jDHxS33sEAWcFd0PI\n", "bXITYBkmujc=\n"))) {
                    b = 43;
                } else {
                    b = -1;
                }
                break;
            case -788426345:
                if (str.equals(StringFog.decrypt("2CgeJEmKqE/NJAQCVg==\n", "v01qZSXm+zs=\n"))) {
                    b = Ascii.SUB;
                } else {
                    b = -1;
                }
                break;
            case -764989270:
                if (str.equals(StringFog.decrypt("PtgKjnXjIh85ww6/becWHy/lAaZv4AA2NNkbim/jHQ==\n", "Xapv7wGGb3o=\n"))) {
                    b = 41;
                } else {
                    b = -1;
                }
                break;
            case -678635926:
                if (str.equals(StringFog.decrypt("wrV8kFJJIA==\n", "pNoO1TMqSDs=\n"))) {
                    b = 112;
                } else {
                    b = -1;
                }
                break;
            case -633198692:
                if (str.equals(StringFog.decrypt("r5RtI2eTKw+zu2IybIgH\n", "wPYHRgTnY24=\n"))) {
                    b = 96;
                } else {
                    b = -1;
                }
                break;
            case -622788386:
                if (str.equals(StringFog.decrypt("vmqIE+aXf0utfA==\n", "2Q/8XIT9Gig=\n"))) {
                    b = 19;
                } else {
                    b = -1;
                }
                break;
            case -588814953:
                if (str.equals(StringFog.decrypt("t334iq3UwzCzbOO7\n", "0BiMycK6rVU=\n"))) {
                    b = 62;
                } else {
                    b = -1;
                }
                break;
            case -525192167:
                if (str.equals(StringFog.decrypt("2RyLg/Os/gbfD5qL8az0GtwB\n", "um7u4ofJvXQ=\n"))) {
                    b = 68;
                } else {
                    b = -1;
                }
                break;
            case -502936072:
                if (str.equals(StringFog.decrypt("ASc6MAMCqjEPLysbDya9Ig82PQ==\n", "ZkJOdXtyz0M=\n"))) {
                    b = 88;
                } else {
                    b = -1;
                }
                break;
            case -429121350:
                if (str.equals(StringFog.decrypt("LkEcf/4RFvgsQRp2zhEj3zhaFXrvBg==\n", "TTN5Hop0RZ0=\n"))) {
                    b = 17;
                } else {
                    b = -1;
                }
                break;
            case -264400535:
                if (str.equals(StringFog.decrypt("GnPFtsaF86IGVdmzxI3ahBti0LTClA==\n", "aBa12qfmlu0=\n"))) {
                    b = 34;
                } else {
                    b = -1;
                }
                break;
            case -227926573:
                if (str.equals(StringFog.decrypt("RhOhhZQgHIBLM5eThDwBiw==\n", "L2Dy4PdVbuU=\n"))) {
                    b = 92;
                } else {
                    b = -1;
                }
                break;
            case -100132040:
                if (str.equals(StringFog.decrypt("v8x4B8DTm9WewGktzfaB1bD5fiTPyJA=\n", "2KkMQamh6KE=\n"))) {
                    b = Ascii.VT;
                } else {
                    b = -1;
                }
                break;
            case -75121853:
                if (str.equals(StringFog.decrypt("mVL8YHRovg==\n", "/jeINB0F29w=\n"))) {
                    b = SignedBytes.MAX_POWER_OF_TWO;
                } else {
                    b = -1;
                }
                break;
            case -75062501:
                if (str.equals(StringFog.decrypt("pBIzgw/3vg==\n", "w3dH1WaSyRQ=\n"))) {
                    b = 6;
                } else {
                    b = -1;
                }
                break;
            case -39321397:
                if (str.equals(StringFog.decrypt("TQgqwd7HketEGRTxxNs=\n", "Km1egqu1444=\n"))) {
                    b = 2;
                } else {
                    b = -1;
                }
                break;
            case -37751474:
                if (str.equals(StringFog.decrypt("C6v33xnEtigYiOr1F8qg\n", "bM6DkHuu00s=\n"))) {
                    b = Ascii.SYN;
                } else {
                    b = -1;
                }
                break;
            case -20195056:
                if (str.equals(StringFog.decrypt("eiF4DDWJF2h6JkA4FpMOfV87ShwBkhN2\n", "E1I5aGT8dgQ=\n"))) {
                    b = 53;
                } else {
                    b = -1;
                }
                break;
            case 107868:
                if (str.equals(StringFog.decrypt("edcF\n", "FLZ1Pv+hlzo=\n"))) {
                    b = 111;
                } else {
                    b = -1;
                }
                break;
            case 108960:
                if (str.equals(StringFog.decrypt("CDRC\n", "ZlE1HOCEQJU=\n"))) {
                    b = 93;
                } else {
                    b = -1;
                }
                break;
            case 1820707:
                if (str.equals(StringFog.decrypt("oqWQsS6AHFahq7KSKZ8Zaqs=\n", "xcDk91vscAU=\n"))) {
                    b = 73;
                } else {
                    b = -1;
                }
                break;
            case 2656096:
                if (str.equals(StringFog.decrypt("qAkDyduK93+p\n", "22xtrZ74hRA=\n"))) {
                    b = 59;
                } else {
                    b = -1;
                }
                break;
            case 3052374:
                if (str.equals(StringFog.decrypt("bIDULA==\n", "D+i1XuDJIso=\n"))) {
                    b = 94;
                } else {
                    b = -1;
                }
                break;
            case 15484010:
                if (str.equals(StringFog.decrypt("VuG4XZi8VRta4Z90nJFe\n", "P5LrOfP1O08=\n"))) {
                    b = 79;
                } else {
                    b = -1;
                }
                break;
            case 134176114:
                if (str.equals(StringFog.decrypt("x81L1M/6ysbO3H70zuHOytTR\n", "oKg/l7qIuKM=\n"))) {
                    b = 67;
                } else {
                    b = -1;
                }
                break;
            case 151150886:
                if (str.equals(StringFog.decrypt("TobvAw8yqKZJnesWEjiLh0yA6w==\n", "LfSKYntX5cM=\n"))) {
                    b = 71;
                } else {
                    b = -1;
                }
                break;
            case 171861489:
                if (str.equals(StringFog.decrypt("RASxtbjHK8RlCKCftfo+5FoRoA==\n", "I2HF89G1WLA=\n"))) {
                    b = 10;
                } else {
                    b = -1;
                }
                break;
            case 186649624:
                if (str.equals(StringFog.decrypt("36Mxe1oQKjnBoidsYREbAse+J25x\n", "r8xCDxV+aVY=\n"))) {
                    b = 102;
                } else {
                    b = -1;
                }
                break;
            case 190032796:
                if (str.equals(StringFog.decrypt("jbWJRDIVo/6huJNYGxI=\n", "7tr5PXhmzJA=\n"))) {
                    b = 1;
                } else {
                    b = -1;
                }
                break;
            case 317728381:
                if (str.equals(StringFog.decrypt("NuY2GsoEjlIz9SYXyiS8UjvgGQjRDw==\n", "VZRTe75hyjc=\n"))) {
                    b = 76;
                } else {
                    b = -1;
                }
                break;
            case 370758723:
                if (str.equals(StringFog.decrypt("EAwvw5LBzoUSCjT9l+fevBIKLw==\n", "d2lbk/OovNY=\n"))) {
                    b = 108;
                } else {
                    b = -1;
                }
                break;
            case 383897184:
                if (str.equals(StringFog.decrypt("6C2uzW8dYMbMMbrpdxxrwA==\n", "iUnKiBl4DrI=\n"))) {
                    b = Base64.padSymbol;
                } else {
                    b = -1;
                }
                break;
            case 386145701:
                if (str.equals(StringFog.decrypt("rQUMxVQHAqSvGgzoSREws6ASGw==\n", "zndppCBiRNY=\n"))) {
                    b = Ascii.US;
                } else {
                    b = -1;
                }
                break;
            case 398700013:
                if (str.equals(StringFog.decrypt("HgzlQg3w1lMYH/RKD/DcRQ4=\n", "fX6AI3mVlSE=\n"))) {
                    b = 70;
                } else {
                    b = -1;
                }
                break;
            case 404330675:
                if (str.equals(StringFog.decrypt("GAs6+BVhMlQPETD9JWEZcw4QM/0Edg==\n", "e3lfmWEEfzE=\n"))) {
                    b = Ascii.SI;
                } else {
                    b = -1;
                }
                break;
            case 413143991:
                if (str.equals(StringFog.decrypt("HaYmgvkzqewOlTOh7jy/\n", "esNSzZtZzI8=\n"))) {
                    b = Ascii.ETB;
                } else {
                    b = -1;
                }
                break;
            case 421306799:
                if (str.equals(StringFog.decrypt("3cG1fKzqwNfJ\n", "uqTBOsWPrLM=\n"))) {
                    b = 9;
                } else {
                    b = -1;
                }
                break;
            case 449440345:
                if (str.equals(StringFog.decrypt("MBTdlr3ec+YmI8SSt8k=\n", "Umay99m9EpU=\n"))) {
                    b = 85;
                } else {
                    b = -1;
                }
                break;
            case 451302467:
                if (str.equals(StringFog.decrypt("roKCEe7Hmd+otJIp182GwKCImA==\n", "yef2QoGo9LM=\n"))) {
                    b = 74;
                } else {
                    b = -1;
                }
                break;
            case 468780064:
                if (str.equals(StringFog.decrypt("Adb0rgrdfd8d5+u3CNZU+QDH4awOzA==\n", "c7OEwmu+GJA=\n"))) {
                    b = 36;
                } else {
                    b = -1;
                }
                break;
            case 496987426:
                if (str.equals(StringFog.decrypt("6HvDD8DXkh7xeuQT/dy+Gw==\n", "mBSwe4+5338=\n"))) {
                    b = 99;
                } else {
                    b = -1;
                }
                break;
            case 502192375:
                if (str.equals(StringFog.decrypt("bsWsGl4qR7puxaAWUzJ2t2zT\n", "CaDYWzJGFd8=\n"))) {
                    b = Ascii.ESC;
                } else {
                    b = -1;
                }
                break;
            case 518569412:
                if (str.equals(StringFog.decrypt("pt6biShYVO+43qOVK2pD4LDJ\n", "1bvv/FgeJo4=\n"))) {
                    b = 32;
                } else {
                    b = -1;
                }
                break;
            case 526577620:
                if (str.equals(StringFog.decrypt("9UkOZdOaZx3zVw9AwpljAf9XD2HV\n", "ljtrBKf/IXQ=\n"))) {
                    b = Ascii.FF;
                } else {
                    b = -1;
                }
                break;
            case 600996866:
                if (str.equals(StringFog.decrypt("6oQ3+ZbGd1r8lgDCmsFPRw==\n", "meFDrvOkITM=\n"))) {
                    b = 55;
                } else {
                    b = -1;
                }
                break;
            case 618460119:
                if (str.equals(StringFog.decrypt("32EB/eewddbc\n", "uAR1sILEHbk=\n"))) {
                    b = Ascii.CR;
                } else {
                    b = -1;
                }
                break;
            case 622025239:
                if (str.equals(StringFog.decrypt("tvABfB6yCXOD8BhSDbIkaL/zHFo=\n", "0ZV1PXnXZwc=\n"))) {
                    b = 75;
                } else {
                    b = -1;
                }
                break;
            case 660677592:
                if (str.equals(StringFog.decrypt("J177IKascL0gRf8RvqhEvTZj8AK9pE20IVj3LryFVKswSfAkoA==\n", "RCyeQdLJPdg=\n"))) {
                    b = 42;
                } else {
                    b = -1;
                }
                break;
            case 672646709:
                if (str.equals(StringFog.decrypt("8BXtuIfH5pDj\n", "l3CZ9+Wtg/M=\n"))) {
                    b = Ascii.DC2;
                } else {
                    b = -1;
                }
                break;
            case 675563679:
                if (str.equals(StringFog.decrypt("X26crxpetGBReZuLNFWsQ1t/\n", "OAvo/3s3xiY=\n"))) {
                    b = 107;
                } else {
                    b = -1;
                }
                break;
            case 759503924:
                if (str.equals(StringFog.decrypt("EEBfS7k71BAcU15JrC3iMBZRX0O7O+Q=\n", "czI6Ks1elmI=\n"))) {
                    b = 51;
                } else {
                    b = -1;
                }
                break;
            case 776628755:
                if (str.equals(StringFog.decrypt("ZIl3Oe6c1ot4oWIx5p76qnCDSzz8i9aqc54=\n", "FuwHVY//s8Q=\n"))) {
                    b = 48;
                } else {
                    b = -1;
                }
                break;
            case 791624502:
                if (str.equals(StringFog.decrypt("Ya/R9o9GgyREuMrbhEaDO3KHxNSBQoc6T6TWzoFLgS0=\n", "BsqluuAl4kg=\n"))) {
                    b = 104;
                } else {
                    b = -1;
                }
                break;
            case 861400366:
                if (str.equals(StringFog.decrypt("FZx8Z9MkdkQCilhS1yRXVQOQcW8=\n", "cfkfCL5UBCE=\n"))) {
                    b = Ascii.RS;
                } else {
                    b = -1;
                }
                break;
            case 929957753:
                if (str.equals(StringFog.decrypt("+QloDfv75v7xAkgx9e37\n", "nmwcXp6IlZc=\n"))) {
                    b = 90;
                } else {
                    b = -1;
                }
                break;
            case 956170787:
                if (str.equals(StringFog.decrypt("5dZ7FPT1jBnw3GIm0vumFOzH\n", "grMPQ5GXz3E=\n"))) {
                    b = 58;
                } else {
                    b = -1;
                }
                break;
            case 1057201549:
                if (str.equals(StringFog.decrypt("D+m2fPPa+KwT+btH8uvDqg/5uVc=\n", "fZzYM52Zl8I=\n"))) {
                    b = 101;
                } else {
                    b = -1;
                }
                break;
            case 1076958445:
                if (str.equals(StringFog.decrypt("wvfXjcJ7Jzrb/9Wf2XE=\n", "tJKl/qsUSXk=\n"))) {
                    b = Ascii.EM;
                } else {
                    b = -1;
                }
                break;
            case 1107904233:
                if (str.equals(StringFog.decrypt("8S+OpGcBxfTePJKqZhDJ8vMzjKBfDfnu9zOOtw==\n", "kl3rxRNkipo=\n"))) {
                    b = 44;
                } else {
                    b = -1;
                }
                break;
            case 1125810632:
                if (str.equals(StringFog.decrypt("RDUXoQQSmmlEHgyrBgy5eFciAqcdGZJ0czURgQ4SiA==\n", "I1Bj4mt8/AA=\n"))) {
                    b = 84;
                } else {
                    b = -1;
                }
                break;
            case 1414080697:
                if (str.equals(StringFog.decrypt("eYMH5S6tFONIjxbTDIge7F+FB808kwX4\n", "HuZzpEr6cYE=\n"))) {
                    b = 4;
                } else {
                    b = -1;
                }
                break;
            case 1444942133:
                if (str.equals(StringFog.decrypt("Ym8PgTLBVV5AaR6BJcxJRGBpD6MuxXRXZFEDkzLBdFVz\n", "AR1q4EakGjA=\n"))) {
                    b = 45;
                } else {
                    b = -1;
                }
                break;
            case 1521072706:
                if (str.equals(StringFog.decrypt("aqOWk+I3jMxjsq655DGbx2i0rLH6IA==\n", "Dcbi0JdF/qk=\n"))) {
                    b = 82;
                } else {
                    b = -1;
                }
                break;
            case 1525623361:
                if (str.equals(StringFog.decrypt("yeCRQN6qI1jL0JVQ0rEvcsDIjGjSrw==\n", "roXlBLvcSjs=\n"))) {
                    b = 110;
                } else {
                    b = -1;
                }
                break;
            case 1546196954:
                if (str.equals(StringFog.decrypt("yy65hSEkfQXkMoiJKhFxDMYYlIstLnEG\n", "ol366k9CFGI=\n"))) {
                    b = 83;
                } else {
                    b = -1;
                }
                break;
            case 1557083836:
                if (str.equals(StringFog.decrypt("pEHdTHCmZL6iRPdDR69btKx/0V5wplyytQ==\n", "xzO4LQTDMtc=\n"))) {
                    b = 35;
                } else {
                    b = -1;
                }
                break;
            case 1590874683:
                if (str.equals(StringFog.decrypt("OKMbn2yfX2Y2qwq0YLpJcS2SALFxgQ==\n", "X8Zv2hTvOhQ=\n"))) {
                    b = 87;
                } else {
                    b = -1;
                }
                break;
            case 1622498214:
                if (str.equals(StringFog.decrypt("yX1hvLAmSmTPbHCcliRJesx5dpM=\n", "rhgV+NVFJRY=\n"))) {
                    b = 50;
                } else {
                    b = -1;
                }
                break;
            case 1626942661:
                if (str.equals(StringFog.decrypt("ux8nYudhn+69DjI=\n", "3HpTL4IV/qo=\n"))) {
                    b = 91;
                } else {
                    b = -1;
                }
                break;
            case 1664124883:
                if (str.equals(StringFog.decrypt("6SHos6zvMXnPIOy4j/kt\n", "ik6YyuacXhc=\n"))) {
                    b = 0;
                } else {
                    b = -1;
                }
                break;
            case 1746583808:
                if (str.equals(StringFog.decrypt("JDPsOhFp+U8sI/seJHPgfg==\n", "Q1aYdnAajRs=\n"))) {
                    b = 66;
                } else {
                    b = -1;
                }
                break;
            case 1751981113:
                if (str.equals(StringFog.decrypt("jZlvYhB2wUuAhWthCHY=\n", "7usKA2QTkz4=\n"))) {
                    b = 97;
                } else {
                    b = -1;
                }
                break;
            case 1777572999:
                if (str.equals(StringFog.decrypt("LVQSQNeQyRYpWipmyqfAES9D\n", "SjFmD7nTpX8=\n"))) {
                    b = 38;
                } else {
                    b = -1;
                }
                break;
            case 1825714001:
                if (str.equals(StringFog.decrypt("NZcQo3ymPr00sxynf48AqyKAG6d6\n", "VuV1wgjDadg=\n"))) {
                    b = 54;
                } else {
                    b = -1;
                }
                break;
            case 1876204439:
                if (str.equals(StringFog.decrypt("/Wn5ziKJ2PL8Y+D8BIfy/+B4\n", "jgyNmUfrm5o=\n"))) {
                    b = 56;
                } else {
                    b = -1;
                }
                break;
            case 1953253188:
                if (str.equals(StringFog.decrypt("ZXDnGw+LyHc=\n", "AhWTXWbupBM=\n"))) {
                    b = 8;
                } else {
                    b = -1;
                }
                break;
            case 1988391289:
                if (str.equals(StringFog.decrypt("GqeF2TE+fxcFtg==\n", "fcLxml5QC3I=\n"))) {
                    b = Utf8.REPLACEMENT_BYTE;
                } else {
                    b = -1;
                }
                break;
            case 1989757366:
                if (str.equals(StringFog.decrypt("u17ZXq5avpY=\n", "1zG+G9g/0OI=\n"))) {
                    b = 78;
                } else {
                    b = -1;
                }
                break;
            case 1992394620:
                if (str.equals(StringFog.decrypt("EZRNMkw44NkSgg==\n", "dvE5fylMiLY=\n"))) {
                    b = Ascii.SO;
                } else {
                    b = -1;
                }
                break;
            case 1993407379:
                if (str.equals(StringFog.decrypt("+NOi5B+Q24nww7XA\n", "n7bWqH7jr90=\n"))) {
                    b = 65;
                } else {
                    b = -1;
                }
                break;
            case 2034588468:
                if (str.equals(StringFog.decrypt("1oWzFxzLwQnDk64rFg==\n", "seDHRHigl2w=\n"))) {
                    b = 72;
                } else {
                    b = -1;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                this.f1564.getClass();
                C0882.m8745(arrayList);
                return null;
            case 1:
                this.f1564.getClass();
                return C0882.m8742(arrayList);
            case 2:
                this.f1564.getClass();
                return C0882.m8743(c1013);
            case 3:
                this.f1564.getClass();
                C0882.m8744(c1013, arrayList);
                return null;
            case 4:
                this.f1563.getClass();
                return C1771p0.m8415(arrayList);
            case 5:
                this.f1563.getClass();
                return Boolean.valueOf(C1771p0.m8412(arrayList));
            case 6:
                this.f1563.getClass();
                return C1771p0.m8413(arrayList);
            case 7:
                this.f1563.getClass();
                return C1771p0.m8414(arrayList);
            case 8:
                this.f1562.getClass();
                return C0517.m8565(arrayList);
            case 9:
                this.f1562.getClass();
                return C0517.m8563(arrayList);
            case 10:
                this.f1562.getClass();
                return C0517.m8562(arrayList);
            case 11:
                this.f1562.getClass();
                return C0517.m8561(arrayList);
            case 12:
                this.f1562.getClass();
                return C0517.m8564();
            case 13:
                this.f1561.getClass();
                return C0917.m8800(arrayList);
            case 14:
                this.f1561.getClass();
                return C0917.m8798(arrayList);
            case 15:
                this.f1561.getClass();
                return C0917.m8799();
            case 16:
                this.f1560.getClass();
                return C0445.m8541(arrayList);
            case 17:
                this.f1560.getClass();
                return C0445.m8545(arrayList);
            case 18:
                this.f1560.getClass();
                return C0445.m8540(arrayList);
            case 19:
                this.f1560.getClass();
                return C0445.m8539(arrayList);
            case 20:
                this.f1560.getClass();
                Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
                C1064 c1064 = (C1064) AbstractC0912.m8788(arrayList, 1, C1064.class);
                List listM8789 = AbstractC0912.m8789(arrayList, 2);
                if (c1064 != null) {
                    return C0705.m8630().f2438.m8557(objM8788, c1064.f3824.m8612(new C0475(c1064, c0704, c1013, listM8789), null, c1064.f3822, c1064.f3821));
                }
                return null;
            case 21:
                this.f1560.getClass();
                return C0445.m8543(c1013, c0704, arrayList);
            case 22:
                this.f1560.getClass();
                return C0445.m8546(c1013, c0704, arrayList);
            case 23:
                this.f1560.getClass();
                return C0445.m8542(c1013, c0704, arrayList);
            case 24:
                this.f1560.getClass();
                return C0445.m8544(arrayList);
            case 25:
                this.f1559.getClass();
                return Integer.valueOf(C0606.m8582(arrayList));
            case 26:
                this.f1559.getClass();
                return C0606.m8585(arrayList);
            case 27:
                this.f1559.getClass();
                return C0606.m8586(arrayList);
            case 28:
                this.f1559.getClass();
                return C0606.m8584(arrayList);
            case 29:
                this.f1559.getClass();
                return Boolean.valueOf(C0606.m8583(arrayList));
            case 30:
                this.f1559.getClass();
                return C0606.m8587(arrayList);
            case 31:
                this.f1558.getClass();
                return C1137.m8910(c1013, c0704, arrayList);
            case 32:
                this.f1558.getClass();
                C1137.m8895(arrayList);
                return null;
            case 33:
                this.f1558.getClass();
                C1137.m8904(arrayList);
                return null;
            case 34:
                this.f1558.getClass();
                C1137.m8903(arrayList);
                return null;
            case 35:
                return this.f1558.m8916(c1013, c0704, arrayList);
            case 36:
                this.f1558.getClass();
                C1137.m8898(arrayList);
                return null;
            case 37:
                return this.f1558.m8915(c1013, c0704, arrayList);
            case 38:
                this.f1558.getClass();
                return C1137.m8909(arrayList);
            case 39:
                this.f1558.getClass();
                return C1137.m8908(arrayList);
            case 40:
                return this.f1558.m8920(c1013, c0704, arrayList);
            case 41:
                return this.f1558.m8921(c1013, c0704, arrayList);
            case 42:
                return this.f1558.m8922(c1013, c0704, arrayList);
            case 43:
                return this.f1558.m8919(c1013, c0704, arrayList);
            case 44:
                return this.f1558.m8917(c1013, c0704, arrayList);
            case 45:
                return this.f1558.m8918(c1013, c0704, arrayList);
            case 46:
                this.f1558.getClass();
                C1137.m8899(arrayList);
                return null;
            case 47:
                this.f1558.getClass();
                C1137.m8900(arrayList);
                return null;
            case 48:
                this.f1558.getClass();
                C1137.m8901(arrayList);
                return null;
            case 49:
                this.f1558.getClass();
                C1137.m8902(arrayList);
                return null;
            case 50:
                this.f1558.getClass();
                return C1137.m8911(arrayList);
            case 51:
                return this.f1558.m8923(c1013, c0704, arrayList);
            case 52:
                return this.f1558.m8924(c1013, arrayList);
            case 53:
                this.f1558.getClass();
                return Boolean.valueOf(C1137.m8905(arrayList));
            case 54:
                this.f1558.getClass();
                return C1137.m8912(arrayList);
            case 55:
                this.f1558.getClass();
                C1137.m8896(arrayList);
                return null;
            case 56:
                this.f1558.getClass();
                C1137.m8897(arrayList);
                return null;
            case 57:
                this.f1558.getClass();
                return C1137.m8906(arrayList);
            case 58:
                this.f1558.getClass();
                return C1137.m8907(arrayList);
            case 59:
                this.f1557.getClass();
                C1075.m8882(c1013, arrayList);
                return null;
            case 60:
                this.f1556.getClass();
                C0710.m8655(c1013, arrayList);
                return null;
            case 61:
                this.f1556.getClass();
                C0710.m8654(c1013, c0704, arrayList);
                return null;
            case 62:
                this.f1556.getClass();
                return C0710.m8652(c1013);
            case 63:
                this.f1556.getClass();
                return C0710.m8646(c1013);
            case 64:
                this.f1556.getClass();
                return Long.valueOf(C0710.m8633());
            case 65:
                this.f1556.getClass();
                return C0710.m8637();
            case 66:
                this.f1556.getClass();
                return Long.valueOf(C0710.m8636());
            case 67:
                this.f1556.getClass();
                return C0710.m8639();
            case 68:
                this.f1556.getClass();
                return C0710.m8647();
            case 69:
                this.f1556.getClass();
                return C0710.m8653();
            case 70:
                this.f1556.getClass();
                return C0710.m8649();
            case 71:
                this.f1556.getClass();
                return C0710.m8644();
            case 72:
                this.f1556.getClass();
                return C0710.m8641(c1013);
            case 73:
                this.f1556.getClass();
                return C0710.m8642(c1013);
            case 74:
                this.f1556.getClass();
                return C0710.m8634();
            case 75:
                this.f1556.getClass();
                return C0710.m8643();
            case 76:
                this.f1556.getClass();
                return c1013.m8862();
            case 77:
                this.f1556.getClass();
                return C0710.m8650(c1013);
            case 78:
                this.f1556.getClass();
                C0710.m8648(arrayList);
                return null;
            case 79:
                this.f1556.getClass();
                return Boolean.valueOf(C0710.m8632());
            case 80:
                this.f1556.getClass();
                return C0710.m8651(arrayList);
            case 81:
                this.f1556.getClass();
                return C0710.m8645(c1013);
            case 82:
                this.f1556.getClass();
                return c1013.f3678.f2225.f2097;
            case 83:
                this.f1556.getClass();
                return Boolean.valueOf(AbstractC0895.m8747().mo8759());
            case 84:
                this.f1556.getClass();
                return Double.valueOf(C0710.m8640());
            case 85:
                this.f1556.getClass();
                C0710.m8656(arrayList);
                return null;
            case 86:
                this.f1556.getClass();
                return C0710.m8638();
            case 87:
                this.f1556.getClass();
                return ((C0896) AbstractC0895.m8747()).f3175.m8892();
            case 88:
                this.f1556.getClass();
                return ((C0896) AbstractC0895.m8747()).f3175.m8893();
            case 89:
                this.f1556.getClass();
                String str2 = (String) AbstractC0912.m8788(arrayList, 0, String.class);
                JSONObject jSONObjectM8893 = ((C0896) AbstractC0895.m8747()).f3175.m8893();
                if (jSONObjectM8893 == null) {
                    return null;
                }
                return jSONObjectM8893.opt(str2);
            case 90:
                this.f1556.getClass();
                return C0710.m8635();
            case 91:
                this.f1556.getClass();
                C0896 c0896 = (C0896) AbstractC0895.m8747();
                synchronized (c0896) {
                    jSONObject = c0896.f2592;
                }
                if (!jSONObject.optBoolean(c0896.f3190) || c0896.f3163 == null) {
                    return null;
                }
                return new HashMap(c0896.f3163.f360);
            case 92:
                this.f1556.getClass();
                return Boolean.valueOf(C0710.m8631());
            case 93:
                this.f1555.getClass();
                return C0914.m8797(c1013, arrayList);
            case 94:
                this.f1555.getClass();
                return Character.valueOf((char) ((Number) AbstractC0912.m8788(arrayList, 0, Number.class)).intValue());
            case 95:
                this.f1555.getClass();
                return Array.newInstance((Class<?>) AbstractC0912.m8788(arrayList, 0, Class.class), 0).getClass();
            case 96:
                this.f1555.getClass();
                return Boolean.valueOf(AbstractC0765.m8716(AbstractC0912.m8788(arrayList, 0, Object.class), (String) AbstractC0912.m8788(arrayList, 1, String.class), (List) AbstractC0912.m8788(arrayList, 2, List.class)) != null);
            case 97:
                this.f1554.getClass();
                return C1764m.m8376(c1013, c0704, arrayList);
            case 98:
                this.f1554.getClass();
                AbstractC1766n.m8384(C1764m.m8376(c1013, c0704, arrayList));
                return null;
            case 99:
                this.f1554.getClass();
                AbstractC1766n.m8386(C1764m.m8376(c1013, c0704, arrayList));
                return null;
            case 100:
                this.f1554.getClass();
                AbstractC1766n.m8387(C1764m.m8376(c1013, c0704, arrayList), C1764m.m8375(arrayList));
                return null;
            case 101:
                this.f1554.getClass();
                AbstractC1766n.m8385(C1764m.m8376(c1013, c0704, arrayList));
                return null;
            case 102:
                this.f1554.getClass();
                AbstractC1766n.m8388(C1764m.m8376(c1013, c0704, arrayList));
                return null;
            case 103:
                this.f1554.getClass();
                AbstractC1766n.m8389(C1764m.m8376(c1013, c0704, arrayList), C1764m.m8375(arrayList));
                return null;
            case 104:
                this.f1553.getClass();
                return AbstractC1055.m8873((Context) AbstractC0912.m8788(arrayList, 0, Context.class));
            case 105:
                this.f1553.getClass();
                Context context = (Context) AbstractC0912.m8788(arrayList, 0, Context.class);
                BroadcastReceiver broadcastReceiver = (BroadcastReceiver) AbstractC0912.m8788(arrayList, 1, BroadcastReceiver.class);
                IntentFilter intentFilter = (IntentFilter) AbstractC0912.m8788(arrayList, 2, IntentFilter.class);
                Object objM8873 = AbstractC1055.m8873(context);
                try {
                    AbstractC0765.m8716(objM8873, StringFog.decrypt("fOAuBuDUdY1c4CoK+tZ1jQ==\n", "DoVJb5OgEP8=\n"), Arrays.asList(broadcastReceiver, intentFilter)).invoke(objM8873, broadcastReceiver, intentFilter);
                    break;
                } catch (IllegalAccessException | InvocationTargetException unused) {
                }
                return null;
            case 106:
                this.f1553.getClass();
                Context context2 = (Context) AbstractC0912.m8788(arrayList, 0, Context.class);
                BroadcastReceiver broadcastReceiver2 = (BroadcastReceiver) AbstractC0912.m8788(arrayList, 1, BroadcastReceiver.class);
                Object objM8874 = AbstractC1055.m8873(context2);
                try {
                    AbstractC0765.m8716(objM8874, StringFog.decrypt("Rl9zBuc2N89WQ1MG4zotzVZD\n", "MzEBY4BfRLs=\n"), Arrays.asList(broadcastReceiver2)).invoke(objM8874, broadcastReceiver2);
                    break;
                } catch (IllegalAccessException | InvocationTargetException unused2) {
                }
                return null;
            case 107:
                this.f1553.getClass();
                return C0737.m8666(arrayList);
            case 108:
                this.f1553.getClass();
                return C0737.m8665(arrayList);
            case 109:
                this.f1553.getClass();
                VideoView videoView = (VideoView) AbstractC0912.m8788(arrayList, 0, VideoView.class);
                try {
                    Field fieldM8670 = AbstractC0738.m8670(VideoView.class, AbstractC0738.f2535);
                    if (fieldM8670 != null) {
                        return (MediaPlayer) fieldM8670.get(videoView);
                    }
                } catch (Exception e) {
                    AbstractC1104.m8887(AbstractC0738.f2546, StringFog.decrypt("/oVPEaYjsNW7kFgKmWa90vqnUR+tZqs=\n", "m/c9ftQD2bs=\n"), (Throwable) e, false);
                }
                return null;
            case 110:
                this.f1553.getClass();
                String str3 = AbstractC0202.f862;
                return Long.valueOf(SystemClock.elapsedRealtime());
            case 111:
                this.f1552.getClass();
                return C0943.m8818(c1013, arrayList);
            case 112:
                this.f1552.getClass();
                C0943.m8818(c1013, arrayList);
                return null;
            case 113:
                this.f1552.getClass();
                List list = (List) AbstractC0912.m8788(arrayList, 0, List.class);
                C0944 c0944 = (C0944) AbstractC0912.m8788(arrayList, 1, C0944.class);
                List arrayList2 = new ArrayList();
                if (arrayList.size() > 2) {
                    if (AbstractC0912.m8787(arrayList, 2, C1013.class)) {
                        c1013 = (C1013) AbstractC0912.m8788(arrayList, 2, C1013.class);
                        if (arrayList.size() > 3) {
                            arrayList2 = AbstractC0912.m8789(arrayList, 3);
                        }
                    } else {
                        arrayList2 = AbstractC0912.m8789(arrayList, 2);
                    }
                }
                ArrayList arrayList3 = new ArrayList();
                for (int i = 0; i < list.size(); i++) {
                    arrayList2.add(0, list.get(i));
                    if (c0944.m8821(c1013.f3677, c1013, arrayList2).m8737()) {
                        arrayList3.add(list.get(i));
                    }
                    arrayList2.remove(0);
                }
                return arrayList3;
            default:
                throw new C1742c0(c1013, c0704, f1551, str);
        }
    }
}
