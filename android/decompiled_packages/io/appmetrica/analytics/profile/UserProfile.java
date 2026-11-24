package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.impl.InterfaceC2156go;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class UserProfile {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List f6523a;

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final LinkedList f6524a;

        /* synthetic */ Builder(int i) {
            this();
        }

        public Builder apply(UserProfileUpdate<? extends InterfaceC2156go> userProfileUpdate) {
            this.f6524a.add(userProfileUpdate);
            return this;
        }

        public UserProfile build() {
            return new UserProfile(this.f6524a, 0);
        }

        private Builder() {
            this.f6524a = new LinkedList();
        }
    }

    /* synthetic */ UserProfile(LinkedList linkedList, int i) {
        this(linkedList);
    }

    public static Builder newBuilder() {
        return new Builder(0);
    }

    public List<UserProfileUpdate<? extends InterfaceC2156go>> getUserProfileUpdates() {
        return this.f6523a;
    }

    private UserProfile(LinkedList linkedList) {
        this.f6523a = CollectionUtils.unmodifiableListCopy(linkedList);
    }
}
