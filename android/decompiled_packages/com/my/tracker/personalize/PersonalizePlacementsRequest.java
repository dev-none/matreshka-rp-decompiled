package com.my.tracker.personalize;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class PersonalizePlacementsRequest extends PersonalizeRequest<List<PersonalizePlacement>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map f5021a = d();
    public final Map<String, String> customParams;
    public final List<String> placements;
    public final boolean reset;
    public final String userId;

    public static abstract class Builder<T extends PersonalizePlacementsRequest> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f5022a;
        List b;
        Map c;
        boolean d = true;

        Builder(String str) {
            this.f5022a = str;
        }

        public abstract T build();

        public Builder<T> withCustomParams(Map<String, String> map) {
            if (map != null) {
                this.c = new HashMap(map);
                return this;
            }
            this.c = null;
            return this;
        }

        public Builder<T> withPlacements(List<String> list) {
            if (list != null) {
                this.b = new ArrayList(list);
                return this;
            }
            this.b = null;
            return this;
        }

        public Builder<T> withReset(boolean z) {
            this.d = z;
            return this;
        }
    }

    PersonalizePlacementsRequest(List list, String str, boolean z, Map map) {
        this.placements = list;
        this.userId = str;
        this.reset = z;
        this.customParams = map;
    }

    private Map d() {
        HashMap map = new HashMap();
        Map<String, String> map2 = this.customParams;
        if (map2 != null && !map2.isEmpty()) {
            this.customParams.remove("custom_user_id");
            this.customParams.remove("placement_ids");
            this.customParams.remove("reset");
            this.customParams.remove("flat");
            for (Map.Entry<String, String> entry : this.customParams.entrySet()) {
                map.put(entry.getKey(), Collections.singletonList(entry.getValue()));
            }
        }
        List<String> list = this.placements;
        if (list != null && !list.isEmpty()) {
            map.put("placement_ids", this.placements);
        }
        if (!TextUtils.isEmpty(this.userId)) {
            map.put("custom_user_id", Collections.singletonList(this.userId));
        }
        map.put("reset", Collections.singletonList(this.reset ? "1" : "0"));
        map.put("flat", Collections.singletonList("1"));
        return map;
    }

    @Override // com.my.tracker.personalize.PersonalizeRequest
    final Map b() {
        return this.f5021a;
    }

    @Override // com.my.tracker.personalize.PersonalizeRequest
    final b c() {
        return new d();
    }
}
