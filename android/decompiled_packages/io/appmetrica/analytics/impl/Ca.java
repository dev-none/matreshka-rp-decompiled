package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public final class Ca extends K2 {
    public final C2620za b;
    public final C2620za c;
    public final Ba d;

    public Ca(int i, int i2, int i3) {
        this(i, new C2620za(i2), new C2620za(i3));
    }

    public Ca(int i, C2620za c2620za, C2620za c2620za2) {
        super(i);
        this.d = new Ba();
        this.b = c2620za;
        this.c = c2620za2;
    }

    @Override // io.appmetrica.analytics.impl.K2, io.appmetrica.analytics.impl.Aa
    public final On a(Map<String, String> map) {
        HashMap map2;
        int bytesTruncated;
        int i = 0;
        if (map != null) {
            map2 = new HashMap();
            Set<Map.Entry<String, String>> setEntrySet = map.entrySet();
            Map.Entry[] entryArr = (Map.Entry[]) setEntrySet.toArray(new Map.Entry[setEntrySet.size()]);
            Arrays.sort(entryArr, this.d);
            int length = entryArr.length;
            bytesTruncated = 0;
            int i2 = 0;
            boolean z = false;
            int i3 = 0;
            while (i < length) {
                Map.Entry entry = entryArr[i];
                On onA = this.b.a((String) entry.getKey());
                On onA2 = this.c.a((String) entry.getValue());
                int utf8BytesLength = StringUtils.getUtf8BytesLength((String) entry.getValue()) + StringUtils.getUtf8BytesLength((String) entry.getKey());
                int utf8BytesLength2 = StringUtils.getUtf8BytesLength((String) onA2.f5825a) + StringUtils.getUtf8BytesLength((String) onA.f5825a);
                if (z || utf8BytesLength2 + i3 > this.f5754a) {
                    i2++;
                    bytesTruncated += utf8BytesLength;
                    z = true;
                } else {
                    bytesTruncated = onA2.b.getBytesTruncated() + onA.b.getBytesTruncated() + bytesTruncated;
                    int utf8BytesLength3 = StringUtils.getUtf8BytesLength((String) onA2.f5825a) + StringUtils.getUtf8BytesLength((String) onA.f5825a) + i3;
                    map2.put((String) onA.f5825a, (String) onA2.f5825a);
                    i3 = utf8BytesLength3;
                }
                i++;
            }
            i = i2;
        } else {
            map2 = null;
            bytesTruncated = 0;
        }
        return new On(map2, new C2489u4(i, bytesTruncated));
    }
}
