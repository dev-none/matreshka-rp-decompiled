package com.vk.id.captcha.api.data;

import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKCaptchaResult.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\b6\u0018\u00002\u00020\u0001:\u0002\u0004\u0005B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0002\u0006\u0007"}, d2 = {"Lcom/vk/id/captcha/api/data/VKCaptchaResult;", "", "<init>", "()V", "Error", "Success", "Lcom/vk/id/captcha/api/data/VKCaptchaResult$Error;", "Lcom/vk/id/captcha/api/data/VKCaptchaResult$Success;"}, k = 1, mv = {1, 9, 0}, xi = 48)
public abstract class VKCaptchaResult {
    public /* synthetic */ VKCaptchaResult(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private VKCaptchaResult() {
    }

    /* JADX INFO: compiled from: VKCaptchaResult.kt */
    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\b\u0018\u00002\u00020\u0001B\u001b\b\u0000\u0012\u0006\u0010\u0007\u001a\u00020\u0002\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0002¢\u0006\u0004\b\t\u0010\nR\u001c\u0010\u0003\u001a\u0004\u0018\u00010\u00028\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006R\u001a\u0010\u0007\u001a\u00020\u00028\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\u0007\u0010\u0004\u001a\u0004\b\b\u0010\u0006"}, d2 = {"Lcom/vk/id/captcha/api/data/VKCaptchaResult$Success;", "Lcom/vk/id/captcha/api/data/VKCaptchaResult;", "", "domain", "Ljava/lang/String;", "getDomain", "()Ljava/lang/String;", "token", "getToken", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Success extends VKCaptchaResult {
        private final String domain;
        private final String token;

        public final String getToken() {
            return this.token;
        }

        public final String getDomain() {
            return this.domain;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Success(String str, String str2) {
            super(null);
            Intrinsics.checkNotNullParameter(str, "");
            this.token = str;
            this.domain = str2;
        }
    }

    /* JADX INFO: compiled from: VKCaptchaResult.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u00002\u00020\u0001B\u001b\b\u0000\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0002¢\u0006\u0004\b\f\u0010\rR\u001c\u0010\u0003\u001a\u0004\u0018\u00010\u00028\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006R\u001a\u0010\b\u001a\u00020\u00078\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\b\u0010\t\u001a\u0004\b\n\u0010\u000b"}, d2 = {"Lcom/vk/id/captcha/api/data/VKCaptchaResult$Error;", "Lcom/vk/id/captcha/api/data/VKCaptchaResult;", "", "domain", "Ljava/lang/String;", "getDomain", "()Ljava/lang/String;", "Lcom/vk/id/captcha/api/data/VKCaptchaError;", "error", "Lcom/vk/id/captcha/api/data/VKCaptchaError;", "getError", "()Lcom/vk/id/captcha/api/data/VKCaptchaError;", "<init>", "(Lcom/vk/id/captcha/api/data/VKCaptchaError;Ljava/lang/String;)V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Error extends VKCaptchaResult {
        private final String domain;
        private final VKCaptchaError error;

        public final VKCaptchaError getError() {
            return this.error;
        }

        public final String getDomain() {
            return this.domain;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Error(VKCaptchaError vKCaptchaError, String str) {
            super(null);
            Intrinsics.checkNotNullParameter(vKCaptchaError, "");
            this.error = vKCaptchaError;
            this.domain = str;
        }
    }
}
