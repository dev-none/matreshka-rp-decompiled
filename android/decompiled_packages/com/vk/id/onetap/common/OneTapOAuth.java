package com.vk.id.onetap.common;

import com.vk.id.OAuth;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapOAuth.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0081\u0002\u0018\u0000 \b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\bB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0006\u001a\u00020\u0007j\u0002\b\u0004j\u0002\b\u0005¨\u0006\t"}, d2 = {"Lcom/vk/id/onetap/common/OneTapOAuth;", "", "<init>", "(Ljava/lang/String;I)V", "MAIL", "OK", "toOAuth", "Lcom/vk/id/OAuth;", "Companion", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public enum OneTapOAuth {
    MAIL,
    OK;

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    /* JADX INFO: compiled from: OneTapOAuth.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[OneTapOAuth.values().length];
            try {
                iArr[OneTapOAuth.MAIL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OneTapOAuth.OK.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static EnumEntries<OneTapOAuth> getEntries() {
        return $ENTRIES;
    }

    public final OAuth toOAuth() {
        int i = WhenMappings.$EnumSwitchMapping$0[ordinal()];
        if (i == 1) {
            return OAuth.MAIL;
        }
        if (i != 2) {
            throw new NoWhenBranchMatchedException();
        }
        return OAuth.OK;
    }

    /* JADX INFO: compiled from: OneTapOAuth.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/common/OneTapOAuth$Companion;", "", "<init>", "()V", "fromOAuth", "Lcom/vk/id/onetap/common/OneTapOAuth;", "oAuth", "Lcom/vk/id/OAuth;", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {

        /* JADX INFO: compiled from: OneTapOAuth.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;

            static {
                int[] iArr = new int[OAuth.values().length];
                try {
                    iArr[OAuth.VK.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[OAuth.MAIL.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                try {
                    iArr[OAuth.OK.ordinal()] = 3;
                } catch (NoSuchFieldError unused3) {
                }
                $EnumSwitchMapping$0 = iArr;
            }
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final OneTapOAuth fromOAuth(OAuth oAuth) {
            Intrinsics.checkNotNullParameter(oAuth, "oAuth");
            int i = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
            if (i == 1) {
                return null;
            }
            if (i == 2) {
                return OneTapOAuth.MAIL;
            }
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            return OneTapOAuth.OK;
        }
    }
}
