package com.my.target;

import android.text.TextUtils;
import android.util.Xml;
import androidx.core.app.NotificationCompat;
import androidx.media3.common.MimeTypes;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.my.target.common.models.AudioData;
import com.my.target.common.models.VideoData;
import com.my.tracker.ads.AdFormat;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import org.json.JSONException;
import org.json.JSONObject;
import org.xmlpull.v1.XmlPullParser;

/* JADX INFO: loaded from: classes6.dex */
public final class nb {
    public static final String[] l = {MimeTypes.VIDEO_MP4, "application/vnd.apple.mpegurl", "application/x-mpegurl"};
    public static final String[] m = {"AdVerifications", "linkTxt"};

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j f4752a;
    public final u b;
    public final ArrayList c = new ArrayList();
    public final ArrayList d = new ArrayList();
    public final ArrayList e = new ArrayList();
    public final ArrayList f = new ArrayList();
    public final ArrayList g = new ArrayList();
    public boolean h;
    public String i;
    public u j;
    public j8 k;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4753a;
        public c b;
        public String c;
        public String d;

        public a(String str) {
            this.f4753a = str;
        }

        public void a(String str) {
            if (TextUtils.isEmpty(str)) {
                nb.this.a(this.f4753a, "Bad value", "VAST adChoices declared but it's content is empty");
                return;
            }
            if (this.b != null) {
                nb.this.a(this.f4753a, "Json error", "VAST duplicate adChoices for creativeId = " + this.f4753a);
                return;
            }
            try {
                this.b = mb.a().a(new JSONObject(str));
                gb.a("VastParser: Parsed adChoices for creative (id = " + this.f4753a + ")");
            } catch (JSONException e) {
                nb.this.a(this.f4753a, "Json error", "VAST adChoices json error: " + e.getMessage());
                this.b = null;
            }
        }

        public void b(String str) {
            if (TextUtils.isEmpty(str)) {
                nb.this.a(this.f4753a, "Bad value", "VAST adDisclaimer declared but it's content is empty");
                return;
            }
            if (this.c == null) {
                this.c = str;
                return;
            }
            nb.this.a(this.f4753a, "Json error", "VAST duplicate adDisclaimer for creativeId = " + this.f4753a);
        }

        public void c(String str) {
            if (TextUtils.isEmpty(str)) {
                nb.this.a(this.f4753a, "Bad value", "VAST ageRestrictions declared but it's content is empty");
                return;
            }
            if (this.d == null) {
                this.d = str;
                return;
            }
            nb.this.a(this.f4753a, "Json error", "VAST duplicate ageRestrictions for creativeId = " + this.f4753a);
        }
    }

    public nb(j jVar, u uVar) {
        this.f4752a = jVar;
        this.b = uVar;
        this.k = uVar.v();
    }

    public static nb a(j jVar, u uVar) {
        return new nb(jVar, uVar);
    }

    public static int f(XmlPullParser xmlPullParser) {
        try {
            return xmlPullParser.getEventType();
        } catch (Throwable th) {
            gb.a("VastParser: Error - " + th.getMessage());
            return Integer.MIN_VALUE;
        }
    }

    public static int i(XmlPullParser xmlPullParser) {
        try {
            return xmlPullParser.next();
        } catch (Throwable th) {
            gb.a("VastParser: Error - " + th.getMessage());
            return Integer.MIN_VALUE;
        }
    }

    public static int j(XmlPullParser xmlPullParser) {
        try {
            return xmlPullParser.nextTag();
        } catch (Throwable th) {
            gb.a("VastParser: Error - " + th.getMessage());
            return Integer.MIN_VALUE;
        }
    }

    public static void l(XmlPullParser xmlPullParser) {
        if (f(xmlPullParser) != 2) {
            return;
        }
        int i = 1;
        while (i != 0) {
            int i2 = i(xmlPullParser);
            if (i2 == 2) {
                i++;
            } else if (i2 == 3) {
                i--;
            }
        }
    }

    public float b(String str) {
        long j;
        try {
            if (str.contains(".")) {
                int iIndexOf = str.indexOf(".");
                j = Long.parseLong(str.substring(iIndexOf + 1));
                if (j > 1000) {
                    return -1.0f;
                }
                str = str.substring(0, iIndexOf);
            } else {
                j = 0;
            }
            String[] strArrSplit = str.split(StringUtils.PROCESS_POSTFIX_DELIMITER, 3);
            long j2 = Integer.parseInt(strArrSplit[0]);
            long j3 = Integer.parseInt(strArrSplit[1]);
            long j4 = Integer.parseInt(strArrSplit[2]);
            if (j2 >= 24 || j3 >= 60 || j4 >= 60) {
                return -1.0f;
            }
            return (((j + (j4 * 1000)) + (j3 * 60000)) + (j2 * 3600000)) / 1000.0f;
        } catch (Throwable unused) {
            return -1.0f;
        }
    }

    public ArrayList c() {
        return this.g;
    }

    public u d() {
        return this.j;
    }

    public final void e(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("Extension".equals(xmlPullParser.getName())) {
                    d(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void g(XmlPullParser xmlPullParser) {
        String strK = k(xmlPullParser);
        if (TextUtils.isEmpty(strK)) {
            return;
        }
        this.c.add(ya.a("playbackStarted", strK));
        gb.a("VastParser: Impression tracker url for wrapper - " + strK);
    }

    public final void h(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("Impression".equals(name)) {
                    g(xmlPullParser);
                } else if ("Creatives".equals(name)) {
                    c(xmlPullParser);
                } else if ("Extensions".equals(name)) {
                    e(xmlPullParser);
                } else if ("AdVerifications".equals(name)) {
                    b(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
        b();
    }

    public final void m(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2 && "Ad".equals(xmlPullParser.getName())) {
                a(xmlPullParser);
            }
        }
    }

    public final void n(XmlPullParser xmlPullParser) {
        String strA = a("vendor", xmlPullParser);
        String strK = null;
        String strK2 = null;
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("JavaScriptResource".equals(name)) {
                    strK = k(xmlPullParser);
                } else if ("VerificationParameters".equals(name)) {
                    strK2 = k(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
        if (strK == null) {
            return;
        }
        if (this.k == null) {
            this.k = j8.a(null, null);
        }
        this.k.c.add((TextUtils.isEmpty(strA) || TextUtils.isEmpty(strK2)) ? ob.a(strK) : ob.a(strK, strA, strK2));
    }

    public static String a(String str, XmlPullParser xmlPullParser) {
        return xmlPullParser.getAttributeValue(null, str);
    }

    public static String k(XmlPullParser xmlPullParser) {
        String text;
        if (i(xmlPullParser) == 4) {
            text = xmlPullParser.getText();
            j(xmlPullParser);
        } else {
            gb.a("VastParser: No text - " + xmlPullParser.getName());
            text = "";
        }
        return text.trim();
    }

    public void c(String str) {
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        try {
            xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", false);
            xmlPullParserNewPullParser.setInput(new StringReader(str));
            a();
            for (int iF = f(xmlPullParserNewPullParser); iF != 1 && iF != Integer.MIN_VALUE; iF = i(xmlPullParserNewPullParser)) {
                if (iF == 2 && "VAST".equalsIgnoreCase(xmlPullParserNewPullParser.getName())) {
                    m(xmlPullParserNewPullParser);
                }
            }
        } catch (Throwable th) {
            gb.a("VastParser: Unable to parse VAST - " + th.getMessage());
        }
    }

    public final void d(XmlPullParser xmlPullParser) {
        String strA = a("type", xmlPullParser);
        if (strA == null || Arrays.binarySearch(m, strA) < 0) {
            l(xmlPullParser);
            return;
        }
        if (!"linkTxt".equals(strA)) {
            while (j(xmlPullParser) == 2) {
                if (f(xmlPullParser) == 2) {
                    if ("AdVerifications".equals(xmlPullParser.getName())) {
                        b(xmlPullParser);
                    } else {
                        l(xmlPullParser);
                    }
                }
            }
            return;
        }
        String strK = k(xmlPullParser);
        this.i = lb.a(strK);
        gb.a("VastParser: VAST linkTxt raw text: " + strK);
        l(xmlPullParser);
    }

    public static String a(String str) {
        return str.replaceAll("&amp;", "&").replaceAll("&lt;", "<").replaceAll("&gt;", ">").trim();
    }

    /* JADX WARN: Code duplicated, block: B:11:0x005d  */
    public void a(s5 s5Var, String str) {
        float fB;
        if (str == null) {
            fB = -1.0f;
        } else if (str.contains("%")) {
            int i = Integer.parseInt(str.substring(0, str.length() - 1));
            gb.a("VastParser: Linear skipoffset is " + str + " [%]");
            fB = (s5Var.o() / 100.0f) * ((float) i);
        } else if (str.contains(StringUtils.PROCESS_POSTFIX_DELIMITER)) {
            try {
                fB = b(str);
            } catch (Throwable unused) {
                a(s5Var.r(), "Bad value", "Failed to convert ISO time skipoffset string " + str);
                fB = -1.0f;
            }
        } else {
            fB = -1.0f;
        }
        if (fB > 0.0f) {
            s5Var.c(fB);
        }
    }

    public final void e(XmlPullParser xmlPullParser, s5 s5Var) {
        VideoData videoDataNewVideoData;
        int i;
        int i2;
        ArrayList arrayList = new ArrayList();
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("MediaFile".equals(xmlPullParser.getName())) {
                    String strA = a("type", xmlPullParser);
                    String strA2 = a("bitrate", xmlPullParser);
                    String strA3 = a("width", xmlPullParser);
                    String strA4 = a("height", xmlPullParser);
                    String strA5 = a(k(xmlPullParser));
                    if (!TextUtils.isEmpty(strA) && !TextUtils.isEmpty(strA5)) {
                        String[] strArr = l;
                        int length = strArr.length;
                        int i3 = 0;
                        int i4 = 0;
                        while (true) {
                            if (i4 < length) {
                                if (strArr[i4].equals(strA)) {
                                    if (strA3 != null) {
                                        try {
                                            i = Integer.parseInt(strA3);
                                        } catch (Throwable unused) {
                                            i = 0;
                                            i2 = 0;
                                        }
                                    } else {
                                        i = 0;
                                    }
                                    if (strA4 != null) {
                                        try {
                                            i2 = Integer.parseInt(strA4);
                                        } catch (Throwable unused2) {
                                            i2 = 0;
                                        }
                                    } else {
                                        i2 = 0;
                                    }
                                    if (strA2 != null) {
                                        try {
                                            i3 = Integer.parseInt(strA2);
                                        } catch (Throwable unused3) {
                                        }
                                    }
                                    if (i > 0 && i2 > 0) {
                                        videoDataNewVideoData = VideoData.newVideoData(strA5, i, i2);
                                        videoDataNewVideoData.setBitrate(i3);
                                        break;
                                    }
                                    break;
                                }
                                i4++;
                            }
                            videoDataNewVideoData = null;
                            break;
                        }
                    } else {
                        videoDataNewVideoData = null;
                        break;
                    }
                    if (videoDataNewVideoData == null) {
                        gb.a("VastParser: Skipping unsupported VAST file (mimeType=" + strA + ",width=" + strA3 + ",height=" + strA4 + ",url=" + strA5);
                    } else {
                        arrayList.add(videoDataNewVideoData);
                    }
                } else {
                    l(xmlPullParser);
                }
            }
        }
        s5Var.a(VideoData.chooseBest(arrayList, this.f4752a.j()));
    }

    public final void b() {
        for (int i = 0; i < this.g.size(); i++) {
            s5 s5Var = (s5) this.g.get(i);
            za zaVarX = s5Var.x();
            zaVarX.a(this.b.m(), s5Var.o());
            String strP = this.b.p();
            if (TextUtils.isEmpty(strP)) {
                strP = this.i;
            }
            s5Var.f(strP);
            ArrayList arrayList = this.e;
            int size = arrayList.size();
            int i2 = 0;
            while (i2 < size) {
                Object obj = arrayList.get(i2);
                i2++;
                w8 w8Var = (w8) obj;
                a(w8Var.d(), w8Var.b(), s5Var);
            }
            zaVarX.a((List) this.d);
            ArrayList arrayList2 = this.f;
            int size2 = arrayList2.size();
            int i3 = 0;
            while (i3 < size2) {
                Object obj2 = arrayList2.get(i3);
                i3++;
                s5Var.a((k1) obj2);
            }
            if (i == 0) {
                zaVarX.a((List) this.c);
            }
            s5Var.a(this.k);
        }
    }

    public void a(String str, String str2, String str3) {
        gb.b("VastParser: Error " + str2 + " with banner id " + str + " - " + str3);
    }

    public final void a() {
        ArrayList arrayListT = this.b.t();
        if (arrayListT != null) {
            this.c.addAll(arrayListT);
        }
        ArrayList arrayListO = this.b.o();
        if (arrayListO != null) {
            this.f.addAll(arrayListO);
        }
    }

    public final void c(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("Creative".equals(xmlPullParser.getName())) {
                    a(xmlPullParser, a("id", xmlPullParser));
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void d(XmlPullParser xmlPullParser, s5 s5Var) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("ClickThrough".equals(name)) {
                    if (s5Var != null) {
                        String strK = k(xmlPullParser);
                        if (!TextUtils.isEmpty(strK)) {
                            s5Var.q(a(strK));
                        }
                    }
                } else if ("ClickTracking".equals(name)) {
                    String strK2 = k(xmlPullParser);
                    if (!TextUtils.isEmpty(strK2)) {
                        this.d.add(ya.a("click", strK2));
                    }
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void a(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("Wrapper".equals(name)) {
                    this.h = true;
                    gb.a("VastParser: VAST file contains wrapped ad information");
                    int iB = this.b.B();
                    if (iB < 5) {
                        a(xmlPullParser, iB);
                    } else {
                        gb.a("VastParser: Got VAST wrapper, but max redirects limit exceeded");
                        l(xmlPullParser);
                    }
                } else if ("InLine".equals(name)) {
                    this.h = false;
                    gb.a("VastParser: VAST file contains inline ad information.");
                    h(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void b(XmlPullParser xmlPullParser, String str, String str2) {
        while (j(xmlPullParser) == 2) {
            a(xmlPullParser, str, str2);
        }
    }

    public final void c(XmlPullParser xmlPullParser, s5 s5Var) {
        if (!"instreamads".equals(this.f4752a.h()) && !"fullscreen".equals(this.f4752a.h()) && !AdFormat.REWARDED.equals(this.f4752a.h())) {
            if ("instreamaudioads".equals(this.f4752a.h())) {
                a(xmlPullParser, s5Var);
                return;
            }
            return;
        }
        e(xmlPullParser, s5Var);
    }

    public final void b(XmlPullParser xmlPullParser) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("Verification".equals(xmlPullParser.getName())) {
                    n(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final boolean b(XmlPullParser xmlPullParser, s5 s5Var) {
        float fB;
        try {
            fB = b(k(xmlPullParser));
        } catch (Throwable unused) {
            fB = 0.0f;
        }
        if (fB <= 0.0f) {
            return false;
        }
        s5Var.a(fB);
        return true;
    }

    public final void a(XmlPullParser xmlPullParser, int i) {
        String strK = null;
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("Impression".equals(name)) {
                    g(xmlPullParser);
                } else if ("Creatives".equals(name)) {
                    c(xmlPullParser);
                } else if ("Extensions".equals(name)) {
                    e(xmlPullParser);
                } else if ("VASTAdTagURI".equals(name)) {
                    strK = k(xmlPullParser);
                } else if ("AdVerifications".equals(name)) {
                    b(xmlPullParser);
                } else {
                    l(xmlPullParser);
                }
            }
        }
        if (strK != null) {
            String strP = this.b.p();
            u uVarB = u.b(strK);
            this.j = uVarB;
            uVarB.e(i + 1);
            this.j.c(this.c);
            this.j.a(this.k);
            u uVar = this.j;
            if (TextUtils.isEmpty(strP)) {
                strP = this.i;
            }
            uVar.d(strP);
            this.j.b(this.f);
            this.j.b(this.b.d());
            this.j.c(this.b.f());
            this.j.e(this.b.h());
            this.j.f(this.b.i());
            this.j.g(this.b.j());
            this.j.j(this.b.q());
            this.j.l(this.b.x());
            this.j.a(this.b.e());
            this.j.d(this.b.g());
            this.j.a(this.b.a());
            this.j.c(this.b.b());
            za zaVarM = this.j.m();
            zaVarM.a((List) this.d);
            zaVarM.a(this.e);
            zaVarM.a(this.b.m(), -1.0f);
            this.b.a(this.j);
            return;
        }
        gb.a("VastParser: Got VAST wrapper, but no vastAdTagUri");
    }

    public final void b(String str, String str2, b bVar) {
        if (bVar != null) {
            bVar.x().a(ya.a(str, str2));
        } else {
            this.d.add(ya.a(str, str2));
        }
    }

    public final void a(XmlPullParser xmlPullParser, a aVar) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("CreativeExtension".equals(xmlPullParser.getName())) {
                    a(xmlPullParser, a("type", xmlPullParser), aVar);
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void a(XmlPullParser xmlPullParser, String str, a aVar) {
        if ("adChoices".equals(str)) {
            gb.a("VastParser: Found adChoices for creative (id = " + aVar.f4753a + ")");
            aVar.a(a(k(xmlPullParser)));
            return;
        }
        if ("adDisclaimer".equals(str)) {
            gb.a("VastParser: Found adDisclaimer for creative (id = " + aVar.f4753a + ")");
            aVar.b(k(xmlPullParser));
            return;
        }
        if ("adAgeRestriction".equals(str)) {
            gb.a("VastParser: Found adAgeRestrictions for creative (id = " + aVar.f4753a + ")");
            aVar.c(k(xmlPullParser));
            return;
        }
        l(xmlPullParser);
    }

    public final void a(XmlPullParser xmlPullParser, String str) {
        final a aVar = new a(str);
        boolean z = false;
        int size = 0;
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                String name = xmlPullParser.getName();
                if ("CreativeExtensions".equals(name)) {
                    a(xmlPullParser, aVar);
                } else {
                    s5 s5VarM0 = null;
                    String str2 = null;
                    if ("Linear".equals(name)) {
                        if (!this.h) {
                            s5VarM0 = s5.m0();
                            s5VarM0.k(str != null ? str : "");
                        }
                        a(xmlPullParser, s5VarM0, a("skipoffset", xmlPullParser));
                        if (s5VarM0 != null) {
                            if (s5VarM0.o() > 0.0f) {
                                if (s5VarM0.k0() != null) {
                                    this.g.add(s5VarM0);
                                    z = true;
                                } else {
                                    a(s5VarM0.r(), "Required field", "VAST has no valid mediaData");
                                }
                            } else {
                                a(s5VarM0.r(), "Required field", "VAST has no valid Duration");
                            }
                        }
                    } else if (name != null && name.equals("CompanionAds")) {
                        String strA = a("required", xmlPullParser);
                        if (strA == null || TtmlNode.COMBINE_ALL.equals(strA) || "any".equals(strA) || "none".equals(strA)) {
                            str2 = strA;
                        } else {
                            a(str, "Bad value", "Wrong companion required attribute:" + strA);
                        }
                        int size2 = this.f.size();
                        b(xmlPullParser, str, str2);
                        size = this.f.size() - size2;
                        gb.a("VastParser: parsed " + size + " companion banners");
                    } else {
                        l(xmlPullParser);
                    }
                }
            }
        }
        a(z, size, new l1() { // from class: com.my.target.nb$$ExternalSyntheticLambda0
            @Override // com.my.target.l1
            public final void a(Object obj) {
                this.f$0.a(aVar, (b) obj);
            }
        });
    }

    public final void a(boolean z, int i, l1 l1Var) {
        if (z) {
            ArrayList arrayList = this.g;
            l1Var.a((s5) arrayList.get(arrayList.size() - 1));
        } else {
            for (int size = this.f.size() - i; size < this.f.size(); size++) {
                l1Var.a((k1) this.f.get(size));
            }
        }
    }

    public final void a(b bVar, a aVar) {
        c cVar = aVar.b;
        if (cVar != null) {
            bVar.a(cVar);
        }
        String str = aVar.c;
        if (str != null) {
            bVar.i(str);
        }
        String str2 = aVar.d;
        if (str2 != null) {
            bVar.b(str2);
        }
    }

    public final void a(XmlPullParser xmlPullParser, String str, String str2) {
        if (f(xmlPullParser) != 2) {
            return;
        }
        String name = xmlPullParser.getName();
        if (name != null && name.equals("Companion")) {
            String strA = a("width", xmlPullParser);
            String strA2 = a("height", xmlPullParser);
            String strA3 = a("id", xmlPullParser);
            k1 k1VarV = k1.V();
            if (strA3 == null) {
                strA3 = "";
            }
            k1VarV.k(strA3);
            try {
                k1VarV.d(Integer.parseInt(strA));
                k1VarV.b(Integer.parseInt(strA2));
            } catch (Throwable unused) {
                a(str, "Bad value", "Unable  to convert required companion attributes, width = " + strA + " height = " + strA2);
            }
            k1VarV.x(str2);
            String strA4 = a("assetWidth", xmlPullParser);
            String strA5 = a("assetHeight", xmlPullParser);
            try {
                if (!TextUtils.isEmpty(strA4)) {
                    k1VarV.f(Integer.parseInt(strA4));
                }
                if (!TextUtils.isEmpty(strA5)) {
                    k1VarV.e(Integer.parseInt(strA5));
                }
            } catch (Throwable th) {
                gb.a("VastParser: Wrong VAST asset dimensions - " + th.getMessage());
            }
            String strA6 = a("expandedWidth", xmlPullParser);
            String strA7 = a("expandedHeight", xmlPullParser);
            try {
                if (!TextUtils.isEmpty(strA6)) {
                    k1VarV.h(Integer.parseInt(strA6));
                }
                if (!TextUtils.isEmpty(strA7)) {
                    k1VarV.g(Integer.parseInt(strA7));
                }
            } catch (Throwable th2) {
                gb.a("VastParser: Wrong VAST expanded dimensions " + th2.getMessage());
            }
            k1VarV.t(a("adSlotID", xmlPullParser));
            k1VarV.u(a("apiFramework", xmlPullParser));
            this.f.add(k1VarV);
            while (j(xmlPullParser) == 2) {
                String name2 = xmlPullParser.getName();
                if ("StaticResource".equals(name2)) {
                    k1VarV.y(lb.a(k(xmlPullParser)));
                } else if ("HTMLResource".equals(name2)) {
                    k1VarV.v(lb.a(k(xmlPullParser)));
                } else if ("IFrameResource".equals(name2)) {
                    k1VarV.w(lb.a(k(xmlPullParser)));
                } else if ("CompanionClickThrough".equals(name2)) {
                    String strK = k(xmlPullParser);
                    if (!TextUtils.isEmpty(strK)) {
                        k1VarV.q(a(strK));
                    }
                } else if ("CompanionClickTracking".equals(name2)) {
                    String strK2 = k(xmlPullParser);
                    if (!TextUtils.isEmpty(strK2)) {
                        k1VarV.x().a(ya.a("click", strK2));
                    }
                } else if ("TrackingEvents".equals(name2)) {
                    a(xmlPullParser, (b) k1VarV, true);
                } else {
                    l(xmlPullParser);
                }
            }
            return;
        }
        l(xmlPullParser);
    }

    public final void a(XmlPullParser xmlPullParser, s5 s5Var) {
        AudioData audioDataNewAudioData;
        int i;
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("MediaFile".equals(xmlPullParser.getName())) {
                    String strA = a("type", xmlPullParser);
                    String strA2 = a("bitrate", xmlPullParser);
                    String strA3 = a(k(xmlPullParser));
                    if (TextUtils.isEmpty(strA) || TextUtils.isEmpty(strA3) || !strA.toLowerCase(Locale.ROOT).trim().startsWith("audio")) {
                        audioDataNewAudioData = null;
                    } else {
                        if (strA2 != null) {
                            try {
                                i = Integer.parseInt(strA2);
                            } catch (Throwable unused) {
                                i = 0;
                            }
                        } else {
                            i = 0;
                        }
                        audioDataNewAudioData = AudioData.newAudioData(strA3);
                        audioDataNewAudioData.setBitrate(i);
                    }
                    if (audioDataNewAudioData == null) {
                        gb.a("VastParser: Skipping unsupported VAST file (mimetype=" + strA + ",url=" + strA3);
                    } else {
                        s5Var.a(audioDataNewAudioData);
                    }
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void a(XmlPullParser xmlPullParser, b bVar, boolean z) {
        while (j(xmlPullParser) == 2) {
            if (f(xmlPullParser) == 2) {
                if ("Tracking".equals(xmlPullParser.getName())) {
                    String strA = a(NotificationCompat.CATEGORY_EVENT, xmlPullParser);
                    String strA2 = a("offset", xmlPullParser);
                    if (strA != null) {
                        if (NotificationCompat.CATEGORY_PROGRESS.equals(strA) && !TextUtils.isEmpty(strA2)) {
                            if (strA2.endsWith("%")) {
                                try {
                                    a(Integer.parseInt(strA2.replace("%", "")), k(xmlPullParser), bVar);
                                } catch (Throwable unused) {
                                    gb.a("VastParser: Unable to parse progress stat with value " + strA2);
                                }
                            } else {
                                a(strA2, k(xmlPullParser), bVar);
                            }
                        } else {
                            a(strA, k(xmlPullParser), bVar, z);
                        }
                    }
                    gb.a("VastParser: Added VAST tracking \"" + strA + "\"");
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }

    public final void a(String str, String str2, b bVar) {
        float fB;
        try {
            fB = b(str);
        } catch (Throwable unused) {
            fB = -1.0f;
        }
        if (fB >= 0.0f) {
            w8 w8VarA = w8.a(str2);
            w8VarA.b(fB);
            if (bVar != null) {
                bVar.x().a(w8VarA);
                return;
            } else {
                this.d.add(w8VarA);
                return;
            }
        }
        gb.a("VastParser: Unable to parse progress stat with value " + str);
    }

    public final void a(float f, String str, b bVar) {
        w8 w8VarA = w8.a(str);
        if (bVar != null && bVar.o() > 0.0f) {
            w8VarA.b(bVar.o() * (f / 100.0f));
            bVar.x().a(w8VarA);
        } else {
            w8VarA.a(f);
            this.e.add(w8VarA);
        }
    }

    public final void a(String str, String str2, b bVar, boolean z) {
        if (TtmlNode.START.equalsIgnoreCase(str)) {
            b(z ? "show" : "playbackStarted", str2, bVar);
            return;
        }
        if ("firstQuartile".equalsIgnoreCase(str)) {
            a(25.0f, str2, bVar);
            return;
        }
        if ("midpoint".equalsIgnoreCase(str)) {
            a(50.0f, str2, bVar);
            return;
        }
        if ("thirdQuartile".equalsIgnoreCase(str)) {
            a(75.0f, str2, bVar);
            return;
        }
        if ("complete".equalsIgnoreCase(str)) {
            a(100.0f, str2, bVar);
            return;
        }
        if ("creativeView".equalsIgnoreCase(str)) {
            b(z ? "show" : "playbackStarted", str2, bVar);
            return;
        }
        if ("mute".equalsIgnoreCase(str)) {
            b("volumeOff", str2, bVar);
            return;
        }
        if ("unmute".equalsIgnoreCase(str)) {
            b("volumeOn", str2, bVar);
            return;
        }
        if ("pause".equalsIgnoreCase(str)) {
            b("playbackPaused", str2, bVar);
            return;
        }
        if ("resume".equalsIgnoreCase(str)) {
            b("playbackResumed", str2, bVar);
            return;
        }
        if ("fullscreen".equalsIgnoreCase(str)) {
            b("fullscreenOn", str2, bVar);
            return;
        }
        if ("exitFullscreen".equalsIgnoreCase(str)) {
            b("fullscreenOff", str2, bVar);
            return;
        }
        if ("skip".equalsIgnoreCase(str)) {
            b("closedByUser", str2, bVar);
            return;
        }
        if ("error".equalsIgnoreCase(str)) {
            b("error", str2, bVar);
            return;
        }
        if ("ClickTracking".equalsIgnoreCase(str)) {
            b("click", str2, bVar);
        } else if ("close".equalsIgnoreCase(str)) {
            b("closedByUser", str2, bVar);
        } else if ("closeLinear".equalsIgnoreCase(str)) {
            b("closedByUser", str2, bVar);
        }
    }

    public final void a(XmlPullParser xmlPullParser, s5 s5Var, String str) {
        while (j(xmlPullParser) == 2) {
            String name = xmlPullParser.getName();
            if (f(xmlPullParser) == 2) {
                if ("Duration".equals(name)) {
                    if (s5Var == null) {
                        continue;
                    } else if (!b(xmlPullParser, s5Var)) {
                        return;
                    } else {
                        a(s5Var, str);
                    }
                } else if ("TrackingEvents".equals(name)) {
                    a(xmlPullParser, (b) s5Var, false);
                } else if ("MediaFiles".equals(name)) {
                    if (s5Var == null) {
                        continue;
                    } else {
                        c(xmlPullParser, s5Var);
                        if (s5Var.k0() == null) {
                            gb.a("VastParser: Unable to find valid mediafile!");
                            return;
                        }
                    }
                } else if ("VideoClicks".equals(name)) {
                    d(xmlPullParser, s5Var);
                } else {
                    l(xmlPullParser);
                }
            }
        }
    }
}
