package com.pushwoosh.e0;

import androidx.exifinterface.media.ExifInterface;
import androidx.media3.exoplayer.upstream.CmcdData;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.unity3d.ads.core.data.datasource.AndroidDynamicDeviceInfoDataSource;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public abstract class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final HashMap f5067a = new HashMap();
    public static final String[] b = {"0", "1", "2", ExifInterface.GPS_MEASUREMENT_3D, "4", "5", "6", "7", "8", "9", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "b", "c", "d", "e", "f", "g", "h", CmcdData.OBJECT_TYPE_INIT_SEGMENT, "j", "k", CmcdData.STREAM_TYPE_LIVE, CmcdData.OBJECT_TYPE_MANIFEST, "n", "o", TtmlNode.TAG_P, "q", AndroidDynamicDeviceInfoDataSource.DIRECTORY_MODE_READ, "s", "t", "u", "v", "w", "x", "y", "z", ExifInterface.GPS_MEASUREMENT_IN_PROGRESS, "B", "C", "D", ExifInterface.LONGITUDE_EAST, "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", ExifInterface.LATITUDE_SOUTH, ExifInterface.GPS_DIRECTION_TRUE, "U", ExifInterface.GPS_MEASUREMENT_INTERRUPTED, ExifInterface.LONGITUDE_WEST, "X", "Y", "Z"};

    static {
        int i = 0;
        while (true) {
            String[] strArr = b;
            if (i >= strArr.length) {
                return;
            }
            f5067a.put(Character.valueOf(strArr[i].charAt(0)), Integer.valueOf(i));
            i++;
        }
    }

    public static long a(String str) {
        if (str == null || str.isEmpty()) {
            return 0L;
        }
        long jIntValue = 0;
        for (int i = 0; i < str.length(); i++) {
            Integer num = (Integer) f5067a.get(Character.valueOf(str.charAt(i)));
            if (num == null) {
                return 0L;
            }
            jIntValue = (jIntValue * 62) + ((long) num.intValue());
        }
        return jIntValue;
    }

    public static String[] b(String str) {
        if (str == null) {
            return new String[]{"0", "", "0"};
        }
        String[] strArrSplit = str.split("_");
        if (strArrSplit.length <= 3) {
            return new String[]{"0", "", "0"};
        }
        long jA = a(strArrSplit[1]);
        long jA2 = a(strArrSplit[2]);
        String strJoin = strArrSplit[3];
        String[] strArrSplit2 = strJoin.split("-");
        if (strArrSplit2.length != 1) {
            int i = 0;
            while (i < strArrSplit2.length) {
                String upperCase = Long.toHexString(a(strArrSplit2[i])).toUpperCase();
                boolean z = i == 0;
                int length = upperCase.length();
                int i2 = z ? 4 : 8;
                if (length < i2) {
                    StringBuilder sb = new StringBuilder();
                    for (int i3 = 0; i3 < i2 - length; i3++) {
                        sb.append("0");
                    }
                    upperCase = sb.toString() + upperCase;
                }
                strArrSplit2[i] = upperCase;
                i++;
            }
            strJoin = String.join("-", strArrSplit2);
        }
        return new String[]{String.valueOf(jA2), strJoin, String.valueOf(jA)};
    }
}
