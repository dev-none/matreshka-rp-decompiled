package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1764m extends AbstractC0912 {
    static {
        StringFog.decrypt("Ff8YbJS9RtMY4xxvjL0=\n", "do19DeDYFKY=\n");
        StringFog.decrypt("2CI+82DYGi3EAzjOa/Qf\n", "qldQvA6Ve0Q=\n");
        StringFog.decrypt("Xi8MMhm5blhHLisuJLJCXQ==\n", "LkB/RlbXIzk=\n");
        StringFog.decrypt("00qQsgcLG2/aQIeJLSMWZ81xi7QmDxM=\n", "oyXjxkNudw4=\n");
        StringFog.decrypt("O11WyBpdQLwnTVvzG2x7ujtNWeM=\n", "SSg4h3QeL9I=\n");
        StringFog.decrypt("TurQtn5Gv6ZQ68ahRUeOnVb3xqNV\n", "PoWjwjEo/Mk=\n");
        StringFog.decrypt("uxIv1ZLv48qyGDjuuMngxaUYP9W5+NvDuRg9xQ==\n", "y31codaKj6s=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static AbstractRunnableC0910 m8376(C1013 c1013, C0704 c0704, ArrayList arrayList) {
        if (AbstractC0912.m8787(arrayList, 0, AbstractRunnableC0910.class)) {
            return (AbstractRunnableC0910) AbstractC0912.m8788(arrayList, 0, AbstractRunnableC0910.class);
        }
        return new C1762l(arrayList.size() > 2 ? AbstractC0912.m8789(arrayList, 2) : AbstractC0912.m8789(arrayList, 1), (C0944) AbstractC0912.m8788(arrayList, 0, C0944.class), c0704, c1013);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static long m8375(ArrayList arrayList) {
        int iIntValue;
        if (arrayList.size() > 1 && AbstractC0912.m8787(arrayList, 1, Integer.class)) {
            iIntValue = ((Integer) AbstractC0912.m8788(arrayList, 1, Integer.class)).intValue();
        } else {
            if (arrayList.size() <= 2) {
                return 0L;
            }
            iIntValue = ((Integer) AbstractC0912.m8788(arrayList, 2, Integer.class)).intValue();
        }
        return iIntValue;
    }
}
