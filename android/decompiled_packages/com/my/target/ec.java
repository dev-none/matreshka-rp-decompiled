package com.my.target;

import android.content.Context;
import android.graphics.Point;
import com.my.target.common.MyTargetConfig;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class ec extends c2 {
    public Map a(MyTargetConfig myTargetConfig, Context context) {
        HashMap map = new HashMap();
        Point pointB = kb.b(context);
        int i = pointB.x;
        int i2 = pointB.y;
        if (i != 0 && i2 != 0) {
            map.put("vpw", String.valueOf(i));
            map.put("vph", String.valueOf(i2));
        }
        return map;
    }
}
