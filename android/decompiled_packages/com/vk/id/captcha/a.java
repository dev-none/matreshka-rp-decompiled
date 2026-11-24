package com.vk.id.captcha;

import androidx.media3.exoplayer.upstream.CmcdData;
import com.vk.id.captcha.api.data.VKCaptchaError;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKCaptchaState.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\b0\u0018\u00002\u00020\u0001:\u0004\u0004\u0005\u0006\u0007B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0004\b\t\n\u000b"}, d2 = {"Lcom/vk/id/captcha/a;", "", "<init>", "()V", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "b", "c", "d", "Lcom/vk/id/captcha/a$a;", "Lcom/vk/id/captcha/a$b;", "Lcom/vk/id/captcha/a$c;", "Lcom/vk/id/captcha/a$d;"}, k = 1, mv = {1, 9, 0}, xi = 48)
public abstract class a {
    public /* synthetic */ a(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private a() {
    }

    /* JADX INFO: compiled from: VKCaptchaState.kt */
    public static final class d extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f5330a;
        private final String b;

        public final String a() {
            return this.f5330a;
        }

        public final String b() {
            return this.b;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public d(String str, String str2) {
            super(null);
            Intrinsics.checkNotNullParameter(str, "");
            this.f5330a = str;
            this.b = str2;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.captcha.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: VKCaptchaState.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003"}, d2 = {"Lcom/vk/id/captcha/a$a;", "Lcom/vk/id/captcha/a;", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class C1191a extends a {
        public static final C1191a INSTANCE = new C1191a();

        private C1191a() {
            super(null);
        }
    }

    /* JADX INFO: compiled from: VKCaptchaState.kt */
    public static final class b extends a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final VKCaptchaError f5329a;
        private final String b;

        public final VKCaptchaError a() {
            return this.f5329a;
        }

        public final String b() {
            return this.b;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public b(VKCaptchaError vKCaptchaError, String str) {
            super(null);
            Intrinsics.checkNotNullParameter(vKCaptchaError, "");
            this.f5329a = vKCaptchaError;
            this.b = str;
        }
    }

    /* JADX INFO: compiled from: VKCaptchaState.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003"}, d2 = {"Lcom/vk/id/captcha/a$c;", "Lcom/vk/id/captcha/a;", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class c extends a {
        public static final c INSTANCE = new c();

        private c() {
            super(null);
        }
    }
}
