package com.my.tracker.personalize;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class PersonalizeItemRequest extends PersonalizePlacementsRequest {

    public static final class Builder extends PersonalizePlacementsRequest.Builder<PersonalizeItemRequest> {
        Builder(String str) {
            super(str);
        }

        @Override // com.my.tracker.personalize.PersonalizePlacementsRequest.Builder
        public PersonalizeItemRequest build() {
            return new PersonalizeItemRequest(this.b, this.f5022a, this.d, this.c);
        }
    }

    PersonalizeItemRequest(List list, String str, boolean z, Map map) {
        super(list, str, z, map);
    }

    public static PersonalizePlacementsRequest.Builder<PersonalizeItemRequest> newBuilder(String str) {
        return new Builder(str);
    }

    @Override // com.my.tracker.personalize.PersonalizeRequest
    String a() {
        return "/item";
    }
}
