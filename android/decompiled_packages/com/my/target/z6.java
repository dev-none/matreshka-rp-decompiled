package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.common.MyTargetConfig;
import com.my.tracker.MyTracker;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class z6 extends c2 {

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f4888a;

        static {
            String id;
            try {
                id = MyTracker.getTrackerConfig().getId();
                if (TextUtils.isEmpty(id)) {
                    gb.a("MyTrackerHelper: myTracker id is empty");
                    id = null;
                }
            } catch (Throwable th) {
                gb.a("MyTrackerHelper: Error occurred while working with myTracker, " + th.getMessage());
            }
            f4888a = id;
        }
    }

    public Map a(MyTargetConfig myTargetConfig, Context context) {
        HashMap map = new HashMap();
        String str = a.f4888a;
        if (str != null) {
            map.put("mtr_id", str);
        }
        return map;
    }
}
