package com.my.tracker.personalize;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class PersonalizeRankingRequest extends PersonalizePlacementsRequest {

    public static final class Builder extends PersonalizePlacementsRequest.Builder<PersonalizeRankingRequest> {
        Builder(String str) {
            super(str);
        }

        @Override // com.my.tracker.personalize.PersonalizePlacementsRequest.Builder
        public PersonalizeRankingRequest build() {
            return new PersonalizeRankingRequest(this.b, this.f5022a, this.d, this.c);
        }
    }

    PersonalizeRankingRequest(List list, String str, boolean z, Map map) {
        super(list, str, z, map);
    }

    public static PersonalizePlacementsRequest.Builder<PersonalizeRankingRequest> newBuilder(String str) {
        return new Builder(str);
    }

    @Override // com.my.tracker.personalize.PersonalizeRequest
    String a() {
        return "/ranking";
    }
}
